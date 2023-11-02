// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ipm_interfaces:srv/MapPoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ipm_interfaces/srv/map_point.h"


#ifndef IPM_INTERFACES__SRV__DETAIL__MAP_POINT__STRUCT_H_
#define IPM_INTERFACES__SRV__DETAIL__MAP_POINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'plane'
#include "shape_msgs/msg/detail/plane__struct.h"
// Member 'point'
#include "vision_msgs/msg/detail/point2_d__struct.h"
// Member 'time'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'plane_frame_id'
// Member 'output_frame_id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/MapPoint in the package ipm_interfaces.
typedef struct ipm_interfaces__srv__MapPoint_Request
{
  shape_msgs__msg__Plane plane;
  vision_msgs__msg__Point2D point;
  builtin_interfaces__msg__Time time;
  rosidl_runtime_c__String plane_frame_id;
  rosidl_runtime_c__String output_frame_id;
} ipm_interfaces__srv__MapPoint_Request;

// Struct for a sequence of ipm_interfaces__srv__MapPoint_Request.
typedef struct ipm_interfaces__srv__MapPoint_Request__Sequence
{
  ipm_interfaces__srv__MapPoint_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ipm_interfaces__srv__MapPoint_Request__Sequence;

// Constants defined in the message

/// Constant 'RESULT_SUCCESS'.
enum
{
  ipm_interfaces__srv__MapPoint_Response__RESULT_SUCCESS = 0
};

/// Constant 'RESULT_NO_CAMERA_INFO'.
enum
{
  ipm_interfaces__srv__MapPoint_Response__RESULT_NO_CAMERA_INFO = 1
};

/// Constant 'RESULT_INVALID_PLANE'.
enum
{
  ipm_interfaces__srv__MapPoint_Response__RESULT_INVALID_PLANE = 2
};

/// Constant 'RESULT_NO_INTERSECTION'.
enum
{
  ipm_interfaces__srv__MapPoint_Response__RESULT_NO_INTERSECTION = 3
};

// Include directives for member types
// Member 'point'
#include "geometry_msgs/msg/detail/point_stamped__struct.h"

/// Struct defined in srv/MapPoint in the package ipm_interfaces.
typedef struct ipm_interfaces__srv__MapPoint_Response
{
  /// Returned point is only valid if result equals RESULT_SUCCESS
  geometry_msgs__msg__PointStamped point;
  uint8_t result;
} ipm_interfaces__srv__MapPoint_Response;

// Struct for a sequence of ipm_interfaces__srv__MapPoint_Response.
typedef struct ipm_interfaces__srv__MapPoint_Response__Sequence
{
  ipm_interfaces__srv__MapPoint_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ipm_interfaces__srv__MapPoint_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  ipm_interfaces__srv__MapPoint_Event__request__MAX_SIZE = 1
};
// response
enum
{
  ipm_interfaces__srv__MapPoint_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/MapPoint in the package ipm_interfaces.
typedef struct ipm_interfaces__srv__MapPoint_Event
{
  service_msgs__msg__ServiceEventInfo info;
  ipm_interfaces__srv__MapPoint_Request__Sequence request;
  ipm_interfaces__srv__MapPoint_Response__Sequence response;
} ipm_interfaces__srv__MapPoint_Event;

// Struct for a sequence of ipm_interfaces__srv__MapPoint_Event.
typedef struct ipm_interfaces__srv__MapPoint_Event__Sequence
{
  ipm_interfaces__srv__MapPoint_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ipm_interfaces__srv__MapPoint_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IPM_INTERFACES__SRV__DETAIL__MAP_POINT__STRUCT_H_
