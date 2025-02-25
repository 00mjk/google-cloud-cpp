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
// source: google/cloud/kms/v1/service.proto

#include "google/cloud/kms/v1/internal/key_management_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace kms_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

KeyManagementServiceTracingConnection::KeyManagementServiceTracingConnection(
    std::shared_ptr<kms_v1::KeyManagementServiceConnection> child)
    : child_(std::move(child)) {}

StreamRange<google::cloud::kms::v1::KeyRing>
KeyManagementServiceTracingConnection::ListKeyRings(
    google::cloud::kms::v1::ListKeyRingsRequest request) {
  auto span = internal::MakeSpan(
      "kms_v1::KeyManagementServiceConnection::ListKeyRings");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListKeyRings(std::move(request));
  return internal::MakeTracedStreamRange<google::cloud::kms::v1::KeyRing>(
      std::move(span), std::move(sr));
}

StreamRange<google::cloud::kms::v1::CryptoKey>
KeyManagementServiceTracingConnection::ListCryptoKeys(
    google::cloud::kms::v1::ListCryptoKeysRequest request) {
  auto span = internal::MakeSpan(
      "kms_v1::KeyManagementServiceConnection::ListCryptoKeys");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListCryptoKeys(std::move(request));
  return internal::MakeTracedStreamRange<google::cloud::kms::v1::CryptoKey>(
      std::move(span), std::move(sr));
}

StreamRange<google::cloud::kms::v1::CryptoKeyVersion>
KeyManagementServiceTracingConnection::ListCryptoKeyVersions(
    google::cloud::kms::v1::ListCryptoKeyVersionsRequest request) {
  auto span = internal::MakeSpan(
      "kms_v1::KeyManagementServiceConnection::ListCryptoKeyVersions");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListCryptoKeyVersions(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::kms::v1::CryptoKeyVersion>(std::move(span), std::move(sr));
}

StreamRange<google::cloud::kms::v1::ImportJob>
KeyManagementServiceTracingConnection::ListImportJobs(
    google::cloud::kms::v1::ListImportJobsRequest request) {
  auto span = internal::MakeSpan(
      "kms_v1::KeyManagementServiceConnection::ListImportJobs");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListImportJobs(std::move(request));
  return internal::MakeTracedStreamRange<google::cloud::kms::v1::ImportJob>(
      std::move(span), std::move(sr));
}

StatusOr<google::cloud::kms::v1::KeyRing>
KeyManagementServiceTracingConnection::GetKeyRing(
    google::cloud::kms::v1::GetKeyRingRequest const& request) {
  auto span =
      internal::MakeSpan("kms_v1::KeyManagementServiceConnection::GetKeyRing");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetKeyRing(request));
}

StatusOr<google::cloud::kms::v1::CryptoKey>
KeyManagementServiceTracingConnection::GetCryptoKey(
    google::cloud::kms::v1::GetCryptoKeyRequest const& request) {
  auto span = internal::MakeSpan(
      "kms_v1::KeyManagementServiceConnection::GetCryptoKey");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetCryptoKey(request));
}

StatusOr<google::cloud::kms::v1::CryptoKeyVersion>
KeyManagementServiceTracingConnection::GetCryptoKeyVersion(
    google::cloud::kms::v1::GetCryptoKeyVersionRequest const& request) {
  auto span = internal::MakeSpan(
      "kms_v1::KeyManagementServiceConnection::GetCryptoKeyVersion");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetCryptoKeyVersion(request));
}

StatusOr<google::cloud::kms::v1::PublicKey>
KeyManagementServiceTracingConnection::GetPublicKey(
    google::cloud::kms::v1::GetPublicKeyRequest const& request) {
  auto span = internal::MakeSpan(
      "kms_v1::KeyManagementServiceConnection::GetPublicKey");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetPublicKey(request));
}

StatusOr<google::cloud::kms::v1::ImportJob>
KeyManagementServiceTracingConnection::GetImportJob(
    google::cloud::kms::v1::GetImportJobRequest const& request) {
  auto span = internal::MakeSpan(
      "kms_v1::KeyManagementServiceConnection::GetImportJob");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetImportJob(request));
}

StatusOr<google::cloud::kms::v1::KeyRing>
KeyManagementServiceTracingConnection::CreateKeyRing(
    google::cloud::kms::v1::CreateKeyRingRequest const& request) {
  auto span = internal::MakeSpan(
      "kms_v1::KeyManagementServiceConnection::CreateKeyRing");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateKeyRing(request));
}

StatusOr<google::cloud::kms::v1::CryptoKey>
KeyManagementServiceTracingConnection::CreateCryptoKey(
    google::cloud::kms::v1::CreateCryptoKeyRequest const& request) {
  auto span = internal::MakeSpan(
      "kms_v1::KeyManagementServiceConnection::CreateCryptoKey");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateCryptoKey(request));
}

StatusOr<google::cloud::kms::v1::CryptoKeyVersion>
KeyManagementServiceTracingConnection::CreateCryptoKeyVersion(
    google::cloud::kms::v1::CreateCryptoKeyVersionRequest const& request) {
  auto span = internal::MakeSpan(
      "kms_v1::KeyManagementServiceConnection::CreateCryptoKeyVersion");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateCryptoKeyVersion(request));
}

StatusOr<google::cloud::kms::v1::CryptoKeyVersion>
KeyManagementServiceTracingConnection::ImportCryptoKeyVersion(
    google::cloud::kms::v1::ImportCryptoKeyVersionRequest const& request) {
  auto span = internal::MakeSpan(
      "kms_v1::KeyManagementServiceConnection::ImportCryptoKeyVersion");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->ImportCryptoKeyVersion(request));
}

StatusOr<google::cloud::kms::v1::ImportJob>
KeyManagementServiceTracingConnection::CreateImportJob(
    google::cloud::kms::v1::CreateImportJobRequest const& request) {
  auto span = internal::MakeSpan(
      "kms_v1::KeyManagementServiceConnection::CreateImportJob");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateImportJob(request));
}

StatusOr<google::cloud::kms::v1::CryptoKey>
KeyManagementServiceTracingConnection::UpdateCryptoKey(
    google::cloud::kms::v1::UpdateCryptoKeyRequest const& request) {
  auto span = internal::MakeSpan(
      "kms_v1::KeyManagementServiceConnection::UpdateCryptoKey");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateCryptoKey(request));
}

StatusOr<google::cloud::kms::v1::CryptoKeyVersion>
KeyManagementServiceTracingConnection::UpdateCryptoKeyVersion(
    google::cloud::kms::v1::UpdateCryptoKeyVersionRequest const& request) {
  auto span = internal::MakeSpan(
      "kms_v1::KeyManagementServiceConnection::UpdateCryptoKeyVersion");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateCryptoKeyVersion(request));
}

StatusOr<google::cloud::kms::v1::CryptoKey>
KeyManagementServiceTracingConnection::UpdateCryptoKeyPrimaryVersion(
    google::cloud::kms::v1::UpdateCryptoKeyPrimaryVersionRequest const&
        request) {
  auto span = internal::MakeSpan(
      "kms_v1::KeyManagementServiceConnection::UpdateCryptoKeyPrimaryVersion");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span,
                           child_->UpdateCryptoKeyPrimaryVersion(request));
}

StatusOr<google::cloud::kms::v1::CryptoKeyVersion>
KeyManagementServiceTracingConnection::DestroyCryptoKeyVersion(
    google::cloud::kms::v1::DestroyCryptoKeyVersionRequest const& request) {
  auto span = internal::MakeSpan(
      "kms_v1::KeyManagementServiceConnection::DestroyCryptoKeyVersion");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DestroyCryptoKeyVersion(request));
}

StatusOr<google::cloud::kms::v1::CryptoKeyVersion>
KeyManagementServiceTracingConnection::RestoreCryptoKeyVersion(
    google::cloud::kms::v1::RestoreCryptoKeyVersionRequest const& request) {
  auto span = internal::MakeSpan(
      "kms_v1::KeyManagementServiceConnection::RestoreCryptoKeyVersion");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->RestoreCryptoKeyVersion(request));
}

StatusOr<google::cloud::kms::v1::EncryptResponse>
KeyManagementServiceTracingConnection::Encrypt(
    google::cloud::kms::v1::EncryptRequest const& request) {
  auto span =
      internal::MakeSpan("kms_v1::KeyManagementServiceConnection::Encrypt");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->Encrypt(request));
}

StatusOr<google::cloud::kms::v1::DecryptResponse>
KeyManagementServiceTracingConnection::Decrypt(
    google::cloud::kms::v1::DecryptRequest const& request) {
  auto span =
      internal::MakeSpan("kms_v1::KeyManagementServiceConnection::Decrypt");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->Decrypt(request));
}

StatusOr<google::cloud::kms::v1::RawEncryptResponse>
KeyManagementServiceTracingConnection::RawEncrypt(
    google::cloud::kms::v1::RawEncryptRequest const& request) {
  auto span =
      internal::MakeSpan("kms_v1::KeyManagementServiceConnection::RawEncrypt");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->RawEncrypt(request));
}

StatusOr<google::cloud::kms::v1::RawDecryptResponse>
KeyManagementServiceTracingConnection::RawDecrypt(
    google::cloud::kms::v1::RawDecryptRequest const& request) {
  auto span =
      internal::MakeSpan("kms_v1::KeyManagementServiceConnection::RawDecrypt");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->RawDecrypt(request));
}

StatusOr<google::cloud::kms::v1::AsymmetricSignResponse>
KeyManagementServiceTracingConnection::AsymmetricSign(
    google::cloud::kms::v1::AsymmetricSignRequest const& request) {
  auto span = internal::MakeSpan(
      "kms_v1::KeyManagementServiceConnection::AsymmetricSign");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->AsymmetricSign(request));
}

StatusOr<google::cloud::kms::v1::AsymmetricDecryptResponse>
KeyManagementServiceTracingConnection::AsymmetricDecrypt(
    google::cloud::kms::v1::AsymmetricDecryptRequest const& request) {
  auto span = internal::MakeSpan(
      "kms_v1::KeyManagementServiceConnection::AsymmetricDecrypt");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->AsymmetricDecrypt(request));
}

StatusOr<google::cloud::kms::v1::MacSignResponse>
KeyManagementServiceTracingConnection::MacSign(
    google::cloud::kms::v1::MacSignRequest const& request) {
  auto span =
      internal::MakeSpan("kms_v1::KeyManagementServiceConnection::MacSign");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->MacSign(request));
}

StatusOr<google::cloud::kms::v1::MacVerifyResponse>
KeyManagementServiceTracingConnection::MacVerify(
    google::cloud::kms::v1::MacVerifyRequest const& request) {
  auto span =
      internal::MakeSpan("kms_v1::KeyManagementServiceConnection::MacVerify");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->MacVerify(request));
}

StatusOr<google::cloud::kms::v1::GenerateRandomBytesResponse>
KeyManagementServiceTracingConnection::GenerateRandomBytes(
    google::cloud::kms::v1::GenerateRandomBytesRequest const& request) {
  auto span = internal::MakeSpan(
      "kms_v1::KeyManagementServiceConnection::GenerateRandomBytes");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GenerateRandomBytes(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<kms_v1::KeyManagementServiceConnection>
MakeKeyManagementServiceTracingConnection(
    std::shared_ptr<kms_v1::KeyManagementServiceConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<KeyManagementServiceTracingConnection>(
        std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace kms_v1_internal
}  // namespace cloud
}  // namespace google
