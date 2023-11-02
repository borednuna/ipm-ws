// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from vision_msgs:msg/Detection3DArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "vision_msgs/msg/detection3_d_array.h"


#ifndef VISION_MSGS__MSG__DETAIL__DETECTION3_D_ARRAY__STRUCT_H_
#define VISION_MSGS__MSG__DETAIL__DETECTION3_D_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'detections'
#include "vision_msgs/msg/detail/detection3_d__struct.h"

/// Struct defined in msg/Detection3DArray in the package vision_msgs.
/**
  * A list of 3D detections, for a multi-object 3D detector.
 */
typedef struct vision_msgs__msg__Detection3DArray
{
  std_msgs__msg__Header header;
  /// A list of the detected proposals. A multi-proposal detector might generate
  ///   this list with many candidate detections generated from a single input.
  vision_msgs__msg__Detection3D__Sequence detections;
} vision_msgs__msg__Detection3DArray;

// Struct for a sequence of vision_msgs__msg__Detection3DArray.
typedef struct vision_msgs__msg__Detection3DArray__Sequence
{
  vision_msgs__msg__Detection3DArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vision_msgs__msg__Detection3DArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VISION_MSGS__MSG__DETAIL__DETECTION3_D_ARRAY__STRUCT_H_
