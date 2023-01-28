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
// source: google/cloud/dialogflow/cx/v3/changelog.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_CHANGELOGS_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_CHANGELOGS_CLIENT_H

#include "google/cloud/dialogflow_cx/changelogs_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_cx {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Service for managing [Changelogs][google.cloud.dialogflow.cx.v3.Changelog].
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
/// [google.cloud.dialogflow.cx.v3.Changelog]:
/// @googleapis_link_reference{google/cloud/dialogflow/cx/v3/changelog.proto#L128}
///
class ChangelogsClient {
 public:
  explicit ChangelogsClient(std::shared_ptr<ChangelogsConnection> connection,
                            Options opts = {});
  ~ChangelogsClient();

  ///@{
  /// @name Copy and move support
  ChangelogsClient(ChangelogsClient const&) = default;
  ChangelogsClient& operator=(ChangelogsClient const&) = default;
  ChangelogsClient(ChangelogsClient&&) = default;
  ChangelogsClient& operator=(ChangelogsClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(ChangelogsClient const& a, ChangelogsClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(ChangelogsClient const& a, ChangelogsClient const& b) {
    return !(a == b);
  }
  ///@}

  ///
  /// Returns the list of Changelogs.
  ///
  /// @param parent  Required. The agent containing the changelogs.
  ///  Format: `projects/<Project ID>/locations/<Location ID>/agents/<Agent
  ///  ID>`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::cx::v3::Changelog,google/cloud/dialogflow/cx/v3/changelog.proto#L128}
  ///
  /// [google.cloud.dialogflow.cx.v3.Changelog]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/changelog.proto#L128}
  /// [google.cloud.dialogflow.cx.v3.ListChangelogsRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/changelog.proto#L60}
  ///
  StreamRange<google::cloud::dialogflow::cx::v3::Changelog> ListChangelogs(
      std::string const& parent, Options opts = {});

  ///
  /// Returns the list of Changelogs.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dialogflow::cx::v3::ListChangelogsRequest,google/cloud/dialogflow/cx/v3/changelog.proto#L60}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::cx::v3::Changelog,google/cloud/dialogflow/cx/v3/changelog.proto#L128}
  ///
  /// [google.cloud.dialogflow.cx.v3.Changelog]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/changelog.proto#L128}
  /// [google.cloud.dialogflow.cx.v3.ListChangelogsRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/changelog.proto#L60}
  ///
  StreamRange<google::cloud::dialogflow::cx::v3::Changelog> ListChangelogs(
      google::cloud::dialogflow::cx::v3::ListChangelogsRequest request,
      Options opts = {});

  ///
  /// Retrieves the specified Changelog.
  ///
  /// @param name  Required. The name of the changelog to get.
  ///  Format: `projects/<Project ID>/locations/<Location ID>/agents/<Agent
  ///  ID>/changelogs/<Changelog ID>`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::cx::v3::Changelog,google/cloud/dialogflow/cx/v3/changelog.proto#L128}
  ///
  /// [google.cloud.dialogflow.cx.v3.Changelog]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/changelog.proto#L128}
  /// [google.cloud.dialogflow.cx.v3.GetChangelogRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/changelog.proto#L115}
  ///
  StatusOr<google::cloud::dialogflow::cx::v3::Changelog> GetChangelog(
      std::string const& name, Options opts = {});

  ///
  /// Retrieves the specified Changelog.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dialogflow::cx::v3::GetChangelogRequest,google/cloud/dialogflow/cx/v3/changelog.proto#L115}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::cx::v3::Changelog,google/cloud/dialogflow/cx/v3/changelog.proto#L128}
  ///
  /// [google.cloud.dialogflow.cx.v3.Changelog]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/changelog.proto#L128}
  /// [google.cloud.dialogflow.cx.v3.GetChangelogRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/changelog.proto#L115}
  ///
  StatusOr<google::cloud::dialogflow::cx::v3::Changelog> GetChangelog(
      google::cloud::dialogflow::cx::v3::GetChangelogRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<ChangelogsConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_CHANGELOGS_CLIENT_H
