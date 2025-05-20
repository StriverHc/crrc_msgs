// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from art_interface_msg:msg/ControlCommand.idl
// generated code does not contain a copyright notice

#ifndef ART_INTERFACE_MSG__MSG__DETAIL__CONTROL_COMMAND__STRUCT_HPP_
#define ART_INTERFACE_MSG__MSG__DETAIL__CONTROL_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__art_interface_msg__msg__ControlCommand __attribute__((deprecated))
#else
# define DEPRECATED__art_interface_msg__msg__ControlCommand __declspec(deprecated)
#endif

namespace art_interface_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ControlCommand_
{
  using Type = ControlCommand_<ContainerAllocator>;

  explicit ControlCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->desired_steering_wheel_angle = 0.0;
      this->desired_iehs_work_mode = 0;
      this->vcu_status = 0;
      this->desired_steering_angle_enable = 0;
      this->desired_additional_torque = 0.0;
      this->desired_steering_wheel_angle_speed = 0.0;
      this->ids_life = 0;
    }
  }

  explicit ControlCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->desired_steering_wheel_angle = 0.0;
      this->desired_iehs_work_mode = 0;
      this->vcu_status = 0;
      this->desired_steering_angle_enable = 0;
      this->desired_additional_torque = 0.0;
      this->desired_steering_wheel_angle_speed = 0.0;
      this->ids_life = 0;
    }
  }

  // field types and members
  using _desired_steering_wheel_angle_type =
    double;
  _desired_steering_wheel_angle_type desired_steering_wheel_angle;
  using _desired_iehs_work_mode_type =
    uint8_t;
  _desired_iehs_work_mode_type desired_iehs_work_mode;
  using _vcu_status_type =
    uint8_t;
  _vcu_status_type vcu_status;
  using _desired_steering_angle_enable_type =
    uint8_t;
  _desired_steering_angle_enable_type desired_steering_angle_enable;
  using _desired_additional_torque_type =
    double;
  _desired_additional_torque_type desired_additional_torque;
  using _desired_steering_wheel_angle_speed_type =
    double;
  _desired_steering_wheel_angle_speed_type desired_steering_wheel_angle_speed;
  using _ids_life_type =
    uint8_t;
  _ids_life_type ids_life;

  // setters for named parameter idiom
  Type & set__desired_steering_wheel_angle(
    const double & _arg)
  {
    this->desired_steering_wheel_angle = _arg;
    return *this;
  }
  Type & set__desired_iehs_work_mode(
    const uint8_t & _arg)
  {
    this->desired_iehs_work_mode = _arg;
    return *this;
  }
  Type & set__vcu_status(
    const uint8_t & _arg)
  {
    this->vcu_status = _arg;
    return *this;
  }
  Type & set__desired_steering_angle_enable(
    const uint8_t & _arg)
  {
    this->desired_steering_angle_enable = _arg;
    return *this;
  }
  Type & set__desired_additional_torque(
    const double & _arg)
  {
    this->desired_additional_torque = _arg;
    return *this;
  }
  Type & set__desired_steering_wheel_angle_speed(
    const double & _arg)
  {
    this->desired_steering_wheel_angle_speed = _arg;
    return *this;
  }
  Type & set__ids_life(
    const uint8_t & _arg)
  {
    this->ids_life = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    art_interface_msg::msg::ControlCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const art_interface_msg::msg::ControlCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<art_interface_msg::msg::ControlCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<art_interface_msg::msg::ControlCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      art_interface_msg::msg::ControlCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<art_interface_msg::msg::ControlCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      art_interface_msg::msg::ControlCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<art_interface_msg::msg::ControlCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<art_interface_msg::msg::ControlCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<art_interface_msg::msg::ControlCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__art_interface_msg__msg__ControlCommand
    std::shared_ptr<art_interface_msg::msg::ControlCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__art_interface_msg__msg__ControlCommand
    std::shared_ptr<art_interface_msg::msg::ControlCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ControlCommand_ & other) const
  {
    if (this->desired_steering_wheel_angle != other.desired_steering_wheel_angle) {
      return false;
    }
    if (this->desired_iehs_work_mode != other.desired_iehs_work_mode) {
      return false;
    }
    if (this->vcu_status != other.vcu_status) {
      return false;
    }
    if (this->desired_steering_angle_enable != other.desired_steering_angle_enable) {
      return false;
    }
    if (this->desired_additional_torque != other.desired_additional_torque) {
      return false;
    }
    if (this->desired_steering_wheel_angle_speed != other.desired_steering_wheel_angle_speed) {
      return false;
    }
    if (this->ids_life != other.ids_life) {
      return false;
    }
    return true;
  }
  bool operator!=(const ControlCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ControlCommand_

// alias to use template instance with default allocator
using ControlCommand =
  art_interface_msg::msg::ControlCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace art_interface_msg

#endif  // ART_INTERFACE_MSG__MSG__DETAIL__CONTROL_COMMAND__STRUCT_HPP_
