// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from drone_interfaces:action/ScanSurroundings.idl
// generated code does not contain a copyright notice

#ifndef DRONE_INTERFACES__ACTION__DETAIL__SCAN_SURROUNDINGS__BUILDER_HPP_
#define DRONE_INTERFACES__ACTION__DETAIL__SCAN_SURROUNDINGS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "drone_interfaces/action/detail/scan_surroundings__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace drone_interfaces
{

namespace action
{

namespace builder
{

class Init_ScanSurroundings_Goal_target_angle
{
public:
  Init_ScanSurroundings_Goal_target_angle()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::drone_interfaces::action::ScanSurroundings_Goal target_angle(::drone_interfaces::action::ScanSurroundings_Goal::_target_angle_type arg)
  {
    msg_.target_angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::drone_interfaces::action::ScanSurroundings_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::drone_interfaces::action::ScanSurroundings_Goal>()
{
  return drone_interfaces::action::builder::Init_ScanSurroundings_Goal_target_angle();
}

}  // namespace drone_interfaces


namespace drone_interfaces
{

namespace action
{

namespace builder
{

class Init_ScanSurroundings_Result_success
{
public:
  explicit Init_ScanSurroundings_Result_success(::drone_interfaces::action::ScanSurroundings_Result & msg)
  : msg_(msg)
  {}
  ::drone_interfaces::action::ScanSurroundings_Result success(::drone_interfaces::action::ScanSurroundings_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::drone_interfaces::action::ScanSurroundings_Result msg_;
};

class Init_ScanSurroundings_Result_detected_objects
{
public:
  Init_ScanSurroundings_Result_detected_objects()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ScanSurroundings_Result_success detected_objects(::drone_interfaces::action::ScanSurroundings_Result::_detected_objects_type arg)
  {
    msg_.detected_objects = std::move(arg);
    return Init_ScanSurroundings_Result_success(msg_);
  }

private:
  ::drone_interfaces::action::ScanSurroundings_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::drone_interfaces::action::ScanSurroundings_Result>()
{
  return drone_interfaces::action::builder::Init_ScanSurroundings_Result_detected_objects();
}

}  // namespace drone_interfaces


namespace drone_interfaces
{

namespace action
{

namespace builder
{

class Init_ScanSurroundings_Feedback_percent_complete
{
public:
  explicit Init_ScanSurroundings_Feedback_percent_complete(::drone_interfaces::action::ScanSurroundings_Feedback & msg)
  : msg_(msg)
  {}
  ::drone_interfaces::action::ScanSurroundings_Feedback percent_complete(::drone_interfaces::action::ScanSurroundings_Feedback::_percent_complete_type arg)
  {
    msg_.percent_complete = std::move(arg);
    return std::move(msg_);
  }

private:
  ::drone_interfaces::action::ScanSurroundings_Feedback msg_;
};

class Init_ScanSurroundings_Feedback_current_angle
{
public:
  Init_ScanSurroundings_Feedback_current_angle()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ScanSurroundings_Feedback_percent_complete current_angle(::drone_interfaces::action::ScanSurroundings_Feedback::_current_angle_type arg)
  {
    msg_.current_angle = std::move(arg);
    return Init_ScanSurroundings_Feedback_percent_complete(msg_);
  }

private:
  ::drone_interfaces::action::ScanSurroundings_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::drone_interfaces::action::ScanSurroundings_Feedback>()
{
  return drone_interfaces::action::builder::Init_ScanSurroundings_Feedback_current_angle();
}

}  // namespace drone_interfaces


namespace drone_interfaces
{

namespace action
{

namespace builder
{

class Init_ScanSurroundings_SendGoal_Request_goal
{
public:
  explicit Init_ScanSurroundings_SendGoal_Request_goal(::drone_interfaces::action::ScanSurroundings_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::drone_interfaces::action::ScanSurroundings_SendGoal_Request goal(::drone_interfaces::action::ScanSurroundings_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::drone_interfaces::action::ScanSurroundings_SendGoal_Request msg_;
};

class Init_ScanSurroundings_SendGoal_Request_goal_id
{
public:
  Init_ScanSurroundings_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ScanSurroundings_SendGoal_Request_goal goal_id(::drone_interfaces::action::ScanSurroundings_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ScanSurroundings_SendGoal_Request_goal(msg_);
  }

private:
  ::drone_interfaces::action::ScanSurroundings_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::drone_interfaces::action::ScanSurroundings_SendGoal_Request>()
{
  return drone_interfaces::action::builder::Init_ScanSurroundings_SendGoal_Request_goal_id();
}

}  // namespace drone_interfaces


namespace drone_interfaces
{

namespace action
{

namespace builder
{

class Init_ScanSurroundings_SendGoal_Response_stamp
{
public:
  explicit Init_ScanSurroundings_SendGoal_Response_stamp(::drone_interfaces::action::ScanSurroundings_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::drone_interfaces::action::ScanSurroundings_SendGoal_Response stamp(::drone_interfaces::action::ScanSurroundings_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::drone_interfaces::action::ScanSurroundings_SendGoal_Response msg_;
};

class Init_ScanSurroundings_SendGoal_Response_accepted
{
public:
  Init_ScanSurroundings_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ScanSurroundings_SendGoal_Response_stamp accepted(::drone_interfaces::action::ScanSurroundings_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_ScanSurroundings_SendGoal_Response_stamp(msg_);
  }

private:
  ::drone_interfaces::action::ScanSurroundings_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::drone_interfaces::action::ScanSurroundings_SendGoal_Response>()
{
  return drone_interfaces::action::builder::Init_ScanSurroundings_SendGoal_Response_accepted();
}

}  // namespace drone_interfaces


namespace drone_interfaces
{

namespace action
{

namespace builder
{

class Init_ScanSurroundings_GetResult_Request_goal_id
{
public:
  Init_ScanSurroundings_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::drone_interfaces::action::ScanSurroundings_GetResult_Request goal_id(::drone_interfaces::action::ScanSurroundings_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::drone_interfaces::action::ScanSurroundings_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::drone_interfaces::action::ScanSurroundings_GetResult_Request>()
{
  return drone_interfaces::action::builder::Init_ScanSurroundings_GetResult_Request_goal_id();
}

}  // namespace drone_interfaces


namespace drone_interfaces
{

namespace action
{

namespace builder
{

class Init_ScanSurroundings_GetResult_Response_result
{
public:
  explicit Init_ScanSurroundings_GetResult_Response_result(::drone_interfaces::action::ScanSurroundings_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::drone_interfaces::action::ScanSurroundings_GetResult_Response result(::drone_interfaces::action::ScanSurroundings_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::drone_interfaces::action::ScanSurroundings_GetResult_Response msg_;
};

class Init_ScanSurroundings_GetResult_Response_status
{
public:
  Init_ScanSurroundings_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ScanSurroundings_GetResult_Response_result status(::drone_interfaces::action::ScanSurroundings_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_ScanSurroundings_GetResult_Response_result(msg_);
  }

private:
  ::drone_interfaces::action::ScanSurroundings_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::drone_interfaces::action::ScanSurroundings_GetResult_Response>()
{
  return drone_interfaces::action::builder::Init_ScanSurroundings_GetResult_Response_status();
}

}  // namespace drone_interfaces


namespace drone_interfaces
{

namespace action
{

namespace builder
{

class Init_ScanSurroundings_FeedbackMessage_feedback
{
public:
  explicit Init_ScanSurroundings_FeedbackMessage_feedback(::drone_interfaces::action::ScanSurroundings_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::drone_interfaces::action::ScanSurroundings_FeedbackMessage feedback(::drone_interfaces::action::ScanSurroundings_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::drone_interfaces::action::ScanSurroundings_FeedbackMessage msg_;
};

class Init_ScanSurroundings_FeedbackMessage_goal_id
{
public:
  Init_ScanSurroundings_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ScanSurroundings_FeedbackMessage_feedback goal_id(::drone_interfaces::action::ScanSurroundings_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ScanSurroundings_FeedbackMessage_feedback(msg_);
  }

private:
  ::drone_interfaces::action::ScanSurroundings_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::drone_interfaces::action::ScanSurroundings_FeedbackMessage>()
{
  return drone_interfaces::action::builder::Init_ScanSurroundings_FeedbackMessage_goal_id();
}

}  // namespace drone_interfaces

#endif  // DRONE_INTERFACES__ACTION__DETAIL__SCAN_SURROUNDINGS__BUILDER_HPP_
