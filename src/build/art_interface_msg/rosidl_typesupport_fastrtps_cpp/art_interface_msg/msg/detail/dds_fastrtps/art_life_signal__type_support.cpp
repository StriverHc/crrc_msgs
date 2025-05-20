// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from art_interface_msg:msg/ArtLifeSignal.idl
// generated code does not contain a copyright notice
#include "art_interface_msg/msg/detail/art_life_signal__rosidl_typesupport_fastrtps_cpp.hpp"
#include "art_interface_msg/msg/detail/art_life_signal__struct.hpp"

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
  const art_interface_msg::msg::ArtLifeSignal & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: ccu_life
  cdr << ros_message.ccu_life;
  // Member: scs_life
  cdr << ros_message.scs_life;
  // Member: dpu_life
  cdr << ros_message.dpu_life;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_art_interface_msg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  art_interface_msg::msg::ArtLifeSignal & ros_message)
{
  // Member: ccu_life
  cdr >> ros_message.ccu_life;

  // Member: scs_life
  cdr >> ros_message.scs_life;

  // Member: dpu_life
  cdr >> ros_message.dpu_life;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_art_interface_msg
get_serialized_size(
  const art_interface_msg::msg::ArtLifeSignal & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: ccu_life
  {
    size_t item_size = sizeof(ros_message.ccu_life);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: scs_life
  {
    size_t item_size = sizeof(ros_message.scs_life);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dpu_life
  {
    size_t item_size = sizeof(ros_message.dpu_life);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_art_interface_msg
max_serialized_size_ArtLifeSignal(
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


  // Member: ccu_life
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: scs_life
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: dpu_life
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
    using DataType = art_interface_msg::msg::ArtLifeSignal;
    is_plain =
      (
      offsetof(DataType, dpu_life) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _ArtLifeSignal__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const art_interface_msg::msg::ArtLifeSignal *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ArtLifeSignal__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<art_interface_msg::msg::ArtLifeSignal *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ArtLifeSignal__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const art_interface_msg::msg::ArtLifeSignal *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ArtLifeSignal__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ArtLifeSignal(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ArtLifeSignal__callbacks = {
  "art_interface_msg::msg",
  "ArtLifeSignal",
  _ArtLifeSignal__cdr_serialize,
  _ArtLifeSignal__cdr_deserialize,
  _ArtLifeSignal__get_serialized_size,
  _ArtLifeSignal__max_serialized_size
};

static rosidl_message_type_support_t _ArtLifeSignal__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ArtLifeSignal__callbacks,
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
get_message_type_support_handle<art_interface_msg::msg::ArtLifeSignal>()
{
  return &art_interface_msg::msg::typesupport_fastrtps_cpp::_ArtLifeSignal__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, art_interface_msg, msg, ArtLifeSignal)() {
  return &art_interface_msg::msg::typesupport_fastrtps_cpp::_ArtLifeSignal__handle;
}

#ifdef __cplusplus
}
#endif
