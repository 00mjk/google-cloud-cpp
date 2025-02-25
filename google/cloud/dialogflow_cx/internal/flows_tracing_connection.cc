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
// source: google/cloud/dialogflow/cx/v3/flow.proto

#include "google/cloud/dialogflow_cx/internal/flows_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_cx_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

FlowsTracingConnection::FlowsTracingConnection(
    std::shared_ptr<dialogflow_cx::FlowsConnection> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::dialogflow::cx::v3::Flow>
FlowsTracingConnection::CreateFlow(
    google::cloud::dialogflow::cx::v3::CreateFlowRequest const& request) {
  auto span = internal::MakeSpan("dialogflow_cx::FlowsConnection::CreateFlow");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateFlow(request));
}

Status FlowsTracingConnection::DeleteFlow(
    google::cloud::dialogflow::cx::v3::DeleteFlowRequest const& request) {
  auto span = internal::MakeSpan("dialogflow_cx::FlowsConnection::DeleteFlow");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteFlow(request));
}

StreamRange<google::cloud::dialogflow::cx::v3::Flow>
FlowsTracingConnection::ListFlows(
    google::cloud::dialogflow::cx::v3::ListFlowsRequest request) {
  auto span = internal::MakeSpan("dialogflow_cx::FlowsConnection::ListFlows");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListFlows(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::dialogflow::cx::v3::Flow>(std::move(span), std::move(sr));
}

StatusOr<google::cloud::dialogflow::cx::v3::Flow>
FlowsTracingConnection::GetFlow(
    google::cloud::dialogflow::cx::v3::GetFlowRequest const& request) {
  auto span = internal::MakeSpan("dialogflow_cx::FlowsConnection::GetFlow");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetFlow(request));
}

StatusOr<google::cloud::dialogflow::cx::v3::Flow>
FlowsTracingConnection::UpdateFlow(
    google::cloud::dialogflow::cx::v3::UpdateFlowRequest const& request) {
  auto span = internal::MakeSpan("dialogflow_cx::FlowsConnection::UpdateFlow");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateFlow(request));
}

future<StatusOr<google::protobuf::Struct>> FlowsTracingConnection::TrainFlow(
    google::cloud::dialogflow::cx::v3::TrainFlowRequest const& request) {
  auto span = internal::MakeSpan("dialogflow_cx::FlowsConnection::TrainFlow");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->TrainFlow(request));
}

StatusOr<google::cloud::dialogflow::cx::v3::FlowValidationResult>
FlowsTracingConnection::ValidateFlow(
    google::cloud::dialogflow::cx::v3::ValidateFlowRequest const& request) {
  auto span =
      internal::MakeSpan("dialogflow_cx::FlowsConnection::ValidateFlow");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->ValidateFlow(request));
}

StatusOr<google::cloud::dialogflow::cx::v3::FlowValidationResult>
FlowsTracingConnection::GetFlowValidationResult(
    google::cloud::dialogflow::cx::v3::GetFlowValidationResultRequest const&
        request) {
  auto span = internal::MakeSpan(
      "dialogflow_cx::FlowsConnection::GetFlowValidationResult");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetFlowValidationResult(request));
}

future<StatusOr<google::cloud::dialogflow::cx::v3::ImportFlowResponse>>
FlowsTracingConnection::ImportFlow(
    google::cloud::dialogflow::cx::v3::ImportFlowRequest const& request) {
  auto span = internal::MakeSpan("dialogflow_cx::FlowsConnection::ImportFlow");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->ImportFlow(request));
}

future<StatusOr<google::cloud::dialogflow::cx::v3::ExportFlowResponse>>
FlowsTracingConnection::ExportFlow(
    google::cloud::dialogflow::cx::v3::ExportFlowRequest const& request) {
  auto span = internal::MakeSpan("dialogflow_cx::FlowsConnection::ExportFlow");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->ExportFlow(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<dialogflow_cx::FlowsConnection> MakeFlowsTracingConnection(
    std::shared_ptr<dialogflow_cx::FlowsConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<FlowsTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx_internal
}  // namespace cloud
}  // namespace google
