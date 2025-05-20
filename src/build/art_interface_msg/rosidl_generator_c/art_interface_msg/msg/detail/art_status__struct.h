// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from art_interface_msg:msg/ArtStatus.idl
// generated code does not contain a copyright notice

#ifndef ART_INTERFACE_MSG__MSG__DETAIL__ART_STATUS__STRUCT_H_
#define ART_INTERFACE_MSG__MSG__DETAIL__ART_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/ArtStatus in the package art_interface_msg.
typedef struct art_interface_msg__msg__ArtStatus
{
  /// DAS横向控制功能故障
  bool das_control_disfunction;
  /// 横向控制功能激活指令
  bool lateral_control_activation;
  /// 偏离预警功能激活指令
  bool deviation_warning_activation;
  /// 与线控转向控制器的通信故障
  bool iehs_comm_error;
  /// 整车生命信号
  uint8_t ccu_life;
  /// 整车速度 单位：m/s
  double tram_speed;
  /// 前进方向激活信号
  bool movement_direction_activation_signal;
  /// 实际头轴转角
  double actual_tire_angle;
  /// 轴1角度传感器信号A故障
  bool axle1_sensor_error_a;
  /// 轴1角度传感器信号B故障
  bool axle1_sensor_error_b;
  /// 轴1角度传感器电气故障
  bool axle1_sensor_error_electrical;
  /// 轴2角度传感器信号A故障
  bool axle2_sensor_error_a;
  /// 轴2角度传感器信号B故障
  bool axle2_sensor_error_b;
  /// 轴2角度传感器电气故障
  bool axle2_sensor_error_electrical;
  /// 实际方向盘转角
  double actual_steering_angle;
  /// IEHS设备故障
  bool iehs_device_fault;
} art_interface_msg__msg__ArtStatus;

// Struct for a sequence of art_interface_msg__msg__ArtStatus.
typedef struct art_interface_msg__msg__ArtStatus__Sequence
{
  art_interface_msg__msg__ArtStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} art_interface_msg__msg__ArtStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ART_INTERFACE_MSG__MSG__DETAIL__ART_STATUS__STRUCT_H_
