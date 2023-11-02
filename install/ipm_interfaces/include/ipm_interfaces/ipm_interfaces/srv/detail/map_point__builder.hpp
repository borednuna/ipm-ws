// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ipm_interfaces:srv/MapPoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ipm_interfaces/srv/map_point.hpp"


#ifndef IPM_INTERFACES__SRV__DETAIL__MAP_POINT__BUILDER_HPP_
#define IPM_INTERFACES__SRV__DETAIL__MAP_POINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ipm_interfaces/srv/detail/map_point__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ipm_interfaces
{

namespace srv
{

namespace builder
{

class Init_MapPoint_Request_output_frame_id
{
public:
  explicit Init_MapPoint_Request_output_frame_id(::ipm_interfaces::srv::MapPoint_Request & msg)
  : msg_(msg)
  {}
  ::ipm_interfaces::srv::MapPoint_Request output_frame_id(::ipm_interfaces::srv::MapPoint_Request::_output_frame_id_type arg)
  {
    msg_.output_frame_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ipm_interfaces::srv::MapPoint_Request msg_;
};

class Init_MapPoint_Request_plane_frame_id
{
public:
  explicit Init_MapPoint_Request_plane_frame_id(::ipm_interfaces::srv::MapPoint_Request & msg)
  : msg_(msg)
  {}
  Init_MapPoint_Request_output_frame_id plane_frame_id(::ipm_interfaces::srv::MapPoint_Request::_plane_frame_id_type arg)
  {
    msg_.plane_frame_id = std::move(arg);
    return Init_MapPoint_Request_output_frame_id(msg_);
  }

private:
  ::ipm_interfaces::srv::MapPoint_Request msg_;
};

class Init_MapPoint_Request_time
{
public:
  explicit Init_MapPoint_Request_time(::ipm_interfaces::srv::MapPoint_Request & msg)
  : msg_(msg)
  {}
  Init_MapPoint_Request_plane_frame_id time(::ipm_interfaces::srv::MapPoint_Request::_time_type arg)
  {
    msg_.time = std::move(arg);
    return Init_MapPoint_Request_plane_frame_id(msg_);
  }

private:
  ::ipm_interfaces::srv::MapPoint_Request msg_;
};

class Init_MapPoint_Request_point
{
public:
  explicit Init_MapPoint_Request_point(::ipm_interfaces::srv::MapPoint_Request & msg)
  : msg_(msg)
  {}
  Init_MapPoint_Request_time point(::ipm_interfaces::srv::MapPoint_Request::_point_type arg)
  {
    msg_.point = std::move(arg);
    return Init_MapPoint_Request_time(msg_);
  }

private:
  ::ipm_interfaces::srv::MapPoint_Request msg_;
};

class Init_MapPoint_Request_plane
{
public:
  Init_MapPoint_Request_plane()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MapPoint_Request_point plane(::ipm_interfaces::srv::MapPoint_Request::_plane_type arg)
  {
    msg_.plane = std::move(arg);
    return Init_MapPoint_Request_point(msg_);
  }

private:
  ::ipm_interfaces::srv::MapPoint_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ipm_interfaces::srv::MapPoint_Request>()
{
  return ipm_interfaces::srv::builder::Init_MapPoint_Request_plane();
}

}  // namespace ipm_interfaces


namespace ipm_interfaces
{

namespace srv
{

namespace builder
{

class Init_MapPoint_Response_result
{
public:
  explicit Init_MapPoint_Response_result(::ipm_interfaces::srv::MapPoint_Response & msg)
  : msg_(msg)
  {}
  ::ipm_interfaces::srv::MapPoint_Response result(::ipm_interfaces::srv::MapPoint_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ipm_interfaces::srv::MapPoint_Response msg_;
};

class Init_MapPoint_Response_point
{
public:
  Init_MapPoint_Response_point()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MapPoint_Response_result point(::ipm_interfaces::srv::MapPoint_Response::_point_type arg)
  {
    msg_.point = std::move(arg);
    return Init_MapPoint_Response_result(msg_);
  }

private:
  ::ipm_interfaces::srv::MapPoint_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ipm_interfaces::srv::MapPoint_Response>()
{
  return ipm_interfaces::srv::builder::Init_MapPoint_Response_point();
}

}  // namespace ipm_interfaces


namespace ipm_interfaces
{

namespace srv
{

namespace builder
{

class Init_MapPoint_Event_response
{
public:
  explicit Init_MapPoint_Event_response(::ipm_interfaces::srv::MapPoint_Event & msg)
  : msg_(msg)
  {}
  ::ipm_interfaces::srv::MapPoint_Event response(::ipm_interfaces::srv::MapPoint_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ipm_interfaces::srv::MapPoint_Event msg_;
};

class Init_MapPoint_Event_request
{
public:
  explicit Init_MapPoint_Event_request(::ipm_interfaces::srv::MapPoint_Event & msg)
  : msg_(msg)
  {}
  Init_MapPoint_Event_response request(::ipm_interfaces::srv::MapPoint_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_MapPoint_Event_response(msg_);
  }

private:
  ::ipm_interfaces::srv::MapPoint_Event msg_;
};

class Init_MapPoint_Event_info
{
public:
  Init_MapPoint_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MapPoint_Event_request info(::ipm_interfaces::srv::MapPoint_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_MapPoint_Event_request(msg_);
  }

private:
  ::ipm_interfaces::srv::MapPoint_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ipm_interfaces::srv::MapPoint_Event>()
{
  return ipm_interfaces::srv::builder::Init_MapPoint_Event_info();
}

}  // namespace ipm_interfaces

#endif  // IPM_INTERFACES__SRV__DETAIL__MAP_POINT__BUILDER_HPP_
