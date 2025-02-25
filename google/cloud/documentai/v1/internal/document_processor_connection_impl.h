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
// source: google/cloud/documentai/v1/document_processor_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DOCUMENTAI_V1_INTERNAL_DOCUMENT_PROCESSOR_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DOCUMENTAI_V1_INTERNAL_DOCUMENT_PROCESSOR_CONNECTION_IMPL_H

#include "google/cloud/documentai/v1/document_processor_connection.h"
#include "google/cloud/documentai/v1/document_processor_connection_idempotency_policy.h"
#include "google/cloud/documentai/v1/document_processor_options.h"
#include "google/cloud/documentai/v1/internal/document_processor_retry_traits.h"
#include "google/cloud/documentai/v1/internal/document_processor_stub.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace documentai_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class DocumentProcessorServiceConnectionImpl
    : public documentai_v1::DocumentProcessorServiceConnection {
 public:
  ~DocumentProcessorServiceConnectionImpl() override = default;

  DocumentProcessorServiceConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<documentai_v1_internal::DocumentProcessorServiceStub>
          stub,
      Options options);

  Options options() override { return options_; }

  StatusOr<google::cloud::documentai::v1::ProcessResponse> ProcessDocument(
      google::cloud::documentai::v1::ProcessRequest const& request) override;

  future<StatusOr<google::cloud::documentai::v1::BatchProcessResponse>>
  BatchProcessDocuments(
      google::cloud::documentai::v1::BatchProcessRequest const& request)
      override;

  StatusOr<google::cloud::documentai::v1::FetchProcessorTypesResponse>
  FetchProcessorTypes(
      google::cloud::documentai::v1::FetchProcessorTypesRequest const& request)
      override;

  StreamRange<google::cloud::documentai::v1::ProcessorType> ListProcessorTypes(
      google::cloud::documentai::v1::ListProcessorTypesRequest request)
      override;

  StatusOr<google::cloud::documentai::v1::ProcessorType> GetProcessorType(
      google::cloud::documentai::v1::GetProcessorTypeRequest const& request)
      override;

  StreamRange<google::cloud::documentai::v1::Processor> ListProcessors(
      google::cloud::documentai::v1::ListProcessorsRequest request) override;

  StatusOr<google::cloud::documentai::v1::Processor> GetProcessor(
      google::cloud::documentai::v1::GetProcessorRequest const& request)
      override;

  future<StatusOr<google::cloud::documentai::v1::TrainProcessorVersionResponse>>
  TrainProcessorVersion(
      google::cloud::documentai::v1::TrainProcessorVersionRequest const&
          request) override;

  StatusOr<google::cloud::documentai::v1::ProcessorVersion> GetProcessorVersion(
      google::cloud::documentai::v1::GetProcessorVersionRequest const& request)
      override;

  StreamRange<google::cloud::documentai::v1::ProcessorVersion>
  ListProcessorVersions(
      google::cloud::documentai::v1::ListProcessorVersionsRequest request)
      override;

  future<
      StatusOr<google::cloud::documentai::v1::DeleteProcessorVersionMetadata>>
  DeleteProcessorVersion(
      google::cloud::documentai::v1::DeleteProcessorVersionRequest const&
          request) override;

  future<
      StatusOr<google::cloud::documentai::v1::DeployProcessorVersionResponse>>
  DeployProcessorVersion(
      google::cloud::documentai::v1::DeployProcessorVersionRequest const&
          request) override;

  future<
      StatusOr<google::cloud::documentai::v1::UndeployProcessorVersionResponse>>
  UndeployProcessorVersion(
      google::cloud::documentai::v1::UndeployProcessorVersionRequest const&
          request) override;

  StatusOr<google::cloud::documentai::v1::Processor> CreateProcessor(
      google::cloud::documentai::v1::CreateProcessorRequest const& request)
      override;

  future<StatusOr<google::cloud::documentai::v1::DeleteProcessorMetadata>>
  DeleteProcessor(google::cloud::documentai::v1::DeleteProcessorRequest const&
                      request) override;

  future<StatusOr<google::cloud::documentai::v1::EnableProcessorResponse>>
  EnableProcessor(google::cloud::documentai::v1::EnableProcessorRequest const&
                      request) override;

  future<StatusOr<google::cloud::documentai::v1::DisableProcessorResponse>>
  DisableProcessor(google::cloud::documentai::v1::DisableProcessorRequest const&
                       request) override;

  future<StatusOr<
      google::cloud::documentai::v1::SetDefaultProcessorVersionResponse>>
  SetDefaultProcessorVersion(
      google::cloud::documentai::v1::SetDefaultProcessorVersionRequest const&
          request) override;

  future<StatusOr<google::cloud::documentai::v1::ReviewDocumentResponse>>
  ReviewDocument(google::cloud::documentai::v1::ReviewDocumentRequest const&
                     request) override;

  future<
      StatusOr<google::cloud::documentai::v1::EvaluateProcessorVersionResponse>>
  EvaluateProcessorVersion(
      google::cloud::documentai::v1::EvaluateProcessorVersionRequest const&
          request) override;

  StatusOr<google::cloud::documentai::v1::Evaluation> GetEvaluation(
      google::cloud::documentai::v1::GetEvaluationRequest const& request)
      override;

  StreamRange<google::cloud::documentai::v1::Evaluation> ListEvaluations(
      google::cloud::documentai::v1::ListEvaluationsRequest request) override;

 private:
  std::unique_ptr<documentai_v1::DocumentProcessorServiceRetryPolicy>
  retry_policy() {
    auto const& options = internal::CurrentOptions();
    if (options
            .has<documentai_v1::DocumentProcessorServiceRetryPolicyOption>()) {
      return options
          .get<documentai_v1::DocumentProcessorServiceRetryPolicyOption>()
          ->clone();
    }
    return options_
        .get<documentai_v1::DocumentProcessorServiceRetryPolicyOption>()
        ->clone();
  }

  std::unique_ptr<BackoffPolicy> backoff_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<
            documentai_v1::DocumentProcessorServiceBackoffPolicyOption>()) {
      return options
          .get<documentai_v1::DocumentProcessorServiceBackoffPolicyOption>()
          ->clone();
    }
    return options_
        .get<documentai_v1::DocumentProcessorServiceBackoffPolicyOption>()
        ->clone();
  }

  std::unique_ptr<
      documentai_v1::DocumentProcessorServiceConnectionIdempotencyPolicy>
  idempotency_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<
            documentai_v1::
                DocumentProcessorServiceConnectionIdempotencyPolicyOption>()) {
      return options
          .get<documentai_v1::
                   DocumentProcessorServiceConnectionIdempotencyPolicyOption>()
          ->clone();
    }
    return options_
        .get<documentai_v1::
                 DocumentProcessorServiceConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  std::unique_ptr<PollingPolicy> polling_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<
            documentai_v1::DocumentProcessorServicePollingPolicyOption>()) {
      return options
          .get<documentai_v1::DocumentProcessorServicePollingPolicyOption>()
          ->clone();
    }
    return options_
        .get<documentai_v1::DocumentProcessorServicePollingPolicyOption>()
        ->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<documentai_v1_internal::DocumentProcessorServiceStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace documentai_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DOCUMENTAI_V1_INTERNAL_DOCUMENT_PROCESSOR_CONNECTION_IMPL_H
