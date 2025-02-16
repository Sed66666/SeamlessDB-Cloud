// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: opentelemetry/proto/collector/profiles/v1development/profiles_service.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_opentelemetry_2fproto_2fcollector_2fprofiles_2fv1development_2fprofiles_5fservice_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_opentelemetry_2fproto_2fcollector_2fprofiles_2fv1development_2fprofiles_5fservice_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3012000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3012004 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "opentelemetry/proto/profiles/v1development/profiles.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_opentelemetry_2fproto_2fcollector_2fprofiles_2fv1development_2fprofiles_5fservice_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_opentelemetry_2fproto_2fcollector_2fprofiles_2fv1development_2fprofiles_5fservice_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[3]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_opentelemetry_2fproto_2fcollector_2fprofiles_2fv1development_2fprofiles_5fservice_2eproto;
namespace opentelemetry {
namespace proto {
namespace collector {
namespace profiles {
namespace v1development {
class ExportProfilesPartialSuccess;
class ExportProfilesPartialSuccessDefaultTypeInternal;
extern ExportProfilesPartialSuccessDefaultTypeInternal _ExportProfilesPartialSuccess_default_instance_;
class ExportProfilesServiceRequest;
class ExportProfilesServiceRequestDefaultTypeInternal;
extern ExportProfilesServiceRequestDefaultTypeInternal _ExportProfilesServiceRequest_default_instance_;
class ExportProfilesServiceResponse;
class ExportProfilesServiceResponseDefaultTypeInternal;
extern ExportProfilesServiceResponseDefaultTypeInternal _ExportProfilesServiceResponse_default_instance_;
}  // namespace v1development
}  // namespace profiles
}  // namespace collector
}  // namespace proto
}  // namespace opentelemetry
PROTOBUF_NAMESPACE_OPEN
template<> ::opentelemetry::proto::collector::profiles::v1development::ExportProfilesPartialSuccess* Arena::CreateMaybeMessage<::opentelemetry::proto::collector::profiles::v1development::ExportProfilesPartialSuccess>(Arena*);
template<> ::opentelemetry::proto::collector::profiles::v1development::ExportProfilesServiceRequest* Arena::CreateMaybeMessage<::opentelemetry::proto::collector::profiles::v1development::ExportProfilesServiceRequest>(Arena*);
template<> ::opentelemetry::proto::collector::profiles::v1development::ExportProfilesServiceResponse* Arena::CreateMaybeMessage<::opentelemetry::proto::collector::profiles::v1development::ExportProfilesServiceResponse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace opentelemetry {
namespace proto {
namespace collector {
namespace profiles {
namespace v1development {

// ===================================================================

class ExportProfilesServiceRequest PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:opentelemetry.proto.collector.profiles.v1development.ExportProfilesServiceRequest) */ {
 public:
  inline ExportProfilesServiceRequest() : ExportProfilesServiceRequest(nullptr) {};
  virtual ~ExportProfilesServiceRequest();

  ExportProfilesServiceRequest(const ExportProfilesServiceRequest& from);
  ExportProfilesServiceRequest(ExportProfilesServiceRequest&& from) noexcept
    : ExportProfilesServiceRequest() {
    *this = ::std::move(from);
  }

  inline ExportProfilesServiceRequest& operator=(const ExportProfilesServiceRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline ExportProfilesServiceRequest& operator=(ExportProfilesServiceRequest&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const ExportProfilesServiceRequest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ExportProfilesServiceRequest* internal_default_instance() {
    return reinterpret_cast<const ExportProfilesServiceRequest*>(
               &_ExportProfilesServiceRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ExportProfilesServiceRequest& a, ExportProfilesServiceRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(ExportProfilesServiceRequest* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(ExportProfilesServiceRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ExportProfilesServiceRequest* New() const final {
    return CreateMaybeMessage<ExportProfilesServiceRequest>(nullptr);
  }

  ExportProfilesServiceRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ExportProfilesServiceRequest>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ExportProfilesServiceRequest& from);
  void MergeFrom(const ExportProfilesServiceRequest& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(ExportProfilesServiceRequest* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "opentelemetry.proto.collector.profiles.v1development.ExportProfilesServiceRequest";
  }
  protected:
  explicit ExportProfilesServiceRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_opentelemetry_2fproto_2fcollector_2fprofiles_2fv1development_2fprofiles_5fservice_2eproto);
    return ::descriptor_table_opentelemetry_2fproto_2fcollector_2fprofiles_2fv1development_2fprofiles_5fservice_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kResourceProfilesFieldNumber = 1,
  };
  // repeated .opentelemetry.proto.profiles.v1development.ResourceProfiles resource_profiles = 1;
  int resource_profiles_size() const;
  private:
  int _internal_resource_profiles_size() const;
  public:
  void clear_resource_profiles();
  ::opentelemetry::proto::profiles::v1development::ResourceProfiles* mutable_resource_profiles(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::opentelemetry::proto::profiles::v1development::ResourceProfiles >*
      mutable_resource_profiles();
  private:
  const ::opentelemetry::proto::profiles::v1development::ResourceProfiles& _internal_resource_profiles(int index) const;
  ::opentelemetry::proto::profiles::v1development::ResourceProfiles* _internal_add_resource_profiles();
  public:
  const ::opentelemetry::proto::profiles::v1development::ResourceProfiles& resource_profiles(int index) const;
  ::opentelemetry::proto::profiles::v1development::ResourceProfiles* add_resource_profiles();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::opentelemetry::proto::profiles::v1development::ResourceProfiles >&
      resource_profiles() const;

  // @@protoc_insertion_point(class_scope:opentelemetry.proto.collector.profiles.v1development.ExportProfilesServiceRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::opentelemetry::proto::profiles::v1development::ResourceProfiles > resource_profiles_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_opentelemetry_2fproto_2fcollector_2fprofiles_2fv1development_2fprofiles_5fservice_2eproto;
};
// -------------------------------------------------------------------

class ExportProfilesServiceResponse PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:opentelemetry.proto.collector.profiles.v1development.ExportProfilesServiceResponse) */ {
 public:
  inline ExportProfilesServiceResponse() : ExportProfilesServiceResponse(nullptr) {};
  virtual ~ExportProfilesServiceResponse();

  ExportProfilesServiceResponse(const ExportProfilesServiceResponse& from);
  ExportProfilesServiceResponse(ExportProfilesServiceResponse&& from) noexcept
    : ExportProfilesServiceResponse() {
    *this = ::std::move(from);
  }

  inline ExportProfilesServiceResponse& operator=(const ExportProfilesServiceResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline ExportProfilesServiceResponse& operator=(ExportProfilesServiceResponse&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const ExportProfilesServiceResponse& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ExportProfilesServiceResponse* internal_default_instance() {
    return reinterpret_cast<const ExportProfilesServiceResponse*>(
               &_ExportProfilesServiceResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(ExportProfilesServiceResponse& a, ExportProfilesServiceResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(ExportProfilesServiceResponse* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(ExportProfilesServiceResponse* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ExportProfilesServiceResponse* New() const final {
    return CreateMaybeMessage<ExportProfilesServiceResponse>(nullptr);
  }

  ExportProfilesServiceResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ExportProfilesServiceResponse>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ExportProfilesServiceResponse& from);
  void MergeFrom(const ExportProfilesServiceResponse& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(ExportProfilesServiceResponse* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "opentelemetry.proto.collector.profiles.v1development.ExportProfilesServiceResponse";
  }
  protected:
  explicit ExportProfilesServiceResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_opentelemetry_2fproto_2fcollector_2fprofiles_2fv1development_2fprofiles_5fservice_2eproto);
    return ::descriptor_table_opentelemetry_2fproto_2fcollector_2fprofiles_2fv1development_2fprofiles_5fservice_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kPartialSuccessFieldNumber = 1,
  };
  // .opentelemetry.proto.collector.profiles.v1development.ExportProfilesPartialSuccess partial_success = 1;
  bool has_partial_success() const;
  private:
  bool _internal_has_partial_success() const;
  public:
  void clear_partial_success();
  const ::opentelemetry::proto::collector::profiles::v1development::ExportProfilesPartialSuccess& partial_success() const;
  ::opentelemetry::proto::collector::profiles::v1development::ExportProfilesPartialSuccess* release_partial_success();
  ::opentelemetry::proto::collector::profiles::v1development::ExportProfilesPartialSuccess* mutable_partial_success();
  void set_allocated_partial_success(::opentelemetry::proto::collector::profiles::v1development::ExportProfilesPartialSuccess* partial_success);
  private:
  const ::opentelemetry::proto::collector::profiles::v1development::ExportProfilesPartialSuccess& _internal_partial_success() const;
  ::opentelemetry::proto::collector::profiles::v1development::ExportProfilesPartialSuccess* _internal_mutable_partial_success();
  public:
  void unsafe_arena_set_allocated_partial_success(
      ::opentelemetry::proto::collector::profiles::v1development::ExportProfilesPartialSuccess* partial_success);
  ::opentelemetry::proto::collector::profiles::v1development::ExportProfilesPartialSuccess* unsafe_arena_release_partial_success();

  // @@protoc_insertion_point(class_scope:opentelemetry.proto.collector.profiles.v1development.ExportProfilesServiceResponse)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::opentelemetry::proto::collector::profiles::v1development::ExportProfilesPartialSuccess* partial_success_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_opentelemetry_2fproto_2fcollector_2fprofiles_2fv1development_2fprofiles_5fservice_2eproto;
};
// -------------------------------------------------------------------

class ExportProfilesPartialSuccess PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:opentelemetry.proto.collector.profiles.v1development.ExportProfilesPartialSuccess) */ {
 public:
  inline ExportProfilesPartialSuccess() : ExportProfilesPartialSuccess(nullptr) {};
  virtual ~ExportProfilesPartialSuccess();

  ExportProfilesPartialSuccess(const ExportProfilesPartialSuccess& from);
  ExportProfilesPartialSuccess(ExportProfilesPartialSuccess&& from) noexcept
    : ExportProfilesPartialSuccess() {
    *this = ::std::move(from);
  }

  inline ExportProfilesPartialSuccess& operator=(const ExportProfilesPartialSuccess& from) {
    CopyFrom(from);
    return *this;
  }
  inline ExportProfilesPartialSuccess& operator=(ExportProfilesPartialSuccess&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const ExportProfilesPartialSuccess& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ExportProfilesPartialSuccess* internal_default_instance() {
    return reinterpret_cast<const ExportProfilesPartialSuccess*>(
               &_ExportProfilesPartialSuccess_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(ExportProfilesPartialSuccess& a, ExportProfilesPartialSuccess& b) {
    a.Swap(&b);
  }
  inline void Swap(ExportProfilesPartialSuccess* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(ExportProfilesPartialSuccess* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ExportProfilesPartialSuccess* New() const final {
    return CreateMaybeMessage<ExportProfilesPartialSuccess>(nullptr);
  }

  ExportProfilesPartialSuccess* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ExportProfilesPartialSuccess>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ExportProfilesPartialSuccess& from);
  void MergeFrom(const ExportProfilesPartialSuccess& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(ExportProfilesPartialSuccess* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "opentelemetry.proto.collector.profiles.v1development.ExportProfilesPartialSuccess";
  }
  protected:
  explicit ExportProfilesPartialSuccess(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_opentelemetry_2fproto_2fcollector_2fprofiles_2fv1development_2fprofiles_5fservice_2eproto);
    return ::descriptor_table_opentelemetry_2fproto_2fcollector_2fprofiles_2fv1development_2fprofiles_5fservice_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kErrorMessageFieldNumber = 2,
    kRejectedProfilesFieldNumber = 1,
  };
  // string error_message = 2;
  void clear_error_message();
  const std::string& error_message() const;
  void set_error_message(const std::string& value);
  void set_error_message(std::string&& value);
  void set_error_message(const char* value);
  void set_error_message(const char* value, size_t size);
  std::string* mutable_error_message();
  std::string* release_error_message();
  void set_allocated_error_message(std::string* error_message);
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  std::string* unsafe_arena_release_error_message();
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_error_message(
      std::string* error_message);
  private:
  const std::string& _internal_error_message() const;
  void _internal_set_error_message(const std::string& value);
  std::string* _internal_mutable_error_message();
  public:

  // int64 rejected_profiles = 1;
  void clear_rejected_profiles();
  ::PROTOBUF_NAMESPACE_ID::int64 rejected_profiles() const;
  void set_rejected_profiles(::PROTOBUF_NAMESPACE_ID::int64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int64 _internal_rejected_profiles() const;
  void _internal_set_rejected_profiles(::PROTOBUF_NAMESPACE_ID::int64 value);
  public:

  // @@protoc_insertion_point(class_scope:opentelemetry.proto.collector.profiles.v1development.ExportProfilesPartialSuccess)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr error_message_;
  ::PROTOBUF_NAMESPACE_ID::int64 rejected_profiles_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_opentelemetry_2fproto_2fcollector_2fprofiles_2fv1development_2fprofiles_5fservice_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ExportProfilesServiceRequest

// repeated .opentelemetry.proto.profiles.v1development.ResourceProfiles resource_profiles = 1;
inline int ExportProfilesServiceRequest::_internal_resource_profiles_size() const {
  return resource_profiles_.size();
}
inline int ExportProfilesServiceRequest::resource_profiles_size() const {
  return _internal_resource_profiles_size();
}
inline ::opentelemetry::proto::profiles::v1development::ResourceProfiles* ExportProfilesServiceRequest::mutable_resource_profiles(int index) {
  // @@protoc_insertion_point(field_mutable:opentelemetry.proto.collector.profiles.v1development.ExportProfilesServiceRequest.resource_profiles)
  return resource_profiles_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::opentelemetry::proto::profiles::v1development::ResourceProfiles >*
ExportProfilesServiceRequest::mutable_resource_profiles() {
  // @@protoc_insertion_point(field_mutable_list:opentelemetry.proto.collector.profiles.v1development.ExportProfilesServiceRequest.resource_profiles)
  return &resource_profiles_;
}
inline const ::opentelemetry::proto::profiles::v1development::ResourceProfiles& ExportProfilesServiceRequest::_internal_resource_profiles(int index) const {
  return resource_profiles_.Get(index);
}
inline const ::opentelemetry::proto::profiles::v1development::ResourceProfiles& ExportProfilesServiceRequest::resource_profiles(int index) const {
  // @@protoc_insertion_point(field_get:opentelemetry.proto.collector.profiles.v1development.ExportProfilesServiceRequest.resource_profiles)
  return _internal_resource_profiles(index);
}
inline ::opentelemetry::proto::profiles::v1development::ResourceProfiles* ExportProfilesServiceRequest::_internal_add_resource_profiles() {
  return resource_profiles_.Add();
}
inline ::opentelemetry::proto::profiles::v1development::ResourceProfiles* ExportProfilesServiceRequest::add_resource_profiles() {
  // @@protoc_insertion_point(field_add:opentelemetry.proto.collector.profiles.v1development.ExportProfilesServiceRequest.resource_profiles)
  return _internal_add_resource_profiles();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::opentelemetry::proto::profiles::v1development::ResourceProfiles >&
ExportProfilesServiceRequest::resource_profiles() const {
  // @@protoc_insertion_point(field_list:opentelemetry.proto.collector.profiles.v1development.ExportProfilesServiceRequest.resource_profiles)
  return resource_profiles_;
}

// -------------------------------------------------------------------

// ExportProfilesServiceResponse

// .opentelemetry.proto.collector.profiles.v1development.ExportProfilesPartialSuccess partial_success = 1;
inline bool ExportProfilesServiceResponse::_internal_has_partial_success() const {
  return this != internal_default_instance() && partial_success_ != nullptr;
}
inline bool ExportProfilesServiceResponse::has_partial_success() const {
  return _internal_has_partial_success();
}
inline void ExportProfilesServiceResponse::clear_partial_success() {
  if (GetArena() == nullptr && partial_success_ != nullptr) {
    delete partial_success_;
  }
  partial_success_ = nullptr;
}
inline const ::opentelemetry::proto::collector::profiles::v1development::ExportProfilesPartialSuccess& ExportProfilesServiceResponse::_internal_partial_success() const {
  const ::opentelemetry::proto::collector::profiles::v1development::ExportProfilesPartialSuccess* p = partial_success_;
  return p != nullptr ? *p : *reinterpret_cast<const ::opentelemetry::proto::collector::profiles::v1development::ExportProfilesPartialSuccess*>(
      &::opentelemetry::proto::collector::profiles::v1development::_ExportProfilesPartialSuccess_default_instance_);
}
inline const ::opentelemetry::proto::collector::profiles::v1development::ExportProfilesPartialSuccess& ExportProfilesServiceResponse::partial_success() const {
  // @@protoc_insertion_point(field_get:opentelemetry.proto.collector.profiles.v1development.ExportProfilesServiceResponse.partial_success)
  return _internal_partial_success();
}
inline void ExportProfilesServiceResponse::unsafe_arena_set_allocated_partial_success(
    ::opentelemetry::proto::collector::profiles::v1development::ExportProfilesPartialSuccess* partial_success) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(partial_success_);
  }
  partial_success_ = partial_success;
  if (partial_success) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:opentelemetry.proto.collector.profiles.v1development.ExportProfilesServiceResponse.partial_success)
}
inline ::opentelemetry::proto::collector::profiles::v1development::ExportProfilesPartialSuccess* ExportProfilesServiceResponse::release_partial_success() {
  auto temp = unsafe_arena_release_partial_success();
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::opentelemetry::proto::collector::profiles::v1development::ExportProfilesPartialSuccess* ExportProfilesServiceResponse::unsafe_arena_release_partial_success() {
  // @@protoc_insertion_point(field_release:opentelemetry.proto.collector.profiles.v1development.ExportProfilesServiceResponse.partial_success)
  
  ::opentelemetry::proto::collector::profiles::v1development::ExportProfilesPartialSuccess* temp = partial_success_;
  partial_success_ = nullptr;
  return temp;
}
inline ::opentelemetry::proto::collector::profiles::v1development::ExportProfilesPartialSuccess* ExportProfilesServiceResponse::_internal_mutable_partial_success() {
  
  if (partial_success_ == nullptr) {
    auto* p = CreateMaybeMessage<::opentelemetry::proto::collector::profiles::v1development::ExportProfilesPartialSuccess>(GetArena());
    partial_success_ = p;
  }
  return partial_success_;
}
inline ::opentelemetry::proto::collector::profiles::v1development::ExportProfilesPartialSuccess* ExportProfilesServiceResponse::mutable_partial_success() {
  // @@protoc_insertion_point(field_mutable:opentelemetry.proto.collector.profiles.v1development.ExportProfilesServiceResponse.partial_success)
  return _internal_mutable_partial_success();
}
inline void ExportProfilesServiceResponse::set_allocated_partial_success(::opentelemetry::proto::collector::profiles::v1development::ExportProfilesPartialSuccess* partial_success) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete partial_success_;
  }
  if (partial_success) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      ::PROTOBUF_NAMESPACE_ID::Arena::GetArena(partial_success);
    if (message_arena != submessage_arena) {
      partial_success = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, partial_success, submessage_arena);
    }
    
  } else {
    
  }
  partial_success_ = partial_success;
  // @@protoc_insertion_point(field_set_allocated:opentelemetry.proto.collector.profiles.v1development.ExportProfilesServiceResponse.partial_success)
}

// -------------------------------------------------------------------

// ExportProfilesPartialSuccess

// int64 rejected_profiles = 1;
inline void ExportProfilesPartialSuccess::clear_rejected_profiles() {
  rejected_profiles_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 ExportProfilesPartialSuccess::_internal_rejected_profiles() const {
  return rejected_profiles_;
}
inline ::PROTOBUF_NAMESPACE_ID::int64 ExportProfilesPartialSuccess::rejected_profiles() const {
  // @@protoc_insertion_point(field_get:opentelemetry.proto.collector.profiles.v1development.ExportProfilesPartialSuccess.rejected_profiles)
  return _internal_rejected_profiles();
}
inline void ExportProfilesPartialSuccess::_internal_set_rejected_profiles(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  rejected_profiles_ = value;
}
inline void ExportProfilesPartialSuccess::set_rejected_profiles(::PROTOBUF_NAMESPACE_ID::int64 value) {
  _internal_set_rejected_profiles(value);
  // @@protoc_insertion_point(field_set:opentelemetry.proto.collector.profiles.v1development.ExportProfilesPartialSuccess.rejected_profiles)
}

// string error_message = 2;
inline void ExportProfilesPartialSuccess::clear_error_message() {
  error_message_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& ExportProfilesPartialSuccess::error_message() const {
  // @@protoc_insertion_point(field_get:opentelemetry.proto.collector.profiles.v1development.ExportProfilesPartialSuccess.error_message)
  return _internal_error_message();
}
inline void ExportProfilesPartialSuccess::set_error_message(const std::string& value) {
  _internal_set_error_message(value);
  // @@protoc_insertion_point(field_set:opentelemetry.proto.collector.profiles.v1development.ExportProfilesPartialSuccess.error_message)
}
inline std::string* ExportProfilesPartialSuccess::mutable_error_message() {
  // @@protoc_insertion_point(field_mutable:opentelemetry.proto.collector.profiles.v1development.ExportProfilesPartialSuccess.error_message)
  return _internal_mutable_error_message();
}
inline const std::string& ExportProfilesPartialSuccess::_internal_error_message() const {
  return error_message_.Get();
}
inline void ExportProfilesPartialSuccess::_internal_set_error_message(const std::string& value) {
  
  error_message_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void ExportProfilesPartialSuccess::set_error_message(std::string&& value) {
  
  error_message_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:opentelemetry.proto.collector.profiles.v1development.ExportProfilesPartialSuccess.error_message)
}
inline void ExportProfilesPartialSuccess::set_error_message(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  error_message_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:opentelemetry.proto.collector.profiles.v1development.ExportProfilesPartialSuccess.error_message)
}
inline void ExportProfilesPartialSuccess::set_error_message(const char* value,
    size_t size) {
  
  error_message_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:opentelemetry.proto.collector.profiles.v1development.ExportProfilesPartialSuccess.error_message)
}
inline std::string* ExportProfilesPartialSuccess::_internal_mutable_error_message() {
  
  return error_message_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* ExportProfilesPartialSuccess::release_error_message() {
  // @@protoc_insertion_point(field_release:opentelemetry.proto.collector.profiles.v1development.ExportProfilesPartialSuccess.error_message)
  return error_message_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void ExportProfilesPartialSuccess::set_allocated_error_message(std::string* error_message) {
  if (error_message != nullptr) {
    
  } else {
    
  }
  error_message_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), error_message,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:opentelemetry.proto.collector.profiles.v1development.ExportProfilesPartialSuccess.error_message)
}
inline std::string* ExportProfilesPartialSuccess::unsafe_arena_release_error_message() {
  // @@protoc_insertion_point(field_unsafe_arena_release:opentelemetry.proto.collector.profiles.v1development.ExportProfilesPartialSuccess.error_message)
  GOOGLE_DCHECK(GetArena() != nullptr);
  
  return error_message_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
}
inline void ExportProfilesPartialSuccess::unsafe_arena_set_allocated_error_message(
    std::string* error_message) {
  GOOGLE_DCHECK(GetArena() != nullptr);
  if (error_message != nullptr) {
    
  } else {
    
  }
  error_message_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      error_message, GetArena());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:opentelemetry.proto.collector.profiles.v1development.ExportProfilesPartialSuccess.error_message)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace v1development
}  // namespace profiles
}  // namespace collector
}  // namespace proto
}  // namespace opentelemetry

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_opentelemetry_2fproto_2fcollector_2fprofiles_2fv1development_2fprofiles_5fservice_2eproto
