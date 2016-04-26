// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/protobuf/util/internal/testdata/struct.proto

#ifndef PROTOBUF_google_2fprotobuf_2futil_2finternal_2ftestdata_2fstruct_2eproto__INCLUDED
#define PROTOBUF_google_2fprotobuf_2futil_2finternal_2ftestdata_2fstruct_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include <google/protobuf/struct.pb.h>
// @@protoc_insertion_point(includes)

namespace google {
namespace protobuf {
namespace testing {
namespace structs {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_google_2fprotobuf_2futil_2finternal_2ftestdata_2fstruct_2eproto();
void protobuf_AssignDesc_google_2fprotobuf_2futil_2finternal_2ftestdata_2fstruct_2eproto();
void protobuf_ShutdownFile_google_2fprotobuf_2futil_2finternal_2ftestdata_2fstruct_2eproto();

class StructType;

// ===================================================================

class StructType : public ::google::protobuf::Message {
 public:
  StructType();
  virtual ~StructType();

  StructType(const StructType& from);

  inline StructType& operator=(const StructType& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const StructType& default_instance();

  void Swap(StructType* other);

  // implements Message ----------------------------------------------

  inline StructType* New() const { return New(NULL); }

  StructType* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const StructType& from);
  void MergeFrom(const StructType& from);
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
  void InternalSwap(StructType* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional .google.protobuf.Struct object = 1;
  bool has_object() const;
  void clear_object();
  static const int kObjectFieldNumber = 1;
  const ::google::protobuf::Struct& object() const;
  ::google::protobuf::Struct* mutable_object();
  ::google::protobuf::Struct* release_object();
  void set_allocated_object(::google::protobuf::Struct* object);

  // @@protoc_insertion_point(class_scope:google.protobuf.testing.structs.StructType)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::Struct* object_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_google_2fprotobuf_2futil_2finternal_2ftestdata_2fstruct_2eproto();
  friend void protobuf_AssignDesc_google_2fprotobuf_2futil_2finternal_2ftestdata_2fstruct_2eproto();
  friend void protobuf_ShutdownFile_google_2fprotobuf_2futil_2finternal_2ftestdata_2fstruct_2eproto();

  void InitAsDefaultInstance();
  static StructType* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// StructType

// optional .google.protobuf.Struct object = 1;
inline bool StructType::has_object() const {
  return !_is_default_instance_ && object_ != NULL;
}
inline void StructType::clear_object() {
  if (GetArenaNoVirtual() == NULL && object_ != NULL) delete object_;
  object_ = NULL;
}
inline const ::google::protobuf::Struct& StructType::object() const {
  // @@protoc_insertion_point(field_get:google.protobuf.testing.structs.StructType.object)
  return object_ != NULL ? *object_ : *default_instance_->object_;
}
inline ::google::protobuf::Struct* StructType::mutable_object() {
  
  if (object_ == NULL) {
    object_ = new ::google::protobuf::Struct;
  }
  // @@protoc_insertion_point(field_mutable:google.protobuf.testing.structs.StructType.object)
  return object_;
}
inline ::google::protobuf::Struct* StructType::release_object() {
  
  ::google::protobuf::Struct* temp = object_;
  object_ = NULL;
  return temp;
}
inline void StructType::set_allocated_object(::google::protobuf::Struct* object) {
  delete object_;
  object_ = object;
  if (object) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.testing.structs.StructType.object)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace structs
}  // namespace testing
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_google_2fprotobuf_2futil_2finternal_2ftestdata_2fstruct_2eproto__INCLUDED