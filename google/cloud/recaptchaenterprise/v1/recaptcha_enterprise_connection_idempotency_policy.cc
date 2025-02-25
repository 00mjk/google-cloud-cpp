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
// source: google/cloud/recaptchaenterprise/v1/recaptchaenterprise.proto

#include "google/cloud/recaptchaenterprise/v1/recaptcha_enterprise_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace recaptchaenterprise_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

RecaptchaEnterpriseServiceConnectionIdempotencyPolicy::
    ~RecaptchaEnterpriseServiceConnectionIdempotencyPolicy() = default;

std::unique_ptr<RecaptchaEnterpriseServiceConnectionIdempotencyPolicy>
RecaptchaEnterpriseServiceConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<
      RecaptchaEnterpriseServiceConnectionIdempotencyPolicy>(*this);
}

Idempotency
RecaptchaEnterpriseServiceConnectionIdempotencyPolicy::CreateAssessment(
    google::cloud::recaptchaenterprise::v1::CreateAssessmentRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
RecaptchaEnterpriseServiceConnectionIdempotencyPolicy::AnnotateAssessment(
    google::cloud::recaptchaenterprise::v1::AnnotateAssessmentRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency RecaptchaEnterpriseServiceConnectionIdempotencyPolicy::CreateKey(
    google::cloud::recaptchaenterprise::v1::CreateKeyRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency RecaptchaEnterpriseServiceConnectionIdempotencyPolicy::ListKeys(
    google::cloud::recaptchaenterprise::v1::ListKeysRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency
RecaptchaEnterpriseServiceConnectionIdempotencyPolicy::RetrieveLegacySecretKey(
    google::cloud::recaptchaenterprise::v1::
        RetrieveLegacySecretKeyRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency RecaptchaEnterpriseServiceConnectionIdempotencyPolicy::GetKey(
    google::cloud::recaptchaenterprise::v1::GetKeyRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency RecaptchaEnterpriseServiceConnectionIdempotencyPolicy::UpdateKey(
    google::cloud::recaptchaenterprise::v1::UpdateKeyRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency RecaptchaEnterpriseServiceConnectionIdempotencyPolicy::DeleteKey(
    google::cloud::recaptchaenterprise::v1::DeleteKeyRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency RecaptchaEnterpriseServiceConnectionIdempotencyPolicy::MigrateKey(
    google::cloud::recaptchaenterprise::v1::MigrateKeyRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency RecaptchaEnterpriseServiceConnectionIdempotencyPolicy::GetMetrics(
    google::cloud::recaptchaenterprise::v1::GetMetricsRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency
RecaptchaEnterpriseServiceConnectionIdempotencyPolicy::ListRelatedAccountGroups(
    google::cloud::recaptchaenterprise::v1::
        ListRelatedAccountGroupsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency RecaptchaEnterpriseServiceConnectionIdempotencyPolicy::
    ListRelatedAccountGroupMemberships(
        google::cloud::recaptchaenterprise::v1::
            ListRelatedAccountGroupMembershipsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency RecaptchaEnterpriseServiceConnectionIdempotencyPolicy::
    SearchRelatedAccountGroupMemberships(
        google::cloud::recaptchaenterprise::v1::
            SearchRelatedAccountGroupMembershipsRequest) {  // NOLINT
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<RecaptchaEnterpriseServiceConnectionIdempotencyPolicy>
MakeDefaultRecaptchaEnterpriseServiceConnectionIdempotencyPolicy() {
  return std::make_unique<
      RecaptchaEnterpriseServiceConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace recaptchaenterprise_v1
}  // namespace cloud
}  // namespace google
