// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MessagePrepareWriteACK.proto

#ifndef PROTOBUF_MessagePrepareWriteACK_2eproto__INCLUDED
#define PROTOBUF_MessagePrepareWriteACK_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_MessagePrepareWriteACK_2eproto();
void protobuf_AssignDesc_MessagePrepareWriteACK_2eproto();
void protobuf_ShutdownFile_MessagePrepareWriteACK_2eproto();

class MessagePrepareWriteACK;

// ===================================================================

class MessagePrepareWriteACK : public ::google::protobuf::Message {
 public:
  MessagePrepareWriteACK();
  virtual ~MessagePrepareWriteACK();

  MessagePrepareWriteACK(const MessagePrepareWriteACK& from);

  inline MessagePrepareWriteACK& operator=(const MessagePrepareWriteACK& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const MessagePrepareWriteACK& default_instance();

  void Swap(MessagePrepareWriteACK* other);

  // implements Message ----------------------------------------------

  MessagePrepareWriteACK* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MessagePrepareWriteACK& from);
  void MergeFrom(const MessagePrepareWriteACK& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int64 ClientId = 1;
  inline bool has_clientid() const;
  inline void clear_clientid();
  static const int kClientIdFieldNumber = 1;
  inline ::google::protobuf::int64 clientid() const;
  inline void set_clientid(::google::protobuf::int64 value);

  // required string Token = 2;
  inline bool has_token() const;
  inline void clear_token();
  static const int kTokenFieldNumber = 2;
  inline const ::std::string& token() const;
  inline void set_token(const ::std::string& value);
  inline void set_token(const char* value);
  inline void set_token(const char* value, size_t size);
  inline ::std::string* mutable_token();
  inline ::std::string* release_token();
  inline void set_allocated_token(::std::string* token);

  // required int64 FileOffset = 3;
  inline bool has_fileoffset() const;
  inline void clear_fileoffset();
  static const int kFileOffsetFieldNumber = 3;
  inline ::google::protobuf::int64 fileoffset() const;
  inline void set_fileoffset(::google::protobuf::int64 value);

  // required int64 PartId = 4;
  inline bool has_partid() const;
  inline void clear_partid();
  static const int kPartIdFieldNumber = 4;
  inline ::google::protobuf::int64 partid() const;
  inline void set_partid(::google::protobuf::int64 value);

  // required int64 Size = 5;
  inline bool has_size() const;
  inline void clear_size();
  static const int kSizeFieldNumber = 5;
  inline ::google::protobuf::int64 size() const;
  inline void set_size(::google::protobuf::int64 value);

  // optional string Address = 6;
  inline bool has_address() const;
  inline void clear_address();
  static const int kAddressFieldNumber = 6;
  inline const ::std::string& address() const;
  inline void set_address(const ::std::string& value);
  inline void set_address(const char* value);
  inline void set_address(const char* value, size_t size);
  inline ::std::string* mutable_address();
  inline ::std::string* release_address();
  inline void set_allocated_address(::std::string* address);

  // optional int32 Port = 7;
  inline bool has_port() const;
  inline void clear_port();
  static const int kPortFieldNumber = 7;
  inline ::google::protobuf::int32 port() const;
  inline void set_port(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:MessagePrepareWriteACK)
 private:
  inline void set_has_clientid();
  inline void clear_has_clientid();
  inline void set_has_token();
  inline void clear_has_token();
  inline void set_has_fileoffset();
  inline void clear_has_fileoffset();
  inline void set_has_partid();
  inline void clear_has_partid();
  inline void set_has_size();
  inline void clear_has_size();
  inline void set_has_address();
  inline void clear_has_address();
  inline void set_has_port();
  inline void clear_has_port();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int64 clientid_;
  ::std::string* token_;
  ::google::protobuf::int64 fileoffset_;
  ::google::protobuf::int64 partid_;
  ::google::protobuf::int64 size_;
  ::std::string* address_;
  ::google::protobuf::int32 port_;
  friend void  protobuf_AddDesc_MessagePrepareWriteACK_2eproto();
  friend void protobuf_AssignDesc_MessagePrepareWriteACK_2eproto();
  friend void protobuf_ShutdownFile_MessagePrepareWriteACK_2eproto();

  void InitAsDefaultInstance();
  static MessagePrepareWriteACK* default_instance_;
};
// ===================================================================


// ===================================================================

// MessagePrepareWriteACK

// required int64 ClientId = 1;
inline bool MessagePrepareWriteACK::has_clientid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MessagePrepareWriteACK::set_has_clientid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MessagePrepareWriteACK::clear_has_clientid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MessagePrepareWriteACK::clear_clientid() {
  clientid_ = GOOGLE_LONGLONG(0);
  clear_has_clientid();
}
inline ::google::protobuf::int64 MessagePrepareWriteACK::clientid() const {
  // @@protoc_insertion_point(field_get:MessagePrepareWriteACK.ClientId)
  return clientid_;
}
inline void MessagePrepareWriteACK::set_clientid(::google::protobuf::int64 value) {
  set_has_clientid();
  clientid_ = value;
  // @@protoc_insertion_point(field_set:MessagePrepareWriteACK.ClientId)
}

// required string Token = 2;
inline bool MessagePrepareWriteACK::has_token() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void MessagePrepareWriteACK::set_has_token() {
  _has_bits_[0] |= 0x00000002u;
}
inline void MessagePrepareWriteACK::clear_has_token() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void MessagePrepareWriteACK::clear_token() {
  if (token_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    token_->clear();
  }
  clear_has_token();
}
inline const ::std::string& MessagePrepareWriteACK::token() const {
  // @@protoc_insertion_point(field_get:MessagePrepareWriteACK.Token)
  return *token_;
}
inline void MessagePrepareWriteACK::set_token(const ::std::string& value) {
  set_has_token();
  if (token_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    token_ = new ::std::string;
  }
  token_->assign(value);
  // @@protoc_insertion_point(field_set:MessagePrepareWriteACK.Token)
}
inline void MessagePrepareWriteACK::set_token(const char* value) {
  set_has_token();
  if (token_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    token_ = new ::std::string;
  }
  token_->assign(value);
  // @@protoc_insertion_point(field_set_char:MessagePrepareWriteACK.Token)
}
inline void MessagePrepareWriteACK::set_token(const char* value, size_t size) {
  set_has_token();
  if (token_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    token_ = new ::std::string;
  }
  token_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:MessagePrepareWriteACK.Token)
}
inline ::std::string* MessagePrepareWriteACK::mutable_token() {
  set_has_token();
  if (token_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    token_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:MessagePrepareWriteACK.Token)
  return token_;
}
inline ::std::string* MessagePrepareWriteACK::release_token() {
  clear_has_token();
  if (token_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = token_;
    token_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void MessagePrepareWriteACK::set_allocated_token(::std::string* token) {
  if (token_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete token_;
  }
  if (token) {
    set_has_token();
    token_ = token;
  } else {
    clear_has_token();
    token_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:MessagePrepareWriteACK.Token)
}

// required int64 FileOffset = 3;
inline bool MessagePrepareWriteACK::has_fileoffset() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void MessagePrepareWriteACK::set_has_fileoffset() {
  _has_bits_[0] |= 0x00000004u;
}
inline void MessagePrepareWriteACK::clear_has_fileoffset() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void MessagePrepareWriteACK::clear_fileoffset() {
  fileoffset_ = GOOGLE_LONGLONG(0);
  clear_has_fileoffset();
}
inline ::google::protobuf::int64 MessagePrepareWriteACK::fileoffset() const {
  // @@protoc_insertion_point(field_get:MessagePrepareWriteACK.FileOffset)
  return fileoffset_;
}
inline void MessagePrepareWriteACK::set_fileoffset(::google::protobuf::int64 value) {
  set_has_fileoffset();
  fileoffset_ = value;
  // @@protoc_insertion_point(field_set:MessagePrepareWriteACK.FileOffset)
}

// required int64 PartId = 4;
inline bool MessagePrepareWriteACK::has_partid() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void MessagePrepareWriteACK::set_has_partid() {
  _has_bits_[0] |= 0x00000008u;
}
inline void MessagePrepareWriteACK::clear_has_partid() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void MessagePrepareWriteACK::clear_partid() {
  partid_ = GOOGLE_LONGLONG(0);
  clear_has_partid();
}
inline ::google::protobuf::int64 MessagePrepareWriteACK::partid() const {
  // @@protoc_insertion_point(field_get:MessagePrepareWriteACK.PartId)
  return partid_;
}
inline void MessagePrepareWriteACK::set_partid(::google::protobuf::int64 value) {
  set_has_partid();
  partid_ = value;
  // @@protoc_insertion_point(field_set:MessagePrepareWriteACK.PartId)
}

// required int64 Size = 5;
inline bool MessagePrepareWriteACK::has_size() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void MessagePrepareWriteACK::set_has_size() {
  _has_bits_[0] |= 0x00000010u;
}
inline void MessagePrepareWriteACK::clear_has_size() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void MessagePrepareWriteACK::clear_size() {
  size_ = GOOGLE_LONGLONG(0);
  clear_has_size();
}
inline ::google::protobuf::int64 MessagePrepareWriteACK::size() const {
  // @@protoc_insertion_point(field_get:MessagePrepareWriteACK.Size)
  return size_;
}
inline void MessagePrepareWriteACK::set_size(::google::protobuf::int64 value) {
  set_has_size();
  size_ = value;
  // @@protoc_insertion_point(field_set:MessagePrepareWriteACK.Size)
}

// optional string Address = 6;
inline bool MessagePrepareWriteACK::has_address() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void MessagePrepareWriteACK::set_has_address() {
  _has_bits_[0] |= 0x00000020u;
}
inline void MessagePrepareWriteACK::clear_has_address() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void MessagePrepareWriteACK::clear_address() {
  if (address_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    address_->clear();
  }
  clear_has_address();
}
inline const ::std::string& MessagePrepareWriteACK::address() const {
  // @@protoc_insertion_point(field_get:MessagePrepareWriteACK.Address)
  return *address_;
}
inline void MessagePrepareWriteACK::set_address(const ::std::string& value) {
  set_has_address();
  if (address_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    address_ = new ::std::string;
  }
  address_->assign(value);
  // @@protoc_insertion_point(field_set:MessagePrepareWriteACK.Address)
}
inline void MessagePrepareWriteACK::set_address(const char* value) {
  set_has_address();
  if (address_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    address_ = new ::std::string;
  }
  address_->assign(value);
  // @@protoc_insertion_point(field_set_char:MessagePrepareWriteACK.Address)
}
inline void MessagePrepareWriteACK::set_address(const char* value, size_t size) {
  set_has_address();
  if (address_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    address_ = new ::std::string;
  }
  address_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:MessagePrepareWriteACK.Address)
}
inline ::std::string* MessagePrepareWriteACK::mutable_address() {
  set_has_address();
  if (address_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    address_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:MessagePrepareWriteACK.Address)
  return address_;
}
inline ::std::string* MessagePrepareWriteACK::release_address() {
  clear_has_address();
  if (address_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = address_;
    address_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void MessagePrepareWriteACK::set_allocated_address(::std::string* address) {
  if (address_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete address_;
  }
  if (address) {
    set_has_address();
    address_ = address;
  } else {
    clear_has_address();
    address_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:MessagePrepareWriteACK.Address)
}

// optional int32 Port = 7;
inline bool MessagePrepareWriteACK::has_port() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void MessagePrepareWriteACK::set_has_port() {
  _has_bits_[0] |= 0x00000040u;
}
inline void MessagePrepareWriteACK::clear_has_port() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void MessagePrepareWriteACK::clear_port() {
  port_ = 0;
  clear_has_port();
}
inline ::google::protobuf::int32 MessagePrepareWriteACK::port() const {
  // @@protoc_insertion_point(field_get:MessagePrepareWriteACK.Port)
  return port_;
}
inline void MessagePrepareWriteACK::set_port(::google::protobuf::int32 value) {
  set_has_port();
  port_ = value;
  // @@protoc_insertion_point(field_set:MessagePrepareWriteACK.Port)
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_MessagePrepareWriteACK_2eproto__INCLUDED
