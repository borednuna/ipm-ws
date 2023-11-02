// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from vision_msgs:msg/Point2D.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "vision_msgs/msg/point2_d.hpp"


#ifndef VISION_MSGS__MSG__DETAIL__POINT2_D__STRUCT_HPP_
#define VISION_MSGS__MSG__DETAIL__POINT2_D__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__vision_msgs__msg__Point2D __attribute__((deprecated))
#else
# define DEPRECATED__vision_msgs__msg__Point2D __declspec(deprecated)
#endif

namespace vision_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Point2D_
{
  using Type = Point2D_<ContainerAllocator>;

  explicit Point2D_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
    }
  }

  explicit Point2D_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
    }
  }

  // field types and members
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;

  // setters for named parameter idiom
  Type & set__x(
    const double & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const double & _arg)
  {
    this->y = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    vision_msgs::msg::Point2D_<ContainerAllocator> *;
  using ConstRawPtr =
    const vision_msgs::msg::Point2D_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<vision_msgs::msg::Point2D_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<vision_msgs::msg::Point2D_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      vision_msgs::msg::Point2D_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<vision_msgs::msg::Point2D_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      vision_msgs::msg::Point2D_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<vision_msgs::msg::Point2D_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<vision_msgs::msg::Point2D_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<vision_msgs::msg::Point2D_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__vision_msgs__msg__Point2D
    std::shared_ptr<vision_msgs::msg::Point2D_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__vision_msgs__msg__Point2D
    std::shared_ptr<vision_msgs::msg::Point2D_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Point2D_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    return true;
  }
  bool operator!=(const Point2D_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Point2D_

// alias to use template instance with default allocator
using Point2D =
  vision_msgs::msg::Point2D_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace vision_msgs

#endif  // VISION_MSGS__MSG__DETAIL__POINT2_D__STRUCT_HPP_
