// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_pkg_interfaces:msg/Num.idl
// generated code does not contain a copyright notice

#ifndef MY_PKG_INTERFACES__MSG__DETAIL__NUM__STRUCT_H_
#define MY_PKG_INTERFACES__MSG__DETAIL__NUM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Num in the package my_pkg_interfaces.
typedef struct my_pkg_interfaces__msg__Num
{
  int64_t num;
} my_pkg_interfaces__msg__Num;

// Struct for a sequence of my_pkg_interfaces__msg__Num.
typedef struct my_pkg_interfaces__msg__Num__Sequence
{
  my_pkg_interfaces__msg__Num * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_pkg_interfaces__msg__Num__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_PKG_INTERFACES__MSG__DETAIL__NUM__STRUCT_H_
