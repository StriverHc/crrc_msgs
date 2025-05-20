// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from art_interface_msg:msg/ControlCommand.idl
// generated code does not contain a copyright notice

#ifndef ART_INTERFACE_MSG__MSG__DETAIL__CONTROL_COMMAND__TRAITS_HPP_
#define ART_INTERFACE_MSG__MSG__DETAIL__CONTROL_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "art_interface_msg/msg/detail/control_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace art_interface_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const ControlCommand & msg,
  std::ostream & out)
{
  out << "{";
  // member: desired_steering_wheel_angle
  {
    out << "desired_steering_wheel_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.desired_steering_wheel_angle, out);
    out << ", ";
  }

  // member: desired_iehs_work_mode
  {
    out << "desired_iehs_work_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.desired_iehs_work_mode, out);
    out << ", ";
  }

  // member: vcu_status
  {
    out << "vcu_status: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_status, out);
    out << ", ";
  }

  // member: desired_steering_angle_enable
  {
    out << "desired_steering_angle_enable: ";
    rosidl_generator_traits::value_to_yaml(msg.desired_steering_angle_enable, out);
    out << ", ";
  }

  // member: desired_additional_torque
  {
    out << "desired_additional_torque: ";
    rosidl_generator_traits::value_to_yaml(msg.desired_additional_torque, out);
    out << ", ";
  }

  // member: desired_steering_wheel_angle_speed
  {
    out << "desired_steering_wheel_angle_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.desired_steering_wheel_angle_speed, out);
    out << ", ";
  }

  // member: ids_life
  {
    out << "ids_life: ";
    rosidl_generator_traits::value_to_yaml(msg.ids_life, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ControlCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: desired_steering_wheel_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "desired_steering_wheel_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.desired_steering_wheel_angle, out);
    out << "\n";
  }

  // member: desired_iehs_work_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "desired_iehs_work_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.desired_iehs_work_mode, out);
    out << "\n";
  }

  // member: vcu_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vcu_status: ";
    rosidl_generator_traits::value_to_yaml(msg.vcu_status, out);
    out << "\n";
  }

  // member: desired_steering_angle_enable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "desired_steering_angle_enable: ";
    rosidl_generator_traits::value_to_yaml(msg.desired_steering_angle_enable, out);
    out << "\n";
  }

  // member: desired_additional_torque
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "desired_additional_torque: ";
    rosidl_generator_traits::value_to_yaml(msg.desired_additional_torque, out);
    out << "\n";
  }

  // member: desired_steering_wheel_angle_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "desired_steering_wheel_angle_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.desired_steering_wheel_angle_speed, out);
    out << "\n";
  }

  // member: ids_life
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ids_life: ";
    rosidl_generator_traits::value_to_yaml(msg.ids_life, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ControlCommand & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace art_interface_msg

namespace rosidl_generator_traits
{

[[deprecated("use art_interface_msg::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const art_interface_msg::msg::ControlCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  art_interface_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use art_interface_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const art_interface_msg::msg::ControlCommand & msg)
{
  return art_interface_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<art_interface_msg::msg::ControlCommand>()
{
  return "art_interface_msg::msg::ControlCommand";
}

template<>
inline const char * name<art_interface_msg::msg::ControlCommand>()
{
  return "art_interface_msg/msg/ControlCommand";
}

template<>
struct has_fixed_size<art_interface_msg::msg::ControlCommand>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<art_interface_msg::msg::ControlCommand>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<art_interface_msg::msg::ControlCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ART_INTERFACE_MSG__MSG__DETAIL__CONTROL_COMMAND__TRAITS_HPP_
