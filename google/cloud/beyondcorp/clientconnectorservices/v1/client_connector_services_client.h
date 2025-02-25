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
// google/cloud/beyondcorp/clientconnectorservices/v1/client_connector_services_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BEYONDCORP_CLIENTCONNECTORSERVICES_V1_CLIENT_CONNECTOR_SERVICES_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BEYONDCORP_CLIENTCONNECTORSERVICES_V1_CLIENT_CONNECTOR_SERVICES_CLIENT_H

#include "google/cloud/beyondcorp/clientconnectorservices/v1/client_connector_services_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace beyondcorp_clientconnectorservices_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// API Overview:
///
/// The `beyondcorp.googleapis.com` service implements the Google Cloud
/// BeyondCorp API.
///
/// Data Model:
///
/// The ClientConnectorServicesService exposes the following resources:
///
/// * Client Connector Services, named as follows:
///   `projects/{project_id}/locations/{location_id}/client_connector_services/{client_connector_service_id}`.
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
class ClientConnectorServicesServiceClient {
 public:
  explicit ClientConnectorServicesServiceClient(
      std::shared_ptr<ClientConnectorServicesServiceConnection> connection,
      Options opts = {});
  ~ClientConnectorServicesServiceClient();

  ///@{
  /// @name Copy and move support
  ClientConnectorServicesServiceClient(
      ClientConnectorServicesServiceClient const&) = default;
  ClientConnectorServicesServiceClient& operator=(
      ClientConnectorServicesServiceClient const&) = default;
  ClientConnectorServicesServiceClient(ClientConnectorServicesServiceClient&&) =
      default;
  ClientConnectorServicesServiceClient& operator=(
      ClientConnectorServicesServiceClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(ClientConnectorServicesServiceClient const& a,
                         ClientConnectorServicesServiceClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(ClientConnectorServicesServiceClient const& a,
                         ClientConnectorServicesServiceClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Lists ClientConnectorServices in a given project and location.
  ///
  /// @param parent  Required. Parent value for ListClientConnectorServicesRequest.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return a [StreamRange](@ref google::cloud::StreamRange)
  ///     to iterate of the results. See the documentation of this type for
  ///     details. In brief, this class has `begin()` and `end()` member
  ///     functions returning a iterator class meeting the
  ///     [input iterator requirements]. The value type for this iterator is a
  ///     [`StatusOr`] as the iteration may fail even after some values are
  ///     retrieved successfully, for example, if there is a network disconnect.
  ///     An empty set of results does not indicate an error, it indicates
  ///     that there are no resources meeting the request criteria.
  ///     On a successful iteration the `StatusOr<T>` contains elements of type
  ///     [google.cloud.beyondcorp.clientconnectorservices.v1.ClientConnectorService], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.beyondcorp.clientconnectorservices.v1.ClientConnectorService]: @googleapis_reference_link{google/cloud/beyondcorp/clientconnectorservices/v1/client_connector_services_service.proto#L114}
  /// [google.cloud.beyondcorp.clientconnectorservices.v1.ListClientConnectorServicesRequest]: @googleapis_reference_link{google/cloud/beyondcorp/clientconnectorservices/v1/client_connector_services_service.proto#L234}
  ///
  // clang-format on
  StreamRange<google::cloud::beyondcorp::clientconnectorservices::v1::
                  ClientConnectorService>
  ListClientConnectorServices(std::string const& parent, Options opts = {});

  // clang-format off
  ///
  /// Lists ClientConnectorServices in a given project and location.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.beyondcorp.clientconnectorservices.v1.ListClientConnectorServicesRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return a [StreamRange](@ref google::cloud::StreamRange)
  ///     to iterate of the results. See the documentation of this type for
  ///     details. In brief, this class has `begin()` and `end()` member
  ///     functions returning a iterator class meeting the
  ///     [input iterator requirements]. The value type for this iterator is a
  ///     [`StatusOr`] as the iteration may fail even after some values are
  ///     retrieved successfully, for example, if there is a network disconnect.
  ///     An empty set of results does not indicate an error, it indicates
  ///     that there are no resources meeting the request criteria.
  ///     On a successful iteration the `StatusOr<T>` contains elements of type
  ///     [google.cloud.beyondcorp.clientconnectorservices.v1.ClientConnectorService], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.beyondcorp.clientconnectorservices.v1.ClientConnectorService]: @googleapis_reference_link{google/cloud/beyondcorp/clientconnectorservices/v1/client_connector_services_service.proto#L114}
  /// [google.cloud.beyondcorp.clientconnectorservices.v1.ListClientConnectorServicesRequest]: @googleapis_reference_link{google/cloud/beyondcorp/clientconnectorservices/v1/client_connector_services_service.proto#L234}
  ///
  // clang-format on
  StreamRange<google::cloud::beyondcorp::clientconnectorservices::v1::
                  ClientConnectorService>
  ListClientConnectorServices(
      google::cloud::beyondcorp::clientconnectorservices::v1::
          ListClientConnectorServicesRequest request,
      Options opts = {});

  // clang-format off
  ///
  /// Gets details of a single ClientConnectorService.
  ///
  /// @param name  Required. Name of the resource.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.beyondcorp.clientconnectorservices.v1.ClientConnectorService])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.beyondcorp.clientconnectorservices.v1.ClientConnectorService]: @googleapis_reference_link{google/cloud/beyondcorp/clientconnectorservices/v1/client_connector_services_service.proto#L114}
  /// [google.cloud.beyondcorp.clientconnectorservices.v1.GetClientConnectorServiceRequest]: @googleapis_reference_link{google/cloud/beyondcorp/clientconnectorservices/v1/client_connector_services_service.proto#L270}
  ///
  // clang-format on
  StatusOr<google::cloud::beyondcorp::clientconnectorservices::v1::
               ClientConnectorService>
  GetClientConnectorService(std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Gets details of a single ClientConnectorService.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.beyondcorp.clientconnectorservices.v1.GetClientConnectorServiceRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.beyondcorp.clientconnectorservices.v1.ClientConnectorService])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.beyondcorp.clientconnectorservices.v1.ClientConnectorService]: @googleapis_reference_link{google/cloud/beyondcorp/clientconnectorservices/v1/client_connector_services_service.proto#L114}
  /// [google.cloud.beyondcorp.clientconnectorservices.v1.GetClientConnectorServiceRequest]: @googleapis_reference_link{google/cloud/beyondcorp/clientconnectorservices/v1/client_connector_services_service.proto#L270}
  ///
  // clang-format on
  StatusOr<google::cloud::beyondcorp::clientconnectorservices::v1::
               ClientConnectorService>
  GetClientConnectorService(
      google::cloud::beyondcorp::clientconnectorservices::v1::
          GetClientConnectorServiceRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Creates a new ClientConnectorService in a given project and location.
  ///
  /// @param parent  Required. Value for parent.
  /// @param client_connector_service  Required. The resource being created.
  /// @param client_connector_service_id  Optional. User-settable client connector service resource ID.
  ///   * Must start with a letter.
  ///   * Must contain between 4-63 characters from `/[a-z][0-9]-/`.
  ///   * Must end with a number or a letter.
  ///  @n
  ///  A random system generated name will be assigned
  ///  if not specified by the user.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.beyondcorp.clientconnectorservices.v1.ClientConnectorService] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.beyondcorp.clientconnectorservices.v1.ClientConnectorService]: @googleapis_reference_link{google/cloud/beyondcorp/clientconnectorservices/v1/client_connector_services_service.proto#L114}
  /// [google.cloud.beyondcorp.clientconnectorservices.v1.CreateClientConnectorServiceRequest]: @googleapis_reference_link{google/cloud/beyondcorp/clientconnectorservices/v1/client_connector_services_service.proto#L281}
  ///
  // clang-format on
  future<StatusOr<google::cloud::beyondcorp::clientconnectorservices::v1::
                      ClientConnectorService>>
  CreateClientConnectorService(
      std::string const& parent,
      google::cloud::beyondcorp::clientconnectorservices::v1::
          ClientConnectorService const& client_connector_service,
      std::string const& client_connector_service_id, Options opts = {});

  // clang-format off
  ///
  /// Creates a new ClientConnectorService in a given project and location.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.beyondcorp.clientconnectorservices.v1.CreateClientConnectorServiceRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.beyondcorp.clientconnectorservices.v1.ClientConnectorService] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.beyondcorp.clientconnectorservices.v1.ClientConnectorService]: @googleapis_reference_link{google/cloud/beyondcorp/clientconnectorservices/v1/client_connector_services_service.proto#L114}
  /// [google.cloud.beyondcorp.clientconnectorservices.v1.CreateClientConnectorServiceRequest]: @googleapis_reference_link{google/cloud/beyondcorp/clientconnectorservices/v1/client_connector_services_service.proto#L281}
  ///
  // clang-format on
  future<StatusOr<google::cloud::beyondcorp::clientconnectorservices::v1::
                      ClientConnectorService>>
  CreateClientConnectorService(
      google::cloud::beyondcorp::clientconnectorservices::v1::
          CreateClientConnectorServiceRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Updates the parameters of a single ClientConnectorService.
  ///
  /// @param client_connector_service  Required. The resource being updated.
  /// @param update_mask  Required. Field mask is used to specify the fields to be overwritten in the
  ///  ClientConnectorService resource by the update.
  ///  The fields specified in the update_mask are relative to the resource, not
  ///  the full request. A field will be overwritten if it is in the mask. If the
  ///  user does not provide a mask then all fields will be overwritten.
  ///  @n
  ///  Mutable fields: display_name.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.beyondcorp.clientconnectorservices.v1.ClientConnectorService] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.beyondcorp.clientconnectorservices.v1.ClientConnectorService]: @googleapis_reference_link{google/cloud/beyondcorp/clientconnectorservices/v1/client_connector_services_service.proto#L114}
  /// [google.cloud.beyondcorp.clientconnectorservices.v1.UpdateClientConnectorServiceRequest]: @googleapis_reference_link{google/cloud/beyondcorp/clientconnectorservices/v1/client_connector_services_service.proto#L325}
  ///
  // clang-format on
  future<StatusOr<google::cloud::beyondcorp::clientconnectorservices::v1::
                      ClientConnectorService>>
  UpdateClientConnectorService(
      google::cloud::beyondcorp::clientconnectorservices::v1::
          ClientConnectorService const& client_connector_service,
      google::protobuf::FieldMask const& update_mask, Options opts = {});

  // clang-format off
  ///
  /// Updates the parameters of a single ClientConnectorService.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.beyondcorp.clientconnectorservices.v1.UpdateClientConnectorServiceRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.beyondcorp.clientconnectorservices.v1.ClientConnectorService] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.beyondcorp.clientconnectorservices.v1.ClientConnectorService]: @googleapis_reference_link{google/cloud/beyondcorp/clientconnectorservices/v1/client_connector_services_service.proto#L114}
  /// [google.cloud.beyondcorp.clientconnectorservices.v1.UpdateClientConnectorServiceRequest]: @googleapis_reference_link{google/cloud/beyondcorp/clientconnectorservices/v1/client_connector_services_service.proto#L325}
  ///
  // clang-format on
  future<StatusOr<google::cloud::beyondcorp::clientconnectorservices::v1::
                      ClientConnectorService>>
  UpdateClientConnectorService(
      google::cloud::beyondcorp::clientconnectorservices::v1::
          UpdateClientConnectorServiceRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Deletes a single ClientConnectorService.
  ///
  /// @param name  Required. Name of the resource.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.beyondcorp.clientconnectorservices.v1.ClientConnectorServiceOperationMetadata] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.beyondcorp.clientconnectorservices.v1.ClientConnectorServiceOperationMetadata]: @googleapis_reference_link{google/cloud/beyondcorp/clientconnectorservices/v1/client_connector_services_service.proto#L394}
  /// [google.cloud.beyondcorp.clientconnectorservices.v1.DeleteClientConnectorServiceRequest]: @googleapis_reference_link{google/cloud/beyondcorp/clientconnectorservices/v1/client_connector_services_service.proto#L364}
  ///
  // clang-format on
  future<StatusOr<google::cloud::beyondcorp::clientconnectorservices::v1::
                      ClientConnectorServiceOperationMetadata>>
  DeleteClientConnectorService(std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Deletes a single ClientConnectorService.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.beyondcorp.clientconnectorservices.v1.DeleteClientConnectorServiceRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.beyondcorp.clientconnectorservices.v1.ClientConnectorServiceOperationMetadata] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.beyondcorp.clientconnectorservices.v1.ClientConnectorServiceOperationMetadata]: @googleapis_reference_link{google/cloud/beyondcorp/clientconnectorservices/v1/client_connector_services_service.proto#L394}
  /// [google.cloud.beyondcorp.clientconnectorservices.v1.DeleteClientConnectorServiceRequest]: @googleapis_reference_link{google/cloud/beyondcorp/clientconnectorservices/v1/client_connector_services_service.proto#L364}
  ///
  // clang-format on
  future<StatusOr<google::cloud::beyondcorp::clientconnectorservices::v1::
                      ClientConnectorServiceOperationMetadata>>
  DeleteClientConnectorService(
      google::cloud::beyondcorp::clientconnectorservices::v1::
          DeleteClientConnectorServiceRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<ClientConnectorServicesServiceConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace beyondcorp_clientconnectorservices_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BEYONDCORP_CLIENTCONNECTORSERVICES_V1_CLIENT_CONNECTOR_SERVICES_CLIENT_H
