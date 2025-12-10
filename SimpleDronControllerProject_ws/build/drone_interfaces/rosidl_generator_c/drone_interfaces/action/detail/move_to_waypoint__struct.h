// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from drone_interfaces:action/MoveToWaypoint.idl
// generated code does not contain a copyright notice

#ifndef DRONE_INTERFACES__ACTION__DETAIL__MOVE_TO_WAYPOINT__STRUCT_H_
#define DRONE_INTERFACES__ACTION__DETAIL__MOVE_TO_WAYPOINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/MoveToWaypoint in the package drone_interfaces.
typedef struct drone_interfaces__action__MoveToWaypoint_Goal
{
  /// Gitmesi gereken hedef X, Y, Z koordinatları
  float target_loc[3];
} drone_interfaces__action__MoveToWaypoint_Goal;

// Struct for a sequence of drone_interfaces__action__MoveToWaypoint_Goal.
typedef struct drone_interfaces__action__MoveToWaypoint_Goal__Sequence
{
  drone_interfaces__action__MoveToWaypoint_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} drone_interfaces__action__MoveToWaypoint_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/MoveToWaypoint in the package drone_interfaces.
typedef struct drone_interfaces__action__MoveToWaypoint_Result
{
  /// Görev başarıyla tamamlandı mı?
  bool success;
  /// "Hedefe ulaşıldı" veya "Pil bitti, yarıda kesildi"
  rosidl_runtime_c__String message;
} drone_interfaces__action__MoveToWaypoint_Result;

// Struct for a sequence of drone_interfaces__action__MoveToWaypoint_Result.
typedef struct drone_interfaces__action__MoveToWaypoint_Result__Sequence
{
  drone_interfaces__action__MoveToWaypoint_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} drone_interfaces__action__MoveToWaypoint_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/MoveToWaypoint in the package drone_interfaces.
typedef struct drone_interfaces__action__MoveToWaypoint_Feedback
{
  /// Hedefe kalan mesafe (metre)
  float current_distance;
  /// Kalan pil seviyesi (%)
  float battery_remaining;
} drone_interfaces__action__MoveToWaypoint_Feedback;

// Struct for a sequence of drone_interfaces__action__MoveToWaypoint_Feedback.
typedef struct drone_interfaces__action__MoveToWaypoint_Feedback__Sequence
{
  drone_interfaces__action__MoveToWaypoint_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} drone_interfaces__action__MoveToWaypoint_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "drone_interfaces/action/detail/move_to_waypoint__struct.h"

/// Struct defined in action/MoveToWaypoint in the package drone_interfaces.
typedef struct drone_interfaces__action__MoveToWaypoint_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  drone_interfaces__action__MoveToWaypoint_Goal goal;
} drone_interfaces__action__MoveToWaypoint_SendGoal_Request;

// Struct for a sequence of drone_interfaces__action__MoveToWaypoint_SendGoal_Request.
typedef struct drone_interfaces__action__MoveToWaypoint_SendGoal_Request__Sequence
{
  drone_interfaces__action__MoveToWaypoint_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} drone_interfaces__action__MoveToWaypoint_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/MoveToWaypoint in the package drone_interfaces.
typedef struct drone_interfaces__action__MoveToWaypoint_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} drone_interfaces__action__MoveToWaypoint_SendGoal_Response;

// Struct for a sequence of drone_interfaces__action__MoveToWaypoint_SendGoal_Response.
typedef struct drone_interfaces__action__MoveToWaypoint_SendGoal_Response__Sequence
{
  drone_interfaces__action__MoveToWaypoint_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} drone_interfaces__action__MoveToWaypoint_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/MoveToWaypoint in the package drone_interfaces.
typedef struct drone_interfaces__action__MoveToWaypoint_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} drone_interfaces__action__MoveToWaypoint_GetResult_Request;

// Struct for a sequence of drone_interfaces__action__MoveToWaypoint_GetResult_Request.
typedef struct drone_interfaces__action__MoveToWaypoint_GetResult_Request__Sequence
{
  drone_interfaces__action__MoveToWaypoint_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} drone_interfaces__action__MoveToWaypoint_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "drone_interfaces/action/detail/move_to_waypoint__struct.h"

/// Struct defined in action/MoveToWaypoint in the package drone_interfaces.
typedef struct drone_interfaces__action__MoveToWaypoint_GetResult_Response
{
  int8_t status;
  drone_interfaces__action__MoveToWaypoint_Result result;
} drone_interfaces__action__MoveToWaypoint_GetResult_Response;

// Struct for a sequence of drone_interfaces__action__MoveToWaypoint_GetResult_Response.
typedef struct drone_interfaces__action__MoveToWaypoint_GetResult_Response__Sequence
{
  drone_interfaces__action__MoveToWaypoint_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} drone_interfaces__action__MoveToWaypoint_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "drone_interfaces/action/detail/move_to_waypoint__struct.h"

/// Struct defined in action/MoveToWaypoint in the package drone_interfaces.
typedef struct drone_interfaces__action__MoveToWaypoint_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  drone_interfaces__action__MoveToWaypoint_Feedback feedback;
} drone_interfaces__action__MoveToWaypoint_FeedbackMessage;

// Struct for a sequence of drone_interfaces__action__MoveToWaypoint_FeedbackMessage.
typedef struct drone_interfaces__action__MoveToWaypoint_FeedbackMessage__Sequence
{
  drone_interfaces__action__MoveToWaypoint_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} drone_interfaces__action__MoveToWaypoint_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DRONE_INTERFACES__ACTION__DETAIL__MOVE_TO_WAYPOINT__STRUCT_H_
