// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from biped_interfaces:msg/Phase.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "biped_interfaces/msg/phase.hpp"


#ifndef BIPED_INTERFACES__MSG__DETAIL__PHASE__STRUCT_HPP_
#define BIPED_INTERFACES__MSG__DETAIL__PHASE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__biped_interfaces__msg__Phase __attribute__((deprecated))
#else
# define DEPRECATED__biped_interfaces__msg__Phase __declspec(deprecated)
#endif

namespace biped_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Phase_
{
  using Type = Phase_<ContainerAllocator>;

  explicit Phase_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->phase = 0l;
    }
  }

  explicit Phase_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->phase = 0l;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _phase_type =
    int32_t;
  _phase_type phase;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__phase(
    const int32_t & _arg)
  {
    this->phase = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int32_t LEFT_STANCE =
    0;
  static constexpr int32_t RIGHT_SWING =
    0;
  static constexpr int32_t RIGHT_STANCE =
    1;
  static constexpr int32_t LEFT_SWING =
    1;
  static constexpr int32_t DOUBLE_STANCE =
    2;

  // pointer types
  using RawPtr =
    biped_interfaces::msg::Phase_<ContainerAllocator> *;
  using ConstRawPtr =
    const biped_interfaces::msg::Phase_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<biped_interfaces::msg::Phase_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<biped_interfaces::msg::Phase_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      biped_interfaces::msg::Phase_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<biped_interfaces::msg::Phase_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      biped_interfaces::msg::Phase_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<biped_interfaces::msg::Phase_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<biped_interfaces::msg::Phase_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<biped_interfaces::msg::Phase_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__biped_interfaces__msg__Phase
    std::shared_ptr<biped_interfaces::msg::Phase_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__biped_interfaces__msg__Phase
    std::shared_ptr<biped_interfaces::msg::Phase_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Phase_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->phase != other.phase) {
      return false;
    }
    return true;
  }
  bool operator!=(const Phase_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Phase_

// alias to use template instance with default allocator
using Phase =
  biped_interfaces::msg::Phase_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t Phase_<ContainerAllocator>::LEFT_STANCE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t Phase_<ContainerAllocator>::RIGHT_SWING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t Phase_<ContainerAllocator>::RIGHT_STANCE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t Phase_<ContainerAllocator>::LEFT_SWING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t Phase_<ContainerAllocator>::DOUBLE_STANCE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace biped_interfaces

#endif  // BIPED_INTERFACES__MSG__DETAIL__PHASE__STRUCT_HPP_
