// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from art_interface_msg:msg/ArtLifeSignal.idl
// generated code does not contain a copyright notice

#ifndef ART_INTERFACE_MSG__MSG__DETAIL__ART_LIFE_SIGNAL__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define ART_INTERFACE_MSG__MSG__DETAIL__ART_LIFE_SIGNAL__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "art_interface_msg/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "art_interface_msg/msg/detail/art_life_signal__struct.hpp"

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

#include "fastcdr/Cdr.h"

namespace art_interface_msg
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_art_interface_msg
cdr_serialize(
  const art_interface_msg::msg::ArtLifeSignal & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_art_interface_msg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  art_interface_msg::msg::ArtLifeSignal & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_art_interface_msg
get_serialized_size(
  const art_interface_msg::msg::ArtLifeSignal & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_art_interface_msg
max_serialized_size_ArtLifeSignal(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace art_interface_msg

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_art_interface_msg
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, art_interface_msg, msg, ArtLifeSignal)();

#ifdef __cplusplus
}
#endif

#endif  // ART_INTERFACE_MSG__MSG__DETAIL__ART_LIFE_SIGNAL__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
