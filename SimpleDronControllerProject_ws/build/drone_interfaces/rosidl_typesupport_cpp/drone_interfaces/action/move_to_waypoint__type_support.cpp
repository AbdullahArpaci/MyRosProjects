// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from drone_interfaces:action/MoveToWaypoint.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "drone_interfaces/action/detail/move_to_waypoint__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace drone_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MoveToWaypoint_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveToWaypoint_Goal_type_support_ids_t;

static const _MoveToWaypoint_Goal_type_support_ids_t _MoveToWaypoint_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MoveToWaypoint_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveToWaypoint_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveToWaypoint_Goal_type_support_symbol_names_t _MoveToWaypoint_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, drone_interfaces, action, MoveToWaypoint_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, drone_interfaces, action, MoveToWaypoint_Goal)),
  }
};

typedef struct _MoveToWaypoint_Goal_type_support_data_t
{
  void * data[2];
} _MoveToWaypoint_Goal_type_support_data_t;

static _MoveToWaypoint_Goal_type_support_data_t _MoveToWaypoint_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveToWaypoint_Goal_message_typesupport_map = {
  2,
  "drone_interfaces",
  &_MoveToWaypoint_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_MoveToWaypoint_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_MoveToWaypoint_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveToWaypoint_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveToWaypoint_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace drone_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<drone_interfaces::action::MoveToWaypoint_Goal>()
{
  return &::drone_interfaces::action::rosidl_typesupport_cpp::MoveToWaypoint_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, drone_interfaces, action, MoveToWaypoint_Goal)() {
  return get_message_type_support_handle<drone_interfaces::action::MoveToWaypoint_Goal>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "drone_interfaces/action/detail/move_to_waypoint__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace drone_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MoveToWaypoint_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveToWaypoint_Result_type_support_ids_t;

static const _MoveToWaypoint_Result_type_support_ids_t _MoveToWaypoint_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MoveToWaypoint_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveToWaypoint_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveToWaypoint_Result_type_support_symbol_names_t _MoveToWaypoint_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, drone_interfaces, action, MoveToWaypoint_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, drone_interfaces, action, MoveToWaypoint_Result)),
  }
};

typedef struct _MoveToWaypoint_Result_type_support_data_t
{
  void * data[2];
} _MoveToWaypoint_Result_type_support_data_t;

static _MoveToWaypoint_Result_type_support_data_t _MoveToWaypoint_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveToWaypoint_Result_message_typesupport_map = {
  2,
  "drone_interfaces",
  &_MoveToWaypoint_Result_message_typesupport_ids.typesupport_identifier[0],
  &_MoveToWaypoint_Result_message_typesupport_symbol_names.symbol_name[0],
  &_MoveToWaypoint_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveToWaypoint_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveToWaypoint_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace drone_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<drone_interfaces::action::MoveToWaypoint_Result>()
{
  return &::drone_interfaces::action::rosidl_typesupport_cpp::MoveToWaypoint_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, drone_interfaces, action, MoveToWaypoint_Result)() {
  return get_message_type_support_handle<drone_interfaces::action::MoveToWaypoint_Result>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "drone_interfaces/action/detail/move_to_waypoint__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace drone_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MoveToWaypoint_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveToWaypoint_Feedback_type_support_ids_t;

static const _MoveToWaypoint_Feedback_type_support_ids_t _MoveToWaypoint_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MoveToWaypoint_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveToWaypoint_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveToWaypoint_Feedback_type_support_symbol_names_t _MoveToWaypoint_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, drone_interfaces, action, MoveToWaypoint_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, drone_interfaces, action, MoveToWaypoint_Feedback)),
  }
};

typedef struct _MoveToWaypoint_Feedback_type_support_data_t
{
  void * data[2];
} _MoveToWaypoint_Feedback_type_support_data_t;

static _MoveToWaypoint_Feedback_type_support_data_t _MoveToWaypoint_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveToWaypoint_Feedback_message_typesupport_map = {
  2,
  "drone_interfaces",
  &_MoveToWaypoint_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_MoveToWaypoint_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_MoveToWaypoint_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveToWaypoint_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveToWaypoint_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace drone_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<drone_interfaces::action::MoveToWaypoint_Feedback>()
{
  return &::drone_interfaces::action::rosidl_typesupport_cpp::MoveToWaypoint_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, drone_interfaces, action, MoveToWaypoint_Feedback)() {
  return get_message_type_support_handle<drone_interfaces::action::MoveToWaypoint_Feedback>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "drone_interfaces/action/detail/move_to_waypoint__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace drone_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MoveToWaypoint_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveToWaypoint_SendGoal_Request_type_support_ids_t;

static const _MoveToWaypoint_SendGoal_Request_type_support_ids_t _MoveToWaypoint_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MoveToWaypoint_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveToWaypoint_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveToWaypoint_SendGoal_Request_type_support_symbol_names_t _MoveToWaypoint_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, drone_interfaces, action, MoveToWaypoint_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, drone_interfaces, action, MoveToWaypoint_SendGoal_Request)),
  }
};

typedef struct _MoveToWaypoint_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _MoveToWaypoint_SendGoal_Request_type_support_data_t;

static _MoveToWaypoint_SendGoal_Request_type_support_data_t _MoveToWaypoint_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveToWaypoint_SendGoal_Request_message_typesupport_map = {
  2,
  "drone_interfaces",
  &_MoveToWaypoint_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_MoveToWaypoint_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_MoveToWaypoint_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveToWaypoint_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveToWaypoint_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace drone_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<drone_interfaces::action::MoveToWaypoint_SendGoal_Request>()
{
  return &::drone_interfaces::action::rosidl_typesupport_cpp::MoveToWaypoint_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, drone_interfaces, action, MoveToWaypoint_SendGoal_Request)() {
  return get_message_type_support_handle<drone_interfaces::action::MoveToWaypoint_SendGoal_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "drone_interfaces/action/detail/move_to_waypoint__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace drone_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MoveToWaypoint_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveToWaypoint_SendGoal_Response_type_support_ids_t;

static const _MoveToWaypoint_SendGoal_Response_type_support_ids_t _MoveToWaypoint_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MoveToWaypoint_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveToWaypoint_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveToWaypoint_SendGoal_Response_type_support_symbol_names_t _MoveToWaypoint_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, drone_interfaces, action, MoveToWaypoint_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, drone_interfaces, action, MoveToWaypoint_SendGoal_Response)),
  }
};

typedef struct _MoveToWaypoint_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _MoveToWaypoint_SendGoal_Response_type_support_data_t;

static _MoveToWaypoint_SendGoal_Response_type_support_data_t _MoveToWaypoint_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveToWaypoint_SendGoal_Response_message_typesupport_map = {
  2,
  "drone_interfaces",
  &_MoveToWaypoint_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_MoveToWaypoint_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_MoveToWaypoint_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveToWaypoint_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveToWaypoint_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace drone_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<drone_interfaces::action::MoveToWaypoint_SendGoal_Response>()
{
  return &::drone_interfaces::action::rosidl_typesupport_cpp::MoveToWaypoint_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, drone_interfaces, action, MoveToWaypoint_SendGoal_Response)() {
  return get_message_type_support_handle<drone_interfaces::action::MoveToWaypoint_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "drone_interfaces/action/detail/move_to_waypoint__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace drone_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MoveToWaypoint_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveToWaypoint_SendGoal_type_support_ids_t;

static const _MoveToWaypoint_SendGoal_type_support_ids_t _MoveToWaypoint_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MoveToWaypoint_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveToWaypoint_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveToWaypoint_SendGoal_type_support_symbol_names_t _MoveToWaypoint_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, drone_interfaces, action, MoveToWaypoint_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, drone_interfaces, action, MoveToWaypoint_SendGoal)),
  }
};

typedef struct _MoveToWaypoint_SendGoal_type_support_data_t
{
  void * data[2];
} _MoveToWaypoint_SendGoal_type_support_data_t;

static _MoveToWaypoint_SendGoal_type_support_data_t _MoveToWaypoint_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveToWaypoint_SendGoal_service_typesupport_map = {
  2,
  "drone_interfaces",
  &_MoveToWaypoint_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_MoveToWaypoint_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_MoveToWaypoint_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t MoveToWaypoint_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveToWaypoint_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace drone_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<drone_interfaces::action::MoveToWaypoint_SendGoal>()
{
  return &::drone_interfaces::action::rosidl_typesupport_cpp::MoveToWaypoint_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, drone_interfaces, action, MoveToWaypoint_SendGoal)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<drone_interfaces::action::MoveToWaypoint_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "drone_interfaces/action/detail/move_to_waypoint__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace drone_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MoveToWaypoint_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveToWaypoint_GetResult_Request_type_support_ids_t;

static const _MoveToWaypoint_GetResult_Request_type_support_ids_t _MoveToWaypoint_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MoveToWaypoint_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveToWaypoint_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveToWaypoint_GetResult_Request_type_support_symbol_names_t _MoveToWaypoint_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, drone_interfaces, action, MoveToWaypoint_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, drone_interfaces, action, MoveToWaypoint_GetResult_Request)),
  }
};

typedef struct _MoveToWaypoint_GetResult_Request_type_support_data_t
{
  void * data[2];
} _MoveToWaypoint_GetResult_Request_type_support_data_t;

static _MoveToWaypoint_GetResult_Request_type_support_data_t _MoveToWaypoint_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveToWaypoint_GetResult_Request_message_typesupport_map = {
  2,
  "drone_interfaces",
  &_MoveToWaypoint_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_MoveToWaypoint_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_MoveToWaypoint_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveToWaypoint_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveToWaypoint_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace drone_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<drone_interfaces::action::MoveToWaypoint_GetResult_Request>()
{
  return &::drone_interfaces::action::rosidl_typesupport_cpp::MoveToWaypoint_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, drone_interfaces, action, MoveToWaypoint_GetResult_Request)() {
  return get_message_type_support_handle<drone_interfaces::action::MoveToWaypoint_GetResult_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "drone_interfaces/action/detail/move_to_waypoint__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace drone_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MoveToWaypoint_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveToWaypoint_GetResult_Response_type_support_ids_t;

static const _MoveToWaypoint_GetResult_Response_type_support_ids_t _MoveToWaypoint_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MoveToWaypoint_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveToWaypoint_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveToWaypoint_GetResult_Response_type_support_symbol_names_t _MoveToWaypoint_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, drone_interfaces, action, MoveToWaypoint_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, drone_interfaces, action, MoveToWaypoint_GetResult_Response)),
  }
};

typedef struct _MoveToWaypoint_GetResult_Response_type_support_data_t
{
  void * data[2];
} _MoveToWaypoint_GetResult_Response_type_support_data_t;

static _MoveToWaypoint_GetResult_Response_type_support_data_t _MoveToWaypoint_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveToWaypoint_GetResult_Response_message_typesupport_map = {
  2,
  "drone_interfaces",
  &_MoveToWaypoint_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_MoveToWaypoint_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_MoveToWaypoint_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveToWaypoint_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveToWaypoint_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace drone_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<drone_interfaces::action::MoveToWaypoint_GetResult_Response>()
{
  return &::drone_interfaces::action::rosidl_typesupport_cpp::MoveToWaypoint_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, drone_interfaces, action, MoveToWaypoint_GetResult_Response)() {
  return get_message_type_support_handle<drone_interfaces::action::MoveToWaypoint_GetResult_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "drone_interfaces/action/detail/move_to_waypoint__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace drone_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MoveToWaypoint_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveToWaypoint_GetResult_type_support_ids_t;

static const _MoveToWaypoint_GetResult_type_support_ids_t _MoveToWaypoint_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MoveToWaypoint_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveToWaypoint_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveToWaypoint_GetResult_type_support_symbol_names_t _MoveToWaypoint_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, drone_interfaces, action, MoveToWaypoint_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, drone_interfaces, action, MoveToWaypoint_GetResult)),
  }
};

typedef struct _MoveToWaypoint_GetResult_type_support_data_t
{
  void * data[2];
} _MoveToWaypoint_GetResult_type_support_data_t;

static _MoveToWaypoint_GetResult_type_support_data_t _MoveToWaypoint_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveToWaypoint_GetResult_service_typesupport_map = {
  2,
  "drone_interfaces",
  &_MoveToWaypoint_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_MoveToWaypoint_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_MoveToWaypoint_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t MoveToWaypoint_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveToWaypoint_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace drone_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<drone_interfaces::action::MoveToWaypoint_GetResult>()
{
  return &::drone_interfaces::action::rosidl_typesupport_cpp::MoveToWaypoint_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, drone_interfaces, action, MoveToWaypoint_GetResult)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<drone_interfaces::action::MoveToWaypoint_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "drone_interfaces/action/detail/move_to_waypoint__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace drone_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MoveToWaypoint_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveToWaypoint_FeedbackMessage_type_support_ids_t;

static const _MoveToWaypoint_FeedbackMessage_type_support_ids_t _MoveToWaypoint_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MoveToWaypoint_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveToWaypoint_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveToWaypoint_FeedbackMessage_type_support_symbol_names_t _MoveToWaypoint_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, drone_interfaces, action, MoveToWaypoint_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, drone_interfaces, action, MoveToWaypoint_FeedbackMessage)),
  }
};

typedef struct _MoveToWaypoint_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _MoveToWaypoint_FeedbackMessage_type_support_data_t;

static _MoveToWaypoint_FeedbackMessage_type_support_data_t _MoveToWaypoint_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveToWaypoint_FeedbackMessage_message_typesupport_map = {
  2,
  "drone_interfaces",
  &_MoveToWaypoint_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_MoveToWaypoint_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_MoveToWaypoint_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveToWaypoint_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveToWaypoint_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace drone_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<drone_interfaces::action::MoveToWaypoint_FeedbackMessage>()
{
  return &::drone_interfaces::action::rosidl_typesupport_cpp::MoveToWaypoint_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, drone_interfaces, action, MoveToWaypoint_FeedbackMessage)() {
  return get_message_type_support_handle<drone_interfaces::action::MoveToWaypoint_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "drone_interfaces/action/detail/move_to_waypoint__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace drone_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t MoveToWaypoint_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace drone_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<drone_interfaces::action::MoveToWaypoint>()
{
  using ::drone_interfaces::action::rosidl_typesupport_cpp::MoveToWaypoint_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  MoveToWaypoint_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::drone_interfaces::action::MoveToWaypoint::Impl::SendGoalService>();
  MoveToWaypoint_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::drone_interfaces::action::MoveToWaypoint::Impl::GetResultService>();
  MoveToWaypoint_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::drone_interfaces::action::MoveToWaypoint::Impl::CancelGoalService>();
  MoveToWaypoint_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::drone_interfaces::action::MoveToWaypoint::Impl::FeedbackMessage>();
  MoveToWaypoint_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::drone_interfaces::action::MoveToWaypoint::Impl::GoalStatusMessage>();
  return &MoveToWaypoint_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(rosidl_typesupport_cpp, drone_interfaces, action, MoveToWaypoint)() {
  return ::rosidl_typesupport_cpp::get_action_type_support_handle<drone_interfaces::action::MoveToWaypoint>();
}

#ifdef __cplusplus
}
#endif
