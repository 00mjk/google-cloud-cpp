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
// source: google/cloud/compute/disks/v1/disks.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_DISKS_V1_MOCKS_MOCK_DISKS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_DISKS_V1_MOCKS_MOCK_DISKS_CONNECTION_H

#include "google/cloud/compute/disks/v1/disks_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace compute_disks_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `DisksConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `DisksClient`. To do so,
 * construct an object of type `DisksClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockDisksConnection : public compute_disks_v1::DisksConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
      AddResourcePolicies,
      (google::cloud::cpp::compute::disks::v1::AddResourcePoliciesRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::cpp::compute::v1::DiskAggregatedList>,
      AggregatedListDisks,
      (google::cloud::cpp::compute::disks::v1::AggregatedListDisksRequest const&
           request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
      CreateSnapshot,
      (google::cloud::cpp::compute::disks::v1::CreateSnapshotRequest const&
           request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              DeleteDisks,
              (google::cloud::cpp::compute::disks::v1::DeleteDisksRequest const&
                   request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::cpp::compute::v1::Disk>, GetDisks,
      (google::cloud::cpp::compute::disks::v1::GetDisksRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::cpp::compute::v1::Policy>, GetIamPolicy,
      (google::cloud::cpp::compute::disks::v1::GetIamPolicyRequest const&
           request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              InsertDisks,
              (google::cloud::cpp::compute::disks::v1::InsertDisksRequest const&
                   request),
              (override));

  MOCK_METHOD(
      StreamRange<google::cloud::cpp::compute::v1::Disk>, ListDisks,
      (google::cloud::cpp::compute::disks::v1::ListDisksRequest request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              RemoveResourcePolicies,
              (google::cloud::cpp::compute::disks::v1::
                   RemoveResourcePoliciesRequest const& request),
              (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::cpp::compute::v1::Operation>>, Resize,
      (google::cloud::cpp::compute::disks::v1::ResizeRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::cpp::compute::v1::Policy>, SetIamPolicy,
      (google::cloud::cpp::compute::disks::v1::SetIamPolicyRequest const&
           request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::cpp::compute::v1::Operation>>, SetLabels,
      (google::cloud::cpp::compute::disks::v1::SetLabelsRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>,
      TestIamPermissions,
      (google::cloud::cpp::compute::disks::v1::TestIamPermissionsRequest const&
           request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              UpdateDisks,
              (google::cloud::cpp::compute::disks::v1::UpdateDisksRequest const&
                   request),
              (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_disks_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_DISKS_V1_MOCKS_MOCK_DISKS_CONNECTION_H
