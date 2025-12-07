// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from drone_interfaces:srv/MissionDispatch.idl
// generated code does not contain a copyright notice

#ifndef DRONE_INTERFACES__SRV__DETAIL__MISSION_DISPATCH__STRUCT_H_
#define DRONE_INTERFACES__SRV__DETAIL__MISSION_DISPATCH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'mission_type'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/MissionDispatch in the package drone_interfaces.
typedef struct drone_interfaces__srv__MissionDispatch_Request
{
  int32_t target_drone_id;
  float target_loc[3];
  rosidl_runtime_c__String mission_type;
} drone_interfaces__srv__MissionDispatch_Request;

// Struct for a sequence of drone_interfaces__srv__MissionDispatch_Request.
typedef struct drone_interfaces__srv__MissionDispatch_Request__Sequence
{
  drone_interfaces__srv__MissionDispatch_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} drone_interfaces__srv__MissionDispatch_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'status_message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/MissionDispatch in the package drone_interfaces.
typedef struct drone_interfaces__srv__MissionDispatch_Response
{
  bool success;
  rosidl_runtime_c__String status_message;
} drone_interfaces__srv__MissionDispatch_Response;

// Struct for a sequence of drone_interfaces__srv__MissionDispatch_Response.
typedef struct drone_interfaces__srv__MissionDispatch_Response__Sequence
{
  drone_interfaces__srv__MissionDispatch_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} drone_interfaces__srv__MissionDispatch_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DRONE_INTERFACES__SRV__DETAIL__MISSION_DISPATCH__STRUCT_H_
