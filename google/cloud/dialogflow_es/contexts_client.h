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
// source: google/cloud/dialogflow/v2/context.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_CONTEXTS_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_CONTEXTS_CLIENT_H

#include "google/cloud/dialogflow_es/contexts_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_es {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Service for managing [Contexts][google.cloud.dialogflow.v2.Context].
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
/// [google.cloud.dialogflow.v2.Context]:
/// @googleapis_link_reference{google/cloud/dialogflow/v2/context.proto#L171}
///
class ContextsClient {
 public:
  explicit ContextsClient(std::shared_ptr<ContextsConnection> connection,
                          Options opts = {});
  ~ContextsClient();

  ///@{
  /// @name Copy and move support
  ContextsClient(ContextsClient const&) = default;
  ContextsClient& operator=(ContextsClient const&) = default;
  ContextsClient(ContextsClient&&) = default;
  ContextsClient& operator=(ContextsClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(ContextsClient const& a, ContextsClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(ContextsClient const& a, ContextsClient const& b) {
    return !(a == b);
  }
  ///@}

  ///
  /// Returns the list of all contexts in the specified session.
  ///
  /// @param parent  Required. The session to list all contexts from.
  ///  Format: `projects/<Project ID>/agent/sessions/<Session ID>` or
  ///  `projects/<Project ID>/agent/environments/<Environment ID>/users/<User
  ///  ID>/sessions/<Session ID>`.
  ///  If `Environment ID` is not specified, we assume default 'draft'
  ///  environment. If `User ID` is not specified, we assume default '-' user.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::v2::Context,google/cloud/dialogflow/v2/context.proto#L171}
  ///
  /// [google.cloud.dialogflow.v2.Context]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/context.proto#L171}
  /// [google.cloud.dialogflow.v2.ListContextsRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/context.proto#L227}
  ///
  StreamRange<google::cloud::dialogflow::v2::Context> ListContexts(
      std::string const& parent, Options opts = {});

  ///
  /// Returns the list of all contexts in the specified session.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dialogflow::v2::ListContextsRequest,google/cloud/dialogflow/v2/context.proto#L227}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::v2::Context,google/cloud/dialogflow/v2/context.proto#L171}
  ///
  /// [google.cloud.dialogflow.v2.Context]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/context.proto#L171}
  /// [google.cloud.dialogflow.v2.ListContextsRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/context.proto#L227}
  ///
  StreamRange<google::cloud::dialogflow::v2::Context> ListContexts(
      google::cloud::dialogflow::v2::ListContextsRequest request,
      Options opts = {});

  ///
  /// Retrieves the specified context.
  ///
  /// @param name  Required. The name of the context. Format:
  ///  @code
  ///  projects/<Project ID>/agent/sessions/<Session ID>/contexts/<Context ID>
  ///  @endcode
  ///  or
  ///  @code
  ///  projects/<Project ID>/agent/environments/<Environment ID>/users/<User
  ///  ID>/sessions/<Session ID>/contexts/<Context ID>`
  ///  @endcode
  ///  If `Environment ID` is not specified, we assume default 'draft'
  ///  environment. If `User ID` is not specified, we assume default '-' user.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::v2::Context,google/cloud/dialogflow/v2/context.proto#L171}
  ///
  /// [google.cloud.dialogflow.v2.Context]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/context.proto#L171}
  /// [google.cloud.dialogflow.v2.GetContextRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/context.proto#L263}
  ///
  StatusOr<google::cloud::dialogflow::v2::Context> GetContext(
      std::string const& name, Options opts = {});

  ///
  /// Retrieves the specified context.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dialogflow::v2::GetContextRequest,google/cloud/dialogflow/v2/context.proto#L263}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::v2::Context,google/cloud/dialogflow/v2/context.proto#L171}
  ///
  /// [google.cloud.dialogflow.v2.Context]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/context.proto#L171}
  /// [google.cloud.dialogflow.v2.GetContextRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/context.proto#L263}
  ///
  StatusOr<google::cloud::dialogflow::v2::Context> GetContext(
      google::cloud::dialogflow::v2::GetContextRequest const& request,
      Options opts = {});

  ///
  /// Creates a context.
  ///
  /// If the specified context already exists, overrides the context.
  ///
  /// @param parent  Required. The session to create a context for.
  ///  Format: `projects/<Project ID>/agent/sessions/<Session ID>` or
  ///  `projects/<Project ID>/agent/environments/<Environment ID>/users/<User
  ///  ID>/sessions/<Session ID>`.
  ///  If `Environment ID` is not specified, we assume default 'draft'
  ///  environment. If `User ID` is not specified, we assume default '-' user.
  /// @param context  Required. The context to create.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::v2::Context,google/cloud/dialogflow/v2/context.proto#L171}
  ///
  /// [google.cloud.dialogflow.v2.Context]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/context.proto#L171}
  /// [google.cloud.dialogflow.v2.CreateContextRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/context.proto#L280}
  ///
  StatusOr<google::cloud::dialogflow::v2::Context> CreateContext(
      std::string const& parent,
      google::cloud::dialogflow::v2::Context const& context, Options opts = {});

  ///
  /// Creates a context.
  ///
  /// If the specified context already exists, overrides the context.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dialogflow::v2::CreateContextRequest,google/cloud/dialogflow/v2/context.proto#L280}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::v2::Context,google/cloud/dialogflow/v2/context.proto#L171}
  ///
  /// [google.cloud.dialogflow.v2.Context]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/context.proto#L171}
  /// [google.cloud.dialogflow.v2.CreateContextRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/context.proto#L280}
  ///
  StatusOr<google::cloud::dialogflow::v2::Context> CreateContext(
      google::cloud::dialogflow::v2::CreateContextRequest const& request,
      Options opts = {});

  ///
  /// Updates the specified context.
  ///
  /// @param context  Required. The context to update.
  /// @param update_mask  Optional. The mask to control which fields get
  /// updated.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::v2::Context,google/cloud/dialogflow/v2/context.proto#L171}
  ///
  /// [google.cloud.dialogflow.v2.Context]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/context.proto#L171}
  /// [google.cloud.dialogflow.v2.UpdateContextRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/context.proto#L300}
  ///
  StatusOr<google::cloud::dialogflow::v2::Context> UpdateContext(
      google::cloud::dialogflow::v2::Context const& context,
      google::protobuf::FieldMask const& update_mask, Options opts = {});

  ///
  /// Updates the specified context.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dialogflow::v2::UpdateContextRequest,google/cloud/dialogflow/v2/context.proto#L300}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::v2::Context,google/cloud/dialogflow/v2/context.proto#L171}
  ///
  /// [google.cloud.dialogflow.v2.Context]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/context.proto#L171}
  /// [google.cloud.dialogflow.v2.UpdateContextRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/context.proto#L300}
  ///
  StatusOr<google::cloud::dialogflow::v2::Context> UpdateContext(
      google::cloud::dialogflow::v2::UpdateContextRequest const& request,
      Options opts = {});

  ///
  /// Deletes the specified context.
  ///
  /// @param name  Required. The name of the context to delete. Format:
  ///  @code
  ///  projects/<Project ID>/agent/sessions/<Session ID>/contexts/<Context ID>
  ///  @endcode
  ///  or
  ///  @code
  ///  projects/<Project ID>/agent/environments/<Environment ID>/users/<User
  ///  ID>/sessions/<Session ID>/contexts/<Context ID>`
  ///  @endcode
  ///  If `Environment ID` is not specified, we assume default 'draft'
  ///  environment. If `User ID` is not specified, we assume default '-' user.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  ///
  /// [google.cloud.dialogflow.v2.DeleteContextRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/context.proto#L311}
  ///
  Status DeleteContext(std::string const& name, Options opts = {});

  ///
  /// Deletes the specified context.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dialogflow::v2::DeleteContextRequest,google/cloud/dialogflow/v2/context.proto#L311}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  ///
  /// [google.cloud.dialogflow.v2.DeleteContextRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/context.proto#L311}
  ///
  Status DeleteContext(
      google::cloud::dialogflow::v2::DeleteContextRequest const& request,
      Options opts = {});

  ///
  /// Deletes all active contexts in the specified session.
  ///
  /// @param parent  Required. The name of the session to delete all contexts
  /// from. Format:
  ///  @code
  ///  projects/<Project ID>/agent/sessions/<Session ID>
  ///  @endcode
  ///  or
  ///  @code
  ///  projects/<Project ID>/agent/environments/<Environment ID>/users/<User
  ///  ID>/sessions/<Session ID>
  ///  @endcode
  ///  If `Environment ID` is not specified we assume default 'draft'
  ///  environment. If `User ID` is not specified, we assume default '-' user.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  ///
  /// [google.cloud.dialogflow.v2.DeleteAllContextsRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/context.proto#L328}
  ///
  Status DeleteAllContexts(std::string const& parent, Options opts = {});

  ///
  /// Deletes all active contexts in the specified session.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dialogflow::v2::DeleteAllContextsRequest,google/cloud/dialogflow/v2/context.proto#L328}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  ///
  /// [google.cloud.dialogflow.v2.DeleteAllContextsRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/context.proto#L328}
  ///
  Status DeleteAllContexts(
      google::cloud::dialogflow::v2::DeleteAllContextsRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<ContextsConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_CONTEXTS_CLIENT_H
