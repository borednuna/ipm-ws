// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ipm_interfaces:srv/MapPoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ipm_interfaces/srv/map_point.hpp"


#ifndef IPM_INTERFACES__SRV__DETAIL__MAP_POINT__TRAITS_HPP_
#define IPM_INTERFACES__SRV__DETAIL__MAP_POINT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ipm_interfaces/srv/detail/map_point__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'plane'
#include "shape_msgs/msg/detail/plane__traits.hpp"
// Member 'point'
#include "vision_msgs/msg/detail/point2_d__traits.hpp"
// Member 'time'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace ipm_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const MapPoint_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: plane
  {
    out << "plane: ";
    to_flow_style_yaml(msg.plane, out);
    out << ", ";
  }

  // member: point
  {
    out << "point: ";
    to_flow_style_yaml(msg.point, out);
    out << ", ";
  }

  // member: time
  {
    out << "time: ";
    to_flow_style_yaml(msg.time, out);
    out << ", ";
  }

  // member: plane_frame_id
  {
    out << "plane_frame_id: ";
    rosidl_generator_traits::value_to_yaml(msg.plane_frame_id, out);
    out << ", ";
  }

  // member: output_frame_id
  {
    out << "output_frame_id: ";
    rosidl_generator_traits::value_to_yaml(msg.output_frame_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MapPoint_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: plane
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "plane:\n";
    to_block_style_yaml(msg.plane, out, indentation + 2);
  }

  // member: point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "point:\n";
    to_block_style_yaml(msg.point, out, indentation + 2);
  }

  // member: time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time:\n";
    to_block_style_yaml(msg.time, out, indentation + 2);
  }

  // member: plane_frame_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "plane_frame_id: ";
    rosidl_generator_traits::value_to_yaml(msg.plane_frame_id, out);
    out << "\n";
  }

  // member: output_frame_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "output_frame_id: ";
    rosidl_generator_traits::value_to_yaml(msg.output_frame_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MapPoint_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace ipm_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use ipm_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ipm_interfaces::srv::MapPoint_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ipm_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ipm_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const ipm_interfaces::srv::MapPoint_Request & msg)
{
  return ipm_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ipm_interfaces::srv::MapPoint_Request>()
{
  return "ipm_interfaces::srv::MapPoint_Request";
}

template<>
inline const char * name<ipm_interfaces::srv::MapPoint_Request>()
{
  return "ipm_interfaces/srv/MapPoint_Request";
}

template<>
struct has_fixed_size<ipm_interfaces::srv::MapPoint_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ipm_interfaces::srv::MapPoint_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ipm_interfaces::srv::MapPoint_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'point'
#include "geometry_msgs/msg/detail/point_stamped__traits.hpp"

namespace ipm_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const MapPoint_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: point
  {
    out << "point: ";
    to_flow_style_yaml(msg.point, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MapPoint_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "point:\n";
    to_block_style_yaml(msg.point, out, indentation + 2);
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MapPoint_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace ipm_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use ipm_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ipm_interfaces::srv::MapPoint_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ipm_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ipm_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const ipm_interfaces::srv::MapPoint_Response & msg)
{
  return ipm_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ipm_interfaces::srv::MapPoint_Response>()
{
  return "ipm_interfaces::srv::MapPoint_Response";
}

template<>
inline const char * name<ipm_interfaces::srv::MapPoint_Response>()
{
  return "ipm_interfaces/srv/MapPoint_Response";
}

template<>
struct has_fixed_size<ipm_interfaces::srv::MapPoint_Response>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::PointStamped>::value> {};

template<>
struct has_bounded_size<ipm_interfaces::srv::MapPoint_Response>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::PointStamped>::value> {};

template<>
struct is_message<ipm_interfaces::srv::MapPoint_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace ipm_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const MapPoint_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MapPoint_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MapPoint_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace ipm_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use ipm_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ipm_interfaces::srv::MapPoint_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  ipm_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ipm_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const ipm_interfaces::srv::MapPoint_Event & msg)
{
  return ipm_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ipm_interfaces::srv::MapPoint_Event>()
{
  return "ipm_interfaces::srv::MapPoint_Event";
}

template<>
inline const char * name<ipm_interfaces::srv::MapPoint_Event>()
{
  return "ipm_interfaces/srv/MapPoint_Event";
}

template<>
struct has_fixed_size<ipm_interfaces::srv::MapPoint_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ipm_interfaces::srv::MapPoint_Event>
  : std::integral_constant<bool, has_bounded_size<ipm_interfaces::srv::MapPoint_Request>::value && has_bounded_size<ipm_interfaces::srv::MapPoint_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<ipm_interfaces::srv::MapPoint_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ipm_interfaces::srv::MapPoint>()
{
  return "ipm_interfaces::srv::MapPoint";
}

template<>
inline const char * name<ipm_interfaces::srv::MapPoint>()
{
  return "ipm_interfaces/srv/MapPoint";
}

template<>
struct has_fixed_size<ipm_interfaces::srv::MapPoint>
  : std::integral_constant<
    bool,
    has_fixed_size<ipm_interfaces::srv::MapPoint_Request>::value &&
    has_fixed_size<ipm_interfaces::srv::MapPoint_Response>::value
  >
{
};

template<>
struct has_bounded_size<ipm_interfaces::srv::MapPoint>
  : std::integral_constant<
    bool,
    has_bounded_size<ipm_interfaces::srv::MapPoint_Request>::value &&
    has_bounded_size<ipm_interfaces::srv::MapPoint_Response>::value
  >
{
};

template<>
struct is_service<ipm_interfaces::srv::MapPoint>
  : std::true_type
{
};

template<>
struct is_service_request<ipm_interfaces::srv::MapPoint_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ipm_interfaces::srv::MapPoint_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // IPM_INTERFACES__SRV__DETAIL__MAP_POINT__TRAITS_HPP_
