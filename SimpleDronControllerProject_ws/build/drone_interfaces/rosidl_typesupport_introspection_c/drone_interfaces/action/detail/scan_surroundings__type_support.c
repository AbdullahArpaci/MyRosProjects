// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from drone_interfaces:action/ScanSurroundings.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "drone_interfaces/action/detail/scan_surroundings__rosidl_typesupport_introspection_c.h"
#include "drone_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "drone_interfaces/action/detail/scan_surroundings__functions.h"
#include "drone_interfaces/action/detail/scan_surroundings__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void drone_interfaces__action__ScanSurroundings_Goal__rosidl_typesupport_introspection_c__ScanSurroundings_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  drone_interfaces__action__ScanSurroundings_Goal__init(message_memory);
}

void drone_interfaces__action__ScanSurroundings_Goal__rosidl_typesupport_introspection_c__ScanSurroundings_Goal_fini_function(void * message_memory)
{
  drone_interfaces__action__ScanSurroundings_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember drone_interfaces__action__ScanSurroundings_Goal__rosidl_typesupport_introspection_c__ScanSurroundings_Goal_message_member_array[1] = {
  {
    "target_angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drone_interfaces__action__ScanSurroundings_Goal, target_angle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers drone_interfaces__action__ScanSurroundings_Goal__rosidl_typesupport_introspection_c__ScanSurroundings_Goal_message_members = {
  "drone_interfaces__action",  // message namespace
  "ScanSurroundings_Goal",  // message name
  1,  // number of fields
  sizeof(drone_interfaces__action__ScanSurroundings_Goal),
  drone_interfaces__action__ScanSurroundings_Goal__rosidl_typesupport_introspection_c__ScanSurroundings_Goal_message_member_array,  // message members
  drone_interfaces__action__ScanSurroundings_Goal__rosidl_typesupport_introspection_c__ScanSurroundings_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  drone_interfaces__action__ScanSurroundings_Goal__rosidl_typesupport_introspection_c__ScanSurroundings_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t drone_interfaces__action__ScanSurroundings_Goal__rosidl_typesupport_introspection_c__ScanSurroundings_Goal_message_type_support_handle = {
  0,
  &drone_interfaces__action__ScanSurroundings_Goal__rosidl_typesupport_introspection_c__ScanSurroundings_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_drone_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, drone_interfaces, action, ScanSurroundings_Goal)() {
  if (!drone_interfaces__action__ScanSurroundings_Goal__rosidl_typesupport_introspection_c__ScanSurroundings_Goal_message_type_support_handle.typesupport_identifier) {
    drone_interfaces__action__ScanSurroundings_Goal__rosidl_typesupport_introspection_c__ScanSurroundings_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &drone_interfaces__action__ScanSurroundings_Goal__rosidl_typesupport_introspection_c__ScanSurroundings_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "drone_interfaces/action/detail/scan_surroundings__rosidl_typesupport_introspection_c.h"
// already included above
// #include "drone_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "drone_interfaces/action/detail/scan_surroundings__functions.h"
// already included above
// #include "drone_interfaces/action/detail/scan_surroundings__struct.h"


// Include directives for member types
// Member `detected_objects`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void drone_interfaces__action__ScanSurroundings_Result__rosidl_typesupport_introspection_c__ScanSurroundings_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  drone_interfaces__action__ScanSurroundings_Result__init(message_memory);
}

void drone_interfaces__action__ScanSurroundings_Result__rosidl_typesupport_introspection_c__ScanSurroundings_Result_fini_function(void * message_memory)
{
  drone_interfaces__action__ScanSurroundings_Result__fini(message_memory);
}

size_t drone_interfaces__action__ScanSurroundings_Result__rosidl_typesupport_introspection_c__size_function__ScanSurroundings_Result__detected_objects(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * drone_interfaces__action__ScanSurroundings_Result__rosidl_typesupport_introspection_c__get_const_function__ScanSurroundings_Result__detected_objects(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * drone_interfaces__action__ScanSurroundings_Result__rosidl_typesupport_introspection_c__get_function__ScanSurroundings_Result__detected_objects(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void drone_interfaces__action__ScanSurroundings_Result__rosidl_typesupport_introspection_c__fetch_function__ScanSurroundings_Result__detected_objects(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    drone_interfaces__action__ScanSurroundings_Result__rosidl_typesupport_introspection_c__get_const_function__ScanSurroundings_Result__detected_objects(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void drone_interfaces__action__ScanSurroundings_Result__rosidl_typesupport_introspection_c__assign_function__ScanSurroundings_Result__detected_objects(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    drone_interfaces__action__ScanSurroundings_Result__rosidl_typesupport_introspection_c__get_function__ScanSurroundings_Result__detected_objects(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool drone_interfaces__action__ScanSurroundings_Result__rosidl_typesupport_introspection_c__resize_function__ScanSurroundings_Result__detected_objects(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember drone_interfaces__action__ScanSurroundings_Result__rosidl_typesupport_introspection_c__ScanSurroundings_Result_message_member_array[2] = {
  {
    "detected_objects",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drone_interfaces__action__ScanSurroundings_Result, detected_objects),  // bytes offset in struct
    NULL,  // default value
    drone_interfaces__action__ScanSurroundings_Result__rosidl_typesupport_introspection_c__size_function__ScanSurroundings_Result__detected_objects,  // size() function pointer
    drone_interfaces__action__ScanSurroundings_Result__rosidl_typesupport_introspection_c__get_const_function__ScanSurroundings_Result__detected_objects,  // get_const(index) function pointer
    drone_interfaces__action__ScanSurroundings_Result__rosidl_typesupport_introspection_c__get_function__ScanSurroundings_Result__detected_objects,  // get(index) function pointer
    drone_interfaces__action__ScanSurroundings_Result__rosidl_typesupport_introspection_c__fetch_function__ScanSurroundings_Result__detected_objects,  // fetch(index, &value) function pointer
    drone_interfaces__action__ScanSurroundings_Result__rosidl_typesupport_introspection_c__assign_function__ScanSurroundings_Result__detected_objects,  // assign(index, value) function pointer
    drone_interfaces__action__ScanSurroundings_Result__rosidl_typesupport_introspection_c__resize_function__ScanSurroundings_Result__detected_objects  // resize(index) function pointer
  },
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drone_interfaces__action__ScanSurroundings_Result, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers drone_interfaces__action__ScanSurroundings_Result__rosidl_typesupport_introspection_c__ScanSurroundings_Result_message_members = {
  "drone_interfaces__action",  // message namespace
  "ScanSurroundings_Result",  // message name
  2,  // number of fields
  sizeof(drone_interfaces__action__ScanSurroundings_Result),
  drone_interfaces__action__ScanSurroundings_Result__rosidl_typesupport_introspection_c__ScanSurroundings_Result_message_member_array,  // message members
  drone_interfaces__action__ScanSurroundings_Result__rosidl_typesupport_introspection_c__ScanSurroundings_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  drone_interfaces__action__ScanSurroundings_Result__rosidl_typesupport_introspection_c__ScanSurroundings_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t drone_interfaces__action__ScanSurroundings_Result__rosidl_typesupport_introspection_c__ScanSurroundings_Result_message_type_support_handle = {
  0,
  &drone_interfaces__action__ScanSurroundings_Result__rosidl_typesupport_introspection_c__ScanSurroundings_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_drone_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, drone_interfaces, action, ScanSurroundings_Result)() {
  if (!drone_interfaces__action__ScanSurroundings_Result__rosidl_typesupport_introspection_c__ScanSurroundings_Result_message_type_support_handle.typesupport_identifier) {
    drone_interfaces__action__ScanSurroundings_Result__rosidl_typesupport_introspection_c__ScanSurroundings_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &drone_interfaces__action__ScanSurroundings_Result__rosidl_typesupport_introspection_c__ScanSurroundings_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "drone_interfaces/action/detail/scan_surroundings__rosidl_typesupport_introspection_c.h"
// already included above
// #include "drone_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "drone_interfaces/action/detail/scan_surroundings__functions.h"
// already included above
// #include "drone_interfaces/action/detail/scan_surroundings__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void drone_interfaces__action__ScanSurroundings_Feedback__rosidl_typesupport_introspection_c__ScanSurroundings_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  drone_interfaces__action__ScanSurroundings_Feedback__init(message_memory);
}

void drone_interfaces__action__ScanSurroundings_Feedback__rosidl_typesupport_introspection_c__ScanSurroundings_Feedback_fini_function(void * message_memory)
{
  drone_interfaces__action__ScanSurroundings_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember drone_interfaces__action__ScanSurroundings_Feedback__rosidl_typesupport_introspection_c__ScanSurroundings_Feedback_message_member_array[2] = {
  {
    "current_angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drone_interfaces__action__ScanSurroundings_Feedback, current_angle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "percent_complete",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drone_interfaces__action__ScanSurroundings_Feedback, percent_complete),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers drone_interfaces__action__ScanSurroundings_Feedback__rosidl_typesupport_introspection_c__ScanSurroundings_Feedback_message_members = {
  "drone_interfaces__action",  // message namespace
  "ScanSurroundings_Feedback",  // message name
  2,  // number of fields
  sizeof(drone_interfaces__action__ScanSurroundings_Feedback),
  drone_interfaces__action__ScanSurroundings_Feedback__rosidl_typesupport_introspection_c__ScanSurroundings_Feedback_message_member_array,  // message members
  drone_interfaces__action__ScanSurroundings_Feedback__rosidl_typesupport_introspection_c__ScanSurroundings_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  drone_interfaces__action__ScanSurroundings_Feedback__rosidl_typesupport_introspection_c__ScanSurroundings_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t drone_interfaces__action__ScanSurroundings_Feedback__rosidl_typesupport_introspection_c__ScanSurroundings_Feedback_message_type_support_handle = {
  0,
  &drone_interfaces__action__ScanSurroundings_Feedback__rosidl_typesupport_introspection_c__ScanSurroundings_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_drone_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, drone_interfaces, action, ScanSurroundings_Feedback)() {
  if (!drone_interfaces__action__ScanSurroundings_Feedback__rosidl_typesupport_introspection_c__ScanSurroundings_Feedback_message_type_support_handle.typesupport_identifier) {
    drone_interfaces__action__ScanSurroundings_Feedback__rosidl_typesupport_introspection_c__ScanSurroundings_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &drone_interfaces__action__ScanSurroundings_Feedback__rosidl_typesupport_introspection_c__ScanSurroundings_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "drone_interfaces/action/detail/scan_surroundings__rosidl_typesupport_introspection_c.h"
// already included above
// #include "drone_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "drone_interfaces/action/detail/scan_surroundings__functions.h"
// already included above
// #include "drone_interfaces/action/detail/scan_surroundings__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "drone_interfaces/action/scan_surroundings.h"
// Member `goal`
// already included above
// #include "drone_interfaces/action/detail/scan_surroundings__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void drone_interfaces__action__ScanSurroundings_SendGoal_Request__rosidl_typesupport_introspection_c__ScanSurroundings_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  drone_interfaces__action__ScanSurroundings_SendGoal_Request__init(message_memory);
}

void drone_interfaces__action__ScanSurroundings_SendGoal_Request__rosidl_typesupport_introspection_c__ScanSurroundings_SendGoal_Request_fini_function(void * message_memory)
{
  drone_interfaces__action__ScanSurroundings_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember drone_interfaces__action__ScanSurroundings_SendGoal_Request__rosidl_typesupport_introspection_c__ScanSurroundings_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drone_interfaces__action__ScanSurroundings_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drone_interfaces__action__ScanSurroundings_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers drone_interfaces__action__ScanSurroundings_SendGoal_Request__rosidl_typesupport_introspection_c__ScanSurroundings_SendGoal_Request_message_members = {
  "drone_interfaces__action",  // message namespace
  "ScanSurroundings_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(drone_interfaces__action__ScanSurroundings_SendGoal_Request),
  drone_interfaces__action__ScanSurroundings_SendGoal_Request__rosidl_typesupport_introspection_c__ScanSurroundings_SendGoal_Request_message_member_array,  // message members
  drone_interfaces__action__ScanSurroundings_SendGoal_Request__rosidl_typesupport_introspection_c__ScanSurroundings_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  drone_interfaces__action__ScanSurroundings_SendGoal_Request__rosidl_typesupport_introspection_c__ScanSurroundings_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t drone_interfaces__action__ScanSurroundings_SendGoal_Request__rosidl_typesupport_introspection_c__ScanSurroundings_SendGoal_Request_message_type_support_handle = {
  0,
  &drone_interfaces__action__ScanSurroundings_SendGoal_Request__rosidl_typesupport_introspection_c__ScanSurroundings_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_drone_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, drone_interfaces, action, ScanSurroundings_SendGoal_Request)() {
  drone_interfaces__action__ScanSurroundings_SendGoal_Request__rosidl_typesupport_introspection_c__ScanSurroundings_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  drone_interfaces__action__ScanSurroundings_SendGoal_Request__rosidl_typesupport_introspection_c__ScanSurroundings_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, drone_interfaces, action, ScanSurroundings_Goal)();
  if (!drone_interfaces__action__ScanSurroundings_SendGoal_Request__rosidl_typesupport_introspection_c__ScanSurroundings_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    drone_interfaces__action__ScanSurroundings_SendGoal_Request__rosidl_typesupport_introspection_c__ScanSurroundings_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &drone_interfaces__action__ScanSurroundings_SendGoal_Request__rosidl_typesupport_introspection_c__ScanSurroundings_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "drone_interfaces/action/detail/scan_surroundings__rosidl_typesupport_introspection_c.h"
// already included above
// #include "drone_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "drone_interfaces/action/detail/scan_surroundings__functions.h"
// already included above
// #include "drone_interfaces/action/detail/scan_surroundings__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void drone_interfaces__action__ScanSurroundings_SendGoal_Response__rosidl_typesupport_introspection_c__ScanSurroundings_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  drone_interfaces__action__ScanSurroundings_SendGoal_Response__init(message_memory);
}

void drone_interfaces__action__ScanSurroundings_SendGoal_Response__rosidl_typesupport_introspection_c__ScanSurroundings_SendGoal_Response_fini_function(void * message_memory)
{
  drone_interfaces__action__ScanSurroundings_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember drone_interfaces__action__ScanSurroundings_SendGoal_Response__rosidl_typesupport_introspection_c__ScanSurroundings_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drone_interfaces__action__ScanSurroundings_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drone_interfaces__action__ScanSurroundings_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers drone_interfaces__action__ScanSurroundings_SendGoal_Response__rosidl_typesupport_introspection_c__ScanSurroundings_SendGoal_Response_message_members = {
  "drone_interfaces__action",  // message namespace
  "ScanSurroundings_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(drone_interfaces__action__ScanSurroundings_SendGoal_Response),
  drone_interfaces__action__ScanSurroundings_SendGoal_Response__rosidl_typesupport_introspection_c__ScanSurroundings_SendGoal_Response_message_member_array,  // message members
  drone_interfaces__action__ScanSurroundings_SendGoal_Response__rosidl_typesupport_introspection_c__ScanSurroundings_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  drone_interfaces__action__ScanSurroundings_SendGoal_Response__rosidl_typesupport_introspection_c__ScanSurroundings_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t drone_interfaces__action__ScanSurroundings_SendGoal_Response__rosidl_typesupport_introspection_c__ScanSurroundings_SendGoal_Response_message_type_support_handle = {
  0,
  &drone_interfaces__action__ScanSurroundings_SendGoal_Response__rosidl_typesupport_introspection_c__ScanSurroundings_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_drone_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, drone_interfaces, action, ScanSurroundings_SendGoal_Response)() {
  drone_interfaces__action__ScanSurroundings_SendGoal_Response__rosidl_typesupport_introspection_c__ScanSurroundings_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!drone_interfaces__action__ScanSurroundings_SendGoal_Response__rosidl_typesupport_introspection_c__ScanSurroundings_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    drone_interfaces__action__ScanSurroundings_SendGoal_Response__rosidl_typesupport_introspection_c__ScanSurroundings_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &drone_interfaces__action__ScanSurroundings_SendGoal_Response__rosidl_typesupport_introspection_c__ScanSurroundings_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "drone_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "drone_interfaces/action/detail/scan_surroundings__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers drone_interfaces__action__detail__scan_surroundings__rosidl_typesupport_introspection_c__ScanSurroundings_SendGoal_service_members = {
  "drone_interfaces__action",  // service namespace
  "ScanSurroundings_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // drone_interfaces__action__detail__scan_surroundings__rosidl_typesupport_introspection_c__ScanSurroundings_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // drone_interfaces__action__detail__scan_surroundings__rosidl_typesupport_introspection_c__ScanSurroundings_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t drone_interfaces__action__detail__scan_surroundings__rosidl_typesupport_introspection_c__ScanSurroundings_SendGoal_service_type_support_handle = {
  0,
  &drone_interfaces__action__detail__scan_surroundings__rosidl_typesupport_introspection_c__ScanSurroundings_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, drone_interfaces, action, ScanSurroundings_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, drone_interfaces, action, ScanSurroundings_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_drone_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, drone_interfaces, action, ScanSurroundings_SendGoal)() {
  if (!drone_interfaces__action__detail__scan_surroundings__rosidl_typesupport_introspection_c__ScanSurroundings_SendGoal_service_type_support_handle.typesupport_identifier) {
    drone_interfaces__action__detail__scan_surroundings__rosidl_typesupport_introspection_c__ScanSurroundings_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)drone_interfaces__action__detail__scan_surroundings__rosidl_typesupport_introspection_c__ScanSurroundings_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, drone_interfaces, action, ScanSurroundings_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, drone_interfaces, action, ScanSurroundings_SendGoal_Response)()->data;
  }

  return &drone_interfaces__action__detail__scan_surroundings__rosidl_typesupport_introspection_c__ScanSurroundings_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "drone_interfaces/action/detail/scan_surroundings__rosidl_typesupport_introspection_c.h"
// already included above
// #include "drone_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "drone_interfaces/action/detail/scan_surroundings__functions.h"
// already included above
// #include "drone_interfaces/action/detail/scan_surroundings__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void drone_interfaces__action__ScanSurroundings_GetResult_Request__rosidl_typesupport_introspection_c__ScanSurroundings_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  drone_interfaces__action__ScanSurroundings_GetResult_Request__init(message_memory);
}

void drone_interfaces__action__ScanSurroundings_GetResult_Request__rosidl_typesupport_introspection_c__ScanSurroundings_GetResult_Request_fini_function(void * message_memory)
{
  drone_interfaces__action__ScanSurroundings_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember drone_interfaces__action__ScanSurroundings_GetResult_Request__rosidl_typesupport_introspection_c__ScanSurroundings_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drone_interfaces__action__ScanSurroundings_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers drone_interfaces__action__ScanSurroundings_GetResult_Request__rosidl_typesupport_introspection_c__ScanSurroundings_GetResult_Request_message_members = {
  "drone_interfaces__action",  // message namespace
  "ScanSurroundings_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(drone_interfaces__action__ScanSurroundings_GetResult_Request),
  drone_interfaces__action__ScanSurroundings_GetResult_Request__rosidl_typesupport_introspection_c__ScanSurroundings_GetResult_Request_message_member_array,  // message members
  drone_interfaces__action__ScanSurroundings_GetResult_Request__rosidl_typesupport_introspection_c__ScanSurroundings_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  drone_interfaces__action__ScanSurroundings_GetResult_Request__rosidl_typesupport_introspection_c__ScanSurroundings_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t drone_interfaces__action__ScanSurroundings_GetResult_Request__rosidl_typesupport_introspection_c__ScanSurroundings_GetResult_Request_message_type_support_handle = {
  0,
  &drone_interfaces__action__ScanSurroundings_GetResult_Request__rosidl_typesupport_introspection_c__ScanSurroundings_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_drone_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, drone_interfaces, action, ScanSurroundings_GetResult_Request)() {
  drone_interfaces__action__ScanSurroundings_GetResult_Request__rosidl_typesupport_introspection_c__ScanSurroundings_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!drone_interfaces__action__ScanSurroundings_GetResult_Request__rosidl_typesupport_introspection_c__ScanSurroundings_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    drone_interfaces__action__ScanSurroundings_GetResult_Request__rosidl_typesupport_introspection_c__ScanSurroundings_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &drone_interfaces__action__ScanSurroundings_GetResult_Request__rosidl_typesupport_introspection_c__ScanSurroundings_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "drone_interfaces/action/detail/scan_surroundings__rosidl_typesupport_introspection_c.h"
// already included above
// #include "drone_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "drone_interfaces/action/detail/scan_surroundings__functions.h"
// already included above
// #include "drone_interfaces/action/detail/scan_surroundings__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "drone_interfaces/action/scan_surroundings.h"
// Member `result`
// already included above
// #include "drone_interfaces/action/detail/scan_surroundings__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void drone_interfaces__action__ScanSurroundings_GetResult_Response__rosidl_typesupport_introspection_c__ScanSurroundings_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  drone_interfaces__action__ScanSurroundings_GetResult_Response__init(message_memory);
}

void drone_interfaces__action__ScanSurroundings_GetResult_Response__rosidl_typesupport_introspection_c__ScanSurroundings_GetResult_Response_fini_function(void * message_memory)
{
  drone_interfaces__action__ScanSurroundings_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember drone_interfaces__action__ScanSurroundings_GetResult_Response__rosidl_typesupport_introspection_c__ScanSurroundings_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drone_interfaces__action__ScanSurroundings_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drone_interfaces__action__ScanSurroundings_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers drone_interfaces__action__ScanSurroundings_GetResult_Response__rosidl_typesupport_introspection_c__ScanSurroundings_GetResult_Response_message_members = {
  "drone_interfaces__action",  // message namespace
  "ScanSurroundings_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(drone_interfaces__action__ScanSurroundings_GetResult_Response),
  drone_interfaces__action__ScanSurroundings_GetResult_Response__rosidl_typesupport_introspection_c__ScanSurroundings_GetResult_Response_message_member_array,  // message members
  drone_interfaces__action__ScanSurroundings_GetResult_Response__rosidl_typesupport_introspection_c__ScanSurroundings_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  drone_interfaces__action__ScanSurroundings_GetResult_Response__rosidl_typesupport_introspection_c__ScanSurroundings_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t drone_interfaces__action__ScanSurroundings_GetResult_Response__rosidl_typesupport_introspection_c__ScanSurroundings_GetResult_Response_message_type_support_handle = {
  0,
  &drone_interfaces__action__ScanSurroundings_GetResult_Response__rosidl_typesupport_introspection_c__ScanSurroundings_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_drone_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, drone_interfaces, action, ScanSurroundings_GetResult_Response)() {
  drone_interfaces__action__ScanSurroundings_GetResult_Response__rosidl_typesupport_introspection_c__ScanSurroundings_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, drone_interfaces, action, ScanSurroundings_Result)();
  if (!drone_interfaces__action__ScanSurroundings_GetResult_Response__rosidl_typesupport_introspection_c__ScanSurroundings_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    drone_interfaces__action__ScanSurroundings_GetResult_Response__rosidl_typesupport_introspection_c__ScanSurroundings_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &drone_interfaces__action__ScanSurroundings_GetResult_Response__rosidl_typesupport_introspection_c__ScanSurroundings_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "drone_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "drone_interfaces/action/detail/scan_surroundings__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers drone_interfaces__action__detail__scan_surroundings__rosidl_typesupport_introspection_c__ScanSurroundings_GetResult_service_members = {
  "drone_interfaces__action",  // service namespace
  "ScanSurroundings_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // drone_interfaces__action__detail__scan_surroundings__rosidl_typesupport_introspection_c__ScanSurroundings_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // drone_interfaces__action__detail__scan_surroundings__rosidl_typesupport_introspection_c__ScanSurroundings_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t drone_interfaces__action__detail__scan_surroundings__rosidl_typesupport_introspection_c__ScanSurroundings_GetResult_service_type_support_handle = {
  0,
  &drone_interfaces__action__detail__scan_surroundings__rosidl_typesupport_introspection_c__ScanSurroundings_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, drone_interfaces, action, ScanSurroundings_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, drone_interfaces, action, ScanSurroundings_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_drone_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, drone_interfaces, action, ScanSurroundings_GetResult)() {
  if (!drone_interfaces__action__detail__scan_surroundings__rosidl_typesupport_introspection_c__ScanSurroundings_GetResult_service_type_support_handle.typesupport_identifier) {
    drone_interfaces__action__detail__scan_surroundings__rosidl_typesupport_introspection_c__ScanSurroundings_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)drone_interfaces__action__detail__scan_surroundings__rosidl_typesupport_introspection_c__ScanSurroundings_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, drone_interfaces, action, ScanSurroundings_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, drone_interfaces, action, ScanSurroundings_GetResult_Response)()->data;
  }

  return &drone_interfaces__action__detail__scan_surroundings__rosidl_typesupport_introspection_c__ScanSurroundings_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "drone_interfaces/action/detail/scan_surroundings__rosidl_typesupport_introspection_c.h"
// already included above
// #include "drone_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "drone_interfaces/action/detail/scan_surroundings__functions.h"
// already included above
// #include "drone_interfaces/action/detail/scan_surroundings__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "drone_interfaces/action/scan_surroundings.h"
// Member `feedback`
// already included above
// #include "drone_interfaces/action/detail/scan_surroundings__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void drone_interfaces__action__ScanSurroundings_FeedbackMessage__rosidl_typesupport_introspection_c__ScanSurroundings_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  drone_interfaces__action__ScanSurroundings_FeedbackMessage__init(message_memory);
}

void drone_interfaces__action__ScanSurroundings_FeedbackMessage__rosidl_typesupport_introspection_c__ScanSurroundings_FeedbackMessage_fini_function(void * message_memory)
{
  drone_interfaces__action__ScanSurroundings_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember drone_interfaces__action__ScanSurroundings_FeedbackMessage__rosidl_typesupport_introspection_c__ScanSurroundings_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drone_interfaces__action__ScanSurroundings_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drone_interfaces__action__ScanSurroundings_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers drone_interfaces__action__ScanSurroundings_FeedbackMessage__rosidl_typesupport_introspection_c__ScanSurroundings_FeedbackMessage_message_members = {
  "drone_interfaces__action",  // message namespace
  "ScanSurroundings_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(drone_interfaces__action__ScanSurroundings_FeedbackMessage),
  drone_interfaces__action__ScanSurroundings_FeedbackMessage__rosidl_typesupport_introspection_c__ScanSurroundings_FeedbackMessage_message_member_array,  // message members
  drone_interfaces__action__ScanSurroundings_FeedbackMessage__rosidl_typesupport_introspection_c__ScanSurroundings_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  drone_interfaces__action__ScanSurroundings_FeedbackMessage__rosidl_typesupport_introspection_c__ScanSurroundings_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t drone_interfaces__action__ScanSurroundings_FeedbackMessage__rosidl_typesupport_introspection_c__ScanSurroundings_FeedbackMessage_message_type_support_handle = {
  0,
  &drone_interfaces__action__ScanSurroundings_FeedbackMessage__rosidl_typesupport_introspection_c__ScanSurroundings_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_drone_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, drone_interfaces, action, ScanSurroundings_FeedbackMessage)() {
  drone_interfaces__action__ScanSurroundings_FeedbackMessage__rosidl_typesupport_introspection_c__ScanSurroundings_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  drone_interfaces__action__ScanSurroundings_FeedbackMessage__rosidl_typesupport_introspection_c__ScanSurroundings_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, drone_interfaces, action, ScanSurroundings_Feedback)();
  if (!drone_interfaces__action__ScanSurroundings_FeedbackMessage__rosidl_typesupport_introspection_c__ScanSurroundings_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    drone_interfaces__action__ScanSurroundings_FeedbackMessage__rosidl_typesupport_introspection_c__ScanSurroundings_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &drone_interfaces__action__ScanSurroundings_FeedbackMessage__rosidl_typesupport_introspection_c__ScanSurroundings_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
