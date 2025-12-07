// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from drone_interfaces:msg/DroneTelemetry.idl
// generated code does not contain a copyright notice
#include "drone_interfaces/msg/detail/drone_telemetry__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `flight_mode`
#include "rosidl_runtime_c/string_functions.h"

bool
drone_interfaces__msg__DroneTelemetry__init(drone_interfaces__msg__DroneTelemetry * msg)
{
  if (!msg) {
    return false;
  }
  // drone_id
  // flight_mode
  if (!rosidl_runtime_c__String__init(&msg->flight_mode)) {
    drone_interfaces__msg__DroneTelemetry__fini(msg);
    return false;
  }
  // battery_level
  // position
  return true;
}

void
drone_interfaces__msg__DroneTelemetry__fini(drone_interfaces__msg__DroneTelemetry * msg)
{
  if (!msg) {
    return;
  }
  // drone_id
  // flight_mode
  rosidl_runtime_c__String__fini(&msg->flight_mode);
  // battery_level
  // position
}

bool
drone_interfaces__msg__DroneTelemetry__are_equal(const drone_interfaces__msg__DroneTelemetry * lhs, const drone_interfaces__msg__DroneTelemetry * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // drone_id
  if (lhs->drone_id != rhs->drone_id) {
    return false;
  }
  // flight_mode
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->flight_mode), &(rhs->flight_mode)))
  {
    return false;
  }
  // battery_level
  if (lhs->battery_level != rhs->battery_level) {
    return false;
  }
  // position
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->position[i] != rhs->position[i]) {
      return false;
    }
  }
  return true;
}

bool
drone_interfaces__msg__DroneTelemetry__copy(
  const drone_interfaces__msg__DroneTelemetry * input,
  drone_interfaces__msg__DroneTelemetry * output)
{
  if (!input || !output) {
    return false;
  }
  // drone_id
  output->drone_id = input->drone_id;
  // flight_mode
  if (!rosidl_runtime_c__String__copy(
      &(input->flight_mode), &(output->flight_mode)))
  {
    return false;
  }
  // battery_level
  output->battery_level = input->battery_level;
  // position
  for (size_t i = 0; i < 3; ++i) {
    output->position[i] = input->position[i];
  }
  return true;
}

drone_interfaces__msg__DroneTelemetry *
drone_interfaces__msg__DroneTelemetry__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drone_interfaces__msg__DroneTelemetry * msg = (drone_interfaces__msg__DroneTelemetry *)allocator.allocate(sizeof(drone_interfaces__msg__DroneTelemetry), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(drone_interfaces__msg__DroneTelemetry));
  bool success = drone_interfaces__msg__DroneTelemetry__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
drone_interfaces__msg__DroneTelemetry__destroy(drone_interfaces__msg__DroneTelemetry * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    drone_interfaces__msg__DroneTelemetry__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
drone_interfaces__msg__DroneTelemetry__Sequence__init(drone_interfaces__msg__DroneTelemetry__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drone_interfaces__msg__DroneTelemetry * data = NULL;

  if (size) {
    data = (drone_interfaces__msg__DroneTelemetry *)allocator.zero_allocate(size, sizeof(drone_interfaces__msg__DroneTelemetry), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = drone_interfaces__msg__DroneTelemetry__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        drone_interfaces__msg__DroneTelemetry__fini(&data[i - 1]);
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
drone_interfaces__msg__DroneTelemetry__Sequence__fini(drone_interfaces__msg__DroneTelemetry__Sequence * array)
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
      drone_interfaces__msg__DroneTelemetry__fini(&array->data[i]);
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

drone_interfaces__msg__DroneTelemetry__Sequence *
drone_interfaces__msg__DroneTelemetry__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drone_interfaces__msg__DroneTelemetry__Sequence * array = (drone_interfaces__msg__DroneTelemetry__Sequence *)allocator.allocate(sizeof(drone_interfaces__msg__DroneTelemetry__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = drone_interfaces__msg__DroneTelemetry__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
drone_interfaces__msg__DroneTelemetry__Sequence__destroy(drone_interfaces__msg__DroneTelemetry__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    drone_interfaces__msg__DroneTelemetry__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
drone_interfaces__msg__DroneTelemetry__Sequence__are_equal(const drone_interfaces__msg__DroneTelemetry__Sequence * lhs, const drone_interfaces__msg__DroneTelemetry__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!drone_interfaces__msg__DroneTelemetry__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
drone_interfaces__msg__DroneTelemetry__Sequence__copy(
  const drone_interfaces__msg__DroneTelemetry__Sequence * input,
  drone_interfaces__msg__DroneTelemetry__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(drone_interfaces__msg__DroneTelemetry);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    drone_interfaces__msg__DroneTelemetry * data =
      (drone_interfaces__msg__DroneTelemetry *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!drone_interfaces__msg__DroneTelemetry__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          drone_interfaces__msg__DroneTelemetry__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!drone_interfaces__msg__DroneTelemetry__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
