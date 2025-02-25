// Copyright 2022 Google LLC
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
// source: google/devtools/cloudbuild/v1/cloudbuild.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CLOUDBUILD_V1_MOCKS_MOCK_CLOUD_BUILD_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CLOUDBUILD_V1_MOCKS_MOCK_CLOUD_BUILD_CONNECTION_H

#include "google/cloud/cloudbuild/v1/cloud_build_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace cloudbuild_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `CloudBuildConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `CloudBuildClient`. To do so,
 * construct an object of type `CloudBuildClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockCloudBuildConnection : public cloudbuild_v1::CloudBuildConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(
      future<StatusOr<google::devtools::cloudbuild::v1::Build>>, CreateBuild,
      (google::devtools::cloudbuild::v1::CreateBuildRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::devtools::cloudbuild::v1::Build>, GetBuild,
      (google::devtools::cloudbuild::v1::GetBuildRequest const& request),
      (override));

  MOCK_METHOD(StreamRange<google::devtools::cloudbuild::v1::Build>, ListBuilds,
              (google::devtools::cloudbuild::v1::ListBuildsRequest request),
              (override));

  MOCK_METHOD(
      StatusOr<google::devtools::cloudbuild::v1::Build>, CancelBuild,
      (google::devtools::cloudbuild::v1::CancelBuildRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::devtools::cloudbuild::v1::Build>>, RetryBuild,
      (google::devtools::cloudbuild::v1::RetryBuildRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::devtools::cloudbuild::v1::Build>>, ApproveBuild,
      (google::devtools::cloudbuild::v1::ApproveBuildRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::devtools::cloudbuild::v1::BuildTrigger>,
      CreateBuildTrigger,
      (google::devtools::cloudbuild::v1::CreateBuildTriggerRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::devtools::cloudbuild::v1::BuildTrigger>, GetBuildTrigger,
      (google::devtools::cloudbuild::v1::GetBuildTriggerRequest const& request),
      (override));

  MOCK_METHOD(
      StreamRange<google::devtools::cloudbuild::v1::BuildTrigger>,
      ListBuildTriggers,
      (google::devtools::cloudbuild::v1::ListBuildTriggersRequest request),
      (override));

  MOCK_METHOD(
      Status, DeleteBuildTrigger,
      (google::devtools::cloudbuild::v1::DeleteBuildTriggerRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::devtools::cloudbuild::v1::BuildTrigger>,
      UpdateBuildTrigger,
      (google::devtools::cloudbuild::v1::UpdateBuildTriggerRequest const&
           request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::devtools::cloudbuild::v1::Build>>,
      RunBuildTrigger,
      (google::devtools::cloudbuild::v1::RunBuildTriggerRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::devtools::cloudbuild::v1::ReceiveTriggerWebhookResponse>,
      ReceiveTriggerWebhook,
      (google::devtools::cloudbuild::v1::ReceiveTriggerWebhookRequest const&
           request),
      (override));

  MOCK_METHOD(future<StatusOr<google::devtools::cloudbuild::v1::WorkerPool>>,
              CreateWorkerPool,
              (google::devtools::cloudbuild::v1::CreateWorkerPoolRequest const&
                   request),
              (override));

  MOCK_METHOD(
      StatusOr<google::devtools::cloudbuild::v1::WorkerPool>, GetWorkerPool,
      (google::devtools::cloudbuild::v1::GetWorkerPoolRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<
          google::devtools::cloudbuild::v1::DeleteWorkerPoolOperationMetadata>>,
      DeleteWorkerPool,
      (google::devtools::cloudbuild::v1::DeleteWorkerPoolRequest const&
           request),
      (override));

  MOCK_METHOD(future<StatusOr<google::devtools::cloudbuild::v1::WorkerPool>>,
              UpdateWorkerPool,
              (google::devtools::cloudbuild::v1::UpdateWorkerPoolRequest const&
                   request),
              (override));

  MOCK_METHOD(
      StreamRange<google::devtools::cloudbuild::v1::WorkerPool>,
      ListWorkerPools,
      (google::devtools::cloudbuild::v1::ListWorkerPoolsRequest request),
      (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace cloudbuild_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CLOUDBUILD_V1_MOCKS_MOCK_CLOUD_BUILD_CONNECTION_H
