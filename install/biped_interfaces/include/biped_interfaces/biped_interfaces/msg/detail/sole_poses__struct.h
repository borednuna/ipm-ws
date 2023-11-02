// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from biped_interfaces:msg/SolePoses.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "biped_interfaces/msg/sole_poses.h"


#ifndef BIPED_INTERFACES__MSG__DETAIL__SOLE_POSES__STRUCT_H_
#define BIPED_INTERFACES__MSG__DETAIL__SOLE_POSES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'l_sole'
// Member 'r_sole'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in msg/SolePoses in the package biped_interfaces.
/**
  * A message containing information about the poses of the robot's (l|r)_sole frames in
  * the torso frame. This message is useful for passing to inverse kinematics.
 */
typedef struct biped_interfaces__msg__SolePoses
{
  geometry_msgs__msg__Pose l_sole;
  geometry_msgs__msg__Pose r_sole;
} biped_interfaces__msg__SolePoses;

// Struct for a sequence of biped_interfaces__msg__SolePoses.
typedef struct biped_interfaces__msg__SolePoses__Sequence
{
  biped_interfaces__msg__SolePoses * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} biped_interfaces__msg__SolePoses__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BIPED_INTERFACES__MSG__DETAIL__SOLE_POSES__STRUCT_H_
