// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from biped_interfaces:msg/SolePoses.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "biped_interfaces/msg/sole_poses.hpp"


#ifndef BIPED_INTERFACES__MSG__DETAIL__SOLE_POSES__STRUCT_HPP_
#define BIPED_INTERFACES__MSG__DETAIL__SOLE_POSES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'l_sole'
// Member 'r_sole'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__biped_interfaces__msg__SolePoses __attribute__((deprecated))
#else
# define DEPRECATED__biped_interfaces__msg__SolePoses __declspec(deprecated)
#endif

namespace biped_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SolePoses_
{
  using Type = SolePoses_<ContainerAllocator>;

  explicit SolePoses_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : l_sole(_init),
    r_sole(_init)
  {
    (void)_init;
  }

  explicit SolePoses_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : l_sole(_alloc, _init),
    r_sole(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _l_sole_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _l_sole_type l_sole;
  using _r_sole_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _r_sole_type r_sole;

  // setters for named parameter idiom
  Type & set__l_sole(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->l_sole = _arg;
    return *this;
  }
  Type & set__r_sole(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->r_sole = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    biped_interfaces::msg::SolePoses_<ContainerAllocator> *;
  using ConstRawPtr =
    const biped_interfaces::msg::SolePoses_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<biped_interfaces::msg::SolePoses_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<biped_interfaces::msg::SolePoses_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      biped_interfaces::msg::SolePoses_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<biped_interfaces::msg::SolePoses_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      biped_interfaces::msg::SolePoses_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<biped_interfaces::msg::SolePoses_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<biped_interfaces::msg::SolePoses_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<biped_interfaces::msg::SolePoses_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__biped_interfaces__msg__SolePoses
    std::shared_ptr<biped_interfaces::msg::SolePoses_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__biped_interfaces__msg__SolePoses
    std::shared_ptr<biped_interfaces::msg::SolePoses_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SolePoses_ & other) const
  {
    if (this->l_sole != other.l_sole) {
      return false;
    }
    if (this->r_sole != other.r_sole) {
      return false;
    }
    return true;
  }
  bool operator!=(const SolePoses_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SolePoses_

// alias to use template instance with default allocator
using SolePoses =
  biped_interfaces::msg::SolePoses_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace biped_interfaces

#endif  // BIPED_INTERFACES__MSG__DETAIL__SOLE_POSES__STRUCT_HPP_
