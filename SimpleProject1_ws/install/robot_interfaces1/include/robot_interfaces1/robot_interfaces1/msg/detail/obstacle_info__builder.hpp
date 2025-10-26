// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_interfaces1:msg/ObstacleInfo.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES1__MSG__DETAIL__OBSTACLE_INFO__BUILDER_HPP_
#define ROBOT_INTERFACES1__MSG__DETAIL__OBSTACLE_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_interfaces1/msg/detail/obstacle_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_interfaces1
{

namespace msg
{

namespace builder
{

class Init_ObstacleInfo_distance
{
public:
  explicit Init_ObstacleInfo_distance(::robot_interfaces1::msg::ObstacleInfo & msg)
  : msg_(msg)
  {}
  ::robot_interfaces1::msg::ObstacleInfo distance(::robot_interfaces1::msg::ObstacleInfo::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_interfaces1::msg::ObstacleInfo msg_;
};

class Init_ObstacleInfo_found
{
public:
  Init_ObstacleInfo_found()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObstacleInfo_distance found(::robot_interfaces1::msg::ObstacleInfo::_found_type arg)
  {
    msg_.found = std::move(arg);
    return Init_ObstacleInfo_distance(msg_);
  }

private:
  ::robot_interfaces1::msg::ObstacleInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_interfaces1::msg::ObstacleInfo>()
{
  return robot_interfaces1::msg::builder::Init_ObstacleInfo_found();
}

}  // namespace robot_interfaces1

#endif  // ROBOT_INTERFACES1__MSG__DETAIL__OBSTACLE_INFO__BUILDER_HPP_
