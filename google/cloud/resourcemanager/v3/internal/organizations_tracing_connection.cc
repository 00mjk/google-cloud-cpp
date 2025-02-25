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
// source: google/cloud/resourcemanager/v3/organizations.proto

#include "google/cloud/resourcemanager/v3/internal/organizations_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace resourcemanager_v3_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

OrganizationsTracingConnection::OrganizationsTracingConnection(
    std::shared_ptr<resourcemanager_v3::OrganizationsConnection> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::resourcemanager::v3::Organization>
OrganizationsTracingConnection::GetOrganization(
    google::cloud::resourcemanager::v3::GetOrganizationRequest const& request) {
  auto span = internal::MakeSpan(
      "resourcemanager_v3::OrganizationsConnection::GetOrganization");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetOrganization(request));
}

StreamRange<google::cloud::resourcemanager::v3::Organization>
OrganizationsTracingConnection::SearchOrganizations(
    google::cloud::resourcemanager::v3::SearchOrganizationsRequest request) {
  auto span = internal::MakeSpan(
      "resourcemanager_v3::OrganizationsConnection::SearchOrganizations");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->SearchOrganizations(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::resourcemanager::v3::Organization>(std::move(span),
                                                        std::move(sr));
}

StatusOr<google::iam::v1::Policy> OrganizationsTracingConnection::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const& request) {
  auto span = internal::MakeSpan(
      "resourcemanager_v3::OrganizationsConnection::GetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetIamPolicy(request));
}

StatusOr<google::iam::v1::Policy> OrganizationsTracingConnection::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const& request) {
  auto span = internal::MakeSpan(
      "resourcemanager_v3::OrganizationsConnection::SetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->SetIamPolicy(request));
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
OrganizationsTracingConnection::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const& request) {
  auto span = internal::MakeSpan(
      "resourcemanager_v3::OrganizationsConnection::TestIamPermissions");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->TestIamPermissions(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<resourcemanager_v3::OrganizationsConnection>
MakeOrganizationsTracingConnection(
    std::shared_ptr<resourcemanager_v3::OrganizationsConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<OrganizationsTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace resourcemanager_v3_internal
}  // namespace cloud
}  // namespace google
