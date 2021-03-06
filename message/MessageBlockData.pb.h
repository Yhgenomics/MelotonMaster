// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MessageBlockData.proto

#ifndef PROTOBUF_MessageBlockData_2eproto__INCLUDED
#define PROTOBUF_MessageBlockData_2eproto__INCLUDED

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
void  protobuf_AddDesc_MessageBlockData_2eproto();
void protobuf_AssignDesc_MessageBlockData_2eproto();
void protobuf_ShutdownFile_MessageBlockData_2eproto();

class MessageBlockData;

// ===================================================================

class MessageBlockData : public ::google::protobuf::Message {
 public:
  MessageBlockData();
  virtual ~MessageBlockData();

  MessageBlockData(const MessageBlockData& from);

  inline MessageBlockData& operator=(const MessageBlockData& from) {
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
  static const MessageBlockData& default_instance();

  void Swap(MessageBlockData* other);

  // implements Message ----------------------------------------------

  MessageBlockData* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MessageBlockData& from);
  void MergeFrom(const MessageBlockData& from);
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

  // required string Token = 1;
  inline bool has_token() const;
  inline void clear_token();
  static const int kTokenFieldNumber = 1;
  inline const ::std::string& token() const;
  inline void set_token(const ::std::string& value);
  inline void set_token(const char* value);
  inline void set_token(const char* value, size_t size);
  inline ::std::string* mutable_token();
  inline ::std::string* release_token();
  inline void set_allocated_token(::std::string* token);

  // required bytes Data = 2;
  inline bool has_data() const;
  inline void clear_data();
  static const int kDataFieldNumber = 2;
  inline const ::std::string& data() const;
  inline void set_data(const ::std::string& value);
  inline void set_data(const char* value);
  inline void set_data(const void* value, size_t size);
  inline ::std::string* mutable_data();
  inline ::std::string* release_data();
  inline void set_allocated_data(::std::string* data);

  // required int64 Size = 3;
  inline bool has_size() const;
  inline void clear_size();
  static const int kSizeFieldNumber = 3;
  inline ::google::protobuf::int64 size() const;
  inline void set_size(::google::protobuf::int64 value);

  // required int64 Offset = 4;
  inline bool has_offset() const;
  inline void clear_offset();
  static const int kOffsetFieldNumber = 4;
  inline ::google::protobuf::int64 offset() const;
  inline void set_offset(::google::protobuf::int64 value);

  // required int64 Checksum = 5;
  inline bool has_checksum() const;
  inline void clear_checksum();
  static const int kChecksumFieldNumber = 5;
  inline ::google::protobuf::int64 checksum() const;
  inline void set_checksum(::google::protobuf::int64 value);

  // required bool IsLast = 6;
  inline bool has_islast() const;
  inline void clear_islast();
  static const int kIsLastFieldNumber = 6;
  inline bool islast() const;
  inline void set_islast(bool value);

  // @@protoc_insertion_point(class_scope:MessageBlockData)
 private:
  inline void set_has_token();
  inline void clear_has_token();
  inline void set_has_data();
  inline void clear_has_data();
  inline void set_has_size();
  inline void clear_has_size();
  inline void set_has_offset();
  inline void clear_has_offset();
  inline void set_has_checksum();
  inline void clear_has_checksum();
  inline void set_has_islast();
  inline void clear_has_islast();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* token_;
  ::std::string* data_;
  ::google::protobuf::int64 size_;
  ::google::protobuf::int64 offset_;
  ::google::protobuf::int64 checksum_;
  bool islast_;
  friend void  protobuf_AddDesc_MessageBlockData_2eproto();
  friend void protobuf_AssignDesc_MessageBlockData_2eproto();
  friend void protobuf_ShutdownFile_MessageBlockData_2eproto();

  void InitAsDefaultInstance();
  static MessageBlockData* default_instance_;
};
// ===================================================================


// ===================================================================

// MessageBlockData

// required string Token = 1;
inline bool MessageBlockData::has_token() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MessageBlockData::set_has_token() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MessageBlockData::clear_has_token() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MessageBlockData::clear_token() {
  if (token_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    token_->clear();
  }
  clear_has_token();
}
inline const ::std::string& MessageBlockData::token() const {
  // @@protoc_insertion_point(field_get:MessageBlockData.Token)
  return *token_;
}
inline void MessageBlockData::set_token(const ::std::string& value) {
  set_has_token();
  if (token_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    token_ = new ::std::string;
  }
  token_->assign(value);
  // @@protoc_insertion_point(field_set:MessageBlockData.Token)
}
inline void MessageBlockData::set_token(const char* value) {
  set_has_token();
  if (token_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    token_ = new ::std::string;
  }
  token_->assign(value);
  // @@protoc_insertion_point(field_set_char:MessageBlockData.Token)
}
inline void MessageBlockData::set_token(const char* value, size_t size) {
  set_has_token();
  if (token_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    token_ = new ::std::string;
  }
  token_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:MessageBlockData.Token)
}
inline ::std::string* MessageBlockData::mutable_token() {
  set_has_token();
  if (token_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    token_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:MessageBlockData.Token)
  return token_;
}
inline ::std::string* MessageBlockData::release_token() {
  clear_has_token();
  if (token_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = token_;
    token_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void MessageBlockData::set_allocated_token(::std::string* token) {
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
  // @@protoc_insertion_point(field_set_allocated:MessageBlockData.Token)
}

// required bytes Data = 2;
inline bool MessageBlockData::has_data() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void MessageBlockData::set_has_data() {
  _has_bits_[0] |= 0x00000002u;
}
inline void MessageBlockData::clear_has_data() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void MessageBlockData::clear_data() {
  if (data_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    data_->clear();
  }
  clear_has_data();
}
inline const ::std::string& MessageBlockData::data() const {
  // @@protoc_insertion_point(field_get:MessageBlockData.Data)
  return *data_;
}
inline void MessageBlockData::set_data(const ::std::string& value) {
  set_has_data();
  if (data_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    data_ = new ::std::string;
  }
  data_->assign(value);
  // @@protoc_insertion_point(field_set:MessageBlockData.Data)
}
inline void MessageBlockData::set_data(const char* value) {
  set_has_data();
  if (data_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    data_ = new ::std::string;
  }
  data_->assign(value);
  // @@protoc_insertion_point(field_set_char:MessageBlockData.Data)
}
inline void MessageBlockData::set_data(const void* value, size_t size) {
  set_has_data();
  if (data_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    data_ = new ::std::string;
  }
  data_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:MessageBlockData.Data)
}
inline ::std::string* MessageBlockData::mutable_data() {
  set_has_data();
  if (data_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    data_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:MessageBlockData.Data)
  return data_;
}
inline ::std::string* MessageBlockData::release_data() {
  clear_has_data();
  if (data_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = data_;
    data_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void MessageBlockData::set_allocated_data(::std::string* data) {
  if (data_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete data_;
  }
  if (data) {
    set_has_data();
    data_ = data;
  } else {
    clear_has_data();
    data_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:MessageBlockData.Data)
}

// required int64 Size = 3;
inline bool MessageBlockData::has_size() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void MessageBlockData::set_has_size() {
  _has_bits_[0] |= 0x00000004u;
}
inline void MessageBlockData::clear_has_size() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void MessageBlockData::clear_size() {
  size_ = GOOGLE_LONGLONG(0);
  clear_has_size();
}
inline ::google::protobuf::int64 MessageBlockData::size() const {
  // @@protoc_insertion_point(field_get:MessageBlockData.Size)
  return size_;
}
inline void MessageBlockData::set_size(::google::protobuf::int64 value) {
  set_has_size();
  size_ = value;
  // @@protoc_insertion_point(field_set:MessageBlockData.Size)
}

// required int64 Offset = 4;
inline bool MessageBlockData::has_offset() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void MessageBlockData::set_has_offset() {
  _has_bits_[0] |= 0x00000008u;
}
inline void MessageBlockData::clear_has_offset() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void MessageBlockData::clear_offset() {
  offset_ = GOOGLE_LONGLONG(0);
  clear_has_offset();
}
inline ::google::protobuf::int64 MessageBlockData::offset() const {
  // @@protoc_insertion_point(field_get:MessageBlockData.Offset)
  return offset_;
}
inline void MessageBlockData::set_offset(::google::protobuf::int64 value) {
  set_has_offset();
  offset_ = value;
  // @@protoc_insertion_point(field_set:MessageBlockData.Offset)
}

// required int64 Checksum = 5;
inline bool MessageBlockData::has_checksum() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void MessageBlockData::set_has_checksum() {
  _has_bits_[0] |= 0x00000010u;
}
inline void MessageBlockData::clear_has_checksum() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void MessageBlockData::clear_checksum() {
  checksum_ = GOOGLE_LONGLONG(0);
  clear_has_checksum();
}
inline ::google::protobuf::int64 MessageBlockData::checksum() const {
  // @@protoc_insertion_point(field_get:MessageBlockData.Checksum)
  return checksum_;
}
inline void MessageBlockData::set_checksum(::google::protobuf::int64 value) {
  set_has_checksum();
  checksum_ = value;
  // @@protoc_insertion_point(field_set:MessageBlockData.Checksum)
}

// required bool IsLast = 6;
inline bool MessageBlockData::has_islast() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void MessageBlockData::set_has_islast() {
  _has_bits_[0] |= 0x00000020u;
}
inline void MessageBlockData::clear_has_islast() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void MessageBlockData::clear_islast() {
  islast_ = false;
  clear_has_islast();
}
inline bool MessageBlockData::islast() const {
  // @@protoc_insertion_point(field_get:MessageBlockData.IsLast)
  return islast_;
}
inline void MessageBlockData::set_islast(bool value) {
  set_has_islast();
  islast_ = value;
  // @@protoc_insertion_point(field_set:MessageBlockData.IsLast)
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_MessageBlockData_2eproto__INCLUDED
