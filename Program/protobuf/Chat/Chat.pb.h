// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Chat.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_Chat_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_Chat_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3011000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3011002 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "PublicData.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_Chat_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_Chat_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_Chat_2eproto;
class Chat_ChatToAllNotify;
class Chat_ChatToAllNotifyDefaultTypeInternal;
extern Chat_ChatToAllNotifyDefaultTypeInternal _Chat_ChatToAllNotify_default_instance_;
class Chat_ChatToOneReply;
class Chat_ChatToOneReplyDefaultTypeInternal;
extern Chat_ChatToOneReplyDefaultTypeInternal _Chat_ChatToOneReply_default_instance_;
class Chat_ChatToOneReq;
class Chat_ChatToOneReqDefaultTypeInternal;
extern Chat_ChatToOneReqDefaultTypeInternal _Chat_ChatToOneReq_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::Chat_ChatToAllNotify* Arena::CreateMaybeMessage<::Chat_ChatToAllNotify>(Arena*);
template<> ::Chat_ChatToOneReply* Arena::CreateMaybeMessage<::Chat_ChatToOneReply>(Arena*);
template<> ::Chat_ChatToOneReq* Arena::CreateMaybeMessage<::Chat_ChatToOneReq>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class Chat_ChatToOneReq :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Chat_ChatToOneReq) */ {
 public:
  Chat_ChatToOneReq();
  virtual ~Chat_ChatToOneReq();

  Chat_ChatToOneReq(const Chat_ChatToOneReq& from);
  Chat_ChatToOneReq(Chat_ChatToOneReq&& from) noexcept
    : Chat_ChatToOneReq() {
    *this = ::std::move(from);
  }

  inline Chat_ChatToOneReq& operator=(const Chat_ChatToOneReq& from) {
    CopyFrom(from);
    return *this;
  }
  inline Chat_ChatToOneReq& operator=(Chat_ChatToOneReq&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
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
  static const Chat_ChatToOneReq& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Chat_ChatToOneReq* internal_default_instance() {
    return reinterpret_cast<const Chat_ChatToOneReq*>(
               &_Chat_ChatToOneReq_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Chat_ChatToOneReq& a, Chat_ChatToOneReq& b) {
    a.Swap(&b);
  }
  inline void Swap(Chat_ChatToOneReq* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Chat_ChatToOneReq* New() const final {
    return CreateMaybeMessage<Chat_ChatToOneReq>(nullptr);
  }

  Chat_ChatToOneReq* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Chat_ChatToOneReq>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Chat_ChatToOneReq& from);
  void MergeFrom(const Chat_ChatToOneReq& from);
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
  void InternalSwap(Chat_ChatToOneReq* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Chat_ChatToOneReq";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_Chat_2eproto);
    return ::descriptor_table_Chat_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNameFieldNumber = 1,
  };
  // string name = 1;
  void clear_name();
  const std::string& name() const;
  void set_name(const std::string& value);
  void set_name(std::string&& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  std::string* mutable_name();
  std::string* release_name();
  void set_allocated_name(std::string* name);
  private:
  const std::string& _internal_name() const;
  void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // @@protoc_insertion_point(class_scope:Chat_ChatToOneReq)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_Chat_2eproto;
};
// -------------------------------------------------------------------

class Chat_ChatToOneReply :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Chat_ChatToOneReply) */ {
 public:
  Chat_ChatToOneReply();
  virtual ~Chat_ChatToOneReply();

  Chat_ChatToOneReply(const Chat_ChatToOneReply& from);
  Chat_ChatToOneReply(Chat_ChatToOneReply&& from) noexcept
    : Chat_ChatToOneReply() {
    *this = ::std::move(from);
  }

  inline Chat_ChatToOneReply& operator=(const Chat_ChatToOneReply& from) {
    CopyFrom(from);
    return *this;
  }
  inline Chat_ChatToOneReply& operator=(Chat_ChatToOneReply&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
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
  static const Chat_ChatToOneReply& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Chat_ChatToOneReply* internal_default_instance() {
    return reinterpret_cast<const Chat_ChatToOneReply*>(
               &_Chat_ChatToOneReply_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Chat_ChatToOneReply& a, Chat_ChatToOneReply& b) {
    a.Swap(&b);
  }
  inline void Swap(Chat_ChatToOneReply* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Chat_ChatToOneReply* New() const final {
    return CreateMaybeMessage<Chat_ChatToOneReply>(nullptr);
  }

  Chat_ChatToOneReply* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Chat_ChatToOneReply>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Chat_ChatToOneReply& from);
  void MergeFrom(const Chat_ChatToOneReply& from);
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
  void InternalSwap(Chat_ChatToOneReply* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Chat_ChatToOneReply";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_Chat_2eproto);
    return ::descriptor_table_Chat_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNameFieldNumber = 1,
  };
  // string name = 1;
  void clear_name();
  const std::string& name() const;
  void set_name(const std::string& value);
  void set_name(std::string&& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  std::string* mutable_name();
  std::string* release_name();
  void set_allocated_name(std::string* name);
  private:
  const std::string& _internal_name() const;
  void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // @@protoc_insertion_point(class_scope:Chat_ChatToOneReply)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_Chat_2eproto;
};
// -------------------------------------------------------------------

class Chat_ChatToAllNotify :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Chat_ChatToAllNotify) */ {
 public:
  Chat_ChatToAllNotify();
  virtual ~Chat_ChatToAllNotify();

  Chat_ChatToAllNotify(const Chat_ChatToAllNotify& from);
  Chat_ChatToAllNotify(Chat_ChatToAllNotify&& from) noexcept
    : Chat_ChatToAllNotify() {
    *this = ::std::move(from);
  }

  inline Chat_ChatToAllNotify& operator=(const Chat_ChatToAllNotify& from) {
    CopyFrom(from);
    return *this;
  }
  inline Chat_ChatToAllNotify& operator=(Chat_ChatToAllNotify&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
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
  static const Chat_ChatToAllNotify& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Chat_ChatToAllNotify* internal_default_instance() {
    return reinterpret_cast<const Chat_ChatToAllNotify*>(
               &_Chat_ChatToAllNotify_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(Chat_ChatToAllNotify& a, Chat_ChatToAllNotify& b) {
    a.Swap(&b);
  }
  inline void Swap(Chat_ChatToAllNotify* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Chat_ChatToAllNotify* New() const final {
    return CreateMaybeMessage<Chat_ChatToAllNotify>(nullptr);
  }

  Chat_ChatToAllNotify* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Chat_ChatToAllNotify>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Chat_ChatToAllNotify& from);
  void MergeFrom(const Chat_ChatToAllNotify& from);
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
  void InternalSwap(Chat_ChatToAllNotify* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Chat_ChatToAllNotify";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_Chat_2eproto);
    return ::descriptor_table_Chat_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNameFieldNumber = 1,
    kHahaFieldNumber = 2,
  };
  // repeated string name = 1;
  int name_size() const;
  private:
  int _internal_name_size() const;
  public:
  void clear_name();
  const std::string& name(int index) const;
  std::string* mutable_name(int index);
  void set_name(int index, const std::string& value);
  void set_name(int index, std::string&& value);
  void set_name(int index, const char* value);
  void set_name(int index, const char* value, size_t size);
  std::string* add_name();
  void add_name(const std::string& value);
  void add_name(std::string&& value);
  void add_name(const char* value);
  void add_name(const char* value, size_t size);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& name() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* mutable_name();
  private:
  const std::string& _internal_name(int index) const;
  std::string* _internal_add_name();
  public:

  // string haha = 2;
  void clear_haha();
  const std::string& haha() const;
  void set_haha(const std::string& value);
  void set_haha(std::string&& value);
  void set_haha(const char* value);
  void set_haha(const char* value, size_t size);
  std::string* mutable_haha();
  std::string* release_haha();
  void set_allocated_haha(std::string* haha);
  private:
  const std::string& _internal_haha() const;
  void _internal_set_haha(const std::string& value);
  std::string* _internal_mutable_haha();
  public:

  // @@protoc_insertion_point(class_scope:Chat_ChatToAllNotify)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> name_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr haha_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_Chat_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Chat_ChatToOneReq

// string name = 1;
inline void Chat_ChatToOneReq::clear_name() {
  name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& Chat_ChatToOneReq::name() const {
  // @@protoc_insertion_point(field_get:Chat_ChatToOneReq.name)
  return _internal_name();
}
inline void Chat_ChatToOneReq::set_name(const std::string& value) {
  _internal_set_name(value);
  // @@protoc_insertion_point(field_set:Chat_ChatToOneReq.name)
}
inline std::string* Chat_ChatToOneReq::mutable_name() {
  // @@protoc_insertion_point(field_mutable:Chat_ChatToOneReq.name)
  return _internal_mutable_name();
}
inline const std::string& Chat_ChatToOneReq::_internal_name() const {
  return name_.GetNoArena();
}
inline void Chat_ChatToOneReq::_internal_set_name(const std::string& value) {
  
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void Chat_ChatToOneReq::set_name(std::string&& value) {
  
  name_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:Chat_ChatToOneReq.name)
}
inline void Chat_ChatToOneReq::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Chat_ChatToOneReq.name)
}
inline void Chat_ChatToOneReq::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Chat_ChatToOneReq.name)
}
inline std::string* Chat_ChatToOneReq::_internal_mutable_name() {
  
  return name_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Chat_ChatToOneReq::release_name() {
  // @@protoc_insertion_point(field_release:Chat_ChatToOneReq.name)
  
  return name_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Chat_ChatToOneReq::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:Chat_ChatToOneReq.name)
}

// -------------------------------------------------------------------

// Chat_ChatToOneReply

// string name = 1;
inline void Chat_ChatToOneReply::clear_name() {
  name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& Chat_ChatToOneReply::name() const {
  // @@protoc_insertion_point(field_get:Chat_ChatToOneReply.name)
  return _internal_name();
}
inline void Chat_ChatToOneReply::set_name(const std::string& value) {
  _internal_set_name(value);
  // @@protoc_insertion_point(field_set:Chat_ChatToOneReply.name)
}
inline std::string* Chat_ChatToOneReply::mutable_name() {
  // @@protoc_insertion_point(field_mutable:Chat_ChatToOneReply.name)
  return _internal_mutable_name();
}
inline const std::string& Chat_ChatToOneReply::_internal_name() const {
  return name_.GetNoArena();
}
inline void Chat_ChatToOneReply::_internal_set_name(const std::string& value) {
  
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void Chat_ChatToOneReply::set_name(std::string&& value) {
  
  name_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:Chat_ChatToOneReply.name)
}
inline void Chat_ChatToOneReply::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Chat_ChatToOneReply.name)
}
inline void Chat_ChatToOneReply::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Chat_ChatToOneReply.name)
}
inline std::string* Chat_ChatToOneReply::_internal_mutable_name() {
  
  return name_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Chat_ChatToOneReply::release_name() {
  // @@protoc_insertion_point(field_release:Chat_ChatToOneReply.name)
  
  return name_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Chat_ChatToOneReply::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:Chat_ChatToOneReply.name)
}

// -------------------------------------------------------------------

// Chat_ChatToAllNotify

// repeated string name = 1;
inline int Chat_ChatToAllNotify::_internal_name_size() const {
  return name_.size();
}
inline int Chat_ChatToAllNotify::name_size() const {
  return _internal_name_size();
}
inline void Chat_ChatToAllNotify::clear_name() {
  name_.Clear();
}
inline std::string* Chat_ChatToAllNotify::add_name() {
  // @@protoc_insertion_point(field_add_mutable:Chat_ChatToAllNotify.name)
  return _internal_add_name();
}
inline const std::string& Chat_ChatToAllNotify::_internal_name(int index) const {
  return name_.Get(index);
}
inline const std::string& Chat_ChatToAllNotify::name(int index) const {
  // @@protoc_insertion_point(field_get:Chat_ChatToAllNotify.name)
  return _internal_name(index);
}
inline std::string* Chat_ChatToAllNotify::mutable_name(int index) {
  // @@protoc_insertion_point(field_mutable:Chat_ChatToAllNotify.name)
  return name_.Mutable(index);
}
inline void Chat_ChatToAllNotify::set_name(int index, const std::string& value) {
  // @@protoc_insertion_point(field_set:Chat_ChatToAllNotify.name)
  name_.Mutable(index)->assign(value);
}
inline void Chat_ChatToAllNotify::set_name(int index, std::string&& value) {
  // @@protoc_insertion_point(field_set:Chat_ChatToAllNotify.name)
  name_.Mutable(index)->assign(std::move(value));
}
inline void Chat_ChatToAllNotify::set_name(int index, const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  name_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:Chat_ChatToAllNotify.name)
}
inline void Chat_ChatToAllNotify::set_name(int index, const char* value, size_t size) {
  name_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:Chat_ChatToAllNotify.name)
}
inline std::string* Chat_ChatToAllNotify::_internal_add_name() {
  return name_.Add();
}
inline void Chat_ChatToAllNotify::add_name(const std::string& value) {
  name_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:Chat_ChatToAllNotify.name)
}
inline void Chat_ChatToAllNotify::add_name(std::string&& value) {
  name_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:Chat_ChatToAllNotify.name)
}
inline void Chat_ChatToAllNotify::add_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  name_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:Chat_ChatToAllNotify.name)
}
inline void Chat_ChatToAllNotify::add_name(const char* value, size_t size) {
  name_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:Chat_ChatToAllNotify.name)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
Chat_ChatToAllNotify::name() const {
  // @@protoc_insertion_point(field_list:Chat_ChatToAllNotify.name)
  return name_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>*
Chat_ChatToAllNotify::mutable_name() {
  // @@protoc_insertion_point(field_mutable_list:Chat_ChatToAllNotify.name)
  return &name_;
}

// string haha = 2;
inline void Chat_ChatToAllNotify::clear_haha() {
  haha_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& Chat_ChatToAllNotify::haha() const {
  // @@protoc_insertion_point(field_get:Chat_ChatToAllNotify.haha)
  return _internal_haha();
}
inline void Chat_ChatToAllNotify::set_haha(const std::string& value) {
  _internal_set_haha(value);
  // @@protoc_insertion_point(field_set:Chat_ChatToAllNotify.haha)
}
inline std::string* Chat_ChatToAllNotify::mutable_haha() {
  // @@protoc_insertion_point(field_mutable:Chat_ChatToAllNotify.haha)
  return _internal_mutable_haha();
}
inline const std::string& Chat_ChatToAllNotify::_internal_haha() const {
  return haha_.GetNoArena();
}
inline void Chat_ChatToAllNotify::_internal_set_haha(const std::string& value) {
  
  haha_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void Chat_ChatToAllNotify::set_haha(std::string&& value) {
  
  haha_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:Chat_ChatToAllNotify.haha)
}
inline void Chat_ChatToAllNotify::set_haha(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  haha_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Chat_ChatToAllNotify.haha)
}
inline void Chat_ChatToAllNotify::set_haha(const char* value, size_t size) {
  
  haha_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Chat_ChatToAllNotify.haha)
}
inline std::string* Chat_ChatToAllNotify::_internal_mutable_haha() {
  
  return haha_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Chat_ChatToAllNotify::release_haha() {
  // @@protoc_insertion_point(field_release:Chat_ChatToAllNotify.haha)
  
  return haha_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Chat_ChatToAllNotify::set_allocated_haha(std::string* haha) {
  if (haha != nullptr) {
    
  } else {
    
  }
  haha_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), haha);
  // @@protoc_insertion_point(field_set_allocated:Chat_ChatToAllNotify.haha)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_Chat_2eproto
