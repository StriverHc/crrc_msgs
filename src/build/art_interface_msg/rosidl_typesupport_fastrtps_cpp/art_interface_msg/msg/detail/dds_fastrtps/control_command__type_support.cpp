// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from art_interface_msg:msg/ControlCommand.idl
// generated code does not contain a copyright notice
#include "art_interface_msg/msg/detail/control_command__rosidl_typesupport_fastrtps_cpp.hpp"
#include "art_interface_msg/msg/detail/control_command__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace art_interface_msg
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_art_interface_msg
cdr_serialize(
  const art_interface_msg::msg::ControlCommand & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: desired_steering_wheel_angle
  cdr << ros_message.desired_steering_wheel_angle;
  // Member: desired_iehs_work_mode
  cdr << ros_message.desired_iehs_work_mode;
  // Member: vcu_status
  cdr << ros_message.vcu_status;
  // Member: desired_steering_angle_enable
  cdr << ros_message.desired_steering_angle_enable;
  // Member: desired_additional_torque
  cdr << ros_message.desired_additional_torque;
  // Member: desired_steering_wheel_angle_speed
  cdr << ros_message.desired_steering_wheel_angle_speed;
  // Member: ids_life
  cdr << ros_message.ids_life;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_art_interface_msg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  art_interface_msg::msg::ControlCommand & ros_message)
{
  // Member: desired_steering_wheel_angle
  cdr >> ros_message.desired_steering_wheel_angle;

  // Member: desired_iehs_work_mode
  cdr >> ros_message.desired_iehs_work_mode;

  // Member: vcu_status
  cdr >> ros_message.vcu_status;

  // Member: desired_steering_angle_enable
  cdr >> ros_message.desired_steering_angle_enable;

  // Member: desired_additional_torque
  cdr >> ros_message.desired_additional_torque;

  // Member: desired_steering_wheel_angle_speed
  cdr >> ros_message.desired_steering_wheel_angle_speed;

  // Member: ids_life
  cdr >> ros_message.ids_life;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_art_interface_msg
get_serialized_size(
  const art_interface_msg::msg::ControlCommand & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: desired_steering_wheel_angle
  {
    size_t item_size = sizeof(ros_message.desired_steering_wheel_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: desired_iehs_work_mode
  {
    size_t item_size = sizeof(ros_message.desired_iehs_work_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vcu_status
  {
    size_t item_size = sizeof(ros_message.vcu_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: desired_steering_angle_enable
  {
    size_t item_size = sizeof(ros_message.desired_steering_angle_enable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: desired_additional_torque
  {
    size_t item_size = sizeof(ros_message.desired_additional_torque);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: desired_steering_wheel_angle_speed
  {
    size_t item_size = sizeof(ros_message.desired_steering_wheel_angle_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ids_life
  {
    size_t item_size = sizeof(ros_message.ids_life);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_art_interface_msg
max_serialized_size_ControlCommand(
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


  // Member: desired_steering_wheel_angle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: desired_iehs_work_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: vcu_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: desired_steering_angle_enable
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: desired_additional_torque
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: desired_steering_wheel_angle_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: ids_life
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
    using DataType = art_interface_msg::msg::ControlCommand;
    is_plain =
      (
      offsetof(DataType, ids_life) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _ControlCommand__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const art_interface_msg::msg::ControlCommand *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ControlCommand__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<art_interface_msg::msg::ControlCommand *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ControlCommand__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const art_interface_msg::msg::ControlCommand *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ControlCommand__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ControlCommand(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ControlCommand__callbacks = {
  "art_interface_msg::msg",
  "ControlCommand",
  _ControlCommand__cdr_serialize,
  _ControlCommand__cdr_deserialize,
  _ControlCommand__get_serialized_size,
  _ControlCommand__max_serialized_size
};

static rosidl_message_type_support_t _ControlCommand__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ControlCommand__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace art_interface_msg

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_art_interface_msg
const rosidl_message_type_support_t *
get_message_type_support_handle<art_interface_msg::msg::ControlCommand>()
{
  return &art_interface_msg::msg::typesupport_fastrtps_cpp::_ControlCommand__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, art_interface_msg, msg, ControlCommand)() {
  return &art_interface_msg::msg::typesupport_fastrtps_cpp::_ControlCommand__handle;
}

#ifdef __cplusplus
}
#endif
