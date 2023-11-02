// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from biped_interfaces:msg/Phase.idl
// generated code does not contain a copyright notice
#include "biped_interfaces/msg/detail/phase__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
biped_interfaces__msg__Phase__init(biped_interfaces__msg__Phase * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    biped_interfaces__msg__Phase__fini(msg);
    return false;
  }
  // phase
  return true;
}

void
biped_interfaces__msg__Phase__fini(biped_interfaces__msg__Phase * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // phase
}

bool
biped_interfaces__msg__Phase__are_equal(const biped_interfaces__msg__Phase * lhs, const biped_interfaces__msg__Phase * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // phase
  if (lhs->phase != rhs->phase) {
    return false;
  }
  return true;
}

bool
biped_interfaces__msg__Phase__copy(
  const biped_interfaces__msg__Phase * input,
  biped_interfaces__msg__Phase * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // phase
  output->phase = input->phase;
  return true;
}

biped_interfaces__msg__Phase *
biped_interfaces__msg__Phase__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  biped_interfaces__msg__Phase * msg = (biped_interfaces__msg__Phase *)allocator.allocate(sizeof(biped_interfaces__msg__Phase), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(biped_interfaces__msg__Phase));
  bool success = biped_interfaces__msg__Phase__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
biped_interfaces__msg__Phase__destroy(biped_interfaces__msg__Phase * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    biped_interfaces__msg__Phase__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
biped_interfaces__msg__Phase__Sequence__init(biped_interfaces__msg__Phase__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  biped_interfaces__msg__Phase * data = NULL;

  if (size) {
    data = (biped_interfaces__msg__Phase *)allocator.zero_allocate(size, sizeof(biped_interfaces__msg__Phase), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = biped_interfaces__msg__Phase__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        biped_interfaces__msg__Phase__fini(&data[i - 1]);
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
biped_interfaces__msg__Phase__Sequence__fini(biped_interfaces__msg__Phase__Sequence * array)
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
      biped_interfaces__msg__Phase__fini(&array->data[i]);
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

biped_interfaces__msg__Phase__Sequence *
biped_interfaces__msg__Phase__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  biped_interfaces__msg__Phase__Sequence * array = (biped_interfaces__msg__Phase__Sequence *)allocator.allocate(sizeof(biped_interfaces__msg__Phase__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = biped_interfaces__msg__Phase__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
biped_interfaces__msg__Phase__Sequence__destroy(biped_interfaces__msg__Phase__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    biped_interfaces__msg__Phase__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
biped_interfaces__msg__Phase__Sequence__are_equal(const biped_interfaces__msg__Phase__Sequence * lhs, const biped_interfaces__msg__Phase__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!biped_interfaces__msg__Phase__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
biped_interfaces__msg__Phase__Sequence__copy(
  const biped_interfaces__msg__Phase__Sequence * input,
  biped_interfaces__msg__Phase__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(biped_interfaces__msg__Phase);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    biped_interfaces__msg__Phase * data =
      (biped_interfaces__msg__Phase *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!biped_interfaces__msg__Phase__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          biped_interfaces__msg__Phase__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!biped_interfaces__msg__Phase__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
