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
// google/cloud/beyondcorp/appconnections/v1/app_connections_service.proto

#include "google/cloud/beyondcorp/internal/app_connections_auth_decorator.h"
#include <google/cloud/beyondcorp/appconnections/v1/app_connections_service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace beyondcorp_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AppConnectionsServiceAuth::AppConnectionsServiceAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<AppConnectionsServiceStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

StatusOr<
    google::cloud::beyondcorp::appconnections::v1::ListAppConnectionsResponse>
AppConnectionsServiceAuth::ListAppConnections(
    grpc::ClientContext& context,
    google::cloud::beyondcorp::appconnections::v1::
        ListAppConnectionsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListAppConnections(context, request);
}

StatusOr<google::cloud::beyondcorp::appconnections::v1::AppConnection>
AppConnectionsServiceAuth::GetAppConnection(
    grpc::ClientContext& context,
    google::cloud::beyondcorp::appconnections::v1::
        GetAppConnectionRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetAppConnection(context, request);
}

future<StatusOr<google::longrunning::Operation>>
AppConnectionsServiceAuth::AsyncCreateAppConnection(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::beyondcorp::appconnections::v1::
        CreateAppConnectionRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::unique_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreateAppConnection(cq, *std::move(context),
                                               request);
      });
}

future<StatusOr<google::longrunning::Operation>>
AppConnectionsServiceAuth::AsyncUpdateAppConnection(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::beyondcorp::appconnections::v1::
        UpdateAppConnectionRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::unique_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncUpdateAppConnection(cq, *std::move(context),
                                               request);
      });
}

future<StatusOr<google::longrunning::Operation>>
AppConnectionsServiceAuth::AsyncDeleteAppConnection(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::beyondcorp::appconnections::v1::
        DeleteAppConnectionRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::unique_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteAppConnection(cq, *std::move(context),
                                               request);
      });
}

StatusOr<google::cloud::beyondcorp::appconnections::v1::
             ResolveAppConnectionsResponse>
AppConnectionsServiceAuth::ResolveAppConnections(
    grpc::ClientContext& context,
    google::cloud::beyondcorp::appconnections::v1::
        ResolveAppConnectionsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ResolveAppConnections(context, request);
}

future<StatusOr<google::longrunning::Operation>>
AppConnectionsServiceAuth::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::unique_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncGetOperation(cq, *std::move(context), request);
      });
}

future<Status> AppConnectionsServiceAuth::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::unique_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) return make_ready_future(std::move(context).status());
        return child->AsyncCancelOperation(cq, *std::move(context), request);
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace beyondcorp_internal
}  // namespace cloud
}  // namespace google
