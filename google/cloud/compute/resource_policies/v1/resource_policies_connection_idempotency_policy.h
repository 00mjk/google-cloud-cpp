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
// source: google/cloud/compute/resource_policies/v1/resource_policies.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_RESOURCE_POLICIES_V1_RESOURCE_POLICIES_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_RESOURCE_POLICIES_V1_RESOURCE_POLICIES_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/resource_policies/v1/resource_policies.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_resource_policies_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ResourcePoliciesConnectionIdempotencyPolicy {
 public:
  virtual ~ResourcePoliciesConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<ResourcePoliciesConnectionIdempotencyPolicy> clone()
      const;

  virtual google::cloud::Idempotency AggregatedListResourcePolicies(
      google::cloud::cpp::compute::resource_policies::v1::
          AggregatedListResourcePoliciesRequest const& request);

  virtual google::cloud::Idempotency DeleteResourcePolicies(
      google::cloud::cpp::compute::resource_policies::v1::
          DeleteResourcePoliciesRequest const& request);

  virtual google::cloud::Idempotency GetResourcePolicies(
      google::cloud::cpp::compute::resource_policies::v1::
          GetResourcePoliciesRequest const& request);

  virtual google::cloud::Idempotency GetIamPolicy(
      google::cloud::cpp::compute::resource_policies::v1::
          GetIamPolicyRequest const& request);

  virtual google::cloud::Idempotency InsertResourcePolicies(
      google::cloud::cpp::compute::resource_policies::v1::
          InsertResourcePoliciesRequest const& request);

  virtual google::cloud::Idempotency ListResourcePolicies(
      google::cloud::cpp::compute::resource_policies::v1::
          ListResourcePoliciesRequest request);

  virtual google::cloud::Idempotency SetIamPolicy(
      google::cloud::cpp::compute::resource_policies::v1::
          SetIamPolicyRequest const& request);

  virtual google::cloud::Idempotency TestIamPermissions(
      google::cloud::cpp::compute::resource_policies::v1::
          TestIamPermissionsRequest const& request);
};

std::unique_ptr<ResourcePoliciesConnectionIdempotencyPolicy>
MakeDefaultResourcePoliciesConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_resource_policies_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_RESOURCE_POLICIES_V1_RESOURCE_POLICIES_CONNECTION_IDEMPOTENCY_POLICY_H
