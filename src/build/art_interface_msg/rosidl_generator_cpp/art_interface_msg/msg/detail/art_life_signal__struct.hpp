// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from art_interface_msg:msg/ArtLifeSignal.idl
// generated code does not contain a copyright notice

#ifndef ART_INTERFACE_MSG__MSG__DETAIL__ART_LIFE_SIGNAL__STRUCT_HPP_
#define ART_INTERFACE_MSG__MSG__DETAIL__ART_LIFE_SIGNAL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__art_interface_msg__msg__ArtLifeSignal __attribute__((deprecated))
#else
# define DEPRECATED__art_interface_msg__msg__ArtLifeSignal __declspec(deprecated)
#endif

namespace art_interface_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ArtLifeSignal_
{
  using Type = ArtLifeSignal_<ContainerAllocator>;

  explicit ArtLifeSignal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ccu_life = 0;
      this->scs_life = 0;
      this->dpu_life = 0;
    }
  }

  explicit ArtLifeSignal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ccu_life = 0;
      this->scs_life = 0;
      this->dpu_life = 0;
    }
  }

  // field types and members
  using _ccu_life_type =
    uint8_t;
  _ccu_life_type ccu_life;
  using _scs_life_type =
    uint8_t;
  _scs_life_type scs_life;
  using _dpu_life_type =
    uint8_t;
  _dpu_life_type dpu_life;

  // setters for named parameter idiom
  Type & set__ccu_life(
    const uint8_t & _arg)
  {
    this->ccu_life = _arg;
    return *this;
  }
  Type & set__scs_life(
    const uint8_t & _arg)
  {
    this->scs_life = _arg;
    return *this;
  }
  Type & set__dpu_life(
    const uint8_t & _arg)
  {
    this->dpu_life = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    art_interface_msg::msg::ArtLifeSignal_<ContainerAllocator> *;
  using ConstRawPtr =
    const art_interface_msg::msg::ArtLifeSignal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<art_interface_msg::msg::ArtLifeSignal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<art_interface_msg::msg::ArtLifeSignal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      art_interface_msg::msg::ArtLifeSignal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<art_interface_msg::msg::ArtLifeSignal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      art_interface_msg::msg::ArtLifeSignal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<art_interface_msg::msg::ArtLifeSignal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<art_interface_msg::msg::ArtLifeSignal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<art_interface_msg::msg::ArtLifeSignal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__art_interface_msg__msg__ArtLifeSignal
    std::shared_ptr<art_interface_msg::msg::ArtLifeSignal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__art_interface_msg__msg__ArtLifeSignal
    std::shared_ptr<art_interface_msg::msg::ArtLifeSignal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArtLifeSignal_ & other) const
  {
    if (this->ccu_life != other.ccu_life) {
      return false;
    }
    if (this->scs_life != other.scs_life) {
      return false;
    }
    if (this->dpu_life != other.dpu_life) {
      return false;
    }
    return true;
  }
  bool operator!=(const ArtLifeSignal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArtLifeSignal_

// alias to use template instance with default allocator
using ArtLifeSignal =
  art_interface_msg::msg::ArtLifeSignal_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace art_interface_msg

#endif  // ART_INTERFACE_MSG__MSG__DETAIL__ART_LIFE_SIGNAL__STRUCT_HPP_
