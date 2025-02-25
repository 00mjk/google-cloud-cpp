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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_V2_MINIMAL_INTERNAL_JOB_REST_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_V2_MINIMAL_INTERNAL_JOB_REST_CONNECTION_IMPL_H

#include "google/cloud/bigquery/v2/minimal/internal/job_connection.h"
#include "google/cloud/bigquery/v2/minimal/internal/job_idempotency_policy.h"
#include "google/cloud/bigquery/v2/minimal/internal/job_options.h"
#include "google/cloud/bigquery/v2/minimal/internal/job_rest_stub.h"
#include "google/cloud/bigquery/v2/minimal/internal/job_retry_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace bigquery_v2_minimal_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class BigQueryJobRestConnectionImpl : public BigQueryJobConnection {
 public:
  ~BigQueryJobRestConnectionImpl() override = default;

  BigQueryJobRestConnectionImpl(std::shared_ptr<BigQueryJobRestStub> stub,
                                Options options);

  Options options() override { return options_; }

  StatusOr<Job> GetJob(GetJobRequest const& request) override;
  StreamRange<ListFormatJob> ListJobs(ListJobsRequest const& request) override;
  StatusOr<Job> InsertJob(InsertJobRequest const& request) override;
  StatusOr<Job> CancelJob(CancelJobRequest const& request) override;
  StatusOr<QueryResults> Query(PostQueryRequest const& request) override;

 private:
  std::unique_ptr<BigQueryJobRetryPolicy> retry_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<BigQueryJobRetryPolicyOption>()) {
      return options.get<BigQueryJobRetryPolicyOption>()->clone();
    }
    return options_.get<BigQueryJobRetryPolicyOption>()->clone();
  }

  std::unique_ptr<BackoffPolicy> backoff_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<BigQueryJobBackoffPolicyOption>()) {
      return options.get<BigQueryJobBackoffPolicyOption>()->clone();
    }
    return options_.get<BigQueryJobBackoffPolicyOption>()->clone();
  }

  std::unique_ptr<BigQueryJobIdempotencyPolicy> idempotency_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<BigQueryJobIdempotencyPolicyOption>()) {
      return options.get<BigQueryJobIdempotencyPolicyOption>()->clone();
    }
    return options_.get<BigQueryJobIdempotencyPolicyOption>()->clone();
  }

  std::shared_ptr<BigQueryJobRestStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery_v2_minimal_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_V2_MINIMAL_INTERNAL_JOB_REST_CONNECTION_IMPL_H
