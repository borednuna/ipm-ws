// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from biped_interfaces:msg/Phase.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "biped_interfaces/msg/phase.h"


#ifndef BIPED_INTERFACES__MSG__DETAIL__PHASE__STRUCT_H_
#define BIPED_INTERFACES__MSG__DETAIL__PHASE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'LEFT_STANCE'.
enum
{
  biped_interfaces__msg__Phase__LEFT_STANCE = 0l
};

/// Constant 'RIGHT_SWING'.
enum
{
  biped_interfaces__msg__Phase__RIGHT_SWING = 0l
};

/// Constant 'RIGHT_STANCE'.
enum
{
  biped_interfaces__msg__Phase__RIGHT_STANCE = 1l
};

/// Constant 'LEFT_SWING'.
enum
{
  biped_interfaces__msg__Phase__LEFT_SWING = 1l
};

/// Constant 'DOUBLE_STANCE'.
enum
{
  biped_interfaces__msg__Phase__DOUBLE_STANCE = 2l
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/Phase in the package biped_interfaces.
typedef struct biped_interfaces__msg__Phase
{
  std_msgs__msg__Header header;
  int32_t phase;
} biped_interfaces__msg__Phase;

// Struct for a sequence of biped_interfaces__msg__Phase.
typedef struct biped_interfaces__msg__Phase__Sequence
{
  biped_interfaces__msg__Phase * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} biped_interfaces__msg__Phase__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BIPED_INTERFACES__MSG__DETAIL__PHASE__STRUCT_H_
