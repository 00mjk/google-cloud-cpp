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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_V2_MINIMAL_TESTING_MOCK_JOB_REST_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_V2_MINIMAL_TESTING_MOCK_JOB_REST_STUB_H

#include "google/cloud/bigquery/v2/minimal/internal/job_rest_stub.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace bigquery_v2_minimal_testing {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class MockBigQueryJobRestStub
    : public bigquery_v2_minimal_internal::BigQueryJobRestStub {
 public:
  MOCK_METHOD(StatusOr<bigquery_v2_minimal_internal::GetJobResponse>, GetJob,
              (rest_internal::RestContext & rest_context,
               bigquery_v2_minimal_internal::GetJobRequest const& request),
              (override));
  MOCK_METHOD(StatusOr<bigquery_v2_minimal_internal::ListJobsResponse>,
              ListJobs,
              (rest_internal::RestContext & rest_context,
               bigquery_v2_minimal_internal::ListJobsRequest const& request),
              (override));
  MOCK_METHOD(StatusOr<bigquery_v2_minimal_internal::InsertJobResponse>,
              InsertJob,
              (rest_internal::RestContext & rest_context,
               bigquery_v2_minimal_internal::InsertJobRequest const& request),
              (override));
  MOCK_METHOD(StatusOr<bigquery_v2_minimal_internal::CancelJobResponse>,
              CancelJob,
              (rest_internal::RestContext & rest_context,
               bigquery_v2_minimal_internal::CancelJobRequest const& request),
              (override));
  MOCK_METHOD(StatusOr<bigquery_v2_minimal_internal::QueryResponse>, Query,
              (rest_internal::RestContext & rest_context,
               bigquery_v2_minimal_internal::PostQueryRequest const& request),
              (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery_v2_minimal_testing
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_V2_MINIMAL_TESTING_MOCK_JOB_REST_STUB_H
