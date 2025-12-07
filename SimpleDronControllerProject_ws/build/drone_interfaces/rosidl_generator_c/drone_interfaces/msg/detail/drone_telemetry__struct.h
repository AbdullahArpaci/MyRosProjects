// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from drone_interfaces:msg/DroneTelemetry.idl
// generated code does not contain a copyright notice

#ifndef DRONE_INTERFACES__MSG__DETAIL__DRONE_TELEMETRY__STRUCT_H_
#define DRONE_INTERFACES__MSG__DETAIL__DRONE_TELEMETRY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'flight_mode'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/DroneTelemetry in the package drone_interfaces.
typedef struct drone_interfaces__msg__DroneTelemetry
{
  /// Drona atanmış id numarası
  int32_t drone_id;
  /// Dronun uçuş modu
  rosidl_runtime_c__String flight_mode;
  /// Dronun batarya seviyesi
  float battery_level;
  /// X,Y,Z koordinatları
  float position[3];
} drone_interfaces__msg__DroneTelemetry;

// Struct for a sequence of drone_interfaces__msg__DroneTelemetry.
typedef struct drone_interfaces__msg__DroneTelemetry__Sequence
{
  drone_interfaces__msg__DroneTelemetry * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} drone_interfaces__msg__DroneTelemetry__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DRONE_INTERFACES__MSG__DETAIL__DRONE_TELEMETRY__STRUCT_H_
