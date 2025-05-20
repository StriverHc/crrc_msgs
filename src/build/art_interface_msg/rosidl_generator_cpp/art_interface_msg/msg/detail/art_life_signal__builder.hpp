// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from art_interface_msg:msg/ArtLifeSignal.idl
// generated code does not contain a copyright notice

#ifndef ART_INTERFACE_MSG__MSG__DETAIL__ART_LIFE_SIGNAL__BUILDER_HPP_
#define ART_INTERFACE_MSG__MSG__DETAIL__ART_LIFE_SIGNAL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "art_interface_msg/msg/detail/art_life_signal__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace art_interface_msg
{

namespace msg
{

namespace builder
{

class Init_ArtLifeSignal_dpu_life
{
public:
  explicit Init_ArtLifeSignal_dpu_life(::art_interface_msg::msg::ArtLifeSignal & msg)
  : msg_(msg)
  {}
  ::art_interface_msg::msg::ArtLifeSignal dpu_life(::art_interface_msg::msg::ArtLifeSignal::_dpu_life_type arg)
  {
    msg_.dpu_life = std::move(arg);
    return std::move(msg_);
  }

private:
  ::art_interface_msg::msg::ArtLifeSignal msg_;
};

class Init_ArtLifeSignal_scs_life
{
public:
  explicit Init_ArtLifeSignal_scs_life(::art_interface_msg::msg::ArtLifeSignal & msg)
  : msg_(msg)
  {}
  Init_ArtLifeSignal_dpu_life scs_life(::art_interface_msg::msg::ArtLifeSignal::_scs_life_type arg)
  {
    msg_.scs_life = std::move(arg);
    return Init_ArtLifeSignal_dpu_life(msg_);
  }

private:
  ::art_interface_msg::msg::ArtLifeSignal msg_;
};

class Init_ArtLifeSignal_ccu_life
{
public:
  Init_ArtLifeSignal_ccu_life()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArtLifeSignal_scs_life ccu_life(::art_interface_msg::msg::ArtLifeSignal::_ccu_life_type arg)
  {
    msg_.ccu_life = std::move(arg);
    return Init_ArtLifeSignal_scs_life(msg_);
  }

private:
  ::art_interface_msg::msg::ArtLifeSignal msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::art_interface_msg::msg::ArtLifeSignal>()
{
  return art_interface_msg::msg::builder::Init_ArtLifeSignal_ccu_life();
}

}  // namespace art_interface_msg

#endif  // ART_INTERFACE_MSG__MSG__DETAIL__ART_LIFE_SIGNAL__BUILDER_HPP_
