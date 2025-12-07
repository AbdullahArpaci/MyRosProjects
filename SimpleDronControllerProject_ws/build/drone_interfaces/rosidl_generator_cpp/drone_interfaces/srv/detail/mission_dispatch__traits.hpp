// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from drone_interfaces:srv/MissionDispatch.idl
// generated code does not contain a copyright notice

#ifndef DRONE_INTERFACES__SRV__DETAIL__MISSION_DISPATCH__TRAITS_HPP_
#define DRONE_INTERFACES__SRV__DETAIL__MISSION_DISPATCH__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "drone_interfaces/srv/detail/mission_dispatch__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace drone_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const MissionDispatch_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: target_drone_id
  {
    out << "target_drone_id: ";
    rosidl_generator_traits::value_to_yaml(msg.target_drone_id, out);
    out << ", ";
  }

  // member: target_loc
  {
    if (msg.target_loc.size() == 0) {
      out << "target_loc: []";
    } else {
      out << "target_loc: [";
      size_t pending_items = msg.target_loc.size();
      for (auto item : msg.target_loc) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: mission_type
  {
    out << "mission_type: ";
    rosidl_generator_traits::value_to_yaml(msg.mission_type, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MissionDispatch_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: target_drone_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_drone_id: ";
    rosidl_generator_traits::value_to_yaml(msg.target_drone_id, out);
    out << "\n";
  }

  // member: target_loc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.target_loc.size() == 0) {
      out << "target_loc: []\n";
    } else {
      out << "target_loc:\n";
      for (auto item : msg.target_loc) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: mission_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mission_type: ";
    rosidl_generator_traits::value_to_yaml(msg.mission_type, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MissionDispatch_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace drone_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use drone_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const drone_interfaces::srv::MissionDispatch_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  drone_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use drone_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const drone_interfaces::srv::MissionDispatch_Request & msg)
{
  return drone_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<drone_interfaces::srv::MissionDispatch_Request>()
{
  return "drone_interfaces::srv::MissionDispatch_Request";
}

template<>
inline const char * name<drone_interfaces::srv::MissionDispatch_Request>()
{
  return "drone_interfaces/srv/MissionDispatch_Request";
}

template<>
struct has_fixed_size<drone_interfaces::srv::MissionDispatch_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<drone_interfaces::srv::MissionDispatch_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<drone_interfaces::srv::MissionDispatch_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace drone_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const MissionDispatch_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: status_message
  {
    out << "status_message: ";
    rosidl_generator_traits::value_to_yaml(msg.status_message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MissionDispatch_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: status_message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_message: ";
    rosidl_generator_traits::value_to_yaml(msg.status_message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MissionDispatch_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace drone_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use drone_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const drone_interfaces::srv::MissionDispatch_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  drone_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use drone_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const drone_interfaces::srv::MissionDispatch_Response & msg)
{
  return drone_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<drone_interfaces::srv::MissionDispatch_Response>()
{
  return "drone_interfaces::srv::MissionDispatch_Response";
}

template<>
inline const char * name<drone_interfaces::srv::MissionDispatch_Response>()
{
  return "drone_interfaces/srv/MissionDispatch_Response";
}

template<>
struct has_fixed_size<drone_interfaces::srv::MissionDispatch_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<drone_interfaces::srv::MissionDispatch_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<drone_interfaces::srv::MissionDispatch_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<drone_interfaces::srv::MissionDispatch>()
{
  return "drone_interfaces::srv::MissionDispatch";
}

template<>
inline const char * name<drone_interfaces::srv::MissionDispatch>()
{
  return "drone_interfaces/srv/MissionDispatch";
}

template<>
struct has_fixed_size<drone_interfaces::srv::MissionDispatch>
  : std::integral_constant<
    bool,
    has_fixed_size<drone_interfaces::srv::MissionDispatch_Request>::value &&
    has_fixed_size<drone_interfaces::srv::MissionDispatch_Response>::value
  >
{
};

template<>
struct has_bounded_size<drone_interfaces::srv::MissionDispatch>
  : std::integral_constant<
    bool,
    has_bounded_size<drone_interfaces::srv::MissionDispatch_Request>::value &&
    has_bounded_size<drone_interfaces::srv::MissionDispatch_Response>::value
  >
{
};

template<>
struct is_service<drone_interfaces::srv::MissionDispatch>
  : std::true_type
{
};

template<>
struct is_service_request<drone_interfaces::srv::MissionDispatch_Request>
  : std::true_type
{
};

template<>
struct is_service_response<drone_interfaces::srv::MissionDispatch_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // DRONE_INTERFACES__SRV__DETAIL__MISSION_DISPATCH__TRAITS_HPP_
