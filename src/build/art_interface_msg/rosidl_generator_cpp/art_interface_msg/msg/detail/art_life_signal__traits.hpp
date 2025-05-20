// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from art_interface_msg:msg/ArtLifeSignal.idl
// generated code does not contain a copyright notice

#ifndef ART_INTERFACE_MSG__MSG__DETAIL__ART_LIFE_SIGNAL__TRAITS_HPP_
#define ART_INTERFACE_MSG__MSG__DETAIL__ART_LIFE_SIGNAL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "art_interface_msg/msg/detail/art_life_signal__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace art_interface_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const ArtLifeSignal & msg,
  std::ostream & out)
{
  out << "{";
  // member: ccu_life
  {
    out << "ccu_life: ";
    rosidl_generator_traits::value_to_yaml(msg.ccu_life, out);
    out << ", ";
  }

  // member: scs_life
  {
    out << "scs_life: ";
    rosidl_generator_traits::value_to_yaml(msg.scs_life, out);
    out << ", ";
  }

  // member: dpu_life
  {
    out << "dpu_life: ";
    rosidl_generator_traits::value_to_yaml(msg.dpu_life, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ArtLifeSignal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: ccu_life
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ccu_life: ";
    rosidl_generator_traits::value_to_yaml(msg.ccu_life, out);
    out << "\n";
  }

  // member: scs_life
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scs_life: ";
    rosidl_generator_traits::value_to_yaml(msg.scs_life, out);
    out << "\n";
  }

  // member: dpu_life
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dpu_life: ";
    rosidl_generator_traits::value_to_yaml(msg.dpu_life, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ArtLifeSignal & msg, bool use_flow_style = false)
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
  const art_interface_msg::msg::ArtLifeSignal & msg,
  std::ostream & out, size_t indentation = 0)
{
  art_interface_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use art_interface_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const art_interface_msg::msg::ArtLifeSignal & msg)
{
  return art_interface_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<art_interface_msg::msg::ArtLifeSignal>()
{
  return "art_interface_msg::msg::ArtLifeSignal";
}

template<>
inline const char * name<art_interface_msg::msg::ArtLifeSignal>()
{
  return "art_interface_msg/msg/ArtLifeSignal";
}

template<>
struct has_fixed_size<art_interface_msg::msg::ArtLifeSignal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<art_interface_msg::msg::ArtLifeSignal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<art_interface_msg::msg::ArtLifeSignal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ART_INTERFACE_MSG__MSG__DETAIL__ART_LIFE_SIGNAL__TRAITS_HPP_
