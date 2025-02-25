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
// source: google/cloud/compute/disk_types/v1/disk_types.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_DISK_TYPES_V1_MOCKS_MOCK_DISK_TYPES_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_DISK_TYPES_V1_MOCKS_MOCK_DISK_TYPES_CONNECTION_H

#include "google/cloud/compute/disk_types/v1/disk_types_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace compute_disk_types_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `DiskTypesConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `DiskTypesClient`. To do so,
 * construct an object of type `DiskTypesClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockDiskTypesConnection
    : public compute_disk_types_v1::DiskTypesConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::DiskTypeAggregatedList>,
              AggregatedListDiskTypes,
              (google::cloud::cpp::compute::disk_types::v1::
                   AggregatedListDiskTypesRequest const& request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::cpp::compute::v1::DiskType>, GetDiskTypes,
      (google::cloud::cpp::compute::disk_types::v1::GetDiskTypesRequest const&
           request),
      (override));

  MOCK_METHOD(StreamRange<google::cloud::cpp::compute::v1::DiskType>,
              ListDiskTypes,
              (google::cloud::cpp::compute::disk_types::v1::ListDiskTypesRequest
                   request),
              (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_disk_types_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_DISK_TYPES_V1_MOCKS_MOCK_DISK_TYPES_CONNECTION_H
