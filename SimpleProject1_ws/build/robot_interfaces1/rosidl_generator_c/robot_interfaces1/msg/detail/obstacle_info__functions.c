// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robot_interfaces1:msg/ObstacleInfo.idl
// generated code does not contain a copyright notice
#include "robot_interfaces1/msg/detail/obstacle_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
robot_interfaces1__msg__ObstacleInfo__init(robot_interfaces1__msg__ObstacleInfo * msg)
{
  if (!msg) {
    return false;
  }
  // found
  // distance
  return true;
}

void
robot_interfaces1__msg__ObstacleInfo__fini(robot_interfaces1__msg__ObstacleInfo * msg)
{
  if (!msg) {
    return;
  }
  // found
  // distance
}

bool
robot_interfaces1__msg__ObstacleInfo__are_equal(const robot_interfaces1__msg__ObstacleInfo * lhs, const robot_interfaces1__msg__ObstacleInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // found
  if (lhs->found != rhs->found) {
    return false;
  }
  // distance
  if (lhs->distance != rhs->distance) {
    return false;
  }
  return true;
}

bool
robot_interfaces1__msg__ObstacleInfo__copy(
  const robot_interfaces1__msg__ObstacleInfo * input,
  robot_interfaces1__msg__ObstacleInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // found
  output->found = input->found;
  // distance
  output->distance = input->distance;
  return true;
}

robot_interfaces1__msg__ObstacleInfo *
robot_interfaces1__msg__ObstacleInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_interfaces1__msg__ObstacleInfo * msg = (robot_interfaces1__msg__ObstacleInfo *)allocator.allocate(sizeof(robot_interfaces1__msg__ObstacleInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robot_interfaces1__msg__ObstacleInfo));
  bool success = robot_interfaces1__msg__ObstacleInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robot_interfaces1__msg__ObstacleInfo__destroy(robot_interfaces1__msg__ObstacleInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robot_interfaces1__msg__ObstacleInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robot_interfaces1__msg__ObstacleInfo__Sequence__init(robot_interfaces1__msg__ObstacleInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_interfaces1__msg__ObstacleInfo * data = NULL;

  if (size) {
    data = (robot_interfaces1__msg__ObstacleInfo *)allocator.zero_allocate(size, sizeof(robot_interfaces1__msg__ObstacleInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robot_interfaces1__msg__ObstacleInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robot_interfaces1__msg__ObstacleInfo__fini(&data[i - 1]);
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
robot_interfaces1__msg__ObstacleInfo__Sequence__fini(robot_interfaces1__msg__ObstacleInfo__Sequence * array)
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
      robot_interfaces1__msg__ObstacleInfo__fini(&array->data[i]);
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

robot_interfaces1__msg__ObstacleInfo__Sequence *
robot_interfaces1__msg__ObstacleInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_interfaces1__msg__ObstacleInfo__Sequence * array = (robot_interfaces1__msg__ObstacleInfo__Sequence *)allocator.allocate(sizeof(robot_interfaces1__msg__ObstacleInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robot_interfaces1__msg__ObstacleInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robot_interfaces1__msg__ObstacleInfo__Sequence__destroy(robot_interfaces1__msg__ObstacleInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robot_interfaces1__msg__ObstacleInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robot_interfaces1__msg__ObstacleInfo__Sequence__are_equal(const robot_interfaces1__msg__ObstacleInfo__Sequence * lhs, const robot_interfaces1__msg__ObstacleInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robot_interfaces1__msg__ObstacleInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robot_interfaces1__msg__ObstacleInfo__Sequence__copy(
  const robot_interfaces1__msg__ObstacleInfo__Sequence * input,
  robot_interfaces1__msg__ObstacleInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robot_interfaces1__msg__ObstacleInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robot_interfaces1__msg__ObstacleInfo * data =
      (robot_interfaces1__msg__ObstacleInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robot_interfaces1__msg__ObstacleInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robot_interfaces1__msg__ObstacleInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robot_interfaces1__msg__ObstacleInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
