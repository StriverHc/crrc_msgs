// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from art_interface_msg:msg/ArtStatus.idl
// generated code does not contain a copyright notice

#ifndef ART_INTERFACE_MSG__MSG__DETAIL__ART_STATUS__STRUCT_HPP_
#define ART_INTERFACE_MSG__MSG__DETAIL__ART_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__art_interface_msg__msg__ArtStatus __attribute__((deprecated))
#else
# define DEPRECATED__art_interface_msg__msg__ArtStatus __declspec(deprecated)
#endif

namespace art_interface_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ArtStatus_
{
  using Type = ArtStatus_<ContainerAllocator>;

  explicit ArtStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->das_control_disfunction = false;
      this->lateral_control_activation = false;
      this->deviation_warning_activation = false;
      this->iehs_comm_error = false;
      this->ccu_life = 0;
      this->tram_speed = 0.0;
      this->movement_direction_activation_signal = false;
      this->actual_tire_angle = 0.0;
      this->axle1_sensor_error_a = false;
      this->axle1_sensor_error_b = false;
      this->axle1_sensor_error_electrical = false;
      this->axle2_sensor_error_a = false;
      this->axle2_sensor_error_b = false;
      this->axle2_sensor_error_electrical = false;
      this->actual_steering_angle = 0.0;
      this->iehs_device_fault = false;
    }
  }

  explicit ArtStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->das_control_disfunction = false;
      this->lateral_control_activation = false;
      this->deviation_warning_activation = false;
      this->iehs_comm_error = false;
      this->ccu_life = 0;
      this->tram_speed = 0.0;
      this->movement_direction_activation_signal = false;
      this->actual_tire_angle = 0.0;
      this->axle1_sensor_error_a = false;
      this->axle1_sensor_error_b = false;
      this->axle1_sensor_error_electrical = false;
      this->axle2_sensor_error_a = false;
      this->axle2_sensor_error_b = false;
      this->axle2_sensor_error_electrical = false;
      this->actual_steering_angle = 0.0;
      this->iehs_device_fault = false;
    }
  }

  // field types and members
  using _das_control_disfunction_type =
    bool;
  _das_control_disfunction_type das_control_disfunction;
  using _lateral_control_activation_type =
    bool;
  _lateral_control_activation_type lateral_control_activation;
  using _deviation_warning_activation_type =
    bool;
  _deviation_warning_activation_type deviation_warning_activation;
  using _iehs_comm_error_type =
    bool;
  _iehs_comm_error_type iehs_comm_error;
  using _ccu_life_type =
    uint8_t;
  _ccu_life_type ccu_life;
  using _tram_speed_type =
    double;
  _tram_speed_type tram_speed;
  using _movement_direction_activation_signal_type =
    bool;
  _movement_direction_activation_signal_type movement_direction_activation_signal;
  using _actual_tire_angle_type =
    double;
  _actual_tire_angle_type actual_tire_angle;
  using _axle1_sensor_error_a_type =
    bool;
  _axle1_sensor_error_a_type axle1_sensor_error_a;
  using _axle1_sensor_error_b_type =
    bool;
  _axle1_sensor_error_b_type axle1_sensor_error_b;
  using _axle1_sensor_error_electrical_type =
    bool;
  _axle1_sensor_error_electrical_type axle1_sensor_error_electrical;
  using _axle2_sensor_error_a_type =
    bool;
  _axle2_sensor_error_a_type axle2_sensor_error_a;
  using _axle2_sensor_error_b_type =
    bool;
  _axle2_sensor_error_b_type axle2_sensor_error_b;
  using _axle2_sensor_error_electrical_type =
    bool;
  _axle2_sensor_error_electrical_type axle2_sensor_error_electrical;
  using _actual_steering_angle_type =
    double;
  _actual_steering_angle_type actual_steering_angle;
  using _iehs_device_fault_type =
    bool;
  _iehs_device_fault_type iehs_device_fault;

  // setters for named parameter idiom
  Type & set__das_control_disfunction(
    const bool & _arg)
  {
    this->das_control_disfunction = _arg;
    return *this;
  }
  Type & set__lateral_control_activation(
    const bool & _arg)
  {
    this->lateral_control_activation = _arg;
    return *this;
  }
  Type & set__deviation_warning_activation(
    const bool & _arg)
  {
    this->deviation_warning_activation = _arg;
    return *this;
  }
  Type & set__iehs_comm_error(
    const bool & _arg)
  {
    this->iehs_comm_error = _arg;
    return *this;
  }
  Type & set__ccu_life(
    const uint8_t & _arg)
  {
    this->ccu_life = _arg;
    return *this;
  }
  Type & set__tram_speed(
    const double & _arg)
  {
    this->tram_speed = _arg;
    return *this;
  }
  Type & set__movement_direction_activation_signal(
    const bool & _arg)
  {
    this->movement_direction_activation_signal = _arg;
    return *this;
  }
  Type & set__actual_tire_angle(
    const double & _arg)
  {
    this->actual_tire_angle = _arg;
    return *this;
  }
  Type & set__axle1_sensor_error_a(
    const bool & _arg)
  {
    this->axle1_sensor_error_a = _arg;
    return *this;
  }
  Type & set__axle1_sensor_error_b(
    const bool & _arg)
  {
    this->axle1_sensor_error_b = _arg;
    return *this;
  }
  Type & set__axle1_sensor_error_electrical(
    const bool & _arg)
  {
    this->axle1_sensor_error_electrical = _arg;
    return *this;
  }
  Type & set__axle2_sensor_error_a(
    const bool & _arg)
  {
    this->axle2_sensor_error_a = _arg;
    return *this;
  }
  Type & set__axle2_sensor_error_b(
    const bool & _arg)
  {
    this->axle2_sensor_error_b = _arg;
    return *this;
  }
  Type & set__axle2_sensor_error_electrical(
    const bool & _arg)
  {
    this->axle2_sensor_error_electrical = _arg;
    return *this;
  }
  Type & set__actual_steering_angle(
    const double & _arg)
  {
    this->actual_steering_angle = _arg;
    return *this;
  }
  Type & set__iehs_device_fault(
    const bool & _arg)
  {
    this->iehs_device_fault = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    art_interface_msg::msg::ArtStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const art_interface_msg::msg::ArtStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<art_interface_msg::msg::ArtStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<art_interface_msg::msg::ArtStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      art_interface_msg::msg::ArtStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<art_interface_msg::msg::ArtStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      art_interface_msg::msg::ArtStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<art_interface_msg::msg::ArtStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<art_interface_msg::msg::ArtStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<art_interface_msg::msg::ArtStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__art_interface_msg__msg__ArtStatus
    std::shared_ptr<art_interface_msg::msg::ArtStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__art_interface_msg__msg__ArtStatus
    std::shared_ptr<art_interface_msg::msg::ArtStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArtStatus_ & other) const
  {
    if (this->das_control_disfunction != other.das_control_disfunction) {
      return false;
    }
    if (this->lateral_control_activation != other.lateral_control_activation) {
      return false;
    }
    if (this->deviation_warning_activation != other.deviation_warning_activation) {
      return false;
    }
    if (this->iehs_comm_error != other.iehs_comm_error) {
      return false;
    }
    if (this->ccu_life != other.ccu_life) {
      return false;
    }
    if (this->tram_speed != other.tram_speed) {
      return false;
    }
    if (this->movement_direction_activation_signal != other.movement_direction_activation_signal) {
      return false;
    }
    if (this->actual_tire_angle != other.actual_tire_angle) {
      return false;
    }
    if (this->axle1_sensor_error_a != other.axle1_sensor_error_a) {
      return false;
    }
    if (this->axle1_sensor_error_b != other.axle1_sensor_error_b) {
      return false;
    }
    if (this->axle1_sensor_error_electrical != other.axle1_sensor_error_electrical) {
      return false;
    }
    if (this->axle2_sensor_error_a != other.axle2_sensor_error_a) {
      return false;
    }
    if (this->axle2_sensor_error_b != other.axle2_sensor_error_b) {
      return false;
    }
    if (this->axle2_sensor_error_electrical != other.axle2_sensor_error_electrical) {
      return false;
    }
    if (this->actual_steering_angle != other.actual_steering_angle) {
      return false;
    }
    if (this->iehs_device_fault != other.iehs_device_fault) {
      return false;
    }
    return true;
  }
  bool operator!=(const ArtStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArtStatus_

// alias to use template instance with default allocator
using ArtStatus =
  art_interface_msg::msg::ArtStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace art_interface_msg

#endif  // ART_INTERFACE_MSG__MSG__DETAIL__ART_STATUS__STRUCT_HPP_
