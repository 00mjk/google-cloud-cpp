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
// source: google/cloud/aiplatform/v1/index_endpoint_service.proto

#include "google/cloud/aiplatform/v1/index_endpoint_connection.h"
#include "google/cloud/aiplatform/v1/index_endpoint_options.h"
#include "google/cloud/aiplatform/v1/internal/index_endpoint_connection_impl.h"
#include "google/cloud/aiplatform/v1/internal/index_endpoint_option_defaults.h"
#include "google/cloud/aiplatform/v1/internal/index_endpoint_stub_factory.h"
#include "google/cloud/aiplatform/v1/internal/index_endpoint_tracing_connection.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace aiplatform_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

IndexEndpointServiceConnection::~IndexEndpointServiceConnection() = default;

future<StatusOr<google::cloud::aiplatform::v1::IndexEndpoint>>
IndexEndpointServiceConnection::CreateIndexEndpoint(
    google::cloud::aiplatform::v1::CreateIndexEndpointRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::aiplatform::v1::IndexEndpoint>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::aiplatform::v1::IndexEndpoint>
IndexEndpointServiceConnection::GetIndexEndpoint(
    google::cloud::aiplatform::v1::GetIndexEndpointRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::aiplatform::v1::IndexEndpoint>
IndexEndpointServiceConnection::ListIndexEndpoints(
    google::cloud::aiplatform::v1::
        ListIndexEndpointsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::aiplatform::v1::IndexEndpoint>>();
}

StatusOr<google::cloud::aiplatform::v1::IndexEndpoint>
IndexEndpointServiceConnection::UpdateIndexEndpoint(
    google::cloud::aiplatform::v1::UpdateIndexEndpointRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
IndexEndpointServiceConnection::DeleteIndexEndpoint(
    google::cloud::aiplatform::v1::DeleteIndexEndpointRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::aiplatform::v1::DeployIndexResponse>>
IndexEndpointServiceConnection::DeployIndex(
    google::cloud::aiplatform::v1::DeployIndexRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::aiplatform::v1::DeployIndexResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::aiplatform::v1::UndeployIndexResponse>>
IndexEndpointServiceConnection::UndeployIndex(
    google::cloud::aiplatform::v1::UndeployIndexRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::aiplatform::v1::UndeployIndexResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::aiplatform::v1::MutateDeployedIndexResponse>>
IndexEndpointServiceConnection::MutateDeployedIndex(
    google::cloud::aiplatform::v1::MutateDeployedIndexRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::aiplatform::v1::MutateDeployedIndexResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

std::shared_ptr<IndexEndpointServiceConnection>
MakeIndexEndpointServiceConnection(std::string const& location,
                                   Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 IndexEndpointServicePolicyOptionList>(
      options, __func__);
  options = aiplatform_v1_internal::IndexEndpointServiceDefaultOptions(
      location, std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub = aiplatform_v1_internal::CreateDefaultIndexEndpointServiceStub(
      background->cq(), options);
  return aiplatform_v1_internal::MakeIndexEndpointServiceTracingConnection(
      std::make_shared<
          aiplatform_v1_internal::IndexEndpointServiceConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1
}  // namespace cloud
}  // namespace google
