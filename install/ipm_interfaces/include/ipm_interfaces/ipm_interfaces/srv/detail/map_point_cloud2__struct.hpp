// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ipm_interfaces:srv/MapPointCloud2.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ipm_interfaces/srv/map_point_cloud2.hpp"


#ifndef IPM_INTERFACES__SRV__DETAIL__MAP_POINT_CLOUD2__STRUCT_HPP_
#define IPM_INTERFACES__SRV__DETAIL__MAP_POINT_CLOUD2__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'plane'
#include "shape_msgs/msg/detail/plane__struct.hpp"
// Member 'points'
#include "sensor_msgs/msg/detail/point_cloud2__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ipm_interfaces__srv__MapPointCloud2_Request __attribute__((deprecated))
#else
# define DEPRECATED__ipm_interfaces__srv__MapPointCloud2_Request __declspec(deprecated)
#endif

namespace ipm_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MapPointCloud2_Request_
{
  using Type = MapPointCloud2_Request_<ContainerAllocator>;

  explicit MapPointCloud2_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : plane(_init),
    points(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->plane_frame_id = "";
      this->output_frame_id = "";
    }
  }

  explicit MapPointCloud2_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : plane(_alloc, _init),
    points(_alloc, _init),
    plane_frame_id(_alloc),
    output_frame_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->plane_frame_id = "";
      this->output_frame_id = "";
    }
  }

  // field types and members
  using _plane_type =
    shape_msgs::msg::Plane_<ContainerAllocator>;
  _plane_type plane;
  using _points_type =
    sensor_msgs::msg::PointCloud2_<ContainerAllocator>;
  _points_type points;
  using _plane_frame_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _plane_frame_id_type plane_frame_id;
  using _output_frame_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _output_frame_id_type output_frame_id;

  // setters for named parameter idiom
  Type & set__plane(
    const shape_msgs::msg::Plane_<ContainerAllocator> & _arg)
  {
    this->plane = _arg;
    return *this;
  }
  Type & set__points(
    const sensor_msgs::msg::PointCloud2_<ContainerAllocator> & _arg)
  {
    this->points = _arg;
    return *this;
  }
  Type & set__plane_frame_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->plane_frame_id = _arg;
    return *this;
  }
  Type & set__output_frame_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->output_frame_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ipm_interfaces::srv::MapPointCloud2_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const ipm_interfaces::srv::MapPointCloud2_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ipm_interfaces::srv::MapPointCloud2_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ipm_interfaces::srv::MapPointCloud2_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ipm_interfaces::srv::MapPointCloud2_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ipm_interfaces::srv::MapPointCloud2_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ipm_interfaces::srv::MapPointCloud2_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ipm_interfaces::srv::MapPointCloud2_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ipm_interfaces::srv::MapPointCloud2_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ipm_interfaces::srv::MapPointCloud2_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ipm_interfaces__srv__MapPointCloud2_Request
    std::shared_ptr<ipm_interfaces::srv::MapPointCloud2_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ipm_interfaces__srv__MapPointCloud2_Request
    std::shared_ptr<ipm_interfaces::srv::MapPointCloud2_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MapPointCloud2_Request_ & other) const
  {
    if (this->plane != other.plane) {
      return false;
    }
    if (this->points != other.points) {
      return false;
    }
    if (this->plane_frame_id != other.plane_frame_id) {
      return false;
    }
    if (this->output_frame_id != other.output_frame_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const MapPointCloud2_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MapPointCloud2_Request_

// alias to use template instance with default allocator
using MapPointCloud2_Request =
  ipm_interfaces::srv::MapPointCloud2_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ipm_interfaces


// Include directives for member types
// Member 'points'
// already included above
// #include "sensor_msgs/msg/detail/point_cloud2__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ipm_interfaces__srv__MapPointCloud2_Response __attribute__((deprecated))
#else
# define DEPRECATED__ipm_interfaces__srv__MapPointCloud2_Response __declspec(deprecated)
#endif

namespace ipm_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MapPointCloud2_Response_
{
  using Type = MapPointCloud2_Response_<ContainerAllocator>;

  explicit MapPointCloud2_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : points(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0;
    }
  }

  explicit MapPointCloud2_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : points(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0;
    }
  }

  // field types and members
  using _points_type =
    sensor_msgs::msg::PointCloud2_<ContainerAllocator>;
  _points_type points;
  using _result_type =
    uint8_t;
  _result_type result;

  // setters for named parameter idiom
  Type & set__points(
    const sensor_msgs::msg::PointCloud2_<ContainerAllocator> & _arg)
  {
    this->points = _arg;
    return *this;
  }
  Type & set__result(
    const uint8_t & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t RESULT_SUCCESS =
    0u;
  static constexpr uint8_t RESULT_NO_CAMERA_INFO =
    1u;
  static constexpr uint8_t RESULT_INVALID_PLANE =
    2u;

  // pointer types
  using RawPtr =
    ipm_interfaces::srv::MapPointCloud2_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const ipm_interfaces::srv::MapPointCloud2_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ipm_interfaces::srv::MapPointCloud2_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ipm_interfaces::srv::MapPointCloud2_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ipm_interfaces::srv::MapPointCloud2_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ipm_interfaces::srv::MapPointCloud2_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ipm_interfaces::srv::MapPointCloud2_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ipm_interfaces::srv::MapPointCloud2_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ipm_interfaces::srv::MapPointCloud2_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ipm_interfaces::srv::MapPointCloud2_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ipm_interfaces__srv__MapPointCloud2_Response
    std::shared_ptr<ipm_interfaces::srv::MapPointCloud2_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ipm_interfaces__srv__MapPointCloud2_Response
    std::shared_ptr<ipm_interfaces::srv::MapPointCloud2_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MapPointCloud2_Response_ & other) const
  {
    if (this->points != other.points) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const MapPointCloud2_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MapPointCloud2_Response_

// alias to use template instance with default allocator
using MapPointCloud2_Response =
  ipm_interfaces::srv::MapPointCloud2_Response_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MapPointCloud2_Response_<ContainerAllocator>::RESULT_SUCCESS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MapPointCloud2_Response_<ContainerAllocator>::RESULT_NO_CAMERA_INFO;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MapPointCloud2_Response_<ContainerAllocator>::RESULT_INVALID_PLANE;
#endif  // __cplusplus < 201703L

}  // namespace srv

}  // namespace ipm_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ipm_interfaces__srv__MapPointCloud2_Event __attribute__((deprecated))
#else
# define DEPRECATED__ipm_interfaces__srv__MapPointCloud2_Event __declspec(deprecated)
#endif

namespace ipm_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MapPointCloud2_Event_
{
  using Type = MapPointCloud2_Event_<ContainerAllocator>;

  explicit MapPointCloud2_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit MapPointCloud2_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<ipm_interfaces::srv::MapPointCloud2_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ipm_interfaces::srv::MapPointCloud2_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<ipm_interfaces::srv::MapPointCloud2_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ipm_interfaces::srv::MapPointCloud2_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<ipm_interfaces::srv::MapPointCloud2_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ipm_interfaces::srv::MapPointCloud2_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<ipm_interfaces::srv::MapPointCloud2_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ipm_interfaces::srv::MapPointCloud2_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ipm_interfaces::srv::MapPointCloud2_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const ipm_interfaces::srv::MapPointCloud2_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ipm_interfaces::srv::MapPointCloud2_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ipm_interfaces::srv::MapPointCloud2_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ipm_interfaces::srv::MapPointCloud2_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ipm_interfaces::srv::MapPointCloud2_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ipm_interfaces::srv::MapPointCloud2_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ipm_interfaces::srv::MapPointCloud2_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ipm_interfaces::srv::MapPointCloud2_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ipm_interfaces::srv::MapPointCloud2_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ipm_interfaces__srv__MapPointCloud2_Event
    std::shared_ptr<ipm_interfaces::srv::MapPointCloud2_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ipm_interfaces__srv__MapPointCloud2_Event
    std::shared_ptr<ipm_interfaces::srv::MapPointCloud2_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MapPointCloud2_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const MapPointCloud2_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MapPointCloud2_Event_

// alias to use template instance with default allocator
using MapPointCloud2_Event =
  ipm_interfaces::srv::MapPointCloud2_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ipm_interfaces

namespace ipm_interfaces
{

namespace srv
{

struct MapPointCloud2
{
  using Request = ipm_interfaces::srv::MapPointCloud2_Request;
  using Response = ipm_interfaces::srv::MapPointCloud2_Response;
  using Event = ipm_interfaces::srv::MapPointCloud2_Event;
};

}  // namespace srv

}  // namespace ipm_interfaces

#endif  // IPM_INTERFACES__SRV__DETAIL__MAP_POINT_CLOUD2__STRUCT_HPP_
