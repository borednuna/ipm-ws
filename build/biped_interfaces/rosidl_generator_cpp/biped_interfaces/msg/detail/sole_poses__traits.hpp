// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from biped_interfaces:msg/SolePoses.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "biped_interfaces/msg/sole_poses.hpp"


#ifndef BIPED_INTERFACES__MSG__DETAIL__SOLE_POSES__TRAITS_HPP_
#define BIPED_INTERFACES__MSG__DETAIL__SOLE_POSES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "biped_interfaces/msg/detail/sole_poses__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'l_sole'
// Member 'r_sole'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace biped_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const SolePoses & msg,
  std::ostream & out)
{
  out << "{";
  // member: l_sole
  {
    out << "l_sole: ";
    to_flow_style_yaml(msg.l_sole, out);
    out << ", ";
  }

  // member: r_sole
  {
    out << "r_sole: ";
    to_flow_style_yaml(msg.r_sole, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SolePoses & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: l_sole
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "l_sole:\n";
    to_block_style_yaml(msg.l_sole, out, indentation + 2);
  }

  // member: r_sole
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "r_sole:\n";
    to_block_style_yaml(msg.r_sole, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SolePoses & msg, bool use_flow_style = false)
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
  const biped_interfaces::msg::SolePoses & msg,
  std::ostream & out, size_t indentation = 0)
{
  biped_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use biped_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const biped_interfaces::msg::SolePoses & msg)
{
  return biped_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<biped_interfaces::msg::SolePoses>()
{
  return "biped_interfaces::msg::SolePoses";
}

template<>
inline const char * name<biped_interfaces::msg::SolePoses>()
{
  return "biped_interfaces/msg/SolePoses";
}

template<>
struct has_fixed_size<biped_interfaces::msg::SolePoses>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct has_bounded_size<biped_interfaces::msg::SolePoses>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct is_message<biped_interfaces::msg::SolePoses>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BIPED_INTERFACES__MSG__DETAIL__SOLE_POSES__TRAITS_HPP_
