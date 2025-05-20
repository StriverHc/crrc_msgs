// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from art_interface_msg:msg/ControlCommand.idl
// generated code does not contain a copyright notice

#ifndef ART_INTERFACE_MSG__MSG__DETAIL__CONTROL_COMMAND__STRUCT_H_
#define ART_INTERFACE_MSG__MSG__DETAIL__CONTROL_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/ControlCommand in the package art_interface_msg.
typedef struct art_interface_msg__msg__ControlCommand
{
  /// 期望方向盘转向角度
  double desired_steering_wheel_angle;
  /// 期望智能电液转向系统工作模式
  uint8_t desired_iehs_work_mode;
  /// VCU状态
  uint8_t vcu_status;
  /// 期望转角使能
  uint8_t desired_steering_angle_enable;
  /// 期望电机叠加扭矩
  double desired_additional_torque;
  /// 期望方向盘角速度
  double desired_steering_wheel_angle_speed;
  /// 智能驾驶系统生命信号
  uint8_t ids_life;
} art_interface_msg__msg__ControlCommand;

// Struct for a sequence of art_interface_msg__msg__ControlCommand.
typedef struct art_interface_msg__msg__ControlCommand__Sequence
{
  art_interface_msg__msg__ControlCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} art_interface_msg__msg__ControlCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ART_INTERFACE_MSG__MSG__DETAIL__CONTROL_COMMAND__STRUCT_H_
