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
// source: google/cloud/websecurityscanner/v1/web_security_scanner.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_WEBSECURITYSCANNER_V1_MOCKS_MOCK_WEB_SECURITY_SCANNER_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_WEBSECURITYSCANNER_V1_MOCKS_MOCK_WEB_SECURITY_SCANNER_CONNECTION_H

#include "google/cloud/websecurityscanner/v1/web_security_scanner_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace websecurityscanner_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `WebSecurityScannerConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `WebSecurityScannerClient`. To do
 * so, construct an object of type `WebSecurityScannerClient` with an instance
 * of this class. Then use the Google Test framework functions to program the
 * behavior of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockWebSecurityScannerConnection
    : public websecurityscanner_v1::WebSecurityScannerConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(
      StatusOr<google::cloud::websecurityscanner::v1::ScanConfig>,
      CreateScanConfig,
      (google::cloud::websecurityscanner::v1::CreateScanConfigRequest const&
           request),
      (override));

  MOCK_METHOD(
      Status, DeleteScanConfig,
      (google::cloud::websecurityscanner::v1::DeleteScanConfigRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::websecurityscanner::v1::ScanConfig>,
      GetScanConfig,
      (google::cloud::websecurityscanner::v1::GetScanConfigRequest const&
           request),
      (override));

  MOCK_METHOD(
      StreamRange<google::cloud::websecurityscanner::v1::ScanConfig>,
      ListScanConfigs,
      (google::cloud::websecurityscanner::v1::ListScanConfigsRequest request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::websecurityscanner::v1::ScanConfig>,
      UpdateScanConfig,
      (google::cloud::websecurityscanner::v1::UpdateScanConfigRequest const&
           request),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::websecurityscanner::v1::ScanRun>,
              StartScanRun,
              (google::cloud::websecurityscanner::v1::StartScanRunRequest const&
                   request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::websecurityscanner::v1::ScanRun>, GetScanRun,
      (google::cloud::websecurityscanner::v1::GetScanRunRequest const& request),
      (override));

  MOCK_METHOD(
      StreamRange<google::cloud::websecurityscanner::v1::ScanRun>, ListScanRuns,
      (google::cloud::websecurityscanner::v1::ListScanRunsRequest request),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::websecurityscanner::v1::ScanRun>,
              StopScanRun,
              (google::cloud::websecurityscanner::v1::StopScanRunRequest const&
                   request),
              (override));

  MOCK_METHOD(
      StreamRange<google::cloud::websecurityscanner::v1::CrawledUrl>,
      ListCrawledUrls,
      (google::cloud::websecurityscanner::v1::ListCrawledUrlsRequest request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::websecurityscanner::v1::Finding>, GetFinding,
      (google::cloud::websecurityscanner::v1::GetFindingRequest const& request),
      (override));

  MOCK_METHOD(
      StreamRange<google::cloud::websecurityscanner::v1::Finding>, ListFindings,
      (google::cloud::websecurityscanner::v1::ListFindingsRequest request),
      (override));

  MOCK_METHOD(
      StatusOr<
          google::cloud::websecurityscanner::v1::ListFindingTypeStatsResponse>,
      ListFindingTypeStats,
      (google::cloud::websecurityscanner::v1::ListFindingTypeStatsRequest const&
           request),
      (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace websecurityscanner_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_WEBSECURITYSCANNER_V1_MOCKS_MOCK_WEB_SECURITY_SCANNER_CONNECTION_H
