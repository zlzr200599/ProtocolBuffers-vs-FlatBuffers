// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/Sample.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "protos/Sample.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace Sample {

namespace {

const ::google::protobuf::Descriptor* Sample_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Sample_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_protos_2fSample_2eproto() {
  protobuf_AddDesc_protos_2fSample_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "protos/Sample.proto");
  GOOGLE_CHECK(file != NULL);
  Sample_descriptor_ = file->message_type(0);
  static const int Sample_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Sample, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Sample, name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Sample, ip_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Sample, addr_list_),
  };
  Sample_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Sample_descriptor_,
      Sample::default_instance_,
      Sample_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Sample, _has_bits_[0]),
      -1,
      -1,
      sizeof(Sample),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Sample, _internal_metadata_),
      -1);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_protos_2fSample_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Sample_descriptor_, &Sample::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_protos_2fSample_2eproto() {
  delete Sample::default_instance_;
  delete Sample_reflection_;
}

void protobuf_AddDesc_protos_2fSample_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\023protos/Sample.proto\022\006Sample\"A\n\006Sample\022"
    "\n\n\002id\030\001 \002(\005\022\014\n\004name\030\002 \002(\t\022\n\n\002ip\030\003 \002(\005\022\021\n"
    "\taddr_list\030\004 \003(\005", 96);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "protos/Sample.proto", &protobuf_RegisterTypes);
  Sample::default_instance_ = new Sample();
  Sample::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_protos_2fSample_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_protos_2fSample_2eproto {
  StaticDescriptorInitializer_protos_2fSample_2eproto() {
    protobuf_AddDesc_protos_2fSample_2eproto();
  }
} static_descriptor_initializer_protos_2fSample_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

#ifndef _MSC_VER
const int Sample::kIdFieldNumber;
const int Sample::kNameFieldNumber;
const int Sample::kIpFieldNumber;
const int Sample::kAddrListFieldNumber;
#endif  // !_MSC_VER

Sample::Sample()
  : ::google::protobuf::Message() , _internal_metadata_(NULL)  {
  SharedCtor();
  // @@protoc_insertion_point(constructor:Sample.Sample)
}

void Sample::InitAsDefaultInstance() {
}

Sample::Sample(const Sample& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:Sample.Sample)
}

void Sample::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  id_ = 0;
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ip_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Sample::~Sample() {
  // @@protoc_insertion_point(destructor:Sample.Sample)
  SharedDtor();
}

void Sample::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void Sample::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Sample::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Sample_descriptor_;
}

const Sample& Sample::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_protos_2fSample_2eproto();
  return *default_instance_;
}

Sample* Sample::default_instance_ = NULL;

Sample* Sample::New(::google::protobuf::Arena* arena) const {
  Sample* n = new Sample;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Sample::Clear() {
#define OFFSET_OF_FIELD_(f) (reinterpret_cast<char*>(      \
  &reinterpret_cast<Sample*>(16)->f) - \
   reinterpret_cast<char*>(16))

#define ZR_(first, last) do {                              \
    size_t f = OFFSET_OF_FIELD_(first);                    \
    size_t n = OFFSET_OF_FIELD_(last) - f + sizeof(last);  \
    ::memset(&first, 0, n);                                \
  } while (0)

  if (_has_bits_[0 / 32] & 7) {
    ZR_(id_, ip_);
    if (has_name()) {
      name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
  }

#undef OFFSET_OF_FIELD_
#undef ZR_

  addr_list_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool Sample::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Sample.Sample)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 id = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &id_)));
          set_has_id();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_name;
        break;
      }

      // required string name = 2;
      case 2: {
        if (tag == 18) {
         parse_name:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->name().data(), this->name().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "Sample.Sample.name");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_ip;
        break;
      }

      // required int32 ip = 3;
      case 3: {
        if (tag == 24) {
         parse_ip:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &ip_)));
          set_has_ip();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(32)) goto parse_addr_list;
        break;
      }

      // repeated int32 addr_list = 4;
      case 4: {
        if (tag == 32) {
         parse_addr_list:
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 1, 32, input, this->mutable_addr_list())));
        } else if (tag == 34) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, this->mutable_addr_list())));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(32)) goto parse_addr_list;
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:Sample.Sample)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Sample.Sample)
  return false;
#undef DO_
}

void Sample::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Sample.Sample)
  // required int32 id = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->id(), output);
  }

  // required string name = 2;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "Sample.Sample.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->name(), output);
  }

  // required int32 ip = 3;
  if (has_ip()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->ip(), output);
  }

  // repeated int32 addr_list = 4;
  for (int i = 0; i < this->addr_list_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(
      4, this->addr_list(i), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:Sample.Sample)
}

::google::protobuf::uint8* Sample::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:Sample.Sample)
  // required int32 id = 1;
  if (has_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->id(), target);
  }

  // required string name = 2;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "Sample.Sample.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->name(), target);
  }

  // required int32 ip = 3;
  if (has_ip()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->ip(), target);
  }

  // repeated int32 addr_list = 4;
  for (int i = 0; i < this->addr_list_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteInt32ToArray(4, this->addr_list(i), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Sample.Sample)
  return target;
}

int Sample::RequiredFieldsByteSizeFallback() const {
  int total_size = 0;

  if (has_id()) {
    // required int32 id = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->id());
  }

  if (has_name()) {
    // required string name = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());
  }

  if (has_ip()) {
    // required int32 ip = 3;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->ip());
  }

  return total_size;
}
int Sample::ByteSize() const {
  int total_size = 0;

  if (((_has_bits_[0] & 0x00000007) ^ 0x00000007) == 0) {  // All required fields are present.
    // required int32 id = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->id());

    // required string name = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());

    // required int32 ip = 3;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->ip());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  // repeated int32 addr_list = 4;
  {
    int data_size = 0;
    for (int i = 0; i < this->addr_list_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        Int32Size(this->addr_list(i));
    }
    total_size += 1 * this->addr_list_size() + data_size;
  }

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Sample::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const Sample* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Sample*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Sample::MergeFrom(const Sample& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  addr_list_.MergeFrom(from.addr_list_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_id()) {
      set_id(from.id());
    }
    if (from.has_name()) {
      set_has_name();
      name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
    }
    if (from.has_ip()) {
      set_ip(from.ip());
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void Sample::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Sample::CopyFrom(const Sample& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Sample::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;

  return true;
}

void Sample::Swap(Sample* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Sample::InternalSwap(Sample* other) {
  std::swap(id_, other->id_);
  name_.Swap(&other->name_);
  std::swap(ip_, other->ip_);
  addr_list_.UnsafeArenaSwap(&other->addr_list_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Sample::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Sample_descriptor_;
  metadata.reflection = Sample_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Sample

// @@protoc_insertion_point(global_scope)