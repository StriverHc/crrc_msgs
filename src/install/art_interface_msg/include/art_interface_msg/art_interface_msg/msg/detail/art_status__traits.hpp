// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from art_interface_msg:msg/ArtStatus.idl
// generated code does not contain a copyright notice

#ifndef ART_INTERFACE_MSG__MSG__DETAIL__ART_STATUS__TRAITS_HPP_
#define ART_INTERFACE_MSG__MSG__DETAIL__ART_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "art_interface_msg/msg/detail/art_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace art_interface_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const ArtStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: das_control_disfunction
  {
    out << "das_control_disfunction: ";
    rosidl_generator_traits::value_to_yaml(msg.das_control_disfunction, out);
    out << ", ";
  }

  // member: lateral_control_activation
  {
    out << "lateral_control_activation: ";
    rosidl_generator_traits::value_to_yaml(msg.lateral_control_activation, out);
    out << ", ";
  }

  // member: deviation_warning_activation
  {
    out << "deviation_warning_activation: ";
    rosidl_generator_traits::value_to_yaml(msg.deviation_warning_activation, out);
    out << ", ";
  }

  // member: iehs_comm_error
  {
    out << "iehs_comm_error: ";
    rosidl_generator_traits::value_to_yaml(msg.iehs_comm_error, out);
    out << ", ";
  }

  // member: ccu_life
  {
    out << "ccu_life: ";
    rosidl_generator_traits::value_to_yaml(msg.ccu_life, out);
    out << ", ";
  }

  // member: tram_speed
  {
    out << "tram_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.tram_speed, out);
    out << ", ";
  }

  // member: movement_direction_activation_signal
  {
    out << "movement_direction_activation_signal: ";
    rosidl_generator_traits::value_to_yaml(msg.movement_direction_activation_signal, out);
    out << ", ";
  }

  // member: actual_tire_angle
  {
    out << "actual_tire_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.actual_tire_angle, out);
    out << ", ";
  }

  // member: axle1_sensor_error_a
  {
    out << "axle1_sensor_error_a: ";
    rosidl_generator_traits::value_to_yaml(msg.axle1_sensor_error_a, out);
    out << ", ";
  }

  // member: axle1_sensor_error_b
  {
    out << "axle1_sensor_error_b: ";
    rosidl_generator_traits::value_to_yaml(msg.axle1_sensor_error_b, out);
    out << ", ";
  }

  // member: axle1_sensor_error_electrical
  {
    out << "axle1_sensor_error_electrical: ";
    rosidl_generator_traits::value_to_yaml(msg.axle1_sensor_error_electrical, out);
    out << ", ";
  }

  // member: axle2_sensor_error_a
  {
    out << "axle2_sensor_error_a: ";
    rosidl_generator_traits::value_to_yaml(msg.axle2_sensor_error_a, out);
    out << ", ";
  }

  // member: axle2_sensor_error_b
  {
    out << "axle2_sensor_error_b: ";
    rosidl_generator_traits::value_to_yaml(msg.axle2_sensor_error_b, out);
    out << ", ";
  }

  // member: axle2_sensor_error_electrical
  {
    out << "axle2_sensor_error_electrical: ";
    rosidl_generator_traits::value_to_yaml(msg.axle2_sensor_error_electrical, out);
    out << ", ";
  }

  // member: actual_steering_angle
  {
    out << "actual_steering_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.actual_steering_angle, out);
    out << ", ";
  }

  // member: iehs_device_fault
  {
    out << "iehs_device_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.iehs_device_fault, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ArtStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: das_control_disfunction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "das_control_disfunction: ";
    rosidl_generator_traits::value_to_yaml(msg.das_control_disfunction, out);
    out << "\n";
  }

  // member: lateral_control_activation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lateral_control_activation: ";
    rosidl_generator_traits::value_to_yaml(msg.lateral_control_activation, out);
    out << "\n";
  }

  // member: deviation_warning_activation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "deviation_warning_activation: ";
    rosidl_generator_traits::value_to_yaml(msg.deviation_warning_activation, out);
    out << "\n";
  }

  // member: iehs_comm_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "iehs_comm_error: ";
    rosidl_generator_traits::value_to_yaml(msg.iehs_comm_error, out);
    out << "\n";
  }

  // member: ccu_life
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ccu_life: ";
    rosidl_generator_traits::value_to_yaml(msg.ccu_life, out);
    out << "\n";
  }

  // member: tram_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tram_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.tram_speed, out);
    out << "\n";
  }

  // member: movement_direction_activation_signal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "movement_direction_activation_signal: ";
    rosidl_generator_traits::value_to_yaml(msg.movement_direction_activation_signal, out);
    out << "\n";
  }

  // member: actual_tire_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "actual_tire_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.actual_tire_angle, out);
    out << "\n";
  }

  // member: axle1_sensor_error_a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "axle1_sensor_error_a: ";
    rosidl_generator_traits::value_to_yaml(msg.axle1_sensor_error_a, out);
    out << "\n";
  }

  // member: axle1_sensor_error_b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "axle1_sensor_error_b: ";
    rosidl_generator_traits::value_to_yaml(msg.axle1_sensor_error_b, out);
    out << "\n";
  }

  // member: axle1_sensor_error_electrical
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "axle1_sensor_error_electrical: ";
    rosidl_generator_traits::value_to_yaml(msg.axle1_sensor_error_electrical, out);
    out << "\n";
  }

  // member: axle2_sensor_error_a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "axle2_sensor_error_a: ";
    rosidl_generator_traits::value_to_yaml(msg.axle2_sensor_error_a, out);
    out << "\n";
  }

  // member: axle2_sensor_error_b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "axle2_sensor_error_b: ";
    rosidl_generator_traits::value_to_yaml(msg.axle2_sensor_error_b, out);
    out << "\n";
  }

  // member: axle2_sensor_error_electrical
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "axle2_sensor_error_electrical: ";
    rosidl_generator_traits::value_to_yaml(msg.axle2_sensor_error_electrical, out);
    out << "\n";
  }

  // member: actual_steering_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "actual_steering_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.actual_steering_angle, out);
    out << "\n";
  }

  // member: iehs_device_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "iehs_device_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.iehs_device_fault, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ArtStatus & msg, bool use_flow_style = false)
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
  const art_interface_msg::msg::ArtStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  art_interface_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use art_interface_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const art_interface_msg::msg::ArtStatus & msg)
{
  return art_interface_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<art_interface_msg::msg::ArtStatus>()
{
  return "art_interface_msg::msg::ArtStatus";
}

template<>
inline const char * name<art_interface_msg::msg::ArtStatus>()
{
  return "art_interface_msg/msg/ArtStatus";
}

template<>
struct has_fixed_size<art_interface_msg::msg::ArtStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<art_interface_msg::msg::ArtStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<art_interface_msg::msg::ArtStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ART_INTERFACE_MSG__MSG__DETAIL__ART_STATUS__TRAITS_HPP_
