// Copyright 2019 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "google/cloud/bigtable/internal/async_bulk_apply.h"
#include "google/cloud/bigtable/internal/async_streaming_read.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

namespace google {
namespace cloud {
namespace bigtable_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

future<std::vector<bigtable::FailedMutation>> AsyncBulkApplier::Create(
    CompletionQueue cq, std::shared_ptr<BigtableStub> stub,
    std::unique_ptr<bigtable::DataRetryPolicy> retry_policy,
    std::unique_ptr<BackoffPolicy> backoff_policy,
    bigtable::IdempotentMutationPolicy& idempotent_policy,
    std::string const& app_profile_id, std::string const& table_name,
    bigtable::BulkMutation mut) {
  if (mut.empty()) {
    return make_ready_future(std::vector<bigtable::FailedMutation>{});
  }

  std::shared_ptr<AsyncBulkApplier> bulk_apply(new AsyncBulkApplier(
      std::move(cq), std::move(stub), std::move(retry_policy),
      std::move(backoff_policy), idempotent_policy, app_profile_id, table_name,
      std::move(mut)));
  bulk_apply->StartIteration();
  return bulk_apply->promise_.get_future();
}

AsyncBulkApplier::AsyncBulkApplier(
    CompletionQueue cq, std::shared_ptr<BigtableStub> stub,
    std::unique_ptr<bigtable::DataRetryPolicy> retry_policy,
    std::unique_ptr<BackoffPolicy> backoff_policy,
    bigtable::IdempotentMutationPolicy& idempotent_policy,
    std::string const& app_profile_id, std::string const& table_name,
    bigtable::BulkMutation mut)
    : cq_(std::move(cq)),
      stub_(std::move(stub)),
      retry_policy_(std::move(retry_policy)),
      backoff_policy_(std::move(backoff_policy)),
      state_(app_profile_id, table_name, idempotent_policy, std::move(mut)),
      promise_([this] { keep_reading_ = false; }) {}

void AsyncBulkApplier::StartIteration() {
  internal::ScopedCallContext scope(call_context_);
  auto context = std::make_shared<grpc::ClientContext>();
  internal::ConfigureContext(*context, internal::CurrentOptions());

  auto self = this->shared_from_this();
  PerformAsyncStreamingRead(
      stub_->AsyncMutateRows(cq_, std::move(context), state_.BeforeStart()),
      [self](google::bigtable::v2::MutateRowsResponse r) {
        self->OnRead(std::move(r));
        return make_ready_future(self->keep_reading_.load());
      },
      [self](Status const& s) { self->OnFinish(s); });
}

void AsyncBulkApplier::OnRead(
    google::bigtable::v2::MutateRowsResponse response) {
  state_.OnRead(std::move(response));
}

void AsyncBulkApplier::OnFinish(Status const& status) {
  state_.OnFinish(status);
  if (!state_.HasPendingMutations() || !retry_policy_->OnFailure(status)) {
    SetPromise();
    return;
  }

  auto self = this->shared_from_this();
  internal::TracedAsyncBackoff(cq_, backoff_policy_->OnCompletion())
      .then([self](auto result) {
        if (result.get()) {
          self->StartIteration();
        } else {
          self->SetPromise();
        }
      });
}

void AsyncBulkApplier::SetPromise() {
  promise_.set_value(std::move(state_).OnRetryDone());
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigtable_internal
}  // namespace cloud
}  // namespace google
