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
// source: google/cloud/metastore/v1/metastore.proto

#include "google/cloud/metastore/v1/internal/dataproc_metastore_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace metastore_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

DataprocMetastoreTracingConnection::DataprocMetastoreTracingConnection(
    std::shared_ptr<metastore_v1::DataprocMetastoreConnection> child)
    : child_(std::move(child)) {}

StreamRange<google::cloud::metastore::v1::Service>
DataprocMetastoreTracingConnection::ListServices(
    google::cloud::metastore::v1::ListServicesRequest request) {
  auto span = internal::MakeSpan(
      "metastore_v1::DataprocMetastoreConnection::ListServices");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListServices(std::move(request));
  return internal::MakeTracedStreamRange<google::cloud::metastore::v1::Service>(
      std::move(span), std::move(sr));
}

StatusOr<google::cloud::metastore::v1::Service>
DataprocMetastoreTracingConnection::GetService(
    google::cloud::metastore::v1::GetServiceRequest const& request) {
  auto span = internal::MakeSpan(
      "metastore_v1::DataprocMetastoreConnection::GetService");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetService(request));
}

future<StatusOr<google::cloud::metastore::v1::Service>>
DataprocMetastoreTracingConnection::CreateService(
    google::cloud::metastore::v1::CreateServiceRequest const& request) {
  auto span = internal::MakeSpan(
      "metastore_v1::DataprocMetastoreConnection::CreateService");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->CreateService(request));
}

future<StatusOr<google::cloud::metastore::v1::Service>>
DataprocMetastoreTracingConnection::UpdateService(
    google::cloud::metastore::v1::UpdateServiceRequest const& request) {
  auto span = internal::MakeSpan(
      "metastore_v1::DataprocMetastoreConnection::UpdateService");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->UpdateService(request));
}

future<StatusOr<google::cloud::metastore::v1::OperationMetadata>>
DataprocMetastoreTracingConnection::DeleteService(
    google::cloud::metastore::v1::DeleteServiceRequest const& request) {
  auto span = internal::MakeSpan(
      "metastore_v1::DataprocMetastoreConnection::DeleteService");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteService(request));
}

StreamRange<google::cloud::metastore::v1::MetadataImport>
DataprocMetastoreTracingConnection::ListMetadataImports(
    google::cloud::metastore::v1::ListMetadataImportsRequest request) {
  auto span = internal::MakeSpan(
      "metastore_v1::DataprocMetastoreConnection::ListMetadataImports");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListMetadataImports(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::metastore::v1::MetadataImport>(std::move(span),
                                                    std::move(sr));
}

StatusOr<google::cloud::metastore::v1::MetadataImport>
DataprocMetastoreTracingConnection::GetMetadataImport(
    google::cloud::metastore::v1::GetMetadataImportRequest const& request) {
  auto span = internal::MakeSpan(
      "metastore_v1::DataprocMetastoreConnection::GetMetadataImport");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetMetadataImport(request));
}

future<StatusOr<google::cloud::metastore::v1::MetadataImport>>
DataprocMetastoreTracingConnection::CreateMetadataImport(
    google::cloud::metastore::v1::CreateMetadataImportRequest const& request) {
  auto span = internal::MakeSpan(
      "metastore_v1::DataprocMetastoreConnection::CreateMetadataImport");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->CreateMetadataImport(request));
}

future<StatusOr<google::cloud::metastore::v1::MetadataImport>>
DataprocMetastoreTracingConnection::UpdateMetadataImport(
    google::cloud::metastore::v1::UpdateMetadataImportRequest const& request) {
  auto span = internal::MakeSpan(
      "metastore_v1::DataprocMetastoreConnection::UpdateMetadataImport");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->UpdateMetadataImport(request));
}

future<StatusOr<google::cloud::metastore::v1::MetadataExport>>
DataprocMetastoreTracingConnection::ExportMetadata(
    google::cloud::metastore::v1::ExportMetadataRequest const& request) {
  auto span = internal::MakeSpan(
      "metastore_v1::DataprocMetastoreConnection::ExportMetadata");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->ExportMetadata(request));
}

future<StatusOr<google::cloud::metastore::v1::Restore>>
DataprocMetastoreTracingConnection::RestoreService(
    google::cloud::metastore::v1::RestoreServiceRequest const& request) {
  auto span = internal::MakeSpan(
      "metastore_v1::DataprocMetastoreConnection::RestoreService");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->RestoreService(request));
}

StreamRange<google::cloud::metastore::v1::Backup>
DataprocMetastoreTracingConnection::ListBackups(
    google::cloud::metastore::v1::ListBackupsRequest request) {
  auto span = internal::MakeSpan(
      "metastore_v1::DataprocMetastoreConnection::ListBackups");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListBackups(std::move(request));
  return internal::MakeTracedStreamRange<google::cloud::metastore::v1::Backup>(
      std::move(span), std::move(sr));
}

StatusOr<google::cloud::metastore::v1::Backup>
DataprocMetastoreTracingConnection::GetBackup(
    google::cloud::metastore::v1::GetBackupRequest const& request) {
  auto span = internal::MakeSpan(
      "metastore_v1::DataprocMetastoreConnection::GetBackup");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetBackup(request));
}

future<StatusOr<google::cloud::metastore::v1::Backup>>
DataprocMetastoreTracingConnection::CreateBackup(
    google::cloud::metastore::v1::CreateBackupRequest const& request) {
  auto span = internal::MakeSpan(
      "metastore_v1::DataprocMetastoreConnection::CreateBackup");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->CreateBackup(request));
}

future<StatusOr<google::cloud::metastore::v1::OperationMetadata>>
DataprocMetastoreTracingConnection::DeleteBackup(
    google::cloud::metastore::v1::DeleteBackupRequest const& request) {
  auto span = internal::MakeSpan(
      "metastore_v1::DataprocMetastoreConnection::DeleteBackup");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteBackup(request));
}

future<StatusOr<google::cloud::metastore::v1::QueryMetadataResponse>>
DataprocMetastoreTracingConnection::QueryMetadata(
    google::cloud::metastore::v1::QueryMetadataRequest const& request) {
  auto span = internal::MakeSpan(
      "metastore_v1::DataprocMetastoreConnection::QueryMetadata");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->QueryMetadata(request));
}

future<StatusOr<google::cloud::metastore::v1::MoveTableToDatabaseResponse>>
DataprocMetastoreTracingConnection::MoveTableToDatabase(
    google::cloud::metastore::v1::MoveTableToDatabaseRequest const& request) {
  auto span = internal::MakeSpan(
      "metastore_v1::DataprocMetastoreConnection::MoveTableToDatabase");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->MoveTableToDatabase(request));
}

future<StatusOr<
    google::cloud::metastore::v1::AlterMetadataResourceLocationResponse>>
DataprocMetastoreTracingConnection::AlterMetadataResourceLocation(
    google::cloud::metastore::v1::AlterMetadataResourceLocationRequest const&
        request) {
  auto span = internal::MakeSpan(
      "metastore_v1::DataprocMetastoreConnection::"
      "AlterMetadataResourceLocation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->AlterMetadataResourceLocation(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<metastore_v1::DataprocMetastoreConnection>
MakeDataprocMetastoreTracingConnection(
    std::shared_ptr<metastore_v1::DataprocMetastoreConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn =
        std::make_shared<DataprocMetastoreTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace metastore_v1_internal
}  // namespace cloud
}  // namespace google
