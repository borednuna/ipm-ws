// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from vision_msgs:msg/Detection3D.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "vision_msgs/msg/detection3_d.h"


#ifndef VISION_MSGS__MSG__DETAIL__DETECTION3_D__STRUCT_H_
#define VISION_MSGS__MSG__DETAIL__DETECTION3_D__STRUCT_H_

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
// Member 'results'
#include "vision_msgs/msg/detail/object_hypothesis_with_pose__struct.h"
// Member 'bbox'
#include "vision_msgs/msg/detail/bounding_box3_d__struct.h"
// Member 'id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Detection3D in the package vision_msgs.
/**
  * Defines a 3D detection result.
  *
  * This extends a basic 3D classification by including the pose of the
  * detected object.
 */
typedef struct vision_msgs__msg__Detection3D
{
  std_msgs__msg__Header header;
  /// Class probabilities. Does not have to include hypotheses for all possible
  ///   object ids, the scores for any ids not listed are assumed to be 0.
  vision_msgs__msg__ObjectHypothesisWithPose__Sequence results;
  /// 3D bounding box surrounding the object.
  vision_msgs__msg__BoundingBox3D bbox;
  /// ID used for consistency across multiple detection messages. Detections
  /// of the same object in different detection messages should have the same id.
  /// This field may be empty.
  rosidl_runtime_c__String id;
} vision_msgs__msg__Detection3D;

// Struct for a sequence of vision_msgs__msg__Detection3D.
typedef struct vision_msgs__msg__Detection3D__Sequence
{
  vision_msgs__msg__Detection3D * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vision_msgs__msg__Detection3D__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VISION_MSGS__MSG__DETAIL__DETECTION3_D__STRUCT_H_
