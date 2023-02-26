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
// source: google/cloud/resourcemanager/v3/folders.proto

#include "google/cloud/resourcemanager/v3/folders_connection_idempotency_policy.h"
#include "absl/memory/memory.h"
#include <memory>

namespace google {
namespace cloud {
namespace resourcemanager_v3 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

FoldersConnectionIdempotencyPolicy::~FoldersConnectionIdempotencyPolicy() =
    default;

std::unique_ptr<FoldersConnectionIdempotencyPolicy>
FoldersConnectionIdempotencyPolicy::clone() const {
  return absl::make_unique<FoldersConnectionIdempotencyPolicy>(*this);
}

Idempotency FoldersConnectionIdempotencyPolicy::GetFolder(
    google::cloud::resourcemanager::v3::GetFolderRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency FoldersConnectionIdempotencyPolicy::ListFolders(
    google::cloud::resourcemanager::v3::ListFoldersRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency FoldersConnectionIdempotencyPolicy::SearchFolders(
    google::cloud::resourcemanager::v3::SearchFoldersRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency FoldersConnectionIdempotencyPolicy::CreateFolder(
    google::cloud::resourcemanager::v3::CreateFolderRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency FoldersConnectionIdempotencyPolicy::UpdateFolder(
    google::cloud::resourcemanager::v3::UpdateFolderRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency FoldersConnectionIdempotencyPolicy::MoveFolder(
    google::cloud::resourcemanager::v3::MoveFolderRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency FoldersConnectionIdempotencyPolicy::DeleteFolder(
    google::cloud::resourcemanager::v3::DeleteFolderRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency FoldersConnectionIdempotencyPolicy::UndeleteFolder(
    google::cloud::resourcemanager::v3::UndeleteFolderRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency FoldersConnectionIdempotencyPolicy::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency FoldersConnectionIdempotencyPolicy::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const& request) {
  return request.policy().etag().empty() ? Idempotency::kNonIdempotent
                                         : Idempotency::kIdempotent;
}

Idempotency FoldersConnectionIdempotencyPolicy::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const&) {
  return Idempotency::kIdempotent;
}

std::unique_ptr<FoldersConnectionIdempotencyPolicy>
MakeDefaultFoldersConnectionIdempotencyPolicy() {
  return absl::make_unique<FoldersConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace resourcemanager_v3
}  // namespace cloud
}  // namespace google
