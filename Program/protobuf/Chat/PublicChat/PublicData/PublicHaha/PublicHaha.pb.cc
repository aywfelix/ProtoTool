// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: PublicHaha.proto

#include "PublicHaha.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
class PublicHaha_HhahaDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<PublicHaha_Hhaha> _instance;
} _PublicHaha_Hhaha_default_instance_;
static void InitDefaultsscc_info_PublicHaha_Hhaha_PublicHaha_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_PublicHaha_Hhaha_default_instance_;
    new (ptr) ::PublicHaha_Hhaha();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::PublicHaha_Hhaha::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_PublicHaha_Hhaha_PublicHaha_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_PublicHaha_Hhaha_PublicHaha_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_PublicHaha_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_PublicHaha_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_PublicHaha_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_PublicHaha_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::PublicHaha_Hhaha, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::PublicHaha_Hhaha, ytyy_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::PublicHaha_Hhaha)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_PublicHaha_Hhaha_default_instance_),
};

const char descriptor_table_protodef_PublicHaha_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\020PublicHaha.proto\" \n\020PublicHaha_Hhaha\022\014"
  "\n\004ytyy\030\001 \001(\005b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_PublicHaha_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_PublicHaha_2eproto_sccs[1] = {
  &scc_info_PublicHaha_Hhaha_PublicHaha_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_PublicHaha_2eproto_once;
static bool descriptor_table_PublicHaha_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_PublicHaha_2eproto = {
  &descriptor_table_PublicHaha_2eproto_initialized, descriptor_table_protodef_PublicHaha_2eproto, "PublicHaha.proto", 60,
  &descriptor_table_PublicHaha_2eproto_once, descriptor_table_PublicHaha_2eproto_sccs, descriptor_table_PublicHaha_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_PublicHaha_2eproto::offsets,
  file_level_metadata_PublicHaha_2eproto, 1, file_level_enum_descriptors_PublicHaha_2eproto, file_level_service_descriptors_PublicHaha_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_PublicHaha_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_PublicHaha_2eproto), true);

// ===================================================================

void PublicHaha_Hhaha::InitAsDefaultInstance() {
}
class PublicHaha_Hhaha::_Internal {
 public:
};

PublicHaha_Hhaha::PublicHaha_Hhaha()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:PublicHaha_Hhaha)
}
PublicHaha_Hhaha::PublicHaha_Hhaha(const PublicHaha_Hhaha& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ytyy_ = from.ytyy_;
  // @@protoc_insertion_point(copy_constructor:PublicHaha_Hhaha)
}

void PublicHaha_Hhaha::SharedCtor() {
  ytyy_ = 0;
}

PublicHaha_Hhaha::~PublicHaha_Hhaha() {
  // @@protoc_insertion_point(destructor:PublicHaha_Hhaha)
  SharedDtor();
}

void PublicHaha_Hhaha::SharedDtor() {
}

void PublicHaha_Hhaha::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const PublicHaha_Hhaha& PublicHaha_Hhaha::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_PublicHaha_Hhaha_PublicHaha_2eproto.base);
  return *internal_default_instance();
}


void PublicHaha_Hhaha::Clear() {
// @@protoc_insertion_point(message_clear_start:PublicHaha_Hhaha)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ytyy_ = 0;
  _internal_metadata_.Clear();
}

const char* PublicHaha_Hhaha::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // int32 ytyy = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          ytyy_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* PublicHaha_Hhaha::InternalSerializeWithCachedSizesToArray(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:PublicHaha_Hhaha)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 ytyy = 1;
  if (this->ytyy() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_ytyy(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:PublicHaha_Hhaha)
  return target;
}

size_t PublicHaha_Hhaha::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:PublicHaha_Hhaha)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // int32 ytyy = 1;
  if (this->ytyy() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_ytyy());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void PublicHaha_Hhaha::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:PublicHaha_Hhaha)
  GOOGLE_DCHECK_NE(&from, this);
  const PublicHaha_Hhaha* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<PublicHaha_Hhaha>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:PublicHaha_Hhaha)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:PublicHaha_Hhaha)
    MergeFrom(*source);
  }
}

void PublicHaha_Hhaha::MergeFrom(const PublicHaha_Hhaha& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:PublicHaha_Hhaha)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.ytyy() != 0) {
    _internal_set_ytyy(from._internal_ytyy());
  }
}

void PublicHaha_Hhaha::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:PublicHaha_Hhaha)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PublicHaha_Hhaha::CopyFrom(const PublicHaha_Hhaha& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:PublicHaha_Hhaha)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PublicHaha_Hhaha::IsInitialized() const {
  return true;
}

void PublicHaha_Hhaha::InternalSwap(PublicHaha_Hhaha* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(ytyy_, other->ytyy_);
}

::PROTOBUF_NAMESPACE_ID::Metadata PublicHaha_Hhaha::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::PublicHaha_Hhaha* Arena::CreateMaybeMessage< ::PublicHaha_Hhaha >(Arena* arena) {
  return Arena::CreateInternal< ::PublicHaha_Hhaha >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>