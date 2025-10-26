// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robot_interfaces1:msg/ObstacleInfo.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES1__MSG__DETAIL__OBSTACLE_INFO__STRUCT_H_
#define ROBOT_INTERFACES1__MSG__DETAIL__OBSTACLE_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/ObstacleInfo in the package robot_interfaces1.
/**
  * Bu mesaj belirli bir hedefin bulunup bulunmadığını gösterir
 */
typedef struct robot_interfaces1__msg__ObstacleInfo
{
  /// True ise hedef bulundu
  bool found;
  /// Hedef ile sensör arasındaki uzaklık (metre cinsinden)
  double distance;
} robot_interfaces1__msg__ObstacleInfo;

// Struct for a sequence of robot_interfaces1__msg__ObstacleInfo.
typedef struct robot_interfaces1__msg__ObstacleInfo__Sequence
{
  robot_interfaces1__msg__ObstacleInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_interfaces1__msg__ObstacleInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_INTERFACES1__MSG__DETAIL__OBSTACLE_INFO__STRUCT_H_
