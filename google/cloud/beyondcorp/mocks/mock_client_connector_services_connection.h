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
// source:
// google/cloud/beyondcorp/clientconnectorservices/v1/client_connector_services_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BEYONDCORP_MOCKS_MOCK_CLIENT_CONNECTOR_SERVICES_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BEYONDCORP_MOCKS_MOCK_CLIENT_CONNECTOR_SERVICES_CONNECTION_H

#include "google/cloud/beyondcorp/client_connector_services_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace beyondcorp_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `ClientConnectorServicesServiceConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type
 * `ClientConnectorServicesServiceClient`. To do so, construct an object of type
 * `ClientConnectorServicesServiceClient` with an instance of this class. Then
 * use the Google Test framework functions to program the behavior of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with
 * GoogleTest. While the example showcases types from the BigQuery library, the
 * underlying principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @googleapis_dev_link{bigquery,bigquery-read-mock.html}
 */
class MockClientConnectorServicesServiceConnection
    : public beyondcorp::ClientConnectorServicesServiceConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(StreamRange<google::cloud::beyondcorp::clientconnectorservices::
                              v1::ClientConnectorService>,
              ListClientConnectorServices,
              (google::cloud::beyondcorp::clientconnectorservices::v1::
                   ListClientConnectorServicesRequest request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::beyondcorp::clientconnectorservices::v1::
                           ClientConnectorService>,
              GetClientConnectorService,
              (google::cloud::beyondcorp::clientconnectorservices::v1::
                   GetClientConnectorServiceRequest const& request),
              (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::beyondcorp::clientconnectorservices::v1::
                          ClientConnectorService>>,
      CreateClientConnectorService,
      (google::cloud::beyondcorp::clientconnectorservices::v1::
           CreateClientConnectorServiceRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::beyondcorp::clientconnectorservices::v1::
                          ClientConnectorService>>,
      UpdateClientConnectorService,
      (google::cloud::beyondcorp::clientconnectorservices::v1::
           UpdateClientConnectorServiceRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::beyondcorp::clientconnectorservices::v1::
                          ClientConnectorServiceOperationMetadata>>,
      DeleteClientConnectorService,
      (google::cloud::beyondcorp::clientconnectorservices::v1::
           DeleteClientConnectorServiceRequest const& request),
      (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace beyondcorp_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BEYONDCORP_MOCKS_MOCK_CLIENT_CONNECTOR_SERVICES_CONNECTION_H
