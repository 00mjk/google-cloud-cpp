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
// source: google/cloud/compute/licenses/v1/licenses.proto

#include "google/cloud/compute/licenses/v1/internal/licenses_rest_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/absl_str_join_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include "absl/strings/str_format.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_licenses_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

LicensesRestMetadata::LicensesRestMetadata(
    std::shared_ptr<LicensesRestStub> child)
    : child_(std::move(child)),
      api_client_header_(
          google::cloud::internal::ApiClientHeader("generator")) {}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
LicensesRestMetadata::AsyncDeleteLicenses(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::licenses::v1::DeleteLicensesRequest const&
        request) {
  SetMetadata(*rest_context);
  return child_->AsyncDeleteLicenses(cq, std::move(rest_context), request);
}

StatusOr<google::cloud::cpp::compute::v1::License>
LicensesRestMetadata::GetLicenses(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::licenses::v1::GetLicensesRequest const&
        request) {
  SetMetadata(rest_context);
  return child_->GetLicenses(rest_context, request);
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
LicensesRestMetadata::GetIamPolicy(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::licenses::v1::GetIamPolicyRequest const&
        request) {
  SetMetadata(rest_context);
  return child_->GetIamPolicy(rest_context, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
LicensesRestMetadata::AsyncInsertLicenses(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::licenses::v1::InsertLicensesRequest const&
        request) {
  SetMetadata(*rest_context);
  return child_->AsyncInsertLicenses(cq, std::move(rest_context), request);
}

StatusOr<google::cloud::cpp::compute::v1::LicensesListResponse>
LicensesRestMetadata::ListLicenses(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::licenses::v1::ListLicensesRequest const&
        request) {
  SetMetadata(rest_context);
  return child_->ListLicenses(rest_context, request);
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
LicensesRestMetadata::SetIamPolicy(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::licenses::v1::SetIamPolicyRequest const&
        request) {
  SetMetadata(rest_context);
  return child_->SetIamPolicy(rest_context, request);
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
LicensesRestMetadata::TestIamPermissions(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::licenses::v1::TestIamPermissionsRequest const&
        request) {
  SetMetadata(rest_context);
  return child_->TestIamPermissions(rest_context, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
LicensesRestMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::global_operations::v1::
        GetGlobalOperationsRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncGetOperation(cq, std::move(rest_context), request);
}

future<Status> LicensesRestMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::global_operations::v1::
        DeleteGlobalOperationsRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncCancelOperation(cq, std::move(rest_context), request);
}

void LicensesRestMetadata::SetMetadata(rest_internal::RestContext& rest_context,
                                       std::vector<std::string> const& params) {
  rest_context.AddHeader("x-goog-api-client", api_client_header_);
  if (!params.empty()) {
    rest_context.AddHeader("x-goog-request-params", absl::StrJoin(params, "&"));
  }
  auto const& options = internal::CurrentOptions();
  if (options.has<UserProjectOption>()) {
    rest_context.AddHeader("x-goog-user-project",
                           options.get<UserProjectOption>());
  }
  if (options.has<google::cloud::QuotaUserOption>()) {
    rest_context.AddHeader("x-goog-quota-user",
                           options.get<google::cloud::QuotaUserOption>());
  }
  if (options.has<google::cloud::ServerTimeoutOption>()) {
    auto ms_rep = absl::StrCat(
        absl::Dec(options.get<google::cloud::ServerTimeoutOption>().count(),
                  absl::kZeroPad4));
    rest_context.AddHeader("x-server-timeout",
                           ms_rep.insert(ms_rep.size() - 3, "."));
  }
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_licenses_v1_internal
}  // namespace cloud
}  // namespace google
