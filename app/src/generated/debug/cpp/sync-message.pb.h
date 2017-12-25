// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: sync-message.proto

#ifndef PROTOBUF_sync_2dmessage_2eproto__INCLUDED
#define PROTOBUF_sync_2dmessage_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3004000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
class SyncMessage;
class SyncMessageDefaultTypeInternal;
extern SyncMessageDefaultTypeInternal _SyncMessage_default_instance_;
class SyncMessage_Size;
class SyncMessage_SizeDefaultTypeInternal;
extern SyncMessage_SizeDefaultTypeInternal _SyncMessage_Size_default_instance_;

namespace protobuf_sync_2dmessage_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[];
  static const ::google::protobuf::uint32 offsets[];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static void InitDefaultsImpl();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_sync_2dmessage_2eproto

// ===================================================================

class SyncMessage_Size : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:SyncMessage.Size) */ {
 public:
  SyncMessage_Size();
  virtual ~SyncMessage_Size();

  SyncMessage_Size(const SyncMessage_Size& from);

  inline SyncMessage_Size& operator=(const SyncMessage_Size& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  SyncMessage_Size(SyncMessage_Size&& from) noexcept
    : SyncMessage_Size() {
    *this = ::std::move(from);
  }

  inline SyncMessage_Size& operator=(SyncMessage_Size&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const SyncMessage_Size& default_instance();

  static inline const SyncMessage_Size* internal_default_instance() {
    return reinterpret_cast<const SyncMessage_Size*>(
               &_SyncMessage_Size_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(SyncMessage_Size* other);
  friend void swap(SyncMessage_Size& a, SyncMessage_Size& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline SyncMessage_Size* New() const PROTOBUF_FINAL { return New(NULL); }

  SyncMessage_Size* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const SyncMessage_Size& from);
  void MergeFrom(const SyncMessage_Size& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(SyncMessage_Size* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // int32 x = 1;
  void clear_x();
  static const int kXFieldNumber = 1;
  ::google::protobuf::int32 x() const;
  void set_x(::google::protobuf::int32 value);

  // int32 y = 2;
  void clear_y();
  static const int kYFieldNumber = 2;
  ::google::protobuf::int32 y() const;
  void set_y(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:SyncMessage.Size)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::int32 x_;
  ::google::protobuf::int32 y_;
  mutable int _cached_size_;
  friend struct protobuf_sync_2dmessage_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class SyncMessage : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:SyncMessage) */ {
 public:
  SyncMessage();
  virtual ~SyncMessage();

  SyncMessage(const SyncMessage& from);

  inline SyncMessage& operator=(const SyncMessage& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  SyncMessage(SyncMessage&& from) noexcept
    : SyncMessage() {
    *this = ::std::move(from);
  }

  inline SyncMessage& operator=(SyncMessage&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const SyncMessage& default_instance();

  static inline const SyncMessage* internal_default_instance() {
    return reinterpret_cast<const SyncMessage*>(
               &_SyncMessage_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(SyncMessage* other);
  friend void swap(SyncMessage& a, SyncMessage& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline SyncMessage* New() const PROTOBUF_FINAL { return New(NULL); }

  SyncMessage* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const SyncMessage& from);
  void MergeFrom(const SyncMessage& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(SyncMessage* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  typedef SyncMessage_Size Size;

  // accessors -------------------------------------------------------

  // bytes screenshot = 4;
  void clear_screenshot();
  static const int kScreenshotFieldNumber = 4;
  const ::std::string& screenshot() const;
  void set_screenshot(const ::std::string& value);
  #if LANG_CXX11
  void set_screenshot(::std::string&& value);
  #endif
  void set_screenshot(const char* value);
  void set_screenshot(const void* value, size_t size);
  ::std::string* mutable_screenshot();
  ::std::string* release_screenshot();
  void set_allocated_screenshot(::std::string* screenshot);

  // .SyncMessage.Size displaySize = 1;
  bool has_displaysize() const;
  void clear_displaysize();
  static const int kDisplaySizeFieldNumber = 1;
  const ::SyncMessage_Size& displaysize() const;
  ::SyncMessage_Size* mutable_displaysize();
  ::SyncMessage_Size* release_displaysize();
  void set_allocated_displaysize(::SyncMessage_Size* displaysize);

  // .SyncMessage.Size screenSize = 2;
  bool has_screensize() const;
  void clear_screensize();
  static const int kScreenSizeFieldNumber = 2;
  const ::SyncMessage_Size& screensize() const;
  ::SyncMessage_Size* mutable_screensize();
  ::SyncMessage_Size* release_screensize();
  void set_allocated_screensize(::SyncMessage_Size* screensize);

  // bool hasNavBar = 3;
  void clear_hasnavbar();
  static const int kHasNavBarFieldNumber = 3;
  bool hasnavbar() const;
  void set_hasnavbar(bool value);

  // @@protoc_insertion_point(class_scope:SyncMessage)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr screenshot_;
  ::SyncMessage_Size* displaysize_;
  ::SyncMessage_Size* screensize_;
  bool hasnavbar_;
  mutable int _cached_size_;
  friend struct protobuf_sync_2dmessage_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SyncMessage_Size

// int32 x = 1;
inline void SyncMessage_Size::clear_x() {
  x_ = 0;
}
inline ::google::protobuf::int32 SyncMessage_Size::x() const {
  // @@protoc_insertion_point(field_get:SyncMessage.Size.x)
  return x_;
}
inline void SyncMessage_Size::set_x(::google::protobuf::int32 value) {
  
  x_ = value;
  // @@protoc_insertion_point(field_set:SyncMessage.Size.x)
}

// int32 y = 2;
inline void SyncMessage_Size::clear_y() {
  y_ = 0;
}
inline ::google::protobuf::int32 SyncMessage_Size::y() const {
  // @@protoc_insertion_point(field_get:SyncMessage.Size.y)
  return y_;
}
inline void SyncMessage_Size::set_y(::google::protobuf::int32 value) {
  
  y_ = value;
  // @@protoc_insertion_point(field_set:SyncMessage.Size.y)
}

// -------------------------------------------------------------------

// SyncMessage

// .SyncMessage.Size displaySize = 1;
inline bool SyncMessage::has_displaysize() const {
  return this != internal_default_instance() && displaysize_ != NULL;
}
inline void SyncMessage::clear_displaysize() {
  if (GetArenaNoVirtual() == NULL && displaysize_ != NULL) delete displaysize_;
  displaysize_ = NULL;
}
inline const ::SyncMessage_Size& SyncMessage::displaysize() const {
  const ::SyncMessage_Size* p = displaysize_;
  // @@protoc_insertion_point(field_get:SyncMessage.displaySize)
  return p != NULL ? *p : *reinterpret_cast<const ::SyncMessage_Size*>(
      &::_SyncMessage_Size_default_instance_);
}
inline ::SyncMessage_Size* SyncMessage::mutable_displaysize() {
  
  if (displaysize_ == NULL) {
    displaysize_ = new ::SyncMessage_Size;
  }
  // @@protoc_insertion_point(field_mutable:SyncMessage.displaySize)
  return displaysize_;
}
inline ::SyncMessage_Size* SyncMessage::release_displaysize() {
  // @@protoc_insertion_point(field_release:SyncMessage.displaySize)
  
  ::SyncMessage_Size* temp = displaysize_;
  displaysize_ = NULL;
  return temp;
}
inline void SyncMessage::set_allocated_displaysize(::SyncMessage_Size* displaysize) {
  delete displaysize_;
  displaysize_ = displaysize;
  if (displaysize) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:SyncMessage.displaySize)
}

// .SyncMessage.Size screenSize = 2;
inline bool SyncMessage::has_screensize() const {
  return this != internal_default_instance() && screensize_ != NULL;
}
inline void SyncMessage::clear_screensize() {
  if (GetArenaNoVirtual() == NULL && screensize_ != NULL) delete screensize_;
  screensize_ = NULL;
}
inline const ::SyncMessage_Size& SyncMessage::screensize() const {
  const ::SyncMessage_Size* p = screensize_;
  // @@protoc_insertion_point(field_get:SyncMessage.screenSize)
  return p != NULL ? *p : *reinterpret_cast<const ::SyncMessage_Size*>(
      &::_SyncMessage_Size_default_instance_);
}
inline ::SyncMessage_Size* SyncMessage::mutable_screensize() {
  
  if (screensize_ == NULL) {
    screensize_ = new ::SyncMessage_Size;
  }
  // @@protoc_insertion_point(field_mutable:SyncMessage.screenSize)
  return screensize_;
}
inline ::SyncMessage_Size* SyncMessage::release_screensize() {
  // @@protoc_insertion_point(field_release:SyncMessage.screenSize)
  
  ::SyncMessage_Size* temp = screensize_;
  screensize_ = NULL;
  return temp;
}
inline void SyncMessage::set_allocated_screensize(::SyncMessage_Size* screensize) {
  delete screensize_;
  screensize_ = screensize;
  if (screensize) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:SyncMessage.screenSize)
}

// bool hasNavBar = 3;
inline void SyncMessage::clear_hasnavbar() {
  hasnavbar_ = false;
}
inline bool SyncMessage::hasnavbar() const {
  // @@protoc_insertion_point(field_get:SyncMessage.hasNavBar)
  return hasnavbar_;
}
inline void SyncMessage::set_hasnavbar(bool value) {
  
  hasnavbar_ = value;
  // @@protoc_insertion_point(field_set:SyncMessage.hasNavBar)
}

// bytes screenshot = 4;
inline void SyncMessage::clear_screenshot() {
  screenshot_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& SyncMessage::screenshot() const {
  // @@protoc_insertion_point(field_get:SyncMessage.screenshot)
  return screenshot_.GetNoArena();
}
inline void SyncMessage::set_screenshot(const ::std::string& value) {
  
  screenshot_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:SyncMessage.screenshot)
}
#if LANG_CXX11
inline void SyncMessage::set_screenshot(::std::string&& value) {
  
  screenshot_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:SyncMessage.screenshot)
}
#endif
inline void SyncMessage::set_screenshot(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  screenshot_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:SyncMessage.screenshot)
}
inline void SyncMessage::set_screenshot(const void* value, size_t size) {
  
  screenshot_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:SyncMessage.screenshot)
}
inline ::std::string* SyncMessage::mutable_screenshot() {
  
  // @@protoc_insertion_point(field_mutable:SyncMessage.screenshot)
  return screenshot_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* SyncMessage::release_screenshot() {
  // @@protoc_insertion_point(field_release:SyncMessage.screenshot)
  
  return screenshot_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void SyncMessage::set_allocated_screenshot(::std::string* screenshot) {
  if (screenshot != NULL) {
    
  } else {
    
  }
  screenshot_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), screenshot);
  // @@protoc_insertion_point(field_set_allocated:SyncMessage.screenshot)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_sync_2dmessage_2eproto__INCLUDED