// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: dbaccessor.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_dbaccessor_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_dbaccessor_2eproto

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
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_dbaccessor_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_dbaccessor_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_dbaccessor_2eproto;
namespace dbaccessor {
class Message;
class MessageDefaultTypeInternal;
extern MessageDefaultTypeInternal _Message_default_instance_;
class SimpleResponse;
class SimpleResponseDefaultTypeInternal;
extern SimpleResponseDefaultTypeInternal _SimpleResponse_default_instance_;
}  // namespace dbaccessor
PROTOBUF_NAMESPACE_OPEN
template<> ::dbaccessor::Message* Arena::CreateMaybeMessage<::dbaccessor::Message>(Arena*);
template<> ::dbaccessor::SimpleResponse* Arena::CreateMaybeMessage<::dbaccessor::SimpleResponse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace dbaccessor {

// ===================================================================

class Message :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:dbaccessor.Message) */ {
 public:
  Message();
  virtual ~Message();

  Message(const Message& from);
  Message(Message&& from) noexcept
    : Message() {
    *this = ::std::move(from);
  }

  inline Message& operator=(const Message& from) {
    CopyFrom(from);
    return *this;
  }
  inline Message& operator=(Message&& from) noexcept {
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
  static const Message& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Message* internal_default_instance() {
    return reinterpret_cast<const Message*>(
               &_Message_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Message& a, Message& b) {
    a.Swap(&b);
  }
  inline void Swap(Message* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Message* New() const final {
    return CreateMaybeMessage<Message>(nullptr);
  }

  Message* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Message>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Message& from);
  void MergeFrom(const Message& from);
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
  void InternalSwap(Message* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "dbaccessor.Message";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_dbaccessor_2eproto);
    return ::descriptor_table_dbaccessor_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kUserIdFieldNumber = 1,
    kTextFieldNumber = 2,
  };
  // string user_id = 1;
  void clear_user_id();
  const std::string& user_id() const;
  void set_user_id(const std::string& value);
  void set_user_id(std::string&& value);
  void set_user_id(const char* value);
  void set_user_id(const char* value, size_t size);
  std::string* mutable_user_id();
  std::string* release_user_id();
  void set_allocated_user_id(std::string* user_id);
  private:
  const std::string& _internal_user_id() const;
  void _internal_set_user_id(const std::string& value);
  std::string* _internal_mutable_user_id();
  public:

  // string text = 2;
  void clear_text();
  const std::string& text() const;
  void set_text(const std::string& value);
  void set_text(std::string&& value);
  void set_text(const char* value);
  void set_text(const char* value, size_t size);
  std::string* mutable_text();
  std::string* release_text();
  void set_allocated_text(std::string* text);
  private:
  const std::string& _internal_text() const;
  void _internal_set_text(const std::string& value);
  std::string* _internal_mutable_text();
  public:

  // @@protoc_insertion_point(class_scope:dbaccessor.Message)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr user_id_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr text_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_dbaccessor_2eproto;
};
// -------------------------------------------------------------------

class SimpleResponse :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:dbaccessor.SimpleResponse) */ {
 public:
  SimpleResponse();
  virtual ~SimpleResponse();

  SimpleResponse(const SimpleResponse& from);
  SimpleResponse(SimpleResponse&& from) noexcept
    : SimpleResponse() {
    *this = ::std::move(from);
  }

  inline SimpleResponse& operator=(const SimpleResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline SimpleResponse& operator=(SimpleResponse&& from) noexcept {
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
  static const SimpleResponse& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SimpleResponse* internal_default_instance() {
    return reinterpret_cast<const SimpleResponse*>(
               &_SimpleResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(SimpleResponse& a, SimpleResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(SimpleResponse* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline SimpleResponse* New() const final {
    return CreateMaybeMessage<SimpleResponse>(nullptr);
  }

  SimpleResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<SimpleResponse>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const SimpleResponse& from);
  void MergeFrom(const SimpleResponse& from);
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
  void InternalSwap(SimpleResponse* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "dbaccessor.SimpleResponse";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_dbaccessor_2eproto);
    return ::descriptor_table_dbaccessor_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kResponseFlagFieldNumber = 1,
  };
  // bool responseFlag = 1;
  void clear_responseflag();
  bool responseflag() const;
  void set_responseflag(bool value);
  private:
  bool _internal_responseflag() const;
  void _internal_set_responseflag(bool value);
  public:

  // @@protoc_insertion_point(class_scope:dbaccessor.SimpleResponse)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  bool responseflag_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_dbaccessor_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Message

// string user_id = 1;
inline void Message::clear_user_id() {
  user_id_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& Message::user_id() const {
  // @@protoc_insertion_point(field_get:dbaccessor.Message.user_id)
  return _internal_user_id();
}
inline void Message::set_user_id(const std::string& value) {
  _internal_set_user_id(value);
  // @@protoc_insertion_point(field_set:dbaccessor.Message.user_id)
}
inline std::string* Message::mutable_user_id() {
  // @@protoc_insertion_point(field_mutable:dbaccessor.Message.user_id)
  return _internal_mutable_user_id();
}
inline const std::string& Message::_internal_user_id() const {
  return user_id_.GetNoArena();
}
inline void Message::_internal_set_user_id(const std::string& value) {
  
  user_id_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void Message::set_user_id(std::string&& value) {
  
  user_id_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:dbaccessor.Message.user_id)
}
inline void Message::set_user_id(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  user_id_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:dbaccessor.Message.user_id)
}
inline void Message::set_user_id(const char* value, size_t size) {
  
  user_id_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:dbaccessor.Message.user_id)
}
inline std::string* Message::_internal_mutable_user_id() {
  
  return user_id_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Message::release_user_id() {
  // @@protoc_insertion_point(field_release:dbaccessor.Message.user_id)
  
  return user_id_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Message::set_allocated_user_id(std::string* user_id) {
  if (user_id != nullptr) {
    
  } else {
    
  }
  user_id_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), user_id);
  // @@protoc_insertion_point(field_set_allocated:dbaccessor.Message.user_id)
}

// string text = 2;
inline void Message::clear_text() {
  text_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& Message::text() const {
  // @@protoc_insertion_point(field_get:dbaccessor.Message.text)
  return _internal_text();
}
inline void Message::set_text(const std::string& value) {
  _internal_set_text(value);
  // @@protoc_insertion_point(field_set:dbaccessor.Message.text)
}
inline std::string* Message::mutable_text() {
  // @@protoc_insertion_point(field_mutable:dbaccessor.Message.text)
  return _internal_mutable_text();
}
inline const std::string& Message::_internal_text() const {
  return text_.GetNoArena();
}
inline void Message::_internal_set_text(const std::string& value) {
  
  text_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void Message::set_text(std::string&& value) {
  
  text_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:dbaccessor.Message.text)
}
inline void Message::set_text(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  text_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:dbaccessor.Message.text)
}
inline void Message::set_text(const char* value, size_t size) {
  
  text_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:dbaccessor.Message.text)
}
inline std::string* Message::_internal_mutable_text() {
  
  return text_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Message::release_text() {
  // @@protoc_insertion_point(field_release:dbaccessor.Message.text)
  
  return text_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Message::set_allocated_text(std::string* text) {
  if (text != nullptr) {
    
  } else {
    
  }
  text_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), text);
  // @@protoc_insertion_point(field_set_allocated:dbaccessor.Message.text)
}

// -------------------------------------------------------------------

// SimpleResponse

// bool responseFlag = 1;
inline void SimpleResponse::clear_responseflag() {
  responseflag_ = false;
}
inline bool SimpleResponse::_internal_responseflag() const {
  return responseflag_;
}
inline bool SimpleResponse::responseflag() const {
  // @@protoc_insertion_point(field_get:dbaccessor.SimpleResponse.responseFlag)
  return _internal_responseflag();
}
inline void SimpleResponse::_internal_set_responseflag(bool value) {
  
  responseflag_ = value;
}
inline void SimpleResponse::set_responseflag(bool value) {
  _internal_set_responseflag(value);
  // @@protoc_insertion_point(field_set:dbaccessor.SimpleResponse.responseFlag)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace dbaccessor

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_dbaccessor_2eproto
