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
// source: google/cloud/aiplatform/v1/pipeline_service.proto

#include "google/cloud/aiplatform/v1/internal/pipeline_auth_decorator.h"
#include <google/cloud/aiplatform/v1/pipeline_service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

PipelineServiceAuth::PipelineServiceAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<PipelineServiceStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

StatusOr<google::cloud::aiplatform::v1::TrainingPipeline>
PipelineServiceAuth::CreateTrainingPipeline(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::CreateTrainingPipelineRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateTrainingPipeline(context, request);
}

StatusOr<google::cloud::aiplatform::v1::TrainingPipeline>
PipelineServiceAuth::GetTrainingPipeline(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::GetTrainingPipelineRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetTrainingPipeline(context, request);
}

StatusOr<google::cloud::aiplatform::v1::ListTrainingPipelinesResponse>
PipelineServiceAuth::ListTrainingPipelines(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::ListTrainingPipelinesRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListTrainingPipelines(context, request);
}

future<StatusOr<google::longrunning::Operation>>
PipelineServiceAuth::AsyncDeleteTrainingPipeline(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::aiplatform::v1::DeleteTrainingPipelineRequest const&
        request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteTrainingPipeline(cq, *std::move(context),
                                                  request);
      });
}

Status PipelineServiceAuth::CancelTrainingPipeline(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::CancelTrainingPipelineRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CancelTrainingPipeline(context, request);
}

StatusOr<google::cloud::aiplatform::v1::PipelineJob>
PipelineServiceAuth::CreatePipelineJob(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::CreatePipelineJobRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreatePipelineJob(context, request);
}

StatusOr<google::cloud::aiplatform::v1::PipelineJob>
PipelineServiceAuth::GetPipelineJob(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::GetPipelineJobRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetPipelineJob(context, request);
}

StatusOr<google::cloud::aiplatform::v1::ListPipelineJobsResponse>
PipelineServiceAuth::ListPipelineJobs(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::ListPipelineJobsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListPipelineJobs(context, request);
}

future<StatusOr<google::longrunning::Operation>>
PipelineServiceAuth::AsyncDeletePipelineJob(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::aiplatform::v1::DeletePipelineJobRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeletePipelineJob(cq, *std::move(context), request);
      });
}

Status PipelineServiceAuth::CancelPipelineJob(
    grpc::ClientContext& context,
    google::cloud::aiplatform::v1::CancelPipelineJobRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CancelPipelineJob(context, request);
}

future<StatusOr<google::longrunning::Operation>>
PipelineServiceAuth::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncGetOperation(cq, *std::move(context), request);
      });
}

future<Status> PipelineServiceAuth::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) return make_ready_future(std::move(context).status());
        return child->AsyncCancelOperation(cq, *std::move(context), request);
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google
