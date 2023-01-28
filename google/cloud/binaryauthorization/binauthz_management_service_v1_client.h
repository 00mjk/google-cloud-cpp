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
// source: google/cloud/binaryauthorization/v1/service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BINARYAUTHORIZATION_BINAUTHZ_MANAGEMENT_SERVICE_V1_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BINARYAUTHORIZATION_BINAUTHZ_MANAGEMENT_SERVICE_V1_CLIENT_H

#include "google/cloud/binaryauthorization/binauthz_management_service_v1_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <map>
#include <memory>

namespace google {
namespace cloud {
namespace binaryauthorization {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Google Cloud Management Service for Binary Authorization admission policies
/// and attestation authorities.
///
/// This API implements a REST model with the following objects:
///
/// * [Policy][google.cloud.binaryauthorization.v1.Policy]
/// * [Attestor][google.cloud.binaryauthorization.v1.Attestor]
///
/// @par Equality
///
/// Instances of this class created via copy-construction or copy-assignment
/// always compare equal. Instances created with equal
/// `std::shared_ptr<*Connection>` objects compare equal. Objects that compare
/// equal share the same underlying resources.
///
/// @par Performance
///
/// Creating a new instance of this class is a relatively expensive operation,
/// new objects establish new connections to the service. In contrast,
/// copy-construction, move-construction, and the corresponding assignment
/// operations are relatively efficient as the copies share all underlying
/// resources.
///
/// @par Thread Safety
///
/// Concurrent access to different instances of this class, even if they compare
/// equal, is guaranteed to work. Two or more threads operating on the same
/// instance of this class is not guaranteed to work. Since copy-construction
/// and move-construction is a relatively efficient operation, consider using
/// such a copy when using this class from multiple threads.
///
/// [google.cloud.binaryauthorization.v1.Attestor]:
/// @googleapis_link_reference{google/cloud/binaryauthorization/v1/resources.proto#L168}
/// [google.cloud.binaryauthorization.v1.Policy]:
/// @googleapis_link_reference{google/cloud/binaryauthorization/v1/resources.proto#L32}
///
class BinauthzManagementServiceV1Client {
 public:
  explicit BinauthzManagementServiceV1Client(
      std::shared_ptr<BinauthzManagementServiceV1Connection> connection,
      Options opts = {});
  ~BinauthzManagementServiceV1Client();

  ///@{
  /// @name Copy and move support
  BinauthzManagementServiceV1Client(BinauthzManagementServiceV1Client const&) =
      default;
  BinauthzManagementServiceV1Client& operator=(
      BinauthzManagementServiceV1Client const&) = default;
  BinauthzManagementServiceV1Client(BinauthzManagementServiceV1Client&&) =
      default;
  BinauthzManagementServiceV1Client& operator=(
      BinauthzManagementServiceV1Client&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(BinauthzManagementServiceV1Client const& a,
                         BinauthzManagementServiceV1Client const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(BinauthzManagementServiceV1Client const& a,
                         BinauthzManagementServiceV1Client const& b) {
    return !(a == b);
  }
  ///@}

  ///
  /// A [policy][google.cloud.binaryauthorization.v1.Policy] specifies the
  /// [attestors][google.cloud.binaryauthorization.v1.Attestor] that must attest
  /// to a container image, before the project is allowed to deploy that image.
  /// There is at most one policy per project. All image admission requests are
  /// permitted if a project has no policy.
  ///
  /// Gets the [policy][google.cloud.binaryauthorization.v1.Policy] for this
  /// project. Returns a default
  /// [policy][google.cloud.binaryauthorization.v1.Policy] if the project does
  /// not have one.
  ///
  /// @param name  Required. The resource name of the
  /// [policy][google.cloud.binaryauthorization.v1.Policy] to retrieve,
  ///  in the format `projects/*/policy`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::binaryauthorization::v1::Policy,google/cloud/binaryauthorization/v1/resources.proto#L32}
  ///
  /// [google.cloud.binaryauthorization.v1.Attestor]:
  /// @googleapis_reference_link{google/cloud/binaryauthorization/v1/resources.proto#L168}
  /// [google.cloud.binaryauthorization.v1.GetPolicyRequest]:
  /// @googleapis_reference_link{google/cloud/binaryauthorization/v1/service.proto#L155}
  /// [google.cloud.binaryauthorization.v1.Policy]:
  /// @googleapis_reference_link{google/cloud/binaryauthorization/v1/resources.proto#L32}
  ///
  StatusOr<google::cloud::binaryauthorization::v1::Policy> GetPolicy(
      std::string const& name, Options opts = {});

  ///
  /// A [policy][google.cloud.binaryauthorization.v1.Policy] specifies the
  /// [attestors][google.cloud.binaryauthorization.v1.Attestor] that must attest
  /// to a container image, before the project is allowed to deploy that image.
  /// There is at most one policy per project. All image admission requests are
  /// permitted if a project has no policy.
  ///
  /// Gets the [policy][google.cloud.binaryauthorization.v1.Policy] for this
  /// project. Returns a default
  /// [policy][google.cloud.binaryauthorization.v1.Policy] if the project does
  /// not have one.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::binaryauthorization::v1::GetPolicyRequest,google/cloud/binaryauthorization/v1/service.proto#L155}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::binaryauthorization::v1::Policy,google/cloud/binaryauthorization/v1/resources.proto#L32}
  ///
  /// [google.cloud.binaryauthorization.v1.Attestor]:
  /// @googleapis_reference_link{google/cloud/binaryauthorization/v1/resources.proto#L168}
  /// [google.cloud.binaryauthorization.v1.GetPolicyRequest]:
  /// @googleapis_reference_link{google/cloud/binaryauthorization/v1/service.proto#L155}
  /// [google.cloud.binaryauthorization.v1.Policy]:
  /// @googleapis_reference_link{google/cloud/binaryauthorization/v1/resources.proto#L32}
  ///
  StatusOr<google::cloud::binaryauthorization::v1::Policy> GetPolicy(
      google::cloud::binaryauthorization::v1::GetPolicyRequest const& request,
      Options opts = {});

  ///
  /// Creates or updates a project's
  /// [policy][google.cloud.binaryauthorization.v1.Policy], and returns a copy
  /// of the new [policy][google.cloud.binaryauthorization.v1.Policy]. A policy
  /// is always updated as a whole, to avoid race conditions with concurrent
  /// policy enforcement (or management!) requests. Returns NOT_FOUND if the
  /// project does not exist, INVALID_ARGUMENT if the request is malformed.
  ///
  /// @param policy  Required. A new or updated
  /// [policy][google.cloud.binaryauthorization.v1.Policy] value. The service
  /// will
  ///  overwrite the [policy
  ///  name][google.cloud.binaryauthorization.v1.Policy.name] field with the
  ///  resource name in the request URL, in the format `projects/*/policy`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::binaryauthorization::v1::Policy,google/cloud/binaryauthorization/v1/resources.proto#L32}
  ///
  /// [google.cloud.binaryauthorization.v1.Policy]:
  /// @googleapis_reference_link{google/cloud/binaryauthorization/v1/resources.proto#L32}
  /// [google.cloud.binaryauthorization.v1.UpdatePolicyRequest]:
  /// @googleapis_reference_link{google/cloud/binaryauthorization/v1/service.proto#L167}
  ///
  StatusOr<google::cloud::binaryauthorization::v1::Policy> UpdatePolicy(
      google::cloud::binaryauthorization::v1::Policy const& policy,
      Options opts = {});

  ///
  /// Creates or updates a project's
  /// [policy][google.cloud.binaryauthorization.v1.Policy], and returns a copy
  /// of the new [policy][google.cloud.binaryauthorization.v1.Policy]. A policy
  /// is always updated as a whole, to avoid race conditions with concurrent
  /// policy enforcement (or management!) requests. Returns NOT_FOUND if the
  /// project does not exist, INVALID_ARGUMENT if the request is malformed.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::binaryauthorization::v1::UpdatePolicyRequest,google/cloud/binaryauthorization/v1/service.proto#L167}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::binaryauthorization::v1::Policy,google/cloud/binaryauthorization/v1/resources.proto#L32}
  ///
  /// [google.cloud.binaryauthorization.v1.Policy]:
  /// @googleapis_reference_link{google/cloud/binaryauthorization/v1/resources.proto#L32}
  /// [google.cloud.binaryauthorization.v1.UpdatePolicyRequest]:
  /// @googleapis_reference_link{google/cloud/binaryauthorization/v1/service.proto#L167}
  ///
  StatusOr<google::cloud::binaryauthorization::v1::Policy> UpdatePolicy(
      google::cloud::binaryauthorization::v1::UpdatePolicyRequest const&
          request,
      Options opts = {});

  ///
  /// Creates an [attestor][google.cloud.binaryauthorization.v1.Attestor], and
  /// returns a copy of the new
  /// [attestor][google.cloud.binaryauthorization.v1.Attestor]. Returns
  /// NOT_FOUND if the project does not exist, INVALID_ARGUMENT if the request
  /// is malformed, ALREADY_EXISTS if the
  /// [attestor][google.cloud.binaryauthorization.v1.Attestor] already exists.
  ///
  /// @param parent  Required. The parent of this
  /// [attestor][google.cloud.binaryauthorization.v1.Attestor].
  /// @param attestor_id  Required. The
  /// [attestors][google.cloud.binaryauthorization.v1.Attestor] ID.
  /// @param attestor  Required. The initial
  /// [attestor][google.cloud.binaryauthorization.v1.Attestor] value. The
  /// service will
  ///  overwrite the [attestor
  ///  name][google.cloud.binaryauthorization.v1.Attestor.name] field with the
  ///  resource name, in the format `projects/*/attestors/*`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::binaryauthorization::v1::Attestor,google/cloud/binaryauthorization/v1/resources.proto#L168}
  ///
  /// [google.cloud.binaryauthorization.v1.Attestor]:
  /// @googleapis_reference_link{google/cloud/binaryauthorization/v1/resources.proto#L168}
  /// [google.cloud.binaryauthorization.v1.CreateAttestorRequest]:
  /// @googleapis_reference_link{google/cloud/binaryauthorization/v1/service.proto#L175}
  ///
  StatusOr<google::cloud::binaryauthorization::v1::Attestor> CreateAttestor(
      std::string const& parent, std::string const& attestor_id,
      google::cloud::binaryauthorization::v1::Attestor const& attestor,
      Options opts = {});

  ///
  /// Creates an [attestor][google.cloud.binaryauthorization.v1.Attestor], and
  /// returns a copy of the new
  /// [attestor][google.cloud.binaryauthorization.v1.Attestor]. Returns
  /// NOT_FOUND if the project does not exist, INVALID_ARGUMENT if the request
  /// is malformed, ALREADY_EXISTS if the
  /// [attestor][google.cloud.binaryauthorization.v1.Attestor] already exists.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::binaryauthorization::v1::CreateAttestorRequest,google/cloud/binaryauthorization/v1/service.proto#L175}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::binaryauthorization::v1::Attestor,google/cloud/binaryauthorization/v1/resources.proto#L168}
  ///
  /// [google.cloud.binaryauthorization.v1.Attestor]:
  /// @googleapis_reference_link{google/cloud/binaryauthorization/v1/resources.proto#L168}
  /// [google.cloud.binaryauthorization.v1.CreateAttestorRequest]:
  /// @googleapis_reference_link{google/cloud/binaryauthorization/v1/service.proto#L175}
  ///
  StatusOr<google::cloud::binaryauthorization::v1::Attestor> CreateAttestor(
      google::cloud::binaryauthorization::v1::CreateAttestorRequest const&
          request,
      Options opts = {});

  ///
  /// Gets an [attestor][google.cloud.binaryauthorization.v1.Attestor].
  /// Returns NOT_FOUND if the
  /// [attestor][google.cloud.binaryauthorization.v1.Attestor] does not exist.
  ///
  /// @param name  Required. The name of the
  /// [attestor][google.cloud.binaryauthorization.v1.Attestor] to retrieve, in
  /// the format
  ///  `projects/*/attestors/*`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::binaryauthorization::v1::Attestor,google/cloud/binaryauthorization/v1/resources.proto#L168}
  ///
  /// [google.cloud.binaryauthorization.v1.Attestor]:
  /// @googleapis_reference_link{google/cloud/binaryauthorization/v1/resources.proto#L168}
  /// [google.cloud.binaryauthorization.v1.GetAttestorRequest]:
  /// @googleapis_reference_link{google/cloud/binaryauthorization/v1/service.proto#L194}
  ///
  StatusOr<google::cloud::binaryauthorization::v1::Attestor> GetAttestor(
      std::string const& name, Options opts = {});

  ///
  /// Gets an [attestor][google.cloud.binaryauthorization.v1.Attestor].
  /// Returns NOT_FOUND if the
  /// [attestor][google.cloud.binaryauthorization.v1.Attestor] does not exist.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::binaryauthorization::v1::GetAttestorRequest,google/cloud/binaryauthorization/v1/service.proto#L194}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::binaryauthorization::v1::Attestor,google/cloud/binaryauthorization/v1/resources.proto#L168}
  ///
  /// [google.cloud.binaryauthorization.v1.Attestor]:
  /// @googleapis_reference_link{google/cloud/binaryauthorization/v1/resources.proto#L168}
  /// [google.cloud.binaryauthorization.v1.GetAttestorRequest]:
  /// @googleapis_reference_link{google/cloud/binaryauthorization/v1/service.proto#L194}
  ///
  StatusOr<google::cloud::binaryauthorization::v1::Attestor> GetAttestor(
      google::cloud::binaryauthorization::v1::GetAttestorRequest const& request,
      Options opts = {});

  ///
  /// Updates an [attestor][google.cloud.binaryauthorization.v1.Attestor].
  /// Returns NOT_FOUND if the
  /// [attestor][google.cloud.binaryauthorization.v1.Attestor] does not exist.
  ///
  /// @param attestor  Required. The updated
  /// [attestor][google.cloud.binaryauthorization.v1.Attestor] value. The
  /// service will
  ///  overwrite the [attestor
  ///  name][google.cloud.binaryauthorization.v1.Attestor.name] field with the
  ///  resource name in the request URL, in the format `projects/*/attestors/*`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::binaryauthorization::v1::Attestor,google/cloud/binaryauthorization/v1/resources.proto#L168}
  ///
  /// [google.cloud.binaryauthorization.v1.Attestor]:
  /// @googleapis_reference_link{google/cloud/binaryauthorization/v1/resources.proto#L168}
  /// [google.cloud.binaryauthorization.v1.UpdateAttestorRequest]:
  /// @googleapis_reference_link{google/cloud/binaryauthorization/v1/service.proto#L206}
  ///
  StatusOr<google::cloud::binaryauthorization::v1::Attestor> UpdateAttestor(
      google::cloud::binaryauthorization::v1::Attestor const& attestor,
      Options opts = {});

  ///
  /// Updates an [attestor][google.cloud.binaryauthorization.v1.Attestor].
  /// Returns NOT_FOUND if the
  /// [attestor][google.cloud.binaryauthorization.v1.Attestor] does not exist.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::binaryauthorization::v1::UpdateAttestorRequest,google/cloud/binaryauthorization/v1/service.proto#L206}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::binaryauthorization::v1::Attestor,google/cloud/binaryauthorization/v1/resources.proto#L168}
  ///
  /// [google.cloud.binaryauthorization.v1.Attestor]:
  /// @googleapis_reference_link{google/cloud/binaryauthorization/v1/resources.proto#L168}
  /// [google.cloud.binaryauthorization.v1.UpdateAttestorRequest]:
  /// @googleapis_reference_link{google/cloud/binaryauthorization/v1/service.proto#L206}
  ///
  StatusOr<google::cloud::binaryauthorization::v1::Attestor> UpdateAttestor(
      google::cloud::binaryauthorization::v1::UpdateAttestorRequest const&
          request,
      Options opts = {});

  ///
  /// Lists [attestors][google.cloud.binaryauthorization.v1.Attestor].
  /// Returns INVALID_ARGUMENT if the project does not exist.
  ///
  /// @param parent  Required. The resource name of the project associated with
  /// the
  ///  [attestors][google.cloud.binaryauthorization.v1.Attestor], in the format
  ///  `projects/*`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::binaryauthorization::v1::Attestor,google/cloud/binaryauthorization/v1/resources.proto#L168}
  ///
  /// [google.cloud.binaryauthorization.v1.Attestor]:
  /// @googleapis_reference_link{google/cloud/binaryauthorization/v1/resources.proto#L168}
  /// [google.cloud.binaryauthorization.v1.ListAttestorsRequest]:
  /// @googleapis_reference_link{google/cloud/binaryauthorization/v1/service.proto#L214}
  ///
  StreamRange<google::cloud::binaryauthorization::v1::Attestor> ListAttestors(
      std::string const& parent, Options opts = {});

  ///
  /// Lists [attestors][google.cloud.binaryauthorization.v1.Attestor].
  /// Returns INVALID_ARGUMENT if the project does not exist.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::binaryauthorization::v1::ListAttestorsRequest,google/cloud/binaryauthorization/v1/service.proto#L214}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::binaryauthorization::v1::Attestor,google/cloud/binaryauthorization/v1/resources.proto#L168}
  ///
  /// [google.cloud.binaryauthorization.v1.Attestor]:
  /// @googleapis_reference_link{google/cloud/binaryauthorization/v1/resources.proto#L168}
  /// [google.cloud.binaryauthorization.v1.ListAttestorsRequest]:
  /// @googleapis_reference_link{google/cloud/binaryauthorization/v1/service.proto#L214}
  ///
  StreamRange<google::cloud::binaryauthorization::v1::Attestor> ListAttestors(
      google::cloud::binaryauthorization::v1::ListAttestorsRequest request,
      Options opts = {});

  ///
  /// Deletes an [attestor][google.cloud.binaryauthorization.v1.Attestor].
  /// Returns NOT_FOUND if the
  /// [attestor][google.cloud.binaryauthorization.v1.Attestor] does not exist.
  ///
  /// @param name  Required. The name of the
  /// [attestors][google.cloud.binaryauthorization.v1.Attestor] to delete, in
  /// the format
  ///  `projects/*/attestors/*`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  ///
  /// [google.cloud.binaryauthorization.v1.Attestor]:
  /// @googleapis_reference_link{google/cloud/binaryauthorization/v1/resources.proto#L168}
  /// [google.cloud.binaryauthorization.v1.DeleteAttestorRequest]:
  /// @googleapis_reference_link{google/cloud/binaryauthorization/v1/service.proto#L246}
  ///
  Status DeleteAttestor(std::string const& name, Options opts = {});

  ///
  /// Deletes an [attestor][google.cloud.binaryauthorization.v1.Attestor].
  /// Returns NOT_FOUND if the
  /// [attestor][google.cloud.binaryauthorization.v1.Attestor] does not exist.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::binaryauthorization::v1::DeleteAttestorRequest,google/cloud/binaryauthorization/v1/service.proto#L246}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  ///
  /// [google.cloud.binaryauthorization.v1.Attestor]:
  /// @googleapis_reference_link{google/cloud/binaryauthorization/v1/resources.proto#L168}
  /// [google.cloud.binaryauthorization.v1.DeleteAttestorRequest]:
  /// @googleapis_reference_link{google/cloud/binaryauthorization/v1/service.proto#L246}
  ///
  Status DeleteAttestor(
      google::cloud::binaryauthorization::v1::DeleteAttestorRequest const&
          request,
      Options opts = {});

 private:
  std::shared_ptr<BinauthzManagementServiceV1Connection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace binaryauthorization
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BINARYAUTHORIZATION_BINAUTHZ_MANAGEMENT_SERVICE_V1_CLIENT_H
