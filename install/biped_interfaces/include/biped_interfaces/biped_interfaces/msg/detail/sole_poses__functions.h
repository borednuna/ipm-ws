// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from biped_interfaces:msg/SolePoses.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "biped_interfaces/msg/sole_poses.h"


#ifndef BIPED_INTERFACES__MSG__DETAIL__SOLE_POSES__FUNCTIONS_H_
#define BIPED_INTERFACES__MSG__DETAIL__SOLE_POSES__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "biped_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "biped_interfaces/msg/detail/sole_poses__struct.h"

/// Initialize msg/SolePoses message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * biped_interfaces__msg__SolePoses
 * )) before or use
 * biped_interfaces__msg__SolePoses__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_biped_interfaces
bool
biped_interfaces__msg__SolePoses__init(biped_interfaces__msg__SolePoses * msg);

/// Finalize msg/SolePoses message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_biped_interfaces
void
biped_interfaces__msg__SolePoses__fini(biped_interfaces__msg__SolePoses * msg);

/// Create msg/SolePoses message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * biped_interfaces__msg__SolePoses__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_biped_interfaces
biped_interfaces__msg__SolePoses *
biped_interfaces__msg__SolePoses__create();

/// Destroy msg/SolePoses message.
/**
 * It calls
 * biped_interfaces__msg__SolePoses__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_biped_interfaces
void
biped_interfaces__msg__SolePoses__destroy(biped_interfaces__msg__SolePoses * msg);

/// Check for msg/SolePoses message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_biped_interfaces
bool
biped_interfaces__msg__SolePoses__are_equal(const biped_interfaces__msg__SolePoses * lhs, const biped_interfaces__msg__SolePoses * rhs);

/// Copy a msg/SolePoses message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_biped_interfaces
bool
biped_interfaces__msg__SolePoses__copy(
  const biped_interfaces__msg__SolePoses * input,
  biped_interfaces__msg__SolePoses * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_biped_interfaces
const rosidl_type_hash_t *
biped_interfaces__msg__SolePoses__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_biped_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
biped_interfaces__msg__SolePoses__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_biped_interfaces
const rosidl_runtime_c__type_description__TypeSource *
biped_interfaces__msg__SolePoses__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_biped_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
biped_interfaces__msg__SolePoses__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/SolePoses messages.
/**
 * It allocates the memory for the number of elements and calls
 * biped_interfaces__msg__SolePoses__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_biped_interfaces
bool
biped_interfaces__msg__SolePoses__Sequence__init(biped_interfaces__msg__SolePoses__Sequence * array, size_t size);

/// Finalize array of msg/SolePoses messages.
/**
 * It calls
 * biped_interfaces__msg__SolePoses__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_biped_interfaces
void
biped_interfaces__msg__SolePoses__Sequence__fini(biped_interfaces__msg__SolePoses__Sequence * array);

/// Create array of msg/SolePoses messages.
/**
 * It allocates the memory for the array and calls
 * biped_interfaces__msg__SolePoses__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_biped_interfaces
biped_interfaces__msg__SolePoses__Sequence *
biped_interfaces__msg__SolePoses__Sequence__create(size_t size);

/// Destroy array of msg/SolePoses messages.
/**
 * It calls
 * biped_interfaces__msg__SolePoses__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_biped_interfaces
void
biped_interfaces__msg__SolePoses__Sequence__destroy(biped_interfaces__msg__SolePoses__Sequence * array);

/// Check for msg/SolePoses message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_biped_interfaces
bool
biped_interfaces__msg__SolePoses__Sequence__are_equal(const biped_interfaces__msg__SolePoses__Sequence * lhs, const biped_interfaces__msg__SolePoses__Sequence * rhs);

/// Copy an array of msg/SolePoses messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_biped_interfaces
bool
biped_interfaces__msg__SolePoses__Sequence__copy(
  const biped_interfaces__msg__SolePoses__Sequence * input,
  biped_interfaces__msg__SolePoses__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // BIPED_INTERFACES__MSG__DETAIL__SOLE_POSES__FUNCTIONS_H_
