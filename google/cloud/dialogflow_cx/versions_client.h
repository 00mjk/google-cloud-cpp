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
// source: google/cloud/dialogflow/cx/v3/version.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_VERSIONS_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_VERSIONS_CLIENT_H

#include "google/cloud/dialogflow_cx/versions_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_cx {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Service for managing [Versions][google.cloud.dialogflow.cx.v3.Version].
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
/// [google.cloud.dialogflow.cx.v3.Version]:
/// @googleapis_link_reference{google/cloud/dialogflow/cx/v3/version.proto#L147}
///
class VersionsClient {
 public:
  explicit VersionsClient(std::shared_ptr<VersionsConnection> connection,
                          Options opts = {});
  ~VersionsClient();

  ///@{
  /// @name Copy and move support
  VersionsClient(VersionsClient const&) = default;
  VersionsClient& operator=(VersionsClient const&) = default;
  VersionsClient(VersionsClient&&) = default;
  VersionsClient& operator=(VersionsClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(VersionsClient const& a, VersionsClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(VersionsClient const& a, VersionsClient const& b) {
    return !(a == b);
  }
  ///@}

  ///
  /// Returns the list of all versions in the specified
  /// [Flow][google.cloud.dialogflow.cx.v3.Flow].
  ///
  /// @param parent  Required. The [Flow][google.cloud.dialogflow.cx.v3.Flow] to
  /// list all
  ///  versions for. Format: `projects/<Project ID>/locations/<Location
  ///  ID>/agents/<Agent ID>/flows/<Flow ID>`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::cx::v3::Version,google/cloud/dialogflow/cx/v3/version.proto#L147}
  ///
  /// [google.cloud.dialogflow.cx.v3.Flow]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/flow.proto#L250}
  /// [google.cloud.dialogflow.cx.v3.ListVersionsRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/version.proto#L194}
  /// [google.cloud.dialogflow.cx.v3.Version]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/version.proto#L147}
  ///
  StreamRange<google::cloud::dialogflow::cx::v3::Version> ListVersions(
      std::string const& parent, Options opts = {});

  ///
  /// Returns the list of all versions in the specified
  /// [Flow][google.cloud.dialogflow.cx.v3.Flow].
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dialogflow::cx::v3::ListVersionsRequest,google/cloud/dialogflow/cx/v3/version.proto#L194}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::cx::v3::Version,google/cloud/dialogflow/cx/v3/version.proto#L147}
  ///
  /// [google.cloud.dialogflow.cx.v3.Flow]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/flow.proto#L250}
  /// [google.cloud.dialogflow.cx.v3.ListVersionsRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/version.proto#L194}
  /// [google.cloud.dialogflow.cx.v3.Version]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/version.proto#L147}
  ///
  StreamRange<google::cloud::dialogflow::cx::v3::Version> ListVersions(
      google::cloud::dialogflow::cx::v3::ListVersionsRequest request,
      Options opts = {});

  ///
  /// Retrieves the specified [Version][google.cloud.dialogflow.cx.v3.Version].
  ///
  /// @param name  Required. The name of the
  /// [Version][google.cloud.dialogflow.cx.v3.Version].
  ///  Format: `projects/<Project ID>/locations/<Location ID>/agents/<Agent
  ///  ID>/flows/<Flow ID>/versions/<Version ID>`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::cx::v3::Version,google/cloud/dialogflow/cx/v3/version.proto#L147}
  ///
  /// [google.cloud.dialogflow.cx.v3.GetVersionRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/version.proto#L228}
  /// [google.cloud.dialogflow.cx.v3.Version]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/version.proto#L147}
  ///
  StatusOr<google::cloud::dialogflow::cx::v3::Version> GetVersion(
      std::string const& name, Options opts = {});

  ///
  /// Retrieves the specified [Version][google.cloud.dialogflow.cx.v3.Version].
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dialogflow::cx::v3::GetVersionRequest,google/cloud/dialogflow/cx/v3/version.proto#L228}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::cx::v3::Version,google/cloud/dialogflow/cx/v3/version.proto#L147}
  ///
  /// [google.cloud.dialogflow.cx.v3.GetVersionRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/version.proto#L228}
  /// [google.cloud.dialogflow.cx.v3.Version]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/version.proto#L147}
  ///
  StatusOr<google::cloud::dialogflow::cx::v3::Version> GetVersion(
      google::cloud::dialogflow::cx::v3::GetVersionRequest const& request,
      Options opts = {});

  ///
  /// Creates a [Version][google.cloud.dialogflow.cx.v3.Version] in the
  /// specified [Flow][google.cloud.dialogflow.cx.v3.Flow].
  ///
  /// This method is a [long-running
  /// operation](https://cloud.google.com/dialogflow/cx/docs/how/long-running-operation).
  /// The returned `Operation` type has the following method-specific fields:
  ///
  /// - `metadata`:
  /// [CreateVersionOperationMetadata][google.cloud.dialogflow.cx.v3.CreateVersionOperationMetadata]
  /// - `response`: [Version][google.cloud.dialogflow.cx.v3.Version]
  ///
  /// @param parent  Required. The [Flow][google.cloud.dialogflow.cx.v3.Flow] to
  /// create an
  ///  [Version][google.cloud.dialogflow.cx.v3.Version] for. Format:
  ///  `projects/<Project ID>/locations/<Location ID>/agents/<Agent
  ///  ID>/flows/<Flow ID>`.
  /// @param version  Required. The version to create.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::cx::v3::Version,google/cloud/dialogflow/cx/v3/version.proto#L147}
  ///
  /// [google.cloud.dialogflow.cx.v3.CreateVersionOperationMetadata]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/version.proto#L137}
  /// [google.cloud.dialogflow.cx.v3.CreateVersionRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/version.proto#L242}
  /// [google.cloud.dialogflow.cx.v3.Flow]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/flow.proto#L250}
  /// [google.cloud.dialogflow.cx.v3.Version]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/version.proto#L147}
  ///
  future<StatusOr<google::cloud::dialogflow::cx::v3::Version>> CreateVersion(
      std::string const& parent,
      google::cloud::dialogflow::cx::v3::Version const& version,
      Options opts = {});

  ///
  /// Creates a [Version][google.cloud.dialogflow.cx.v3.Version] in the
  /// specified [Flow][google.cloud.dialogflow.cx.v3.Flow].
  ///
  /// This method is a [long-running
  /// operation](https://cloud.google.com/dialogflow/cx/docs/how/long-running-operation).
  /// The returned `Operation` type has the following method-specific fields:
  ///
  /// - `metadata`:
  /// [CreateVersionOperationMetadata][google.cloud.dialogflow.cx.v3.CreateVersionOperationMetadata]
  /// - `response`: [Version][google.cloud.dialogflow.cx.v3.Version]
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dialogflow::cx::v3::CreateVersionRequest,google/cloud/dialogflow/cx/v3/version.proto#L242}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::cx::v3::Version,google/cloud/dialogflow/cx/v3/version.proto#L147}
  ///
  /// [google.cloud.dialogflow.cx.v3.CreateVersionOperationMetadata]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/version.proto#L137}
  /// [google.cloud.dialogflow.cx.v3.CreateVersionRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/version.proto#L242}
  /// [google.cloud.dialogflow.cx.v3.Flow]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/flow.proto#L250}
  /// [google.cloud.dialogflow.cx.v3.Version]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/version.proto#L147}
  ///
  future<StatusOr<google::cloud::dialogflow::cx::v3::Version>> CreateVersion(
      google::cloud::dialogflow::cx::v3::CreateVersionRequest const& request,
      Options opts = {});

  ///
  /// Updates the specified [Version][google.cloud.dialogflow.cx.v3.Version].
  ///
  /// @param version  Required. The version to update.
  /// @param update_mask  Required. The mask to control which fields get
  /// updated. Currently only
  ///  `description` and `display_name` can be updated.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::cx::v3::Version,google/cloud/dialogflow/cx/v3/version.proto#L147}
  ///
  /// [google.cloud.dialogflow.cx.v3.UpdateVersionRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/version.proto#L260}
  /// [google.cloud.dialogflow.cx.v3.Version]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/version.proto#L147}
  ///
  StatusOr<google::cloud::dialogflow::cx::v3::Version> UpdateVersion(
      google::cloud::dialogflow::cx::v3::Version const& version,
      google::protobuf::FieldMask const& update_mask, Options opts = {});

  ///
  /// Updates the specified [Version][google.cloud.dialogflow.cx.v3.Version].
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dialogflow::cx::v3::UpdateVersionRequest,google/cloud/dialogflow/cx/v3/version.proto#L260}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::cx::v3::Version,google/cloud/dialogflow/cx/v3/version.proto#L147}
  ///
  /// [google.cloud.dialogflow.cx.v3.UpdateVersionRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/version.proto#L260}
  /// [google.cloud.dialogflow.cx.v3.Version]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/version.proto#L147}
  ///
  StatusOr<google::cloud::dialogflow::cx::v3::Version> UpdateVersion(
      google::cloud::dialogflow::cx::v3::UpdateVersionRequest const& request,
      Options opts = {});

  ///
  /// Deletes the specified [Version][google.cloud.dialogflow.cx.v3.Version].
  ///
  /// @param name  Required. The name of the
  /// [Version][google.cloud.dialogflow.cx.v3.Version]
  ///  to delete. Format: `projects/<Project ID>/locations/<Location
  ///  ID>/agents/<Agent ID>/flows/<Flow ID>/versions/<Version ID>`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  ///
  /// [google.cloud.dialogflow.cx.v3.DeleteVersionRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/version.proto#L272}
  /// [google.cloud.dialogflow.cx.v3.Version]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/version.proto#L147}
  ///
  Status DeleteVersion(std::string const& name, Options opts = {});

  ///
  /// Deletes the specified [Version][google.cloud.dialogflow.cx.v3.Version].
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dialogflow::cx::v3::DeleteVersionRequest,google/cloud/dialogflow/cx/v3/version.proto#L272}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  ///
  /// [google.cloud.dialogflow.cx.v3.DeleteVersionRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/version.proto#L272}
  /// [google.cloud.dialogflow.cx.v3.Version]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/version.proto#L147}
  ///
  Status DeleteVersion(
      google::cloud::dialogflow::cx::v3::DeleteVersionRequest const& request,
      Options opts = {});

  ///
  /// Loads resources in the specified version to the draft flow.
  ///
  /// This method is a [long-running
  /// operation](https://cloud.google.com/dialogflow/cx/docs/how/long-running-operation).
  /// The returned `Operation` type has the following method-specific fields:
  ///
  /// - `metadata`: An empty [Struct
  ///   message](https://developers.google.com/protocol-buffers/docs/reference/google.protobuf#struct)
  /// - `response`: An [Empty
  ///   message](https://developers.google.com/protocol-buffers/docs/reference/google.protobuf#empty)
  ///
  /// @param name  Required. The
  /// [Version][google.cloud.dialogflow.cx.v3.Version] to be loaded
  ///  to draft flow. Format: `projects/<Project ID>/locations/<Location
  ///  ID>/agents/<Agent ID>/flows/<Flow ID>/versions/<Version ID>`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::protobuf::Struct,google/protobuf/struct.proto#L51}
  ///
  /// [google.cloud.dialogflow.cx.v3.LoadVersionRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/version.proto#L286}
  /// [google.protobuf.Struct]:
  /// @googleapis_reference_link{google/protobuf/struct.proto#L51}
  ///
  future<StatusOr<google::protobuf::Struct>> LoadVersion(
      std::string const& name, Options opts = {});

  ///
  /// Loads resources in the specified version to the draft flow.
  ///
  /// This method is a [long-running
  /// operation](https://cloud.google.com/dialogflow/cx/docs/how/long-running-operation).
  /// The returned `Operation` type has the following method-specific fields:
  ///
  /// - `metadata`: An empty [Struct
  ///   message](https://developers.google.com/protocol-buffers/docs/reference/google.protobuf#struct)
  /// - `response`: An [Empty
  ///   message](https://developers.google.com/protocol-buffers/docs/reference/google.protobuf#empty)
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dialogflow::cx::v3::LoadVersionRequest,google/cloud/dialogflow/cx/v3/version.proto#L286}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::protobuf::Struct,google/protobuf/struct.proto#L51}
  ///
  /// [google.cloud.dialogflow.cx.v3.LoadVersionRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/version.proto#L286}
  /// [google.protobuf.Struct]:
  /// @googleapis_reference_link{google/protobuf/struct.proto#L51}
  ///
  future<StatusOr<google::protobuf::Struct>> LoadVersion(
      google::cloud::dialogflow::cx::v3::LoadVersionRequest const& request,
      Options opts = {});

  ///
  /// Compares the specified base version with target version.
  ///
  /// @param base_version  Required. Name of the base flow version to compare
  /// with the target version.
  ///  Use version ID `0` to indicate the draft version of the specified flow.
  ///  Format: `projects/<Project ID>/locations/<Location ID>/agents/
  ///  <Agent ID>/flows/<Flow ID>/versions/<Version ID>`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::cx::v3::CompareVersionsResponse,google/cloud/dialogflow/cx/v3/version.proto#L342}
  ///
  /// [google.cloud.dialogflow.cx.v3.CompareVersionsRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/version.proto#L306}
  /// [google.cloud.dialogflow.cx.v3.CompareVersionsResponse]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/version.proto#L342}
  ///
  StatusOr<google::cloud::dialogflow::cx::v3::CompareVersionsResponse>
  CompareVersions(std::string const& base_version, Options opts = {});

  ///
  /// Compares the specified base version with target version.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dialogflow::cx::v3::CompareVersionsRequest,google/cloud/dialogflow/cx/v3/version.proto#L306}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::cx::v3::CompareVersionsResponse,google/cloud/dialogflow/cx/v3/version.proto#L342}
  ///
  /// [google.cloud.dialogflow.cx.v3.CompareVersionsRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/version.proto#L306}
  /// [google.cloud.dialogflow.cx.v3.CompareVersionsResponse]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/version.proto#L342}
  ///
  StatusOr<google::cloud::dialogflow::cx::v3::CompareVersionsResponse>
  CompareVersions(
      google::cloud::dialogflow::cx::v3::CompareVersionsRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<VersionsConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_VERSIONS_CLIENT_H
