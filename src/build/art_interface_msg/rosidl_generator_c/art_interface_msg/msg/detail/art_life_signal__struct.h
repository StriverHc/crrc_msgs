// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from art_interface_msg:msg/ArtLifeSignal.idl
// generated code does not contain a copyright notice

#ifndef ART_INTERFACE_MSG__MSG__DETAIL__ART_LIFE_SIGNAL__STRUCT_H_
#define ART_INTERFACE_MSG__MSG__DETAIL__ART_LIFE_SIGNAL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/ArtLifeSignal in the package art_interface_msg.
typedef struct art_interface_msg__msg__ArtLifeSignal
{
  uint8_t ccu_life;
  uint8_t scs_life;
  uint8_t dpu_life;
} art_interface_msg__msg__ArtLifeSignal;

// Struct for a sequence of art_interface_msg__msg__ArtLifeSignal.
typedef struct art_interface_msg__msg__ArtLifeSignal__Sequence
{
  art_interface_msg__msg__ArtLifeSignal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} art_interface_msg__msg__ArtLifeSignal__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ART_INTERFACE_MSG__MSG__DETAIL__ART_LIFE_SIGNAL__STRUCT_H_
