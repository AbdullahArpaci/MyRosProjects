// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from drone_interfaces:srv/MissionDispatch.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "drone_interfaces/srv/detail/mission_dispatch__rosidl_typesupport_introspection_c.h"
#include "drone_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "drone_interfaces/srv/detail/mission_dispatch__functions.h"
#include "drone_interfaces/srv/detail/mission_dispatch__struct.h"


// Include directives for member types
// Member `mission_type`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void drone_interfaces__srv__MissionDispatch_Request__rosidl_typesupport_introspection_c__MissionDispatch_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  drone_interfaces__srv__MissionDispatch_Request__init(message_memory);
}

void drone_interfaces__srv__MissionDispatch_Request__rosidl_typesupport_introspection_c__MissionDispatch_Request_fini_function(void * message_memory)
{
  drone_interfaces__srv__MissionDispatch_Request__fini(message_memory);
}

size_t drone_interfaces__srv__MissionDispatch_Request__rosidl_typesupport_introspection_c__size_function__MissionDispatch_Request__target_loc(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * drone_interfaces__srv__MissionDispatch_Request__rosidl_typesupport_introspection_c__get_const_function__MissionDispatch_Request__target_loc(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * drone_interfaces__srv__MissionDispatch_Request__rosidl_typesupport_introspection_c__get_function__MissionDispatch_Request__target_loc(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void drone_interfaces__srv__MissionDispatch_Request__rosidl_typesupport_introspection_c__fetch_function__MissionDispatch_Request__target_loc(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    drone_interfaces__srv__MissionDispatch_Request__rosidl_typesupport_introspection_c__get_const_function__MissionDispatch_Request__target_loc(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void drone_interfaces__srv__MissionDispatch_Request__rosidl_typesupport_introspection_c__assign_function__MissionDispatch_Request__target_loc(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    drone_interfaces__srv__MissionDispatch_Request__rosidl_typesupport_introspection_c__get_function__MissionDispatch_Request__target_loc(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember drone_interfaces__srv__MissionDispatch_Request__rosidl_typesupport_introspection_c__MissionDispatch_Request_message_member_array[3] = {
  {
    "target_drone_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drone_interfaces__srv__MissionDispatch_Request, target_drone_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target_loc",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(drone_interfaces__srv__MissionDispatch_Request, target_loc),  // bytes offset in struct
    NULL,  // default value
    drone_interfaces__srv__MissionDispatch_Request__rosidl_typesupport_introspection_c__size_function__MissionDispatch_Request__target_loc,  // size() function pointer
    drone_interfaces__srv__MissionDispatch_Request__rosidl_typesupport_introspection_c__get_const_function__MissionDispatch_Request__target_loc,  // get_const(index) function pointer
    drone_interfaces__srv__MissionDispatch_Request__rosidl_typesupport_introspection_c__get_function__MissionDispatch_Request__target_loc,  // get(index) function pointer
    drone_interfaces__srv__MissionDispatch_Request__rosidl_typesupport_introspection_c__fetch_function__MissionDispatch_Request__target_loc,  // fetch(index, &value) function pointer
    drone_interfaces__srv__MissionDispatch_Request__rosidl_typesupport_introspection_c__assign_function__MissionDispatch_Request__target_loc,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mission_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drone_interfaces__srv__MissionDispatch_Request, mission_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers drone_interfaces__srv__MissionDispatch_Request__rosidl_typesupport_introspection_c__MissionDispatch_Request_message_members = {
  "drone_interfaces__srv",  // message namespace
  "MissionDispatch_Request",  // message name
  3,  // number of fields
  sizeof(drone_interfaces__srv__MissionDispatch_Request),
  drone_interfaces__srv__MissionDispatch_Request__rosidl_typesupport_introspection_c__MissionDispatch_Request_message_member_array,  // message members
  drone_interfaces__srv__MissionDispatch_Request__rosidl_typesupport_introspection_c__MissionDispatch_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  drone_interfaces__srv__MissionDispatch_Request__rosidl_typesupport_introspection_c__MissionDispatch_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t drone_interfaces__srv__MissionDispatch_Request__rosidl_typesupport_introspection_c__MissionDispatch_Request_message_type_support_handle = {
  0,
  &drone_interfaces__srv__MissionDispatch_Request__rosidl_typesupport_introspection_c__MissionDispatch_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_drone_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, drone_interfaces, srv, MissionDispatch_Request)() {
  if (!drone_interfaces__srv__MissionDispatch_Request__rosidl_typesupport_introspection_c__MissionDispatch_Request_message_type_support_handle.typesupport_identifier) {
    drone_interfaces__srv__MissionDispatch_Request__rosidl_typesupport_introspection_c__MissionDispatch_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &drone_interfaces__srv__MissionDispatch_Request__rosidl_typesupport_introspection_c__MissionDispatch_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "drone_interfaces/srv/detail/mission_dispatch__rosidl_typesupport_introspection_c.h"
// already included above
// #include "drone_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "drone_interfaces/srv/detail/mission_dispatch__functions.h"
// already included above
// #include "drone_interfaces/srv/detail/mission_dispatch__struct.h"


// Include directives for member types
// Member `status_message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void drone_interfaces__srv__MissionDispatch_Response__rosidl_typesupport_introspection_c__MissionDispatch_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  drone_interfaces__srv__MissionDispatch_Response__init(message_memory);
}

void drone_interfaces__srv__MissionDispatch_Response__rosidl_typesupport_introspection_c__MissionDispatch_Response_fini_function(void * message_memory)
{
  drone_interfaces__srv__MissionDispatch_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember drone_interfaces__srv__MissionDispatch_Response__rosidl_typesupport_introspection_c__MissionDispatch_Response_message_member_array[2] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drone_interfaces__srv__MissionDispatch_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status_message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drone_interfaces__srv__MissionDispatch_Response, status_message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers drone_interfaces__srv__MissionDispatch_Response__rosidl_typesupport_introspection_c__MissionDispatch_Response_message_members = {
  "drone_interfaces__srv",  // message namespace
  "MissionDispatch_Response",  // message name
  2,  // number of fields
  sizeof(drone_interfaces__srv__MissionDispatch_Response),
  drone_interfaces__srv__MissionDispatch_Response__rosidl_typesupport_introspection_c__MissionDispatch_Response_message_member_array,  // message members
  drone_interfaces__srv__MissionDispatch_Response__rosidl_typesupport_introspection_c__MissionDispatch_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  drone_interfaces__srv__MissionDispatch_Response__rosidl_typesupport_introspection_c__MissionDispatch_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t drone_interfaces__srv__MissionDispatch_Response__rosidl_typesupport_introspection_c__MissionDispatch_Response_message_type_support_handle = {
  0,
  &drone_interfaces__srv__MissionDispatch_Response__rosidl_typesupport_introspection_c__MissionDispatch_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_drone_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, drone_interfaces, srv, MissionDispatch_Response)() {
  if (!drone_interfaces__srv__MissionDispatch_Response__rosidl_typesupport_introspection_c__MissionDispatch_Response_message_type_support_handle.typesupport_identifier) {
    drone_interfaces__srv__MissionDispatch_Response__rosidl_typesupport_introspection_c__MissionDispatch_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &drone_interfaces__srv__MissionDispatch_Response__rosidl_typesupport_introspection_c__MissionDispatch_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "drone_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "drone_interfaces/srv/detail/mission_dispatch__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers drone_interfaces__srv__detail__mission_dispatch__rosidl_typesupport_introspection_c__MissionDispatch_service_members = {
  "drone_interfaces__srv",  // service namespace
  "MissionDispatch",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // drone_interfaces__srv__detail__mission_dispatch__rosidl_typesupport_introspection_c__MissionDispatch_Request_message_type_support_handle,
  NULL  // response message
  // drone_interfaces__srv__detail__mission_dispatch__rosidl_typesupport_introspection_c__MissionDispatch_Response_message_type_support_handle
};

static rosidl_service_type_support_t drone_interfaces__srv__detail__mission_dispatch__rosidl_typesupport_introspection_c__MissionDispatch_service_type_support_handle = {
  0,
  &drone_interfaces__srv__detail__mission_dispatch__rosidl_typesupport_introspection_c__MissionDispatch_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, drone_interfaces, srv, MissionDispatch_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, drone_interfaces, srv, MissionDispatch_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_drone_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, drone_interfaces, srv, MissionDispatch)() {
  if (!drone_interfaces__srv__detail__mission_dispatch__rosidl_typesupport_introspection_c__MissionDispatch_service_type_support_handle.typesupport_identifier) {
    drone_interfaces__srv__detail__mission_dispatch__rosidl_typesupport_introspection_c__MissionDispatch_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)drone_interfaces__srv__detail__mission_dispatch__rosidl_typesupport_introspection_c__MissionDispatch_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, drone_interfaces, srv, MissionDispatch_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, drone_interfaces, srv, MissionDispatch_Response)()->data;
  }

  return &drone_interfaces__srv__detail__mission_dispatch__rosidl_typesupport_introspection_c__MissionDispatch_service_type_support_handle;
}
