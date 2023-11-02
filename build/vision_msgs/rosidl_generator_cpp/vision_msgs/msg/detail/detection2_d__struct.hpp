// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from vision_msgs:msg/Detection2D.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "vision_msgs/msg/detection2_d.hpp"


#ifndef VISION_MSGS__MSG__DETAIL__DETECTION2_D__STRUCT_HPP_
#define VISION_MSGS__MSG__DETAIL__DETECTION2_D__STRUCT_HPP_

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
// Member 'results'
#include "vision_msgs/msg/detail/object_hypothesis_with_pose__struct.hpp"
// Member 'bbox'
#include "vision_msgs/msg/detail/bounding_box2_d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__vision_msgs__msg__Detection2D __attribute__((deprecated))
#else
# define DEPRECATED__vision_msgs__msg__Detection2D __declspec(deprecated)
#endif

namespace vision_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Detection2D_
{
  using Type = Detection2D_<ContainerAllocator>;

  explicit Detection2D_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    bbox(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
    }
  }

  explicit Detection2D_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    bbox(_alloc, _init),
    id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _results_type =
    std::vector<vision_msgs::msg::ObjectHypothesisWithPose_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<vision_msgs::msg::ObjectHypothesisWithPose_<ContainerAllocator>>>;
  _results_type results;
  using _bbox_type =
    vision_msgs::msg::BoundingBox2D_<ContainerAllocator>;
  _bbox_type bbox;
  using _id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _id_type id;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__results(
    const std::vector<vision_msgs::msg::ObjectHypothesisWithPose_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<vision_msgs::msg::ObjectHypothesisWithPose_<ContainerAllocator>>> & _arg)
  {
    this->results = _arg;
    return *this;
  }
  Type & set__bbox(
    const vision_msgs::msg::BoundingBox2D_<ContainerAllocator> & _arg)
  {
    this->bbox = _arg;
    return *this;
  }
  Type & set__id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    vision_msgs::msg::Detection2D_<ContainerAllocator> *;
  using ConstRawPtr =
    const vision_msgs::msg::Detection2D_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<vision_msgs::msg::Detection2D_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<vision_msgs::msg::Detection2D_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      vision_msgs::msg::Detection2D_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<vision_msgs::msg::Detection2D_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      vision_msgs::msg::Detection2D_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<vision_msgs::msg::Detection2D_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<vision_msgs::msg::Detection2D_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<vision_msgs::msg::Detection2D_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__vision_msgs__msg__Detection2D
    std::shared_ptr<vision_msgs::msg::Detection2D_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__vision_msgs__msg__Detection2D
    std::shared_ptr<vision_msgs::msg::Detection2D_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Detection2D_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->results != other.results) {
      return false;
    }
    if (this->bbox != other.bbox) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    return true;
  }
  bool operator!=(const Detection2D_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Detection2D_

// alias to use template instance with default allocator
using Detection2D =
  vision_msgs::msg::Detection2D_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace vision_msgs

#endif  // VISION_MSGS__MSG__DETAIL__DETECTION2_D__STRUCT_HPP_
