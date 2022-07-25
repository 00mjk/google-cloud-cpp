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
// source:
// google/cloud/beyondcorp/appconnections/v1/app_connections_service.proto

#include "google/cloud/beyondcorp/internal/app_connections_option_defaults.h"
#include "google/cloud/beyondcorp/app_connections_connection.h"
#include "google/cloud/beyondcorp/app_connections_options.h"
#include "google/cloud/internal/populate_common_options.h"
#include "google/cloud/internal/populate_grpc_options.h"
#include <memory>

namespace google {
namespace cloud {
namespace beyondcorp_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

namespace {
auto constexpr kBackoffScaling = 2.0;
}  // namespace

Options AppConnectionsServiceDefaultOptions(Options options) {
  options = google::cloud::internal::PopulateCommonOptions(
      std::move(options), "GOOGLE_CLOUD_CPP_APP_CONNECTIONS_SERVICE_ENDPOINT",
      "", "GOOGLE_CLOUD_CPP_APP_CONNECTIONS_SERVICE_AUTHORITY",
      "beyondcorp.googleapis.com");
  options =
      google::cloud::internal::PopulateGrpcOptions(std::move(options), "");
  if (!options.has<beyondcorp::AppConnectionsServiceRetryPolicyOption>()) {
    options.set<beyondcorp::AppConnectionsServiceRetryPolicyOption>(
        beyondcorp::AppConnectionsServiceLimitedTimeRetryPolicy(
            std::chrono::minutes(30))
            .clone());
  }
  if (!options.has<beyondcorp::AppConnectionsServiceBackoffPolicyOption>()) {
    options.set<beyondcorp::AppConnectionsServiceBackoffPolicyOption>(
        ExponentialBackoffPolicy(std::chrono::seconds(1),
                                 std::chrono::minutes(5), kBackoffScaling)
            .clone());
  }
  if (!options.has<beyondcorp::AppConnectionsServicePollingPolicyOption>()) {
    options.set<beyondcorp::AppConnectionsServicePollingPolicyOption>(
        GenericPollingPolicy<
            beyondcorp::AppConnectionsServiceRetryPolicyOption::Type,
            beyondcorp::AppConnectionsServiceBackoffPolicyOption::Type>(
            options.get<beyondcorp::AppConnectionsServiceRetryPolicyOption>()
                ->clone(),
            options.get<beyondcorp::AppConnectionsServiceBackoffPolicyOption>()
                ->clone())
            .clone());
  }
  if (!options
           .has<beyondcorp::
                    AppConnectionsServiceConnectionIdempotencyPolicyOption>()) {
    options.set<
        beyondcorp::AppConnectionsServiceConnectionIdempotencyPolicyOption>(
        beyondcorp::
            MakeDefaultAppConnectionsServiceConnectionIdempotencyPolicy());
  }

  return options;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace beyondcorp_internal
}  // namespace cloud
}  // namespace google
