// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from biped_interfaces:msg/Phase.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "biped_interfaces/msg/phase.hpp"


#ifndef BIPED_INTERFACES__MSG__DETAIL__PHASE__BUILDER_HPP_
#define BIPED_INTERFACES__MSG__DETAIL__PHASE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "biped_interfaces/msg/detail/phase__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace biped_interfaces
{

namespace msg
{

namespace builder
{

class Init_Phase_phase
{
public:
  explicit Init_Phase_phase(::biped_interfaces::msg::Phase & msg)
  : msg_(msg)
  {}
  ::biped_interfaces::msg::Phase phase(::biped_interfaces::msg::Phase::_phase_type arg)
  {
    msg_.phase = std::move(arg);
    return std::move(msg_);
  }

private:
  ::biped_interfaces::msg::Phase msg_;
};

class Init_Phase_header
{
public:
  Init_Phase_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Phase_phase header(::biped_interfaces::msg::Phase::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Phase_phase(msg_);
  }

private:
  ::biped_interfaces::msg::Phase msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::biped_interfaces::msg::Phase>()
{
  return biped_interfaces::msg::builder::Init_Phase_header();
}

}  // namespace biped_interfaces

#endif  // BIPED_INTERFACES__MSG__DETAIL__PHASE__BUILDER_HPP_
