// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from art_interface_msg:msg/ControlCommand.idl
// generated code does not contain a copyright notice

#ifndef ART_INTERFACE_MSG__MSG__DETAIL__CONTROL_COMMAND__BUILDER_HPP_
#define ART_INTERFACE_MSG__MSG__DETAIL__CONTROL_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "art_interface_msg/msg/detail/control_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace art_interface_msg
{

namespace msg
{

namespace builder
{

class Init_ControlCommand_ids_life
{
public:
  explicit Init_ControlCommand_ids_life(::art_interface_msg::msg::ControlCommand & msg)
  : msg_(msg)
  {}
  ::art_interface_msg::msg::ControlCommand ids_life(::art_interface_msg::msg::ControlCommand::_ids_life_type arg)
  {
    msg_.ids_life = std::move(arg);
    return std::move(msg_);
  }

private:
  ::art_interface_msg::msg::ControlCommand msg_;
};

class Init_ControlCommand_desired_steering_wheel_angle_speed
{
public:
  explicit Init_ControlCommand_desired_steering_wheel_angle_speed(::art_interface_msg::msg::ControlCommand & msg)
  : msg_(msg)
  {}
  Init_ControlCommand_ids_life desired_steering_wheel_angle_speed(::art_interface_msg::msg::ControlCommand::_desired_steering_wheel_angle_speed_type arg)
  {
    msg_.desired_steering_wheel_angle_speed = std::move(arg);
    return Init_ControlCommand_ids_life(msg_);
  }

private:
  ::art_interface_msg::msg::ControlCommand msg_;
};

class Init_ControlCommand_desired_additional_torque
{
public:
  explicit Init_ControlCommand_desired_additional_torque(::art_interface_msg::msg::ControlCommand & msg)
  : msg_(msg)
  {}
  Init_ControlCommand_desired_steering_wheel_angle_speed desired_additional_torque(::art_interface_msg::msg::ControlCommand::_desired_additional_torque_type arg)
  {
    msg_.desired_additional_torque = std::move(arg);
    return Init_ControlCommand_desired_steering_wheel_angle_speed(msg_);
  }

private:
  ::art_interface_msg::msg::ControlCommand msg_;
};

class Init_ControlCommand_desired_steering_angle_enable
{
public:
  explicit Init_ControlCommand_desired_steering_angle_enable(::art_interface_msg::msg::ControlCommand & msg)
  : msg_(msg)
  {}
  Init_ControlCommand_desired_additional_torque desired_steering_angle_enable(::art_interface_msg::msg::ControlCommand::_desired_steering_angle_enable_type arg)
  {
    msg_.desired_steering_angle_enable = std::move(arg);
    return Init_ControlCommand_desired_additional_torque(msg_);
  }

private:
  ::art_interface_msg::msg::ControlCommand msg_;
};

class Init_ControlCommand_vcu_status
{
public:
  explicit Init_ControlCommand_vcu_status(::art_interface_msg::msg::ControlCommand & msg)
  : msg_(msg)
  {}
  Init_ControlCommand_desired_steering_angle_enable vcu_status(::art_interface_msg::msg::ControlCommand::_vcu_status_type arg)
  {
    msg_.vcu_status = std::move(arg);
    return Init_ControlCommand_desired_steering_angle_enable(msg_);
  }

private:
  ::art_interface_msg::msg::ControlCommand msg_;
};

class Init_ControlCommand_desired_iehs_work_mode
{
public:
  explicit Init_ControlCommand_desired_iehs_work_mode(::art_interface_msg::msg::ControlCommand & msg)
  : msg_(msg)
  {}
  Init_ControlCommand_vcu_status desired_iehs_work_mode(::art_interface_msg::msg::ControlCommand::_desired_iehs_work_mode_type arg)
  {
    msg_.desired_iehs_work_mode = std::move(arg);
    return Init_ControlCommand_vcu_status(msg_);
  }

private:
  ::art_interface_msg::msg::ControlCommand msg_;
};

class Init_ControlCommand_desired_steering_wheel_angle
{
public:
  Init_ControlCommand_desired_steering_wheel_angle()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ControlCommand_desired_iehs_work_mode desired_steering_wheel_angle(::art_interface_msg::msg::ControlCommand::_desired_steering_wheel_angle_type arg)
  {
    msg_.desired_steering_wheel_angle = std::move(arg);
    return Init_ControlCommand_desired_iehs_work_mode(msg_);
  }

private:
  ::art_interface_msg::msg::ControlCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::art_interface_msg::msg::ControlCommand>()
{
  return art_interface_msg::msg::builder::Init_ControlCommand_desired_steering_wheel_angle();
}

}  // namespace art_interface_msg

#endif  // ART_INTERFACE_MSG__MSG__DETAIL__CONTROL_COMMAND__BUILDER_HPP_
