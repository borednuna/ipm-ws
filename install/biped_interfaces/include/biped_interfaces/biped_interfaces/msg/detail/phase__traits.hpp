// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from biped_interfaces:msg/Phase.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "biped_interfaces/msg/phase.hpp"


#ifndef BIPED_INTERFACES__MSG__DETAIL__PHASE__TRAITS_HPP_
#define BIPED_INTERFACES__MSG__DETAIL__PHASE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "biped_interfaces/msg/detail/phase__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace biped_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Phase & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: phase
  {
    out << "phase: ";
    rosidl_generator_traits::value_to_yaml(msg.phase, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Phase & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: phase
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "phase: ";
    rosidl_generator_traits::value_to_yaml(msg.phase, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Phase & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace biped_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use biped_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const biped_interfaces::msg::Phase & msg,
  std::ostream & out, size_t indentation = 0)
{
  biped_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use biped_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const biped_interfaces::msg::Phase & msg)
{
  return biped_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<biped_interfaces::msg::Phase>()
{
  return "biped_interfaces::msg::Phase";
}

template<>
inline const char * name<biped_interfaces::msg::Phase>()
{
  return "biped_interfaces/msg/Phase";
}

template<>
struct has_fixed_size<biped_interfaces::msg::Phase>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<biped_interfaces::msg::Phase>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<biped_interfaces::msg::Phase>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BIPED_INTERFACES__MSG__DETAIL__PHASE__TRAITS_HPP_
