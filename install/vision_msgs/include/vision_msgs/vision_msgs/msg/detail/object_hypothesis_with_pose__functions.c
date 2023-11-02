// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from vision_msgs:msg/ObjectHypothesisWithPose.idl
// generated code does not contain a copyright notice
#include "vision_msgs/msg/detail/object_hypothesis_with_pose__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `hypothesis`
#include "vision_msgs/msg/detail/object_hypothesis__functions.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose_with_covariance__functions.h"

bool
vision_msgs__msg__ObjectHypothesisWithPose__init(vision_msgs__msg__ObjectHypothesisWithPose * msg)
{
  if (!msg) {
    return false;
  }
  // hypothesis
  if (!vision_msgs__msg__ObjectHypothesis__init(&msg->hypothesis)) {
    vision_msgs__msg__ObjectHypothesisWithPose__fini(msg);
    return false;
  }
  // pose
  if (!geometry_msgs__msg__PoseWithCovariance__init(&msg->pose)) {
    vision_msgs__msg__ObjectHypothesisWithPose__fini(msg);
    return false;
  }
  return true;
}

void
vision_msgs__msg__ObjectHypothesisWithPose__fini(vision_msgs__msg__ObjectHypothesisWithPose * msg)
{
  if (!msg) {
    return;
  }
  // hypothesis
  vision_msgs__msg__ObjectHypothesis__fini(&msg->hypothesis);
  // pose
  geometry_msgs__msg__PoseWithCovariance__fini(&msg->pose);
}

bool
vision_msgs__msg__ObjectHypothesisWithPose__are_equal(const vision_msgs__msg__ObjectHypothesisWithPose * lhs, const vision_msgs__msg__ObjectHypothesisWithPose * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // hypothesis
  if (!vision_msgs__msg__ObjectHypothesis__are_equal(
      &(lhs->hypothesis), &(rhs->hypothesis)))
  {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__PoseWithCovariance__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  return true;
}

bool
vision_msgs__msg__ObjectHypothesisWithPose__copy(
  const vision_msgs__msg__ObjectHypothesisWithPose * input,
  vision_msgs__msg__ObjectHypothesisWithPose * output)
{
  if (!input || !output) {
    return false;
  }
  // hypothesis
  if (!vision_msgs__msg__ObjectHypothesis__copy(
      &(input->hypothesis), &(output->hypothesis)))
  {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__PoseWithCovariance__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  return true;
}

vision_msgs__msg__ObjectHypothesisWithPose *
vision_msgs__msg__ObjectHypothesisWithPose__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vision_msgs__msg__ObjectHypothesisWithPose * msg = (vision_msgs__msg__ObjectHypothesisWithPose *)allocator.allocate(sizeof(vision_msgs__msg__ObjectHypothesisWithPose), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(vision_msgs__msg__ObjectHypothesisWithPose));
  bool success = vision_msgs__msg__ObjectHypothesisWithPose__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
vision_msgs__msg__ObjectHypothesisWithPose__destroy(vision_msgs__msg__ObjectHypothesisWithPose * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    vision_msgs__msg__ObjectHypothesisWithPose__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
vision_msgs__msg__ObjectHypothesisWithPose__Sequence__init(vision_msgs__msg__ObjectHypothesisWithPose__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vision_msgs__msg__ObjectHypothesisWithPose * data = NULL;

  if (size) {
    data = (vision_msgs__msg__ObjectHypothesisWithPose *)allocator.zero_allocate(size, sizeof(vision_msgs__msg__ObjectHypothesisWithPose), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = vision_msgs__msg__ObjectHypothesisWithPose__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        vision_msgs__msg__ObjectHypothesisWithPose__fini(&data[i - 1]);
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
vision_msgs__msg__ObjectHypothesisWithPose__Sequence__fini(vision_msgs__msg__ObjectHypothesisWithPose__Sequence * array)
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
      vision_msgs__msg__ObjectHypothesisWithPose__fini(&array->data[i]);
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

vision_msgs__msg__ObjectHypothesisWithPose__Sequence *
vision_msgs__msg__ObjectHypothesisWithPose__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vision_msgs__msg__ObjectHypothesisWithPose__Sequence * array = (vision_msgs__msg__ObjectHypothesisWithPose__Sequence *)allocator.allocate(sizeof(vision_msgs__msg__ObjectHypothesisWithPose__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = vision_msgs__msg__ObjectHypothesisWithPose__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
vision_msgs__msg__ObjectHypothesisWithPose__Sequence__destroy(vision_msgs__msg__ObjectHypothesisWithPose__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    vision_msgs__msg__ObjectHypothesisWithPose__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
vision_msgs__msg__ObjectHypothesisWithPose__Sequence__are_equal(const vision_msgs__msg__ObjectHypothesisWithPose__Sequence * lhs, const vision_msgs__msg__ObjectHypothesisWithPose__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!vision_msgs__msg__ObjectHypothesisWithPose__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
vision_msgs__msg__ObjectHypothesisWithPose__Sequence__copy(
  const vision_msgs__msg__ObjectHypothesisWithPose__Sequence * input,
  vision_msgs__msg__ObjectHypothesisWithPose__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(vision_msgs__msg__ObjectHypothesisWithPose);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    vision_msgs__msg__ObjectHypothesisWithPose * data =
      (vision_msgs__msg__ObjectHypothesisWithPose *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!vision_msgs__msg__ObjectHypothesisWithPose__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          vision_msgs__msg__ObjectHypothesisWithPose__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!vision_msgs__msg__ObjectHypothesisWithPose__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
