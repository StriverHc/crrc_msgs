// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from art_interface_msg:msg/ArtLifeSignal.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "art_interface_msg/msg/detail/art_life_signal__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace art_interface_msg
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ArtLifeSignal_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) art_interface_msg::msg::ArtLifeSignal(_init);
}

void ArtLifeSignal_fini_function(void * message_memory)
{
  auto typed_message = static_cast<art_interface_msg::msg::ArtLifeSignal *>(message_memory);
  typed_message->~ArtLifeSignal();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ArtLifeSignal_message_member_array[3] = {
  {
    "ccu_life",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(art_interface_msg::msg::ArtLifeSignal, ccu_life),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "scs_life",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(art_interface_msg::msg::ArtLifeSignal, scs_life),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "dpu_life",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(art_interface_msg::msg::ArtLifeSignal, dpu_life),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ArtLifeSignal_message_members = {
  "art_interface_msg::msg",  // message namespace
  "ArtLifeSignal",  // message name
  3,  // number of fields
  sizeof(art_interface_msg::msg::ArtLifeSignal),
  ArtLifeSignal_message_member_array,  // message members
  ArtLifeSignal_init_function,  // function to initialize message memory (memory has to be allocated)
  ArtLifeSignal_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ArtLifeSignal_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ArtLifeSignal_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace art_interface_msg


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<art_interface_msg::msg::ArtLifeSignal>()
{
  return &::art_interface_msg::msg::rosidl_typesupport_introspection_cpp::ArtLifeSignal_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, art_interface_msg, msg, ArtLifeSignal)() {
  return &::art_interface_msg::msg::rosidl_typesupport_introspection_cpp::ArtLifeSignal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
