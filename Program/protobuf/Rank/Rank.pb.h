// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Rank.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_Rank_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_Rank_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3010000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3010000 < PROTOBUF_MIN_PROTOC_VERSION
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
#define PROTOBUF_INTERNAL_EXPORT_Rank_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_Rank_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_Rank_2eproto;
class Rank_RankFightReply;
class Rank_RankFightReplyDefaultTypeInternal;
extern Rank_RankFightReplyDefaultTypeInternal _Rank_RankFightReply_default_instance_;
class Rank_RankFightReq;
class Rank_RankFightReqDefaultTypeInternal;
extern Rank_RankFightReqDefaultTypeInternal _Rank_RankFightReq_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::Rank_RankFightReply* Arena::CreateMaybeMessage<::Rank_RankFightReply>(Arena*);
template<> ::Rank_RankFightReq* Arena::CreateMaybeMessage<::Rank_RankFightReq>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class Rank_RankFightReq :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Rank_RankFightReq) */ {
 public:
  Rank_RankFightReq();
  virtual ~Rank_RankFightReq();

  Rank_RankFightReq(const Rank_RankFightReq& from);
  Rank_RankFightReq(Rank_RankFightReq&& from) noexcept
    : Rank_RankFightReq() {
    *this = ::std::move(from);
  }

  inline Rank_RankFightReq& operator=(const Rank_RankFightReq& from) {
    CopyFrom(from);
    return *this;
  }
  inline Rank_RankFightReq& operator=(Rank_RankFightReq&& from) noexcept {
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
  static const Rank_RankFightReq& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Rank_RankFightReq* internal_default_instance() {
    return reinterpret_cast<const Rank_RankFightReq*>(
               &_Rank_RankFightReq_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Rank_RankFightReq& a, Rank_RankFightReq& b) {
    a.Swap(&b);
  }
  inline void Swap(Rank_RankFightReq* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Rank_RankFightReq* New() const final {
    return CreateMaybeMessage<Rank_RankFightReq>(nullptr);
  }

  Rank_RankFightReq* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Rank_RankFightReq>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Rank_RankFightReq& from);
  void MergeFrom(const Rank_RankFightReq& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Rank_RankFightReq* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Rank_RankFightReq";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_Rank_2eproto);
    return ::descriptor_table_Rank_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kRankIdFieldNumber = 1,
  };
  // int32 RankId = 1;
  void clear_rankid();
  ::PROTOBUF_NAMESPACE_ID::int32 rankid() const;
  void set_rankid(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_rankid() const;
  void _internal_set_rankid(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:Rank_RankFightReq)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::int32 rankid_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_Rank_2eproto;
};
// -------------------------------------------------------------------

class Rank_RankFightReply :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Rank_RankFightReply) */ {
 public:
  Rank_RankFightReply();
  virtual ~Rank_RankFightReply();

  Rank_RankFightReply(const Rank_RankFightReply& from);
  Rank_RankFightReply(Rank_RankFightReply&& from) noexcept
    : Rank_RankFightReply() {
    *this = ::std::move(from);
  }

  inline Rank_RankFightReply& operator=(const Rank_RankFightReply& from) {
    CopyFrom(from);
    return *this;
  }
  inline Rank_RankFightReply& operator=(Rank_RankFightReply&& from) noexcept {
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
  static const Rank_RankFightReply& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Rank_RankFightReply* internal_default_instance() {
    return reinterpret_cast<const Rank_RankFightReply*>(
               &_Rank_RankFightReply_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Rank_RankFightReply& a, Rank_RankFightReply& b) {
    a.Swap(&b);
  }
  inline void Swap(Rank_RankFightReply* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Rank_RankFightReply* New() const final {
    return CreateMaybeMessage<Rank_RankFightReply>(nullptr);
  }

  Rank_RankFightReply* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Rank_RankFightReply>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Rank_RankFightReply& from);
  void MergeFrom(const Rank_RankFightReply& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Rank_RankFightReply* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Rank_RankFightReply";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_Rank_2eproto);
    return ::descriptor_table_Rank_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kRankIdsFieldNumber = 1,
  };
  // repeated int32 RankIds = 1;
  int rankids_size() const;
  private:
  int _internal_rankids_size() const;
  public:
  void clear_rankids();
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_rankids(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
      _internal_rankids() const;
  void _internal_add_rankids(::PROTOBUF_NAMESPACE_ID::int32 value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
      _internal_mutable_rankids();
  public:
  ::PROTOBUF_NAMESPACE_ID::int32 rankids(int index) const;
  void set_rankids(int index, ::PROTOBUF_NAMESPACE_ID::int32 value);
  void add_rankids(::PROTOBUF_NAMESPACE_ID::int32 value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
      rankids() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
      mutable_rankids();

  // @@protoc_insertion_point(class_scope:Rank_RankFightReply)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 > rankids_;
  mutable std::atomic<int> _rankids_cached_byte_size_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_Rank_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Rank_RankFightReq

// int32 RankId = 1;
inline void Rank_RankFightReq::clear_rankid() {
  rankid_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Rank_RankFightReq::_internal_rankid() const {
  return rankid_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Rank_RankFightReq::rankid() const {
  // @@protoc_insertion_point(field_get:Rank_RankFightReq.RankId)
  return _internal_rankid();
}
inline void Rank_RankFightReq::_internal_set_rankid(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  rankid_ = value;
}
inline void Rank_RankFightReq::set_rankid(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_rankid(value);
  // @@protoc_insertion_point(field_set:Rank_RankFightReq.RankId)
}

// -------------------------------------------------------------------

// Rank_RankFightReply

// repeated int32 RankIds = 1;
inline int Rank_RankFightReply::_internal_rankids_size() const {
  return rankids_.size();
}
inline int Rank_RankFightReply::rankids_size() const {
  return _internal_rankids_size();
}
inline void Rank_RankFightReply::clear_rankids() {
  rankids_.Clear();
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Rank_RankFightReply::_internal_rankids(int index) const {
  return rankids_.Get(index);
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Rank_RankFightReply::rankids(int index) const {
  // @@protoc_insertion_point(field_get:Rank_RankFightReply.RankIds)
  return _internal_rankids(index);
}
inline void Rank_RankFightReply::set_rankids(int index, ::PROTOBUF_NAMESPACE_ID::int32 value) {
  rankids_.Set(index, value);
  // @@protoc_insertion_point(field_set:Rank_RankFightReply.RankIds)
}
inline void Rank_RankFightReply::_internal_add_rankids(::PROTOBUF_NAMESPACE_ID::int32 value) {
  rankids_.Add(value);
}
inline void Rank_RankFightReply::add_rankids(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_add_rankids(value);
  // @@protoc_insertion_point(field_add:Rank_RankFightReply.RankIds)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
Rank_RankFightReply::_internal_rankids() const {
  return rankids_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
Rank_RankFightReply::rankids() const {
  // @@protoc_insertion_point(field_list:Rank_RankFightReply.RankIds)
  return _internal_rankids();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
Rank_RankFightReply::_internal_mutable_rankids() {
  return &rankids_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
Rank_RankFightReply::mutable_rankids() {
  // @@protoc_insertion_point(field_mutable_list:Rank_RankFightReply.RankIds)
  return _internal_mutable_rankids();
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_Rank_2eproto
