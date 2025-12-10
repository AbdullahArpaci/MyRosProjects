// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from drone_interfaces:action/MoveToWaypoint.idl
// generated code does not contain a copyright notice

#ifndef DRONE_INTERFACES__ACTION__DETAIL__MOVE_TO_WAYPOINT__TRAITS_HPP_
#define DRONE_INTERFACES__ACTION__DETAIL__MOVE_TO_WAYPOINT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "drone_interfaces/action/detail/move_to_waypoint__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace drone_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveToWaypoint_Goal & msg,
  std::ostream & out)
{
  out << "{";
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
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveToWaypoint_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveToWaypoint_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace drone_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use drone_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const drone_interfaces::action::MoveToWaypoint_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  drone_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use drone_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const drone_interfaces::action::MoveToWaypoint_Goal & msg)
{
  return drone_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<drone_interfaces::action::MoveToWaypoint_Goal>()
{
  return "drone_interfaces::action::MoveToWaypoint_Goal";
}

template<>
inline const char * name<drone_interfaces::action::MoveToWaypoint_Goal>()
{
  return "drone_interfaces/action/MoveToWaypoint_Goal";
}

template<>
struct has_fixed_size<drone_interfaces::action::MoveToWaypoint_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<drone_interfaces::action::MoveToWaypoint_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<drone_interfaces::action::MoveToWaypoint_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace drone_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveToWaypoint_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveToWaypoint_Result & msg,
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

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveToWaypoint_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace drone_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use drone_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const drone_interfaces::action::MoveToWaypoint_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  drone_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use drone_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const drone_interfaces::action::MoveToWaypoint_Result & msg)
{
  return drone_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<drone_interfaces::action::MoveToWaypoint_Result>()
{
  return "drone_interfaces::action::MoveToWaypoint_Result";
}

template<>
inline const char * name<drone_interfaces::action::MoveToWaypoint_Result>()
{
  return "drone_interfaces/action/MoveToWaypoint_Result";
}

template<>
struct has_fixed_size<drone_interfaces::action::MoveToWaypoint_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<drone_interfaces::action::MoveToWaypoint_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<drone_interfaces::action::MoveToWaypoint_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace drone_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveToWaypoint_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: current_distance
  {
    out << "current_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.current_distance, out);
    out << ", ";
  }

  // member: battery_remaining
  {
    out << "battery_remaining: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_remaining, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveToWaypoint_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: current_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.current_distance, out);
    out << "\n";
  }

  // member: battery_remaining
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_remaining: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_remaining, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveToWaypoint_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace drone_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use drone_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const drone_interfaces::action::MoveToWaypoint_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  drone_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use drone_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const drone_interfaces::action::MoveToWaypoint_Feedback & msg)
{
  return drone_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<drone_interfaces::action::MoveToWaypoint_Feedback>()
{
  return "drone_interfaces::action::MoveToWaypoint_Feedback";
}

template<>
inline const char * name<drone_interfaces::action::MoveToWaypoint_Feedback>()
{
  return "drone_interfaces/action/MoveToWaypoint_Feedback";
}

template<>
struct has_fixed_size<drone_interfaces::action::MoveToWaypoint_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<drone_interfaces::action::MoveToWaypoint_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<drone_interfaces::action::MoveToWaypoint_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "drone_interfaces/action/detail/move_to_waypoint__traits.hpp"

namespace drone_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveToWaypoint_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveToWaypoint_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveToWaypoint_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace drone_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use drone_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const drone_interfaces::action::MoveToWaypoint_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  drone_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use drone_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const drone_interfaces::action::MoveToWaypoint_SendGoal_Request & msg)
{
  return drone_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<drone_interfaces::action::MoveToWaypoint_SendGoal_Request>()
{
  return "drone_interfaces::action::MoveToWaypoint_SendGoal_Request";
}

template<>
inline const char * name<drone_interfaces::action::MoveToWaypoint_SendGoal_Request>()
{
  return "drone_interfaces/action/MoveToWaypoint_SendGoal_Request";
}

template<>
struct has_fixed_size<drone_interfaces::action::MoveToWaypoint_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<drone_interfaces::action::MoveToWaypoint_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<drone_interfaces::action::MoveToWaypoint_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<drone_interfaces::action::MoveToWaypoint_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<drone_interfaces::action::MoveToWaypoint_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace drone_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveToWaypoint_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveToWaypoint_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveToWaypoint_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace drone_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use drone_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const drone_interfaces::action::MoveToWaypoint_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  drone_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use drone_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const drone_interfaces::action::MoveToWaypoint_SendGoal_Response & msg)
{
  return drone_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<drone_interfaces::action::MoveToWaypoint_SendGoal_Response>()
{
  return "drone_interfaces::action::MoveToWaypoint_SendGoal_Response";
}

template<>
inline const char * name<drone_interfaces::action::MoveToWaypoint_SendGoal_Response>()
{
  return "drone_interfaces/action/MoveToWaypoint_SendGoal_Response";
}

template<>
struct has_fixed_size<drone_interfaces::action::MoveToWaypoint_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<drone_interfaces::action::MoveToWaypoint_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<drone_interfaces::action::MoveToWaypoint_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<drone_interfaces::action::MoveToWaypoint_SendGoal>()
{
  return "drone_interfaces::action::MoveToWaypoint_SendGoal";
}

template<>
inline const char * name<drone_interfaces::action::MoveToWaypoint_SendGoal>()
{
  return "drone_interfaces/action/MoveToWaypoint_SendGoal";
}

template<>
struct has_fixed_size<drone_interfaces::action::MoveToWaypoint_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<drone_interfaces::action::MoveToWaypoint_SendGoal_Request>::value &&
    has_fixed_size<drone_interfaces::action::MoveToWaypoint_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<drone_interfaces::action::MoveToWaypoint_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<drone_interfaces::action::MoveToWaypoint_SendGoal_Request>::value &&
    has_bounded_size<drone_interfaces::action::MoveToWaypoint_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<drone_interfaces::action::MoveToWaypoint_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<drone_interfaces::action::MoveToWaypoint_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<drone_interfaces::action::MoveToWaypoint_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace drone_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveToWaypoint_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveToWaypoint_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveToWaypoint_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace drone_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use drone_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const drone_interfaces::action::MoveToWaypoint_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  drone_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use drone_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const drone_interfaces::action::MoveToWaypoint_GetResult_Request & msg)
{
  return drone_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<drone_interfaces::action::MoveToWaypoint_GetResult_Request>()
{
  return "drone_interfaces::action::MoveToWaypoint_GetResult_Request";
}

template<>
inline const char * name<drone_interfaces::action::MoveToWaypoint_GetResult_Request>()
{
  return "drone_interfaces/action/MoveToWaypoint_GetResult_Request";
}

template<>
struct has_fixed_size<drone_interfaces::action::MoveToWaypoint_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<drone_interfaces::action::MoveToWaypoint_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<drone_interfaces::action::MoveToWaypoint_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "drone_interfaces/action/detail/move_to_waypoint__traits.hpp"

namespace drone_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveToWaypoint_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveToWaypoint_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveToWaypoint_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace drone_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use drone_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const drone_interfaces::action::MoveToWaypoint_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  drone_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use drone_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const drone_interfaces::action::MoveToWaypoint_GetResult_Response & msg)
{
  return drone_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<drone_interfaces::action::MoveToWaypoint_GetResult_Response>()
{
  return "drone_interfaces::action::MoveToWaypoint_GetResult_Response";
}

template<>
inline const char * name<drone_interfaces::action::MoveToWaypoint_GetResult_Response>()
{
  return "drone_interfaces/action/MoveToWaypoint_GetResult_Response";
}

template<>
struct has_fixed_size<drone_interfaces::action::MoveToWaypoint_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<drone_interfaces::action::MoveToWaypoint_Result>::value> {};

template<>
struct has_bounded_size<drone_interfaces::action::MoveToWaypoint_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<drone_interfaces::action::MoveToWaypoint_Result>::value> {};

template<>
struct is_message<drone_interfaces::action::MoveToWaypoint_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<drone_interfaces::action::MoveToWaypoint_GetResult>()
{
  return "drone_interfaces::action::MoveToWaypoint_GetResult";
}

template<>
inline const char * name<drone_interfaces::action::MoveToWaypoint_GetResult>()
{
  return "drone_interfaces/action/MoveToWaypoint_GetResult";
}

template<>
struct has_fixed_size<drone_interfaces::action::MoveToWaypoint_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<drone_interfaces::action::MoveToWaypoint_GetResult_Request>::value &&
    has_fixed_size<drone_interfaces::action::MoveToWaypoint_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<drone_interfaces::action::MoveToWaypoint_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<drone_interfaces::action::MoveToWaypoint_GetResult_Request>::value &&
    has_bounded_size<drone_interfaces::action::MoveToWaypoint_GetResult_Response>::value
  >
{
};

template<>
struct is_service<drone_interfaces::action::MoveToWaypoint_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<drone_interfaces::action::MoveToWaypoint_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<drone_interfaces::action::MoveToWaypoint_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "drone_interfaces/action/detail/move_to_waypoint__traits.hpp"

namespace drone_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveToWaypoint_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveToWaypoint_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveToWaypoint_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace drone_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use drone_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const drone_interfaces::action::MoveToWaypoint_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  drone_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use drone_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const drone_interfaces::action::MoveToWaypoint_FeedbackMessage & msg)
{
  return drone_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<drone_interfaces::action::MoveToWaypoint_FeedbackMessage>()
{
  return "drone_interfaces::action::MoveToWaypoint_FeedbackMessage";
}

template<>
inline const char * name<drone_interfaces::action::MoveToWaypoint_FeedbackMessage>()
{
  return "drone_interfaces/action/MoveToWaypoint_FeedbackMessage";
}

template<>
struct has_fixed_size<drone_interfaces::action::MoveToWaypoint_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<drone_interfaces::action::MoveToWaypoint_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<drone_interfaces::action::MoveToWaypoint_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<drone_interfaces::action::MoveToWaypoint_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<drone_interfaces::action::MoveToWaypoint_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<drone_interfaces::action::MoveToWaypoint>
  : std::true_type
{
};

template<>
struct is_action_goal<drone_interfaces::action::MoveToWaypoint_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<drone_interfaces::action::MoveToWaypoint_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<drone_interfaces::action::MoveToWaypoint_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // DRONE_INTERFACES__ACTION__DETAIL__MOVE_TO_WAYPOINT__TRAITS_HPP_
