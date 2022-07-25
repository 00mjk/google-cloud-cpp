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
// google/cloud/beyondcorp/clientgateways/v1/client_gateways_service.proto

#include "google/cloud/beyondcorp/client_gateways_connection.h"
#include "google/cloud/beyondcorp/client_gateways_options.h"
#include "google/cloud/beyondcorp/internal/client_gateways_connection_impl.h"
#include "google/cloud/beyondcorp/internal/client_gateways_option_defaults.h"
#include "google/cloud/beyondcorp/internal/client_gateways_stub_factory.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace beyondcorp {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ClientGatewaysServiceConnection::~ClientGatewaysServiceConnection() = default;

StreamRange<google::cloud::beyondcorp::clientgateways::v1::ClientGateway>
ClientGatewaysServiceConnection::ListClientGateways(
    google::cloud::beyondcorp::clientgateways::v1::
        ListClientGatewaysRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<StreamRange<
      google::cloud::beyondcorp::clientgateways::v1::ClientGateway>>();
}

StatusOr<google::cloud::beyondcorp::clientgateways::v1::ClientGateway>
ClientGatewaysServiceConnection::GetClientGateway(
    google::cloud::beyondcorp::clientgateways::v1::
        GetClientGatewayRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::beyondcorp::clientgateways::v1::ClientGateway>>
ClientGatewaysServiceConnection::CreateClientGateway(
    google::cloud::beyondcorp::clientgateways::v1::
        CreateClientGatewayRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::beyondcorp::clientgateways::v1::ClientGateway>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::beyondcorp::clientgateways::v1::
                    ClientGatewayOperationMetadata>>
ClientGatewaysServiceConnection::DeleteClientGateway(
    google::cloud::beyondcorp::clientgateways::v1::
        DeleteClientGatewayRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::beyondcorp::clientgateways::v1::
                   ClientGatewayOperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

std::shared_ptr<ClientGatewaysServiceConnection>
MakeClientGatewaysServiceConnection(Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 ClientGatewaysServicePolicyOptionList>(
      options, __func__);
  options = beyondcorp_internal::ClientGatewaysServiceDefaultOptions(
      std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub = beyondcorp_internal::CreateDefaultClientGatewaysServiceStub(
      background->cq(), options);
  return std::make_shared<
      beyondcorp_internal::ClientGatewaysServiceConnectionImpl>(
      std::move(background), std::move(stub), std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace beyondcorp
}  // namespace cloud
}  // namespace google

namespace google {
namespace cloud {
namespace beyondcorp_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<beyondcorp::ClientGatewaysServiceConnection>
MakeClientGatewaysServiceConnection(
    std::shared_ptr<ClientGatewaysServiceStub> stub, Options options) {
  options = ClientGatewaysServiceDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  return std::make_shared<
      beyondcorp_internal::ClientGatewaysServiceConnectionImpl>(
      std::move(background), std::move(stub), std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace beyondcorp_internal
}  // namespace cloud
}  // namespace google
