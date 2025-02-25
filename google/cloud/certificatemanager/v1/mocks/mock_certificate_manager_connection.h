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
// source: google/cloud/certificatemanager/v1/certificate_manager.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CERTIFICATEMANAGER_V1_MOCKS_MOCK_CERTIFICATE_MANAGER_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CERTIFICATEMANAGER_V1_MOCKS_MOCK_CERTIFICATE_MANAGER_CONNECTION_H

#include "google/cloud/certificatemanager/v1/certificate_manager_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace certificatemanager_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `CertificateManagerConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `CertificateManagerClient`. To do
 * so, construct an object of type `CertificateManagerClient` with an instance
 * of this class. Then use the Google Test framework functions to program the
 * behavior of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockCertificateManagerConnection
    : public certificatemanager_v1::CertificateManagerConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(
      StreamRange<google::cloud::certificatemanager::v1::Certificate>,
      ListCertificates,
      (google::cloud::certificatemanager::v1::ListCertificatesRequest request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::certificatemanager::v1::Certificate>,
      GetCertificate,
      (google::cloud::certificatemanager::v1::GetCertificateRequest const&
           request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::certificatemanager::v1::Certificate>>,
      CreateCertificate,
      (google::cloud::certificatemanager::v1::CreateCertificateRequest const&
           request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::certificatemanager::v1::Certificate>>,
      UpdateCertificate,
      (google::cloud::certificatemanager::v1::UpdateCertificateRequest const&
           request),
      (override));

  MOCK_METHOD(
      future<
          StatusOr<google::cloud::certificatemanager::v1::OperationMetadata>>,
      DeleteCertificate,
      (google::cloud::certificatemanager::v1::DeleteCertificateRequest const&
           request),
      (override));

  MOCK_METHOD(
      StreamRange<google::cloud::certificatemanager::v1::CertificateMap>,
      ListCertificateMaps,
      (google::cloud::certificatemanager::v1::ListCertificateMapsRequest
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::certificatemanager::v1::CertificateMap>,
      GetCertificateMap,
      (google::cloud::certificatemanager::v1::GetCertificateMapRequest const&
           request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::certificatemanager::v1::CertificateMap>>,
      CreateCertificateMap,
      (google::cloud::certificatemanager::v1::CreateCertificateMapRequest const&
           request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::certificatemanager::v1::CertificateMap>>,
      UpdateCertificateMap,
      (google::cloud::certificatemanager::v1::UpdateCertificateMapRequest const&
           request),
      (override));

  MOCK_METHOD(
      future<
          StatusOr<google::cloud::certificatemanager::v1::OperationMetadata>>,
      DeleteCertificateMap,
      (google::cloud::certificatemanager::v1::DeleteCertificateMapRequest const&
           request),
      (override));

  MOCK_METHOD(
      StreamRange<google::cloud::certificatemanager::v1::CertificateMapEntry>,
      ListCertificateMapEntries,
      (google::cloud::certificatemanager::v1::ListCertificateMapEntriesRequest
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::certificatemanager::v1::CertificateMapEntry>,
      GetCertificateMapEntry,
      (google::cloud::certificatemanager::v1::
           GetCertificateMapEntryRequest const& request),
      (override));

  MOCK_METHOD(
      future<
          StatusOr<google::cloud::certificatemanager::v1::CertificateMapEntry>>,
      CreateCertificateMapEntry,
      (google::cloud::certificatemanager::v1::
           CreateCertificateMapEntryRequest const& request),
      (override));

  MOCK_METHOD(
      future<
          StatusOr<google::cloud::certificatemanager::v1::CertificateMapEntry>>,
      UpdateCertificateMapEntry,
      (google::cloud::certificatemanager::v1::
           UpdateCertificateMapEntryRequest const& request),
      (override));

  MOCK_METHOD(
      future<
          StatusOr<google::cloud::certificatemanager::v1::OperationMetadata>>,
      DeleteCertificateMapEntry,
      (google::cloud::certificatemanager::v1::
           DeleteCertificateMapEntryRequest const& request),
      (override));

  MOCK_METHOD(
      StreamRange<google::cloud::certificatemanager::v1::DnsAuthorization>,
      ListDnsAuthorizations,
      (google::cloud::certificatemanager::v1::ListDnsAuthorizationsRequest
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::certificatemanager::v1::DnsAuthorization>,
      GetDnsAuthorization,
      (google::cloud::certificatemanager::v1::GetDnsAuthorizationRequest const&
           request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::certificatemanager::v1::DnsAuthorization>>,
      CreateDnsAuthorization,
      (google::cloud::certificatemanager::v1::
           CreateDnsAuthorizationRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::certificatemanager::v1::DnsAuthorization>>,
      UpdateDnsAuthorization,
      (google::cloud::certificatemanager::v1::
           UpdateDnsAuthorizationRequest const& request),
      (override));

  MOCK_METHOD(
      future<
          StatusOr<google::cloud::certificatemanager::v1::OperationMetadata>>,
      DeleteDnsAuthorization,
      (google::cloud::certificatemanager::v1::
           DeleteDnsAuthorizationRequest const& request),
      (override));

  MOCK_METHOD(
      StreamRange<
          google::cloud::certificatemanager::v1::CertificateIssuanceConfig>,
      ListCertificateIssuanceConfigs,
      (google::cloud::certificatemanager::v1::
           ListCertificateIssuanceConfigsRequest request),
      (override));

  MOCK_METHOD(
      StatusOr<
          google::cloud::certificatemanager::v1::CertificateIssuanceConfig>,
      GetCertificateIssuanceConfig,
      (google::cloud::certificatemanager::v1::
           GetCertificateIssuanceConfigRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<
          google::cloud::certificatemanager::v1::CertificateIssuanceConfig>>,
      CreateCertificateIssuanceConfig,
      (google::cloud::certificatemanager::v1::
           CreateCertificateIssuanceConfigRequest const& request),
      (override));

  MOCK_METHOD(
      future<
          StatusOr<google::cloud::certificatemanager::v1::OperationMetadata>>,
      DeleteCertificateIssuanceConfig,
      (google::cloud::certificatemanager::v1::
           DeleteCertificateIssuanceConfigRequest const& request),
      (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace certificatemanager_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CERTIFICATEMANAGER_V1_MOCKS_MOCK_CERTIFICATE_MANAGER_CONNECTION_H
