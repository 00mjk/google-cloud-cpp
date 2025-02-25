// Copyright 2023 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source:
// google/cloud/compute/global_forwarding_rules/v1/global_forwarding_rules.proto

#include "google/cloud/compute/global_forwarding_rules/v1/internal/global_forwarding_rules_rest_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/absl_str_join_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include "absl/strings/str_format.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_global_forwarding_rules_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

GlobalForwardingRulesRestMetadata::GlobalForwardingRulesRestMetadata(
    std::shared_ptr<GlobalForwardingRulesRestStub> child)
    : child_(std::move(child)),
      api_client_header_(
          google::cloud::internal::ApiClientHeader("generator")) {}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
GlobalForwardingRulesRestMetadata::AsyncDeleteGlobalForwardingRules(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::global_forwarding_rules::v1::
        DeleteGlobalForwardingRulesRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncDeleteGlobalForwardingRules(cq, std::move(rest_context),
                                                  request);
}

StatusOr<google::cloud::cpp::compute::v1::ForwardingRule>
GlobalForwardingRulesRestMetadata::GetGlobalForwardingRules(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::global_forwarding_rules::v1::
        GetGlobalForwardingRulesRequest const& request) {
  SetMetadata(rest_context);
  return child_->GetGlobalForwardingRules(rest_context, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
GlobalForwardingRulesRestMetadata::AsyncInsertGlobalForwardingRules(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::global_forwarding_rules::v1::
        InsertGlobalForwardingRulesRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncInsertGlobalForwardingRules(cq, std::move(rest_context),
                                                  request);
}

StatusOr<google::cloud::cpp::compute::v1::ForwardingRuleList>
GlobalForwardingRulesRestMetadata::ListGlobalForwardingRules(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::global_forwarding_rules::v1::
        ListGlobalForwardingRulesRequest const& request) {
  SetMetadata(rest_context);
  return child_->ListGlobalForwardingRules(rest_context, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
GlobalForwardingRulesRestMetadata::AsyncPatchGlobalForwardingRules(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::global_forwarding_rules::v1::
        PatchGlobalForwardingRulesRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncPatchGlobalForwardingRules(cq, std::move(rest_context),
                                                 request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
GlobalForwardingRulesRestMetadata::AsyncSetLabels(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::global_forwarding_rules::v1::
        SetLabelsRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncSetLabels(cq, std::move(rest_context), request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
GlobalForwardingRulesRestMetadata::AsyncSetTarget(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::global_forwarding_rules::v1::
        SetTargetRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncSetTarget(cq, std::move(rest_context), request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
GlobalForwardingRulesRestMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::global_operations::v1::
        GetGlobalOperationsRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncGetOperation(cq, std::move(rest_context), request);
}

future<Status> GlobalForwardingRulesRestMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::global_operations::v1::
        DeleteGlobalOperationsRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncCancelOperation(cq, std::move(rest_context), request);
}

void GlobalForwardingRulesRestMetadata::SetMetadata(
    rest_internal::RestContext& rest_context,
    std::vector<std::string> const& params) {
  rest_context.AddHeader("x-goog-api-client", api_client_header_);
  if (!params.empty()) {
    rest_context.AddHeader("x-goog-request-params", absl::StrJoin(params, "&"));
  }
  auto const& options = internal::CurrentOptions();
  if (options.has<UserProjectOption>()) {
    rest_context.AddHeader("x-goog-user-project",
                           options.get<UserProjectOption>());
  }
  if (options.has<google::cloud::QuotaUserOption>()) {
    rest_context.AddHeader("x-goog-quota-user",
                           options.get<google::cloud::QuotaUserOption>());
  }
  if (options.has<google::cloud::ServerTimeoutOption>()) {
    auto ms_rep = absl::StrCat(
        absl::Dec(options.get<google::cloud::ServerTimeoutOption>().count(),
                  absl::kZeroPad4));
    rest_context.AddHeader("x-server-timeout",
                           ms_rep.insert(ms_rep.size() - 3, "."));
  }
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_global_forwarding_rules_v1_internal
}  // namespace cloud
}  // namespace google
