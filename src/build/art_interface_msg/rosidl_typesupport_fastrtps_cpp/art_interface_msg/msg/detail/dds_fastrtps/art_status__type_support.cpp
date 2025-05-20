// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from art_interface_msg:msg/ArtStatus.idl
// generated code does not contain a copyright notice
#include "art_interface_msg/msg/detail/art_status__rosidl_typesupport_fastrtps_cpp.hpp"
#include "art_interface_msg/msg/detail/art_status__struct.hpp"

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
  const art_interface_msg::msg::ArtStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: das_control_disfunction
  cdr << (ros_message.das_control_disfunction ? true : false);
  // Member: lateral_control_activation
  cdr << (ros_message.lateral_control_activation ? true : false);
  // Member: deviation_warning_activation
  cdr << (ros_message.deviation_warning_activation ? true : false);
  // Member: iehs_comm_error
  cdr << (ros_message.iehs_comm_error ? true : false);
  // Member: ccu_life
  cdr << ros_message.ccu_life;
  // Member: tram_speed
  cdr << ros_message.tram_speed;
  // Member: movement_direction_activation_signal
  cdr << (ros_message.movement_direction_activation_signal ? true : false);
  // Member: actual_tire_angle
  cdr << ros_message.actual_tire_angle;
  // Member: axle1_sensor_error_a
  cdr << (ros_message.axle1_sensor_error_a ? true : false);
  // Member: axle1_sensor_error_b
  cdr << (ros_message.axle1_sensor_error_b ? true : false);
  // Member: axle1_sensor_error_electrical
  cdr << (ros_message.axle1_sensor_error_electrical ? true : false);
  // Member: axle2_sensor_error_a
  cdr << (ros_message.axle2_sensor_error_a ? true : false);
  // Member: axle2_sensor_error_b
  cdr << (ros_message.axle2_sensor_error_b ? true : false);
  // Member: axle2_sensor_error_electrical
  cdr << (ros_message.axle2_sensor_error_electrical ? true : false);
  // Member: actual_steering_angle
  cdr << ros_message.actual_steering_angle;
  // Member: iehs_device_fault
  cdr << (ros_message.iehs_device_fault ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_art_interface_msg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  art_interface_msg::msg::ArtStatus & ros_message)
{
  // Member: das_control_disfunction
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.das_control_disfunction = tmp ? true : false;
  }

  // Member: lateral_control_activation
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.lateral_control_activation = tmp ? true : false;
  }

  // Member: deviation_warning_activation
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.deviation_warning_activation = tmp ? true : false;
  }

  // Member: iehs_comm_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.iehs_comm_error = tmp ? true : false;
  }

  // Member: ccu_life
  cdr >> ros_message.ccu_life;

  // Member: tram_speed
  cdr >> ros_message.tram_speed;

  // Member: movement_direction_activation_signal
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.movement_direction_activation_signal = tmp ? true : false;
  }

  // Member: actual_tire_angle
  cdr >> ros_message.actual_tire_angle;

  // Member: axle1_sensor_error_a
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.axle1_sensor_error_a = tmp ? true : false;
  }

  // Member: axle1_sensor_error_b
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.axle1_sensor_error_b = tmp ? true : false;
  }

  // Member: axle1_sensor_error_electrical
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.axle1_sensor_error_electrical = tmp ? true : false;
  }

  // Member: axle2_sensor_error_a
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.axle2_sensor_error_a = tmp ? true : false;
  }

  // Member: axle2_sensor_error_b
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.axle2_sensor_error_b = tmp ? true : false;
  }

  // Member: axle2_sensor_error_electrical
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.axle2_sensor_error_electrical = tmp ? true : false;
  }

  // Member: actual_steering_angle
  cdr >> ros_message.actual_steering_angle;

  // Member: iehs_device_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.iehs_device_fault = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_art_interface_msg
get_serialized_size(
  const art_interface_msg::msg::ArtStatus & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: das_control_disfunction
  {
    size_t item_size = sizeof(ros_message.das_control_disfunction);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lateral_control_activation
  {
    size_t item_size = sizeof(ros_message.lateral_control_activation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: deviation_warning_activation
  {
    size_t item_size = sizeof(ros_message.deviation_warning_activation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: iehs_comm_error
  {
    size_t item_size = sizeof(ros_message.iehs_comm_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ccu_life
  {
    size_t item_size = sizeof(ros_message.ccu_life);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tram_speed
  {
    size_t item_size = sizeof(ros_message.tram_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: movement_direction_activation_signal
  {
    size_t item_size = sizeof(ros_message.movement_direction_activation_signal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: actual_tire_angle
  {
    size_t item_size = sizeof(ros_message.actual_tire_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: axle1_sensor_error_a
  {
    size_t item_size = sizeof(ros_message.axle1_sensor_error_a);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: axle1_sensor_error_b
  {
    size_t item_size = sizeof(ros_message.axle1_sensor_error_b);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: axle1_sensor_error_electrical
  {
    size_t item_size = sizeof(ros_message.axle1_sensor_error_electrical);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: axle2_sensor_error_a
  {
    size_t item_size = sizeof(ros_message.axle2_sensor_error_a);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: axle2_sensor_error_b
  {
    size_t item_size = sizeof(ros_message.axle2_sensor_error_b);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: axle2_sensor_error_electrical
  {
    size_t item_size = sizeof(ros_message.axle2_sensor_error_electrical);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: actual_steering_angle
  {
    size_t item_size = sizeof(ros_message.actual_steering_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: iehs_device_fault
  {
    size_t item_size = sizeof(ros_message.iehs_device_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_art_interface_msg
max_serialized_size_ArtStatus(
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


  // Member: das_control_disfunction
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: lateral_control_activation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: deviation_warning_activation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: iehs_comm_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ccu_life
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: tram_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: movement_direction_activation_signal
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: actual_tire_angle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: axle1_sensor_error_a
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: axle1_sensor_error_b
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: axle1_sensor_error_electrical
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: axle2_sensor_error_a
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: axle2_sensor_error_b
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: axle2_sensor_error_electrical
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: actual_steering_angle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: iehs_device_fault
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
    using DataType = art_interface_msg::msg::ArtStatus;
    is_plain =
      (
      offsetof(DataType, iehs_device_fault) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _ArtStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const art_interface_msg::msg::ArtStatus *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ArtStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<art_interface_msg::msg::ArtStatus *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ArtStatus__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const art_interface_msg::msg::ArtStatus *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ArtStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ArtStatus(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ArtStatus__callbacks = {
  "art_interface_msg::msg",
  "ArtStatus",
  _ArtStatus__cdr_serialize,
  _ArtStatus__cdr_deserialize,
  _ArtStatus__get_serialized_size,
  _ArtStatus__max_serialized_size
};

static rosidl_message_type_support_t _ArtStatus__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ArtStatus__callbacks,
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
get_message_type_support_handle<art_interface_msg::msg::ArtStatus>()
{
  return &art_interface_msg::msg::typesupport_fastrtps_cpp::_ArtStatus__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, art_interface_msg, msg, ArtStatus)() {
  return &art_interface_msg::msg::typesupport_fastrtps_cpp::_ArtStatus__handle;
}

#ifdef __cplusplus
}
#endif
