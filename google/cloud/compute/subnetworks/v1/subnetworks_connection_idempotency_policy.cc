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
// source: google/cloud/compute/subnetworks/v1/subnetworks.proto

#include "google/cloud/compute/subnetworks/v1/subnetworks_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_subnetworks_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

SubnetworksConnectionIdempotencyPolicy::
    ~SubnetworksConnectionIdempotencyPolicy() = default;

std::unique_ptr<SubnetworksConnectionIdempotencyPolicy>
SubnetworksConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<SubnetworksConnectionIdempotencyPolicy>(*this);
}

Idempotency SubnetworksConnectionIdempotencyPolicy::AggregatedListSubnetworks(
    google::cloud::cpp::compute::subnetworks::v1::
        AggregatedListSubnetworksRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency SubnetworksConnectionIdempotencyPolicy::DeleteSubnetworks(
    google::cloud::cpp::compute::subnetworks::v1::
        DeleteSubnetworksRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency SubnetworksConnectionIdempotencyPolicy::ExpandIpCidrRange(
    google::cloud::cpp::compute::subnetworks::v1::
        ExpandIpCidrRangeRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency SubnetworksConnectionIdempotencyPolicy::GetSubnetworks(
    google::cloud::cpp::compute::subnetworks::v1::
        GetSubnetworksRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency SubnetworksConnectionIdempotencyPolicy::GetIamPolicy(
    google::cloud::cpp::compute::subnetworks::v1::GetIamPolicyRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency SubnetworksConnectionIdempotencyPolicy::InsertSubnetworks(
    google::cloud::cpp::compute::subnetworks::v1::
        InsertSubnetworksRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency SubnetworksConnectionIdempotencyPolicy::ListSubnetworks(
    google::cloud::cpp::compute::subnetworks::v1::
        ListSubnetworksRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency SubnetworksConnectionIdempotencyPolicy::ListUsable(
    google::cloud::cpp::compute::subnetworks::v1::
        ListUsableRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency SubnetworksConnectionIdempotencyPolicy::PatchSubnetworks(
    google::cloud::cpp::compute::subnetworks::v1::
        PatchSubnetworksRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency SubnetworksConnectionIdempotencyPolicy::SetIamPolicy(
    google::cloud::cpp::compute::subnetworks::v1::SetIamPolicyRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency SubnetworksConnectionIdempotencyPolicy::SetPrivateIpGoogleAccess(
    google::cloud::cpp::compute::subnetworks::v1::
        SetPrivateIpGoogleAccessRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency SubnetworksConnectionIdempotencyPolicy::TestIamPermissions(
    google::cloud::cpp::compute::subnetworks::v1::
        TestIamPermissionsRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<SubnetworksConnectionIdempotencyPolicy>
MakeDefaultSubnetworksConnectionIdempotencyPolicy() {
  return std::make_unique<SubnetworksConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_subnetworks_v1
}  // namespace cloud
}  // namespace google
