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
// source: google/cloud/notebooks/v1/service.proto

#include "google/cloud/notebooks/v1/internal/notebook_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace notebooks_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

NotebookServiceTracingConnection::NotebookServiceTracingConnection(
    std::shared_ptr<notebooks_v1::NotebookServiceConnection> child)
    : child_(std::move(child)) {}

StreamRange<google::cloud::notebooks::v1::Instance>
NotebookServiceTracingConnection::ListInstances(
    google::cloud::notebooks::v1::ListInstancesRequest request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::ListInstances");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListInstances(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::notebooks::v1::Instance>(std::move(span), std::move(sr));
}

StatusOr<google::cloud::notebooks::v1::Instance>
NotebookServiceTracingConnection::GetInstance(
    google::cloud::notebooks::v1::GetInstanceRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::GetInstance");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetInstance(request));
}

future<StatusOr<google::cloud::notebooks::v1::Instance>>
NotebookServiceTracingConnection::CreateInstance(
    google::cloud::notebooks::v1::CreateInstanceRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::CreateInstance");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->CreateInstance(request));
}

future<StatusOr<google::cloud::notebooks::v1::Instance>>
NotebookServiceTracingConnection::RegisterInstance(
    google::cloud::notebooks::v1::RegisterInstanceRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::RegisterInstance");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->RegisterInstance(request));
}

future<StatusOr<google::cloud::notebooks::v1::Instance>>
NotebookServiceTracingConnection::SetInstanceAccelerator(
    google::cloud::notebooks::v1::SetInstanceAcceleratorRequest const&
        request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::SetInstanceAccelerator");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->SetInstanceAccelerator(request));
}

future<StatusOr<google::cloud::notebooks::v1::Instance>>
NotebookServiceTracingConnection::SetInstanceMachineType(
    google::cloud::notebooks::v1::SetInstanceMachineTypeRequest const&
        request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::SetInstanceMachineType");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->SetInstanceMachineType(request));
}

future<StatusOr<google::cloud::notebooks::v1::Instance>>
NotebookServiceTracingConnection::UpdateInstanceConfig(
    google::cloud::notebooks::v1::UpdateInstanceConfigRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::UpdateInstanceConfig");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->UpdateInstanceConfig(request));
}

future<StatusOr<google::cloud::notebooks::v1::Instance>>
NotebookServiceTracingConnection::UpdateShieldedInstanceConfig(
    google::cloud::notebooks::v1::UpdateShieldedInstanceConfigRequest const&
        request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::UpdateShieldedInstanceConfig");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->UpdateShieldedInstanceConfig(request));
}

future<StatusOr<google::cloud::notebooks::v1::Instance>>
NotebookServiceTracingConnection::SetInstanceLabels(
    google::cloud::notebooks::v1::SetInstanceLabelsRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::SetInstanceLabels");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->SetInstanceLabels(request));
}

StatusOr<google::cloud::notebooks::v1::UpdateInstanceMetadataItemsResponse>
NotebookServiceTracingConnection::UpdateInstanceMetadataItems(
    google::cloud::notebooks::v1::UpdateInstanceMetadataItemsRequest const&
        request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::UpdateInstanceMetadataItems");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateInstanceMetadataItems(request));
}

future<StatusOr<google::cloud::notebooks::v1::OperationMetadata>>
NotebookServiceTracingConnection::DeleteInstance(
    google::cloud::notebooks::v1::DeleteInstanceRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::DeleteInstance");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteInstance(request));
}

future<StatusOr<google::cloud::notebooks::v1::Instance>>
NotebookServiceTracingConnection::StartInstance(
    google::cloud::notebooks::v1::StartInstanceRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::StartInstance");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->StartInstance(request));
}

future<StatusOr<google::cloud::notebooks::v1::Instance>>
NotebookServiceTracingConnection::StopInstance(
    google::cloud::notebooks::v1::StopInstanceRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::StopInstance");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->StopInstance(request));
}

future<StatusOr<google::cloud::notebooks::v1::Instance>>
NotebookServiceTracingConnection::ResetInstance(
    google::cloud::notebooks::v1::ResetInstanceRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::ResetInstance");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->ResetInstance(request));
}

future<StatusOr<google::cloud::notebooks::v1::Instance>>
NotebookServiceTracingConnection::ReportInstanceInfo(
    google::cloud::notebooks::v1::ReportInstanceInfoRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::ReportInstanceInfo");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->ReportInstanceInfo(request));
}

StatusOr<google::cloud::notebooks::v1::IsInstanceUpgradeableResponse>
NotebookServiceTracingConnection::IsInstanceUpgradeable(
    google::cloud::notebooks::v1::IsInstanceUpgradeableRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::IsInstanceUpgradeable");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->IsInstanceUpgradeable(request));
}

StatusOr<google::cloud::notebooks::v1::GetInstanceHealthResponse>
NotebookServiceTracingConnection::GetInstanceHealth(
    google::cloud::notebooks::v1::GetInstanceHealthRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::GetInstanceHealth");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetInstanceHealth(request));
}

future<StatusOr<google::cloud::notebooks::v1::Instance>>
NotebookServiceTracingConnection::UpgradeInstance(
    google::cloud::notebooks::v1::UpgradeInstanceRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::UpgradeInstance");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->UpgradeInstance(request));
}

future<StatusOr<google::cloud::notebooks::v1::Instance>>
NotebookServiceTracingConnection::RollbackInstance(
    google::cloud::notebooks::v1::RollbackInstanceRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::RollbackInstance");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->RollbackInstance(request));
}

future<StatusOr<google::cloud::notebooks::v1::Instance>>
NotebookServiceTracingConnection::DiagnoseInstance(
    google::cloud::notebooks::v1::DiagnoseInstanceRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::DiagnoseInstance");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->DiagnoseInstance(request));
}

future<StatusOr<google::cloud::notebooks::v1::Instance>>
NotebookServiceTracingConnection::UpgradeInstanceInternal(
    google::cloud::notebooks::v1::UpgradeInstanceInternalRequest const&
        request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::UpgradeInstanceInternal");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->UpgradeInstanceInternal(request));
}

StreamRange<google::cloud::notebooks::v1::Environment>
NotebookServiceTracingConnection::ListEnvironments(
    google::cloud::notebooks::v1::ListEnvironmentsRequest request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::ListEnvironments");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListEnvironments(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::notebooks::v1::Environment>(std::move(span),
                                                 std::move(sr));
}

StatusOr<google::cloud::notebooks::v1::Environment>
NotebookServiceTracingConnection::GetEnvironment(
    google::cloud::notebooks::v1::GetEnvironmentRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::GetEnvironment");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetEnvironment(request));
}

future<StatusOr<google::cloud::notebooks::v1::Environment>>
NotebookServiceTracingConnection::CreateEnvironment(
    google::cloud::notebooks::v1::CreateEnvironmentRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::CreateEnvironment");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->CreateEnvironment(request));
}

future<StatusOr<google::cloud::notebooks::v1::OperationMetadata>>
NotebookServiceTracingConnection::DeleteEnvironment(
    google::cloud::notebooks::v1::DeleteEnvironmentRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::DeleteEnvironment");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteEnvironment(request));
}

StreamRange<google::cloud::notebooks::v1::Schedule>
NotebookServiceTracingConnection::ListSchedules(
    google::cloud::notebooks::v1::ListSchedulesRequest request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::ListSchedules");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListSchedules(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::notebooks::v1::Schedule>(std::move(span), std::move(sr));
}

StatusOr<google::cloud::notebooks::v1::Schedule>
NotebookServiceTracingConnection::GetSchedule(
    google::cloud::notebooks::v1::GetScheduleRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::GetSchedule");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetSchedule(request));
}

future<StatusOr<google::cloud::notebooks::v1::OperationMetadata>>
NotebookServiceTracingConnection::DeleteSchedule(
    google::cloud::notebooks::v1::DeleteScheduleRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::DeleteSchedule");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteSchedule(request));
}

future<StatusOr<google::cloud::notebooks::v1::Schedule>>
NotebookServiceTracingConnection::CreateSchedule(
    google::cloud::notebooks::v1::CreateScheduleRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::CreateSchedule");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->CreateSchedule(request));
}

future<StatusOr<google::cloud::notebooks::v1::Schedule>>
NotebookServiceTracingConnection::TriggerSchedule(
    google::cloud::notebooks::v1::TriggerScheduleRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::TriggerSchedule");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->TriggerSchedule(request));
}

StreamRange<google::cloud::notebooks::v1::Execution>
NotebookServiceTracingConnection::ListExecutions(
    google::cloud::notebooks::v1::ListExecutionsRequest request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::ListExecutions");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListExecutions(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::notebooks::v1::Execution>(std::move(span), std::move(sr));
}

StatusOr<google::cloud::notebooks::v1::Execution>
NotebookServiceTracingConnection::GetExecution(
    google::cloud::notebooks::v1::GetExecutionRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::GetExecution");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetExecution(request));
}

future<StatusOr<google::cloud::notebooks::v1::OperationMetadata>>
NotebookServiceTracingConnection::DeleteExecution(
    google::cloud::notebooks::v1::DeleteExecutionRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::DeleteExecution");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteExecution(request));
}

future<StatusOr<google::cloud::notebooks::v1::Execution>>
NotebookServiceTracingConnection::CreateExecution(
    google::cloud::notebooks::v1::CreateExecutionRequest const& request) {
  auto span = internal::MakeSpan(
      "notebooks_v1::NotebookServiceConnection::CreateExecution");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->CreateExecution(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<notebooks_v1::NotebookServiceConnection>
MakeNotebookServiceTracingConnection(
    std::shared_ptr<notebooks_v1::NotebookServiceConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<NotebookServiceTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace notebooks_v1_internal
}  // namespace cloud
}  // namespace google
