// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from art_interface_msg:msg/ArtStatus.idl
// generated code does not contain a copyright notice
#include "art_interface_msg/msg/detail/art_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "art_interface_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "art_interface_msg/msg/detail/art_status__struct.h"
#include "art_interface_msg/msg/detail/art_status__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _ArtStatus__ros_msg_type = art_interface_msg__msg__ArtStatus;

static bool _ArtStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ArtStatus__ros_msg_type * ros_message = static_cast<const _ArtStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: das_control_disfunction
  {
    cdr << (ros_message->das_control_disfunction ? true : false);
  }

  // Field name: lateral_control_activation
  {
    cdr << (ros_message->lateral_control_activation ? true : false);
  }

  // Field name: deviation_warning_activation
  {
    cdr << (ros_message->deviation_warning_activation ? true : false);
  }

  // Field name: iehs_comm_error
  {
    cdr << (ros_message->iehs_comm_error ? true : false);
  }

  // Field name: ccu_life
  {
    cdr << ros_message->ccu_life;
  }

  // Field name: tram_speed
  {
    cdr << ros_message->tram_speed;
  }

  // Field name: movement_direction_activation_signal
  {
    cdr << (ros_message->movement_direction_activation_signal ? true : false);
  }

  // Field name: actual_tire_angle
  {
    cdr << ros_message->actual_tire_angle;
  }

  // Field name: axle1_sensor_error_a
  {
    cdr << (ros_message->axle1_sensor_error_a ? true : false);
  }

  // Field name: axle1_sensor_error_b
  {
    cdr << (ros_message->axle1_sensor_error_b ? true : false);
  }

  // Field name: axle1_sensor_error_electrical
  {
    cdr << (ros_message->axle1_sensor_error_electrical ? true : false);
  }

  // Field name: axle2_sensor_error_a
  {
    cdr << (ros_message->axle2_sensor_error_a ? true : false);
  }

  // Field name: axle2_sensor_error_b
  {
    cdr << (ros_message->axle2_sensor_error_b ? true : false);
  }

  // Field name: axle2_sensor_error_electrical
  {
    cdr << (ros_message->axle2_sensor_error_electrical ? true : false);
  }

  // Field name: actual_steering_angle
  {
    cdr << ros_message->actual_steering_angle;
  }

  // Field name: iehs_device_fault
  {
    cdr << (ros_message->iehs_device_fault ? true : false);
  }

  return true;
}

static bool _ArtStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ArtStatus__ros_msg_type * ros_message = static_cast<_ArtStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: das_control_disfunction
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->das_control_disfunction = tmp ? true : false;
  }

  // Field name: lateral_control_activation
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->lateral_control_activation = tmp ? true : false;
  }

  // Field name: deviation_warning_activation
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->deviation_warning_activation = tmp ? true : false;
  }

  // Field name: iehs_comm_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->iehs_comm_error = tmp ? true : false;
  }

  // Field name: ccu_life
  {
    cdr >> ros_message->ccu_life;
  }

  // Field name: tram_speed
  {
    cdr >> ros_message->tram_speed;
  }

  // Field name: movement_direction_activation_signal
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->movement_direction_activation_signal = tmp ? true : false;
  }

  // Field name: actual_tire_angle
  {
    cdr >> ros_message->actual_tire_angle;
  }

  // Field name: axle1_sensor_error_a
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->axle1_sensor_error_a = tmp ? true : false;
  }

  // Field name: axle1_sensor_error_b
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->axle1_sensor_error_b = tmp ? true : false;
  }

  // Field name: axle1_sensor_error_electrical
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->axle1_sensor_error_electrical = tmp ? true : false;
  }

  // Field name: axle2_sensor_error_a
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->axle2_sensor_error_a = tmp ? true : false;
  }

  // Field name: axle2_sensor_error_b
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->axle2_sensor_error_b = tmp ? true : false;
  }

  // Field name: axle2_sensor_error_electrical
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->axle2_sensor_error_electrical = tmp ? true : false;
  }

  // Field name: actual_steering_angle
  {
    cdr >> ros_message->actual_steering_angle;
  }

  // Field name: iehs_device_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->iehs_device_fault = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_art_interface_msg
size_t get_serialized_size_art_interface_msg__msg__ArtStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ArtStatus__ros_msg_type * ros_message = static_cast<const _ArtStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name das_control_disfunction
  {
    size_t item_size = sizeof(ros_message->das_control_disfunction);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lateral_control_activation
  {
    size_t item_size = sizeof(ros_message->lateral_control_activation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name deviation_warning_activation
  {
    size_t item_size = sizeof(ros_message->deviation_warning_activation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name iehs_comm_error
  {
    size_t item_size = sizeof(ros_message->iehs_comm_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ccu_life
  {
    size_t item_size = sizeof(ros_message->ccu_life);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tram_speed
  {
    size_t item_size = sizeof(ros_message->tram_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name movement_direction_activation_signal
  {
    size_t item_size = sizeof(ros_message->movement_direction_activation_signal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name actual_tire_angle
  {
    size_t item_size = sizeof(ros_message->actual_tire_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name axle1_sensor_error_a
  {
    size_t item_size = sizeof(ros_message->axle1_sensor_error_a);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name axle1_sensor_error_b
  {
    size_t item_size = sizeof(ros_message->axle1_sensor_error_b);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name axle1_sensor_error_electrical
  {
    size_t item_size = sizeof(ros_message->axle1_sensor_error_electrical);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name axle2_sensor_error_a
  {
    size_t item_size = sizeof(ros_message->axle2_sensor_error_a);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name axle2_sensor_error_b
  {
    size_t item_size = sizeof(ros_message->axle2_sensor_error_b);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name axle2_sensor_error_electrical
  {
    size_t item_size = sizeof(ros_message->axle2_sensor_error_electrical);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name actual_steering_angle
  {
    size_t item_size = sizeof(ros_message->actual_steering_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name iehs_device_fault
  {
    size_t item_size = sizeof(ros_message->iehs_device_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ArtStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_art_interface_msg__msg__ArtStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_art_interface_msg
size_t max_serialized_size_art_interface_msg__msg__ArtStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: das_control_disfunction
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: lateral_control_activation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: deviation_warning_activation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: iehs_comm_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ccu_life
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: tram_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: movement_direction_activation_signal
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: actual_tire_angle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: axle1_sensor_error_a
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: axle1_sensor_error_b
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: axle1_sensor_error_electrical
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: axle2_sensor_error_a
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: axle2_sensor_error_b
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: axle2_sensor_error_electrical
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: actual_steering_angle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: iehs_device_fault
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = art_interface_msg__msg__ArtStatus;
    is_plain =
      (
      offsetof(DataType, iehs_device_fault) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ArtStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_art_interface_msg__msg__ArtStatus(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ArtStatus = {
  "art_interface_msg::msg",
  "ArtStatus",
  _ArtStatus__cdr_serialize,
  _ArtStatus__cdr_deserialize,
  _ArtStatus__get_serialized_size,
  _ArtStatus__max_serialized_size
};

static rosidl_message_type_support_t _ArtStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ArtStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, art_interface_msg, msg, ArtStatus)() {
  return &_ArtStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
