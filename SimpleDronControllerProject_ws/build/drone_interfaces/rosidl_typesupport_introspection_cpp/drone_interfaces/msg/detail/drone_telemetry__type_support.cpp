// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from drone_interfaces:msg/DroneTelemetry.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "drone_interfaces/msg/detail/drone_telemetry__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace drone_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void DroneTelemetry_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) drone_interfaces::msg::DroneTelemetry(_init);
}

void DroneTelemetry_fini_function(void * message_memory)
{
  auto typed_message = static_cast<drone_interfaces::msg::DroneTelemetry *>(message_memory);
  typed_message->~DroneTelemetry();
}

size_t size_function__DroneTelemetry__position(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__DroneTelemetry__position(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__DroneTelemetry__position(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__DroneTelemetry__position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__DroneTelemetry__position(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__DroneTelemetry__position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__DroneTelemetry__position(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DroneTelemetry_message_member_array[4] = {
  {
    "drone_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drone_interfaces::msg::DroneTelemetry, drone_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "flight_mode",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drone_interfaces::msg::DroneTelemetry, flight_mode),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "battery_level",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drone_interfaces::msg::DroneTelemetry, battery_level),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "position",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(drone_interfaces::msg::DroneTelemetry, position),  // bytes offset in struct
    nullptr,  // default value
    size_function__DroneTelemetry__position,  // size() function pointer
    get_const_function__DroneTelemetry__position,  // get_const(index) function pointer
    get_function__DroneTelemetry__position,  // get(index) function pointer
    fetch_function__DroneTelemetry__position,  // fetch(index, &value) function pointer
    assign_function__DroneTelemetry__position,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DroneTelemetry_message_members = {
  "drone_interfaces::msg",  // message namespace
  "DroneTelemetry",  // message name
  4,  // number of fields
  sizeof(drone_interfaces::msg::DroneTelemetry),
  DroneTelemetry_message_member_array,  // message members
  DroneTelemetry_init_function,  // function to initialize message memory (memory has to be allocated)
  DroneTelemetry_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t DroneTelemetry_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DroneTelemetry_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace drone_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<drone_interfaces::msg::DroneTelemetry>()
{
  return &::drone_interfaces::msg::rosidl_typesupport_introspection_cpp::DroneTelemetry_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, drone_interfaces, msg, DroneTelemetry)() {
  return &::drone_interfaces::msg::rosidl_typesupport_introspection_cpp::DroneTelemetry_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
