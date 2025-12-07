// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from drone_interfaces:msg/DroneTelemetry.idl
// generated code does not contain a copyright notice

#ifndef DRONE_INTERFACES__MSG__DETAIL__DRONE_TELEMETRY__BUILDER_HPP_
#define DRONE_INTERFACES__MSG__DETAIL__DRONE_TELEMETRY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "drone_interfaces/msg/detail/drone_telemetry__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace drone_interfaces
{

namespace msg
{

namespace builder
{

class Init_DroneTelemetry_position
{
public:
  explicit Init_DroneTelemetry_position(::drone_interfaces::msg::DroneTelemetry & msg)
  : msg_(msg)
  {}
  ::drone_interfaces::msg::DroneTelemetry position(::drone_interfaces::msg::DroneTelemetry::_position_type arg)
  {
    msg_.position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::drone_interfaces::msg::DroneTelemetry msg_;
};

class Init_DroneTelemetry_battery_level
{
public:
  explicit Init_DroneTelemetry_battery_level(::drone_interfaces::msg::DroneTelemetry & msg)
  : msg_(msg)
  {}
  Init_DroneTelemetry_position battery_level(::drone_interfaces::msg::DroneTelemetry::_battery_level_type arg)
  {
    msg_.battery_level = std::move(arg);
    return Init_DroneTelemetry_position(msg_);
  }

private:
  ::drone_interfaces::msg::DroneTelemetry msg_;
};

class Init_DroneTelemetry_flight_mode
{
public:
  explicit Init_DroneTelemetry_flight_mode(::drone_interfaces::msg::DroneTelemetry & msg)
  : msg_(msg)
  {}
  Init_DroneTelemetry_battery_level flight_mode(::drone_interfaces::msg::DroneTelemetry::_flight_mode_type arg)
  {
    msg_.flight_mode = std::move(arg);
    return Init_DroneTelemetry_battery_level(msg_);
  }

private:
  ::drone_interfaces::msg::DroneTelemetry msg_;
};

class Init_DroneTelemetry_drone_id
{
public:
  Init_DroneTelemetry_drone_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DroneTelemetry_flight_mode drone_id(::drone_interfaces::msg::DroneTelemetry::_drone_id_type arg)
  {
    msg_.drone_id = std::move(arg);
    return Init_DroneTelemetry_flight_mode(msg_);
  }

private:
  ::drone_interfaces::msg::DroneTelemetry msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::drone_interfaces::msg::DroneTelemetry>()
{
  return drone_interfaces::msg::builder::Init_DroneTelemetry_drone_id();
}

}  // namespace drone_interfaces

#endif  // DRONE_INTERFACES__MSG__DETAIL__DRONE_TELEMETRY__BUILDER_HPP_
