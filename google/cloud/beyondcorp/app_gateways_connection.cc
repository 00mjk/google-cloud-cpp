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
// source: google/cloud/beyondcorp/appgateways/v1/app_gateways_service.proto

#include "google/cloud/beyondcorp/app_gateways_connection.h"
#include "google/cloud/beyondcorp/app_gateways_options.h"
#include "google/cloud/beyondcorp/internal/app_gateways_connection_impl.h"
#include "google/cloud/beyondcorp/internal/app_gateways_option_defaults.h"
#include "google/cloud/beyondcorp/internal/app_gateways_stub_factory.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace beyondcorp {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AppGatewaysServiceConnection::~AppGatewaysServiceConnection() = default;

StreamRange<google::cloud::beyondcorp::appgateways::v1::AppGateway>
AppGatewaysServiceConnection::ListAppGateways(
    google::cloud::beyondcorp::appgateways::v1::
        ListAppGatewaysRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::beyondcorp::appgateways::v1::AppGateway>>();
}

StatusOr<google::cloud::beyondcorp::appgateways::v1::AppGateway>
AppGatewaysServiceConnection::GetAppGateway(
    google::cloud::beyondcorp::appgateways::v1::GetAppGatewayRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::beyondcorp::appgateways::v1::AppGateway>>
AppGatewaysServiceConnection::CreateAppGateway(
    google::cloud::beyondcorp::appgateways::v1::
        CreateAppGatewayRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::beyondcorp::appgateways::v1::AppGateway>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<
    google::cloud::beyondcorp::appgateways::v1::AppGatewayOperationMetadata>>
AppGatewaysServiceConnection::DeleteAppGateway(
    google::cloud::beyondcorp::appgateways::v1::
        DeleteAppGatewayRequest const&) {
  return google::cloud::make_ready_future<StatusOr<
      google::cloud::beyondcorp::appgateways::v1::AppGatewayOperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

std::shared_ptr<AppGatewaysServiceConnection> MakeAppGatewaysServiceConnection(
    Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 AppGatewaysServicePolicyOptionList>(options,
                                                                     __func__);
  options =
      beyondcorp_internal::AppGatewaysServiceDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub = beyondcorp_internal::CreateDefaultAppGatewaysServiceStub(
      background->cq(), options);
  return std::make_shared<
      beyondcorp_internal::AppGatewaysServiceConnectionImpl>(
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

std::shared_ptr<beyondcorp::AppGatewaysServiceConnection>
MakeAppGatewaysServiceConnection(std::shared_ptr<AppGatewaysServiceStub> stub,
                                 Options options) {
  options = AppGatewaysServiceDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  return std::make_shared<
      beyondcorp_internal::AppGatewaysServiceConnectionImpl>(
      std::move(background), std::move(stub), std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace beyondcorp_internal
}  // namespace cloud
}  // namespace google
