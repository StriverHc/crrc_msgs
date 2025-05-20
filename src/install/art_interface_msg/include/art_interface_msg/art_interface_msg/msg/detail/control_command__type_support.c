// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from art_interface_msg:msg/ControlCommand.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "art_interface_msg/msg/detail/control_command__rosidl_typesupport_introspection_c.h"
#include "art_interface_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "art_interface_msg/msg/detail/control_command__functions.h"
#include "art_interface_msg/msg/detail/control_command__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void art_interface_msg__msg__ControlCommand__rosidl_typesupport_introspection_c__ControlCommand_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  art_interface_msg__msg__ControlCommand__init(message_memory);
}

void art_interface_msg__msg__ControlCommand__rosidl_typesupport_introspection_c__ControlCommand_fini_function(void * message_memory)
{
  art_interface_msg__msg__ControlCommand__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember art_interface_msg__msg__ControlCommand__rosidl_typesupport_introspection_c__ControlCommand_message_member_array[7] = {
  {
    "desired_steering_wheel_angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(art_interface_msg__msg__ControlCommand, desired_steering_wheel_angle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "desired_iehs_work_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(art_interface_msg__msg__ControlCommand, desired_iehs_work_mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vcu_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(art_interface_msg__msg__ControlCommand, vcu_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "desired_steering_angle_enable",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(art_interface_msg__msg__ControlCommand, desired_steering_angle_enable),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "desired_additional_torque",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(art_interface_msg__msg__ControlCommand, desired_additional_torque),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "desired_steering_wheel_angle_speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(art_interface_msg__msg__ControlCommand, desired_steering_wheel_angle_speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ids_life",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(art_interface_msg__msg__ControlCommand, ids_life),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers art_interface_msg__msg__ControlCommand__rosidl_typesupport_introspection_c__ControlCommand_message_members = {
  "art_interface_msg__msg",  // message namespace
  "ControlCommand",  // message name
  7,  // number of fields
  sizeof(art_interface_msg__msg__ControlCommand),
  art_interface_msg__msg__ControlCommand__rosidl_typesupport_introspection_c__ControlCommand_message_member_array,  // message members
  art_interface_msg__msg__ControlCommand__rosidl_typesupport_introspection_c__ControlCommand_init_function,  // function to initialize message memory (memory has to be allocated)
  art_interface_msg__msg__ControlCommand__rosidl_typesupport_introspection_c__ControlCommand_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t art_interface_msg__msg__ControlCommand__rosidl_typesupport_introspection_c__ControlCommand_message_type_support_handle = {
  0,
  &art_interface_msg__msg__ControlCommand__rosidl_typesupport_introspection_c__ControlCommand_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_art_interface_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, art_interface_msg, msg, ControlCommand)() {
  if (!art_interface_msg__msg__ControlCommand__rosidl_typesupport_introspection_c__ControlCommand_message_type_support_handle.typesupport_identifier) {
    art_interface_msg__msg__ControlCommand__rosidl_typesupport_introspection_c__ControlCommand_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &art_interface_msg__msg__ControlCommand__rosidl_typesupport_introspection_c__ControlCommand_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
