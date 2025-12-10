// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from drone_interfaces:action/MoveToWaypoint.idl
// generated code does not contain a copyright notice

#ifndef DRONE_INTERFACES__ACTION__DETAIL__MOVE_TO_WAYPOINT__BUILDER_HPP_
#define DRONE_INTERFACES__ACTION__DETAIL__MOVE_TO_WAYPOINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "drone_interfaces/action/detail/move_to_waypoint__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace drone_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveToWaypoint_Goal_target_loc
{
public:
  Init_MoveToWaypoint_Goal_target_loc()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::drone_interfaces::action::MoveToWaypoint_Goal target_loc(::drone_interfaces::action::MoveToWaypoint_Goal::_target_loc_type arg)
  {
    msg_.target_loc = std::move(arg);
    return std::move(msg_);
  }

private:
  ::drone_interfaces::action::MoveToWaypoint_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::drone_interfaces::action::MoveToWaypoint_Goal>()
{
  return drone_interfaces::action::builder::Init_MoveToWaypoint_Goal_target_loc();
}

}  // namespace drone_interfaces


namespace drone_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveToWaypoint_Result_message
{
public:
  explicit Init_MoveToWaypoint_Result_message(::drone_interfaces::action::MoveToWaypoint_Result & msg)
  : msg_(msg)
  {}
  ::drone_interfaces::action::MoveToWaypoint_Result message(::drone_interfaces::action::MoveToWaypoint_Result::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::drone_interfaces::action::MoveToWaypoint_Result msg_;
};

class Init_MoveToWaypoint_Result_success
{
public:
  Init_MoveToWaypoint_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveToWaypoint_Result_message success(::drone_interfaces::action::MoveToWaypoint_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_MoveToWaypoint_Result_message(msg_);
  }

private:
  ::drone_interfaces::action::MoveToWaypoint_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::drone_interfaces::action::MoveToWaypoint_Result>()
{
  return drone_interfaces::action::builder::Init_MoveToWaypoint_Result_success();
}

}  // namespace drone_interfaces


namespace drone_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveToWaypoint_Feedback_battery_remaining
{
public:
  explicit Init_MoveToWaypoint_Feedback_battery_remaining(::drone_interfaces::action::MoveToWaypoint_Feedback & msg)
  : msg_(msg)
  {}
  ::drone_interfaces::action::MoveToWaypoint_Feedback battery_remaining(::drone_interfaces::action::MoveToWaypoint_Feedback::_battery_remaining_type arg)
  {
    msg_.battery_remaining = std::move(arg);
    return std::move(msg_);
  }

private:
  ::drone_interfaces::action::MoveToWaypoint_Feedback msg_;
};

class Init_MoveToWaypoint_Feedback_current_distance
{
public:
  Init_MoveToWaypoint_Feedback_current_distance()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveToWaypoint_Feedback_battery_remaining current_distance(::drone_interfaces::action::MoveToWaypoint_Feedback::_current_distance_type arg)
  {
    msg_.current_distance = std::move(arg);
    return Init_MoveToWaypoint_Feedback_battery_remaining(msg_);
  }

private:
  ::drone_interfaces::action::MoveToWaypoint_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::drone_interfaces::action::MoveToWaypoint_Feedback>()
{
  return drone_interfaces::action::builder::Init_MoveToWaypoint_Feedback_current_distance();
}

}  // namespace drone_interfaces


namespace drone_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveToWaypoint_SendGoal_Request_goal
{
public:
  explicit Init_MoveToWaypoint_SendGoal_Request_goal(::drone_interfaces::action::MoveToWaypoint_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::drone_interfaces::action::MoveToWaypoint_SendGoal_Request goal(::drone_interfaces::action::MoveToWaypoint_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::drone_interfaces::action::MoveToWaypoint_SendGoal_Request msg_;
};

class Init_MoveToWaypoint_SendGoal_Request_goal_id
{
public:
  Init_MoveToWaypoint_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveToWaypoint_SendGoal_Request_goal goal_id(::drone_interfaces::action::MoveToWaypoint_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MoveToWaypoint_SendGoal_Request_goal(msg_);
  }

private:
  ::drone_interfaces::action::MoveToWaypoint_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::drone_interfaces::action::MoveToWaypoint_SendGoal_Request>()
{
  return drone_interfaces::action::builder::Init_MoveToWaypoint_SendGoal_Request_goal_id();
}

}  // namespace drone_interfaces


namespace drone_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveToWaypoint_SendGoal_Response_stamp
{
public:
  explicit Init_MoveToWaypoint_SendGoal_Response_stamp(::drone_interfaces::action::MoveToWaypoint_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::drone_interfaces::action::MoveToWaypoint_SendGoal_Response stamp(::drone_interfaces::action::MoveToWaypoint_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::drone_interfaces::action::MoveToWaypoint_SendGoal_Response msg_;
};

class Init_MoveToWaypoint_SendGoal_Response_accepted
{
public:
  Init_MoveToWaypoint_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveToWaypoint_SendGoal_Response_stamp accepted(::drone_interfaces::action::MoveToWaypoint_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_MoveToWaypoint_SendGoal_Response_stamp(msg_);
  }

private:
  ::drone_interfaces::action::MoveToWaypoint_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::drone_interfaces::action::MoveToWaypoint_SendGoal_Response>()
{
  return drone_interfaces::action::builder::Init_MoveToWaypoint_SendGoal_Response_accepted();
}

}  // namespace drone_interfaces


namespace drone_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveToWaypoint_GetResult_Request_goal_id
{
public:
  Init_MoveToWaypoint_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::drone_interfaces::action::MoveToWaypoint_GetResult_Request goal_id(::drone_interfaces::action::MoveToWaypoint_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::drone_interfaces::action::MoveToWaypoint_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::drone_interfaces::action::MoveToWaypoint_GetResult_Request>()
{
  return drone_interfaces::action::builder::Init_MoveToWaypoint_GetResult_Request_goal_id();
}

}  // namespace drone_interfaces


namespace drone_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveToWaypoint_GetResult_Response_result
{
public:
  explicit Init_MoveToWaypoint_GetResult_Response_result(::drone_interfaces::action::MoveToWaypoint_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::drone_interfaces::action::MoveToWaypoint_GetResult_Response result(::drone_interfaces::action::MoveToWaypoint_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::drone_interfaces::action::MoveToWaypoint_GetResult_Response msg_;
};

class Init_MoveToWaypoint_GetResult_Response_status
{
public:
  Init_MoveToWaypoint_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveToWaypoint_GetResult_Response_result status(::drone_interfaces::action::MoveToWaypoint_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_MoveToWaypoint_GetResult_Response_result(msg_);
  }

private:
  ::drone_interfaces::action::MoveToWaypoint_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::drone_interfaces::action::MoveToWaypoint_GetResult_Response>()
{
  return drone_interfaces::action::builder::Init_MoveToWaypoint_GetResult_Response_status();
}

}  // namespace drone_interfaces


namespace drone_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveToWaypoint_FeedbackMessage_feedback
{
public:
  explicit Init_MoveToWaypoint_FeedbackMessage_feedback(::drone_interfaces::action::MoveToWaypoint_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::drone_interfaces::action::MoveToWaypoint_FeedbackMessage feedback(::drone_interfaces::action::MoveToWaypoint_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::drone_interfaces::action::MoveToWaypoint_FeedbackMessage msg_;
};

class Init_MoveToWaypoint_FeedbackMessage_goal_id
{
public:
  Init_MoveToWaypoint_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveToWaypoint_FeedbackMessage_feedback goal_id(::drone_interfaces::action::MoveToWaypoint_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MoveToWaypoint_FeedbackMessage_feedback(msg_);
  }

private:
  ::drone_interfaces::action::MoveToWaypoint_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::drone_interfaces::action::MoveToWaypoint_FeedbackMessage>()
{
  return drone_interfaces::action::builder::Init_MoveToWaypoint_FeedbackMessage_goal_id();
}

}  // namespace drone_interfaces

#endif  // DRONE_INTERFACES__ACTION__DETAIL__MOVE_TO_WAYPOINT__BUILDER_HPP_
