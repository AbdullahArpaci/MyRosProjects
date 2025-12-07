// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from drone_interfaces:srv/MissionDispatch.idl
// generated code does not contain a copyright notice

#ifndef DRONE_INTERFACES__SRV__DETAIL__MISSION_DISPATCH__BUILDER_HPP_
#define DRONE_INTERFACES__SRV__DETAIL__MISSION_DISPATCH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "drone_interfaces/srv/detail/mission_dispatch__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace drone_interfaces
{

namespace srv
{

namespace builder
{

class Init_MissionDispatch_Request_mission_type
{
public:
  explicit Init_MissionDispatch_Request_mission_type(::drone_interfaces::srv::MissionDispatch_Request & msg)
  : msg_(msg)
  {}
  ::drone_interfaces::srv::MissionDispatch_Request mission_type(::drone_interfaces::srv::MissionDispatch_Request::_mission_type_type arg)
  {
    msg_.mission_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::drone_interfaces::srv::MissionDispatch_Request msg_;
};

class Init_MissionDispatch_Request_target_loc
{
public:
  explicit Init_MissionDispatch_Request_target_loc(::drone_interfaces::srv::MissionDispatch_Request & msg)
  : msg_(msg)
  {}
  Init_MissionDispatch_Request_mission_type target_loc(::drone_interfaces::srv::MissionDispatch_Request::_target_loc_type arg)
  {
    msg_.target_loc = std::move(arg);
    return Init_MissionDispatch_Request_mission_type(msg_);
  }

private:
  ::drone_interfaces::srv::MissionDispatch_Request msg_;
};

class Init_MissionDispatch_Request_target_drone_id
{
public:
  Init_MissionDispatch_Request_target_drone_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MissionDispatch_Request_target_loc target_drone_id(::drone_interfaces::srv::MissionDispatch_Request::_target_drone_id_type arg)
  {
    msg_.target_drone_id = std::move(arg);
    return Init_MissionDispatch_Request_target_loc(msg_);
  }

private:
  ::drone_interfaces::srv::MissionDispatch_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::drone_interfaces::srv::MissionDispatch_Request>()
{
  return drone_interfaces::srv::builder::Init_MissionDispatch_Request_target_drone_id();
}

}  // namespace drone_interfaces


namespace drone_interfaces
{

namespace srv
{

namespace builder
{

class Init_MissionDispatch_Response_status_message
{
public:
  explicit Init_MissionDispatch_Response_status_message(::drone_interfaces::srv::MissionDispatch_Response & msg)
  : msg_(msg)
  {}
  ::drone_interfaces::srv::MissionDispatch_Response status_message(::drone_interfaces::srv::MissionDispatch_Response::_status_message_type arg)
  {
    msg_.status_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::drone_interfaces::srv::MissionDispatch_Response msg_;
};

class Init_MissionDispatch_Response_success
{
public:
  Init_MissionDispatch_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MissionDispatch_Response_status_message success(::drone_interfaces::srv::MissionDispatch_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_MissionDispatch_Response_status_message(msg_);
  }

private:
  ::drone_interfaces::srv::MissionDispatch_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::drone_interfaces::srv::MissionDispatch_Response>()
{
  return drone_interfaces::srv::builder::Init_MissionDispatch_Response_success();
}

}  // namespace drone_interfaces

#endif  // DRONE_INTERFACES__SRV__DETAIL__MISSION_DISPATCH__BUILDER_HPP_
