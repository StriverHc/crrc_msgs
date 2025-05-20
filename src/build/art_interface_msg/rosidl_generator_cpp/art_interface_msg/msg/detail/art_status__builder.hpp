// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from art_interface_msg:msg/ArtStatus.idl
// generated code does not contain a copyright notice

#ifndef ART_INTERFACE_MSG__MSG__DETAIL__ART_STATUS__BUILDER_HPP_
#define ART_INTERFACE_MSG__MSG__DETAIL__ART_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "art_interface_msg/msg/detail/art_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace art_interface_msg
{

namespace msg
{

namespace builder
{

class Init_ArtStatus_iehs_device_fault
{
public:
  explicit Init_ArtStatus_iehs_device_fault(::art_interface_msg::msg::ArtStatus & msg)
  : msg_(msg)
  {}
  ::art_interface_msg::msg::ArtStatus iehs_device_fault(::art_interface_msg::msg::ArtStatus::_iehs_device_fault_type arg)
  {
    msg_.iehs_device_fault = std::move(arg);
    return std::move(msg_);
  }

private:
  ::art_interface_msg::msg::ArtStatus msg_;
};

class Init_ArtStatus_actual_steering_angle
{
public:
  explicit Init_ArtStatus_actual_steering_angle(::art_interface_msg::msg::ArtStatus & msg)
  : msg_(msg)
  {}
  Init_ArtStatus_iehs_device_fault actual_steering_angle(::art_interface_msg::msg::ArtStatus::_actual_steering_angle_type arg)
  {
    msg_.actual_steering_angle = std::move(arg);
    return Init_ArtStatus_iehs_device_fault(msg_);
  }

private:
  ::art_interface_msg::msg::ArtStatus msg_;
};

class Init_ArtStatus_axle2_sensor_error_electrical
{
public:
  explicit Init_ArtStatus_axle2_sensor_error_electrical(::art_interface_msg::msg::ArtStatus & msg)
  : msg_(msg)
  {}
  Init_ArtStatus_actual_steering_angle axle2_sensor_error_electrical(::art_interface_msg::msg::ArtStatus::_axle2_sensor_error_electrical_type arg)
  {
    msg_.axle2_sensor_error_electrical = std::move(arg);
    return Init_ArtStatus_actual_steering_angle(msg_);
  }

private:
  ::art_interface_msg::msg::ArtStatus msg_;
};

class Init_ArtStatus_axle2_sensor_error_b
{
public:
  explicit Init_ArtStatus_axle2_sensor_error_b(::art_interface_msg::msg::ArtStatus & msg)
  : msg_(msg)
  {}
  Init_ArtStatus_axle2_sensor_error_electrical axle2_sensor_error_b(::art_interface_msg::msg::ArtStatus::_axle2_sensor_error_b_type arg)
  {
    msg_.axle2_sensor_error_b = std::move(arg);
    return Init_ArtStatus_axle2_sensor_error_electrical(msg_);
  }

private:
  ::art_interface_msg::msg::ArtStatus msg_;
};

class Init_ArtStatus_axle2_sensor_error_a
{
public:
  explicit Init_ArtStatus_axle2_sensor_error_a(::art_interface_msg::msg::ArtStatus & msg)
  : msg_(msg)
  {}
  Init_ArtStatus_axle2_sensor_error_b axle2_sensor_error_a(::art_interface_msg::msg::ArtStatus::_axle2_sensor_error_a_type arg)
  {
    msg_.axle2_sensor_error_a = std::move(arg);
    return Init_ArtStatus_axle2_sensor_error_b(msg_);
  }

private:
  ::art_interface_msg::msg::ArtStatus msg_;
};

class Init_ArtStatus_axle1_sensor_error_electrical
{
public:
  explicit Init_ArtStatus_axle1_sensor_error_electrical(::art_interface_msg::msg::ArtStatus & msg)
  : msg_(msg)
  {}
  Init_ArtStatus_axle2_sensor_error_a axle1_sensor_error_electrical(::art_interface_msg::msg::ArtStatus::_axle1_sensor_error_electrical_type arg)
  {
    msg_.axle1_sensor_error_electrical = std::move(arg);
    return Init_ArtStatus_axle2_sensor_error_a(msg_);
  }

private:
  ::art_interface_msg::msg::ArtStatus msg_;
};

class Init_ArtStatus_axle1_sensor_error_b
{
public:
  explicit Init_ArtStatus_axle1_sensor_error_b(::art_interface_msg::msg::ArtStatus & msg)
  : msg_(msg)
  {}
  Init_ArtStatus_axle1_sensor_error_electrical axle1_sensor_error_b(::art_interface_msg::msg::ArtStatus::_axle1_sensor_error_b_type arg)
  {
    msg_.axle1_sensor_error_b = std::move(arg);
    return Init_ArtStatus_axle1_sensor_error_electrical(msg_);
  }

private:
  ::art_interface_msg::msg::ArtStatus msg_;
};

class Init_ArtStatus_axle1_sensor_error_a
{
public:
  explicit Init_ArtStatus_axle1_sensor_error_a(::art_interface_msg::msg::ArtStatus & msg)
  : msg_(msg)
  {}
  Init_ArtStatus_axle1_sensor_error_b axle1_sensor_error_a(::art_interface_msg::msg::ArtStatus::_axle1_sensor_error_a_type arg)
  {
    msg_.axle1_sensor_error_a = std::move(arg);
    return Init_ArtStatus_axle1_sensor_error_b(msg_);
  }

private:
  ::art_interface_msg::msg::ArtStatus msg_;
};

class Init_ArtStatus_actual_tire_angle
{
public:
  explicit Init_ArtStatus_actual_tire_angle(::art_interface_msg::msg::ArtStatus & msg)
  : msg_(msg)
  {}
  Init_ArtStatus_axle1_sensor_error_a actual_tire_angle(::art_interface_msg::msg::ArtStatus::_actual_tire_angle_type arg)
  {
    msg_.actual_tire_angle = std::move(arg);
    return Init_ArtStatus_axle1_sensor_error_a(msg_);
  }

private:
  ::art_interface_msg::msg::ArtStatus msg_;
};

class Init_ArtStatus_movement_direction_activation_signal
{
public:
  explicit Init_ArtStatus_movement_direction_activation_signal(::art_interface_msg::msg::ArtStatus & msg)
  : msg_(msg)
  {}
  Init_ArtStatus_actual_tire_angle movement_direction_activation_signal(::art_interface_msg::msg::ArtStatus::_movement_direction_activation_signal_type arg)
  {
    msg_.movement_direction_activation_signal = std::move(arg);
    return Init_ArtStatus_actual_tire_angle(msg_);
  }

private:
  ::art_interface_msg::msg::ArtStatus msg_;
};

class Init_ArtStatus_tram_speed
{
public:
  explicit Init_ArtStatus_tram_speed(::art_interface_msg::msg::ArtStatus & msg)
  : msg_(msg)
  {}
  Init_ArtStatus_movement_direction_activation_signal tram_speed(::art_interface_msg::msg::ArtStatus::_tram_speed_type arg)
  {
    msg_.tram_speed = std::move(arg);
    return Init_ArtStatus_movement_direction_activation_signal(msg_);
  }

private:
  ::art_interface_msg::msg::ArtStatus msg_;
};

class Init_ArtStatus_ccu_life
{
public:
  explicit Init_ArtStatus_ccu_life(::art_interface_msg::msg::ArtStatus & msg)
  : msg_(msg)
  {}
  Init_ArtStatus_tram_speed ccu_life(::art_interface_msg::msg::ArtStatus::_ccu_life_type arg)
  {
    msg_.ccu_life = std::move(arg);
    return Init_ArtStatus_tram_speed(msg_);
  }

private:
  ::art_interface_msg::msg::ArtStatus msg_;
};

class Init_ArtStatus_iehs_comm_error
{
public:
  explicit Init_ArtStatus_iehs_comm_error(::art_interface_msg::msg::ArtStatus & msg)
  : msg_(msg)
  {}
  Init_ArtStatus_ccu_life iehs_comm_error(::art_interface_msg::msg::ArtStatus::_iehs_comm_error_type arg)
  {
    msg_.iehs_comm_error = std::move(arg);
    return Init_ArtStatus_ccu_life(msg_);
  }

private:
  ::art_interface_msg::msg::ArtStatus msg_;
};

class Init_ArtStatus_deviation_warning_activation
{
public:
  explicit Init_ArtStatus_deviation_warning_activation(::art_interface_msg::msg::ArtStatus & msg)
  : msg_(msg)
  {}
  Init_ArtStatus_iehs_comm_error deviation_warning_activation(::art_interface_msg::msg::ArtStatus::_deviation_warning_activation_type arg)
  {
    msg_.deviation_warning_activation = std::move(arg);
    return Init_ArtStatus_iehs_comm_error(msg_);
  }

private:
  ::art_interface_msg::msg::ArtStatus msg_;
};

class Init_ArtStatus_lateral_control_activation
{
public:
  explicit Init_ArtStatus_lateral_control_activation(::art_interface_msg::msg::ArtStatus & msg)
  : msg_(msg)
  {}
  Init_ArtStatus_deviation_warning_activation lateral_control_activation(::art_interface_msg::msg::ArtStatus::_lateral_control_activation_type arg)
  {
    msg_.lateral_control_activation = std::move(arg);
    return Init_ArtStatus_deviation_warning_activation(msg_);
  }

private:
  ::art_interface_msg::msg::ArtStatus msg_;
};

class Init_ArtStatus_das_control_disfunction
{
public:
  Init_ArtStatus_das_control_disfunction()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArtStatus_lateral_control_activation das_control_disfunction(::art_interface_msg::msg::ArtStatus::_das_control_disfunction_type arg)
  {
    msg_.das_control_disfunction = std::move(arg);
    return Init_ArtStatus_lateral_control_activation(msg_);
  }

private:
  ::art_interface_msg::msg::ArtStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::art_interface_msg::msg::ArtStatus>()
{
  return art_interface_msg::msg::builder::Init_ArtStatus_das_control_disfunction();
}

}  // namespace art_interface_msg

#endif  // ART_INTERFACE_MSG__MSG__DETAIL__ART_STATUS__BUILDER_HPP_
