// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cartographer/mapping/proto/submap.proto

#ifndef PROTOBUF_cartographer_2fmapping_2fproto_2fsubmap_2eproto__INCLUDED
#define PROTOBUF_cartographer_2fmapping_2fproto_2fsubmap_2eproto__INCLUDED

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
#include "cartographer/mapping/proto/2d/grid_2d.pb.h"
#include "cartographer/mapping/proto/3d/hybrid_grid.pb.h"
#include "cartographer/transform/proto/transform.pb.h"
// @@protoc_insertion_point(includes)
namespace cartographer {
namespace mapping {
namespace proto {
class Submap2D;
class Submap2DDefaultTypeInternal;
extern Submap2DDefaultTypeInternal _Submap2D_default_instance_;
class Submap3D;
class Submap3DDefaultTypeInternal;
extern Submap3DDefaultTypeInternal _Submap3D_default_instance_;
}  // namespace proto
}  // namespace mapping
}  // namespace cartographer

namespace cartographer {
namespace mapping {
namespace proto {

namespace protobuf_cartographer_2fmapping_2fproto_2fsubmap_2eproto {
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
}  // namespace protobuf_cartographer_2fmapping_2fproto_2fsubmap_2eproto

// ===================================================================

class Submap2D : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:cartographer.mapping.proto.Submap2D) */ {
 public:
  Submap2D();
  virtual ~Submap2D();

  Submap2D(const Submap2D& from);

  inline Submap2D& operator=(const Submap2D& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Submap2D(Submap2D&& from) noexcept
    : Submap2D() {
    *this = ::std::move(from);
  }

  inline Submap2D& operator=(Submap2D&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Submap2D& default_instance();

  static inline const Submap2D* internal_default_instance() {
    return reinterpret_cast<const Submap2D*>(
               &_Submap2D_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(Submap2D* other);
  friend void swap(Submap2D& a, Submap2D& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Submap2D* New() const PROTOBUF_FINAL { return New(NULL); }

  Submap2D* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Submap2D& from);
  void MergeFrom(const Submap2D& from);
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
  void InternalSwap(Submap2D* other);
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

  // .cartographer.transform.proto.Rigid3d local_pose = 1;
  bool has_local_pose() const;
  void clear_local_pose();
  static const int kLocalPoseFieldNumber = 1;
  const ::cartographer::transform::proto::Rigid3d& local_pose() const;
  ::cartographer::transform::proto::Rigid3d* mutable_local_pose();
  ::cartographer::transform::proto::Rigid3d* release_local_pose();
  void set_allocated_local_pose(::cartographer::transform::proto::Rigid3d* local_pose);

  // .cartographer.mapping.proto.Grid2D grid = 4;
  bool has_grid() const;
  void clear_grid();
  static const int kGridFieldNumber = 4;
  const ::cartographer::mapping::proto::Grid2D& grid() const;
  ::cartographer::mapping::proto::Grid2D* mutable_grid();
  ::cartographer::mapping::proto::Grid2D* release_grid();
  void set_allocated_grid(::cartographer::mapping::proto::Grid2D* grid);

  // int32 num_range_data = 2;
  void clear_num_range_data();
  static const int kNumRangeDataFieldNumber = 2;
  ::google::protobuf::int32 num_range_data() const;
  void set_num_range_data(::google::protobuf::int32 value);

  // bool finished = 3;
  void clear_finished();
  static const int kFinishedFieldNumber = 3;
  bool finished() const;
  void set_finished(bool value);

  // @@protoc_insertion_point(class_scope:cartographer.mapping.proto.Submap2D)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::cartographer::transform::proto::Rigid3d* local_pose_;
  ::cartographer::mapping::proto::Grid2D* grid_;
  ::google::protobuf::int32 num_range_data_;
  bool finished_;
  mutable int _cached_size_;
  friend struct protobuf_cartographer_2fmapping_2fproto_2fsubmap_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class Submap3D : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:cartographer.mapping.proto.Submap3D) */ {
 public:
  Submap3D();
  virtual ~Submap3D();

  Submap3D(const Submap3D& from);

  inline Submap3D& operator=(const Submap3D& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Submap3D(Submap3D&& from) noexcept
    : Submap3D() {
    *this = ::std::move(from);
  }

  inline Submap3D& operator=(Submap3D&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Submap3D& default_instance();

  static inline const Submap3D* internal_default_instance() {
    return reinterpret_cast<const Submap3D*>(
               &_Submap3D_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(Submap3D* other);
  friend void swap(Submap3D& a, Submap3D& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Submap3D* New() const PROTOBUF_FINAL { return New(NULL); }

  Submap3D* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Submap3D& from);
  void MergeFrom(const Submap3D& from);
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
  void InternalSwap(Submap3D* other);
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

  // .cartographer.transform.proto.Rigid3d local_pose = 1;
  bool has_local_pose() const;
  void clear_local_pose();
  static const int kLocalPoseFieldNumber = 1;
  const ::cartographer::transform::proto::Rigid3d& local_pose() const;
  ::cartographer::transform::proto::Rigid3d* mutable_local_pose();
  ::cartographer::transform::proto::Rigid3d* release_local_pose();
  void set_allocated_local_pose(::cartographer::transform::proto::Rigid3d* local_pose);

  // .cartographer.mapping.proto.HybridGrid high_resolution_hybrid_grid = 4;
  bool has_high_resolution_hybrid_grid() const;
  void clear_high_resolution_hybrid_grid();
  static const int kHighResolutionHybridGridFieldNumber = 4;
  const ::cartographer::mapping::proto::HybridGrid& high_resolution_hybrid_grid() const;
  ::cartographer::mapping::proto::HybridGrid* mutable_high_resolution_hybrid_grid();
  ::cartographer::mapping::proto::HybridGrid* release_high_resolution_hybrid_grid();
  void set_allocated_high_resolution_hybrid_grid(::cartographer::mapping::proto::HybridGrid* high_resolution_hybrid_grid);

  // .cartographer.mapping.proto.HybridGrid low_resolution_hybrid_grid = 5;
  bool has_low_resolution_hybrid_grid() const;
  void clear_low_resolution_hybrid_grid();
  static const int kLowResolutionHybridGridFieldNumber = 5;
  const ::cartographer::mapping::proto::HybridGrid& low_resolution_hybrid_grid() const;
  ::cartographer::mapping::proto::HybridGrid* mutable_low_resolution_hybrid_grid();
  ::cartographer::mapping::proto::HybridGrid* release_low_resolution_hybrid_grid();
  void set_allocated_low_resolution_hybrid_grid(::cartographer::mapping::proto::HybridGrid* low_resolution_hybrid_grid);

  // int32 num_range_data = 2;
  void clear_num_range_data();
  static const int kNumRangeDataFieldNumber = 2;
  ::google::protobuf::int32 num_range_data() const;
  void set_num_range_data(::google::protobuf::int32 value);

  // bool finished = 3;
  void clear_finished();
  static const int kFinishedFieldNumber = 3;
  bool finished() const;
  void set_finished(bool value);

  // @@protoc_insertion_point(class_scope:cartographer.mapping.proto.Submap3D)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::cartographer::transform::proto::Rigid3d* local_pose_;
  ::cartographer::mapping::proto::HybridGrid* high_resolution_hybrid_grid_;
  ::cartographer::mapping::proto::HybridGrid* low_resolution_hybrid_grid_;
  ::google::protobuf::int32 num_range_data_;
  bool finished_;
  mutable int _cached_size_;
  friend struct protobuf_cartographer_2fmapping_2fproto_2fsubmap_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Submap2D

// .cartographer.transform.proto.Rigid3d local_pose = 1;
inline bool Submap2D::has_local_pose() const {
  return this != internal_default_instance() && local_pose_ != NULL;
}
inline void Submap2D::clear_local_pose() {
  if (GetArenaNoVirtual() == NULL && local_pose_ != NULL) delete local_pose_;
  local_pose_ = NULL;
}
inline const ::cartographer::transform::proto::Rigid3d& Submap2D::local_pose() const {
  const ::cartographer::transform::proto::Rigid3d* p = local_pose_;
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.Submap2D.local_pose)
  return p != NULL ? *p : *reinterpret_cast<const ::cartographer::transform::proto::Rigid3d*>(
      &::cartographer::transform::proto::_Rigid3d_default_instance_);
}
inline ::cartographer::transform::proto::Rigid3d* Submap2D::mutable_local_pose() {
  
  if (local_pose_ == NULL) {
    local_pose_ = new ::cartographer::transform::proto::Rigid3d;
  }
  // @@protoc_insertion_point(field_mutable:cartographer.mapping.proto.Submap2D.local_pose)
  return local_pose_;
}
inline ::cartographer::transform::proto::Rigid3d* Submap2D::release_local_pose() {
  // @@protoc_insertion_point(field_release:cartographer.mapping.proto.Submap2D.local_pose)
  
  ::cartographer::transform::proto::Rigid3d* temp = local_pose_;
  local_pose_ = NULL;
  return temp;
}
inline void Submap2D::set_allocated_local_pose(::cartographer::transform::proto::Rigid3d* local_pose) {
  delete local_pose_;
  local_pose_ = local_pose;
  if (local_pose) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:cartographer.mapping.proto.Submap2D.local_pose)
}

// int32 num_range_data = 2;
inline void Submap2D::clear_num_range_data() {
  num_range_data_ = 0;
}
inline ::google::protobuf::int32 Submap2D::num_range_data() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.Submap2D.num_range_data)
  return num_range_data_;
}
inline void Submap2D::set_num_range_data(::google::protobuf::int32 value) {
  
  num_range_data_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.Submap2D.num_range_data)
}

// bool finished = 3;
inline void Submap2D::clear_finished() {
  finished_ = false;
}
inline bool Submap2D::finished() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.Submap2D.finished)
  return finished_;
}
inline void Submap2D::set_finished(bool value) {
  
  finished_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.Submap2D.finished)
}

// .cartographer.mapping.proto.Grid2D grid = 4;
inline bool Submap2D::has_grid() const {
  return this != internal_default_instance() && grid_ != NULL;
}
inline void Submap2D::clear_grid() {
  if (GetArenaNoVirtual() == NULL && grid_ != NULL) delete grid_;
  grid_ = NULL;
}
inline const ::cartographer::mapping::proto::Grid2D& Submap2D::grid() const {
  const ::cartographer::mapping::proto::Grid2D* p = grid_;
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.Submap2D.grid)
  return p != NULL ? *p : *reinterpret_cast<const ::cartographer::mapping::proto::Grid2D*>(
      &::cartographer::mapping::proto::_Grid2D_default_instance_);
}
inline ::cartographer::mapping::proto::Grid2D* Submap2D::mutable_grid() {
  
  if (grid_ == NULL) {
    grid_ = new ::cartographer::mapping::proto::Grid2D;
  }
  // @@protoc_insertion_point(field_mutable:cartographer.mapping.proto.Submap2D.grid)
  return grid_;
}
inline ::cartographer::mapping::proto::Grid2D* Submap2D::release_grid() {
  // @@protoc_insertion_point(field_release:cartographer.mapping.proto.Submap2D.grid)
  
  ::cartographer::mapping::proto::Grid2D* temp = grid_;
  grid_ = NULL;
  return temp;
}
inline void Submap2D::set_allocated_grid(::cartographer::mapping::proto::Grid2D* grid) {
  delete grid_;
  grid_ = grid;
  if (grid) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:cartographer.mapping.proto.Submap2D.grid)
}

// -------------------------------------------------------------------

// Submap3D

// .cartographer.transform.proto.Rigid3d local_pose = 1;
inline bool Submap3D::has_local_pose() const {
  return this != internal_default_instance() && local_pose_ != NULL;
}
inline void Submap3D::clear_local_pose() {
  if (GetArenaNoVirtual() == NULL && local_pose_ != NULL) delete local_pose_;
  local_pose_ = NULL;
}
inline const ::cartographer::transform::proto::Rigid3d& Submap3D::local_pose() const {
  const ::cartographer::transform::proto::Rigid3d* p = local_pose_;
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.Submap3D.local_pose)
  return p != NULL ? *p : *reinterpret_cast<const ::cartographer::transform::proto::Rigid3d*>(
      &::cartographer::transform::proto::_Rigid3d_default_instance_);
}
inline ::cartographer::transform::proto::Rigid3d* Submap3D::mutable_local_pose() {
  
  if (local_pose_ == NULL) {
    local_pose_ = new ::cartographer::transform::proto::Rigid3d;
  }
  // @@protoc_insertion_point(field_mutable:cartographer.mapping.proto.Submap3D.local_pose)
  return local_pose_;
}
inline ::cartographer::transform::proto::Rigid3d* Submap3D::release_local_pose() {
  // @@protoc_insertion_point(field_release:cartographer.mapping.proto.Submap3D.local_pose)
  
  ::cartographer::transform::proto::Rigid3d* temp = local_pose_;
  local_pose_ = NULL;
  return temp;
}
inline void Submap3D::set_allocated_local_pose(::cartographer::transform::proto::Rigid3d* local_pose) {
  delete local_pose_;
  local_pose_ = local_pose;
  if (local_pose) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:cartographer.mapping.proto.Submap3D.local_pose)
}

// int32 num_range_data = 2;
inline void Submap3D::clear_num_range_data() {
  num_range_data_ = 0;
}
inline ::google::protobuf::int32 Submap3D::num_range_data() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.Submap3D.num_range_data)
  return num_range_data_;
}
inline void Submap3D::set_num_range_data(::google::protobuf::int32 value) {
  
  num_range_data_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.Submap3D.num_range_data)
}

// bool finished = 3;
inline void Submap3D::clear_finished() {
  finished_ = false;
}
inline bool Submap3D::finished() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.Submap3D.finished)
  return finished_;
}
inline void Submap3D::set_finished(bool value) {
  
  finished_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.Submap3D.finished)
}

// .cartographer.mapping.proto.HybridGrid high_resolution_hybrid_grid = 4;
inline bool Submap3D::has_high_resolution_hybrid_grid() const {
  return this != internal_default_instance() && high_resolution_hybrid_grid_ != NULL;
}
inline void Submap3D::clear_high_resolution_hybrid_grid() {
  if (GetArenaNoVirtual() == NULL && high_resolution_hybrid_grid_ != NULL) delete high_resolution_hybrid_grid_;
  high_resolution_hybrid_grid_ = NULL;
}
inline const ::cartographer::mapping::proto::HybridGrid& Submap3D::high_resolution_hybrid_grid() const {
  const ::cartographer::mapping::proto::HybridGrid* p = high_resolution_hybrid_grid_;
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.Submap3D.high_resolution_hybrid_grid)
  return p != NULL ? *p : *reinterpret_cast<const ::cartographer::mapping::proto::HybridGrid*>(
      &::cartographer::mapping::proto::_HybridGrid_default_instance_);
}
inline ::cartographer::mapping::proto::HybridGrid* Submap3D::mutable_high_resolution_hybrid_grid() {
  
  if (high_resolution_hybrid_grid_ == NULL) {
    high_resolution_hybrid_grid_ = new ::cartographer::mapping::proto::HybridGrid;
  }
  // @@protoc_insertion_point(field_mutable:cartographer.mapping.proto.Submap3D.high_resolution_hybrid_grid)
  return high_resolution_hybrid_grid_;
}
inline ::cartographer::mapping::proto::HybridGrid* Submap3D::release_high_resolution_hybrid_grid() {
  // @@protoc_insertion_point(field_release:cartographer.mapping.proto.Submap3D.high_resolution_hybrid_grid)
  
  ::cartographer::mapping::proto::HybridGrid* temp = high_resolution_hybrid_grid_;
  high_resolution_hybrid_grid_ = NULL;
  return temp;
}
inline void Submap3D::set_allocated_high_resolution_hybrid_grid(::cartographer::mapping::proto::HybridGrid* high_resolution_hybrid_grid) {
  delete high_resolution_hybrid_grid_;
  high_resolution_hybrid_grid_ = high_resolution_hybrid_grid;
  if (high_resolution_hybrid_grid) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:cartographer.mapping.proto.Submap3D.high_resolution_hybrid_grid)
}

// .cartographer.mapping.proto.HybridGrid low_resolution_hybrid_grid = 5;
inline bool Submap3D::has_low_resolution_hybrid_grid() const {
  return this != internal_default_instance() && low_resolution_hybrid_grid_ != NULL;
}
inline void Submap3D::clear_low_resolution_hybrid_grid() {
  if (GetArenaNoVirtual() == NULL && low_resolution_hybrid_grid_ != NULL) delete low_resolution_hybrid_grid_;
  low_resolution_hybrid_grid_ = NULL;
}
inline const ::cartographer::mapping::proto::HybridGrid& Submap3D::low_resolution_hybrid_grid() const {
  const ::cartographer::mapping::proto::HybridGrid* p = low_resolution_hybrid_grid_;
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.Submap3D.low_resolution_hybrid_grid)
  return p != NULL ? *p : *reinterpret_cast<const ::cartographer::mapping::proto::HybridGrid*>(
      &::cartographer::mapping::proto::_HybridGrid_default_instance_);
}
inline ::cartographer::mapping::proto::HybridGrid* Submap3D::mutable_low_resolution_hybrid_grid() {
  
  if (low_resolution_hybrid_grid_ == NULL) {
    low_resolution_hybrid_grid_ = new ::cartographer::mapping::proto::HybridGrid;
  }
  // @@protoc_insertion_point(field_mutable:cartographer.mapping.proto.Submap3D.low_resolution_hybrid_grid)
  return low_resolution_hybrid_grid_;
}
inline ::cartographer::mapping::proto::HybridGrid* Submap3D::release_low_resolution_hybrid_grid() {
  // @@protoc_insertion_point(field_release:cartographer.mapping.proto.Submap3D.low_resolution_hybrid_grid)
  
  ::cartographer::mapping::proto::HybridGrid* temp = low_resolution_hybrid_grid_;
  low_resolution_hybrid_grid_ = NULL;
  return temp;
}
inline void Submap3D::set_allocated_low_resolution_hybrid_grid(::cartographer::mapping::proto::HybridGrid* low_resolution_hybrid_grid) {
  delete low_resolution_hybrid_grid_;
  low_resolution_hybrid_grid_ = low_resolution_hybrid_grid;
  if (low_resolution_hybrid_grid) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:cartographer.mapping.proto.Submap3D.low_resolution_hybrid_grid)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace proto
}  // namespace mapping
}  // namespace cartographer

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_cartographer_2fmapping_2fproto_2fsubmap_2eproto__INCLUDED
