// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from biped_interfaces:msg/SolePoses.idl
// generated code does not contain a copyright notice
#include "biped_interfaces/msg/detail/sole_poses__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `l_sole`
// Member `r_sole`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
biped_interfaces__msg__SolePoses__init(biped_interfaces__msg__SolePoses * msg)
{
  if (!msg) {
    return false;
  }
  // l_sole
  if (!geometry_msgs__msg__Pose__init(&msg->l_sole)) {
    biped_interfaces__msg__SolePoses__fini(msg);
    return false;
  }
  // r_sole
  if (!geometry_msgs__msg__Pose__init(&msg->r_sole)) {
    biped_interfaces__msg__SolePoses__fini(msg);
    return false;
  }
  return true;
}

void
biped_interfaces__msg__SolePoses__fini(biped_interfaces__msg__SolePoses * msg)
{
  if (!msg) {
    return;
  }
  // l_sole
  geometry_msgs__msg__Pose__fini(&msg->l_sole);
  // r_sole
  geometry_msgs__msg__Pose__fini(&msg->r_sole);
}

bool
biped_interfaces__msg__SolePoses__are_equal(const biped_interfaces__msg__SolePoses * lhs, const biped_interfaces__msg__SolePoses * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // l_sole
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->l_sole), &(rhs->l_sole)))
  {
    return false;
  }
  // r_sole
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->r_sole), &(rhs->r_sole)))
  {
    return false;
  }
  return true;
}

bool
biped_interfaces__msg__SolePoses__copy(
  const biped_interfaces__msg__SolePoses * input,
  biped_interfaces__msg__SolePoses * output)
{
  if (!input || !output) {
    return false;
  }
  // l_sole
  if (!geometry_msgs__msg__Pose__copy(
      &(input->l_sole), &(output->l_sole)))
  {
    return false;
  }
  // r_sole
  if (!geometry_msgs__msg__Pose__copy(
      &(input->r_sole), &(output->r_sole)))
  {
    return false;
  }
  return true;
}

biped_interfaces__msg__SolePoses *
biped_interfaces__msg__SolePoses__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  biped_interfaces__msg__SolePoses * msg = (biped_interfaces__msg__SolePoses *)allocator.allocate(sizeof(biped_interfaces__msg__SolePoses), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(biped_interfaces__msg__SolePoses));
  bool success = biped_interfaces__msg__SolePoses__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
biped_interfaces__msg__SolePoses__destroy(biped_interfaces__msg__SolePoses * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    biped_interfaces__msg__SolePoses__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
biped_interfaces__msg__SolePoses__Sequence__init(biped_interfaces__msg__SolePoses__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  biped_interfaces__msg__SolePoses * data = NULL;

  if (size) {
    data = (biped_interfaces__msg__SolePoses *)allocator.zero_allocate(size, sizeof(biped_interfaces__msg__SolePoses), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = biped_interfaces__msg__SolePoses__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        biped_interfaces__msg__SolePoses__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
biped_interfaces__msg__SolePoses__Sequence__fini(biped_interfaces__msg__SolePoses__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      biped_interfaces__msg__SolePoses__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

biped_interfaces__msg__SolePoses__Sequence *
biped_interfaces__msg__SolePoses__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  biped_interfaces__msg__SolePoses__Sequence * array = (biped_interfaces__msg__SolePoses__Sequence *)allocator.allocate(sizeof(biped_interfaces__msg__SolePoses__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = biped_interfaces__msg__SolePoses__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
biped_interfaces__msg__SolePoses__Sequence__destroy(biped_interfaces__msg__SolePoses__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    biped_interfaces__msg__SolePoses__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
biped_interfaces__msg__SolePoses__Sequence__are_equal(const biped_interfaces__msg__SolePoses__Sequence * lhs, const biped_interfaces__msg__SolePoses__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!biped_interfaces__msg__SolePoses__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
biped_interfaces__msg__SolePoses__Sequence__copy(
  const biped_interfaces__msg__SolePoses__Sequence * input,
  biped_interfaces__msg__SolePoses__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(biped_interfaces__msg__SolePoses);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    biped_interfaces__msg__SolePoses * data =
      (biped_interfaces__msg__SolePoses *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!biped_interfaces__msg__SolePoses__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          biped_interfaces__msg__SolePoses__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!biped_interfaces__msg__SolePoses__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
