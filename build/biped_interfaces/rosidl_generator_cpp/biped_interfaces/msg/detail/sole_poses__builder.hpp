// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from biped_interfaces:msg/SolePoses.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "biped_interfaces/msg/sole_poses.hpp"


#ifndef BIPED_INTERFACES__MSG__DETAIL__SOLE_POSES__BUILDER_HPP_
#define BIPED_INTERFACES__MSG__DETAIL__SOLE_POSES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "biped_interfaces/msg/detail/sole_poses__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace biped_interfaces
{

namespace msg
{

namespace builder
{

class Init_SolePoses_r_sole
{
public:
  explicit Init_SolePoses_r_sole(::biped_interfaces::msg::SolePoses & msg)
  : msg_(msg)
  {}
  ::biped_interfaces::msg::SolePoses r_sole(::biped_interfaces::msg::SolePoses::_r_sole_type arg)
  {
    msg_.r_sole = std::move(arg);
    return std::move(msg_);
  }

private:
  ::biped_interfaces::msg::SolePoses msg_;
};

class Init_SolePoses_l_sole
{
public:
  Init_SolePoses_l_sole()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SolePoses_r_sole l_sole(::biped_interfaces::msg::SolePoses::_l_sole_type arg)
  {
    msg_.l_sole = std::move(arg);
    return Init_SolePoses_r_sole(msg_);
  }

private:
  ::biped_interfaces::msg::SolePoses msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::biped_interfaces::msg::SolePoses>()
{
  return biped_interfaces::msg::builder::Init_SolePoses_l_sole();
}

}  // namespace biped_interfaces

#endif  // BIPED_INTERFACES__MSG__DETAIL__SOLE_POSES__BUILDER_HPP_
