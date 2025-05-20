// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from art_interface_msg:msg/ControlCommand.idl
// generated code does not contain a copyright notice
#include "art_interface_msg/msg/detail/control_command__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "art_interface_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "art_interface_msg/msg/detail/control_command__struct.h"
#include "art_interface_msg/msg/detail/control_command__functions.h"
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


using _ControlCommand__ros_msg_type = art_interface_msg__msg__ControlCommand;

static bool _ControlCommand__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ControlCommand__ros_msg_type * ros_message = static_cast<const _ControlCommand__ros_msg_type *>(untyped_ros_message);
  // Field name: desired_steering_wheel_angle
  {
    cdr << ros_message->desired_steering_wheel_angle;
  }

  // Field name: desired_iehs_work_mode
  {
    cdr << ros_message->desired_iehs_work_mode;
  }

  // Field name: vcu_status
  {
    cdr << ros_message->vcu_status;
  }

  // Field name: desired_steering_angle_enable
  {
    cdr << ros_message->desired_steering_angle_enable;
  }

  // Field name: desired_additional_torque
  {
    cdr << ros_message->desired_additional_torque;
  }

  // Field name: desired_steering_wheel_angle_speed
  {
    cdr << ros_message->desired_steering_wheel_angle_speed;
  }

  // Field name: ids_life
  {
    cdr << ros_message->ids_life;
  }

  return true;
}

static bool _ControlCommand__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ControlCommand__ros_msg_type * ros_message = static_cast<_ControlCommand__ros_msg_type *>(untyped_ros_message);
  // Field name: desired_steering_wheel_angle
  {
    cdr >> ros_message->desired_steering_wheel_angle;
  }

  // Field name: desired_iehs_work_mode
  {
    cdr >> ros_message->desired_iehs_work_mode;
  }

  // Field name: vcu_status
  {
    cdr >> ros_message->vcu_status;
  }

  // Field name: desired_steering_angle_enable
  {
    cdr >> ros_message->desired_steering_angle_enable;
  }

  // Field name: desired_additional_torque
  {
    cdr >> ros_message->desired_additional_torque;
  }

  // Field name: desired_steering_wheel_angle_speed
  {
    cdr >> ros_message->desired_steering_wheel_angle_speed;
  }

  // Field name: ids_life
  {
    cdr >> ros_message->ids_life;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_art_interface_msg
size_t get_serialized_size_art_interface_msg__msg__ControlCommand(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ControlCommand__ros_msg_type * ros_message = static_cast<const _ControlCommand__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name desired_steering_wheel_angle
  {
    size_t item_size = sizeof(ros_message->desired_steering_wheel_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name desired_iehs_work_mode
  {
    size_t item_size = sizeof(ros_message->desired_iehs_work_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vcu_status
  {
    size_t item_size = sizeof(ros_message->vcu_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name desired_steering_angle_enable
  {
    size_t item_size = sizeof(ros_message->desired_steering_angle_enable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name desired_additional_torque
  {
    size_t item_size = sizeof(ros_message->desired_additional_torque);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name desired_steering_wheel_angle_speed
  {
    size_t item_size = sizeof(ros_message->desired_steering_wheel_angle_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ids_life
  {
    size_t item_size = sizeof(ros_message->ids_life);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ControlCommand__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_art_interface_msg__msg__ControlCommand(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_art_interface_msg
size_t max_serialized_size_art_interface_msg__msg__ControlCommand(
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

  // member: desired_steering_wheel_angle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: desired_iehs_work_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: vcu_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: desired_steering_angle_enable
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: desired_additional_torque
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: desired_steering_wheel_angle_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ids_life
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
    using DataType = art_interface_msg__msg__ControlCommand;
    is_plain =
      (
      offsetof(DataType, ids_life) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ControlCommand__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_art_interface_msg__msg__ControlCommand(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ControlCommand = {
  "art_interface_msg::msg",
  "ControlCommand",
  _ControlCommand__cdr_serialize,
  _ControlCommand__cdr_deserialize,
  _ControlCommand__get_serialized_size,
  _ControlCommand__max_serialized_size
};

static rosidl_message_type_support_t _ControlCommand__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ControlCommand,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, art_interface_msg, msg, ControlCommand)() {
  return &_ControlCommand__type_support;
}

#if defined(__cplusplus)
}
#endif
