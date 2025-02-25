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
// source: google/cloud/compute/firewall_policies/v1/firewall_policies.proto

#include "google/cloud/compute/firewall_policies/v1/firewall_policies_connection.h"
#include "google/cloud/compute/firewall_policies/v1/firewall_policies_options.h"
#include "google/cloud/compute/firewall_policies/v1/internal/firewall_policies_option_defaults.h"
#include "google/cloud/compute/firewall_policies/v1/internal/firewall_policies_tracing_connection.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_firewall_policies_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

FirewallPoliciesConnection::~FirewallPoliciesConnection() = default;

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
FirewallPoliciesConnection::AddAssociation(
    google::cloud::cpp::compute::firewall_policies::v1::
        AddAssociationRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
FirewallPoliciesConnection::AddRule(
    google::cloud::cpp::compute::firewall_policies::v1::AddRuleRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
FirewallPoliciesConnection::CloneRules(
    google::cloud::cpp::compute::firewall_policies::v1::
        CloneRulesRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
FirewallPoliciesConnection::DeleteFirewallPolicies(
    google::cloud::cpp::compute::firewall_policies::v1::
        DeleteFirewallPoliciesRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::FirewallPolicy>
FirewallPoliciesConnection::GetFirewallPolicies(
    google::cloud::cpp::compute::firewall_policies::v1::
        GetFirewallPoliciesRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::cpp::compute::v1::FirewallPolicyAssociation>
FirewallPoliciesConnection::GetAssociation(
    google::cloud::cpp::compute::firewall_policies::v1::
        GetAssociationRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
FirewallPoliciesConnection::GetIamPolicy(
    google::cloud::cpp::compute::firewall_policies::v1::
        GetIamPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::cpp::compute::v1::FirewallPolicyRule>
FirewallPoliciesConnection::GetRule(
    google::cloud::cpp::compute::firewall_policies::v1::GetRuleRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
FirewallPoliciesConnection::InsertFirewallPolicies(
    google::cloud::cpp::compute::firewall_policies::v1::
        InsertFirewallPoliciesRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::cpp::compute::v1::FirewallPolicy>
FirewallPoliciesConnection::ListFirewallPolicies(
    google::cloud::cpp::compute::firewall_policies::v1::
        ListFirewallPoliciesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::cpp::compute::v1::FirewallPolicy>>();
}

StatusOr<
    google::cloud::cpp::compute::v1::FirewallPoliciesListAssociationsResponse>
FirewallPoliciesConnection::ListAssociations(
    google::cloud::cpp::compute::firewall_policies::v1::
        ListAssociationsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
FirewallPoliciesConnection::Move(
    google::cloud::cpp::compute::firewall_policies::v1::MoveRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
FirewallPoliciesConnection::PatchFirewallPolicies(
    google::cloud::cpp::compute::firewall_policies::v1::
        PatchFirewallPoliciesRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
FirewallPoliciesConnection::PatchRule(
    google::cloud::cpp::compute::firewall_policies::v1::
        PatchRuleRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
FirewallPoliciesConnection::RemoveAssociation(
    google::cloud::cpp::compute::firewall_policies::v1::
        RemoveAssociationRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
FirewallPoliciesConnection::RemoveRule(
    google::cloud::cpp::compute::firewall_policies::v1::
        RemoveRuleRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
FirewallPoliciesConnection::SetIamPolicy(
    google::cloud::cpp::compute::firewall_policies::v1::
        SetIamPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
FirewallPoliciesConnection::TestIamPermissions(
    google::cloud::cpp::compute::firewall_policies::v1::
        TestIamPermissionsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_firewall_policies_v1
}  // namespace cloud
}  // namespace google
