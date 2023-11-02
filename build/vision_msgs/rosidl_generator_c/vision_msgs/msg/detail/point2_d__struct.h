// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from vision_msgs:msg/Point2D.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "vision_msgs/msg/point2_d.h"


#ifndef VISION_MSGS__MSG__DETAIL__POINT2_D__STRUCT_H_
#define VISION_MSGS__MSG__DETAIL__POINT2_D__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/Point2D in the package vision_msgs.
/**
  * Represents a 2D point in pixel coordinates.
  * XY matches the sensor_msgs/Image convention: X is positive right and Y is positive down.
 */
typedef struct vision_msgs__msg__Point2D
{
  double x;
  double y;
} vision_msgs__msg__Point2D;

// Struct for a sequence of vision_msgs__msg__Point2D.
typedef struct vision_msgs__msg__Point2D__Sequence
{
  vision_msgs__msg__Point2D * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vision_msgs__msg__Point2D__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VISION_MSGS__MSG__DETAIL__POINT2_D__STRUCT_H_
