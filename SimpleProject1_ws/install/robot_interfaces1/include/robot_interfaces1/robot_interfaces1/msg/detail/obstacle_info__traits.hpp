// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robot_interfaces1:msg/ObstacleInfo.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES1__MSG__DETAIL__OBSTACLE_INFO__TRAITS_HPP_
#define ROBOT_INTERFACES1__MSG__DETAIL__OBSTACLE_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robot_interfaces1/msg/detail/obstacle_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace robot_interfaces1
{

namespace msg
{

inline void to_flow_style_yaml(
  const ObstacleInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: found
  {
    out << "found: ";
    rosidl_generator_traits::value_to_yaml(msg.found, out);
    out << ", ";
  }

  // member: distance
  {
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ObstacleInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: found
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "found: ";
    rosidl_generator_traits::value_to_yaml(msg.found, out);
    out << "\n";
  }

  // member: distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ObstacleInfo & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace robot_interfaces1

namespace rosidl_generator_traits
{

[[deprecated("use robot_interfaces1::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robot_interfaces1::msg::ObstacleInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_interfaces1::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_interfaces1::msg::to_yaml() instead")]]
inline std::string to_yaml(const robot_interfaces1::msg::ObstacleInfo & msg)
{
  return robot_interfaces1::msg::to_yaml(msg);
}

template<>
inline const char * data_type<robot_interfaces1::msg::ObstacleInfo>()
{
  return "robot_interfaces1::msg::ObstacleInfo";
}

template<>
inline const char * name<robot_interfaces1::msg::ObstacleInfo>()
{
  return "robot_interfaces1/msg/ObstacleInfo";
}

template<>
struct has_fixed_size<robot_interfaces1::msg::ObstacleInfo>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<robot_interfaces1::msg::ObstacleInfo>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<robot_interfaces1::msg::ObstacleInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBOT_INTERFACES1__MSG__DETAIL__OBSTACLE_INFO__TRAITS_HPP_
