// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cm_interfaces:action/ComplexMotion.idl
// generated code does not contain a copyright notice

#ifndef CM_INTERFACES__ACTION__DETAIL__COMPLEX_MOTION__BUILDER_HPP_
#define CM_INTERFACES__ACTION__DETAIL__COMPLEX_MOTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "cm_interfaces/action/detail/complex_motion__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace cm_interfaces
{

namespace action
{

namespace builder
{

class Init_ComplexMotion_Goal_request
{
public:
  Init_ComplexMotion_Goal_request()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::cm_interfaces::action::ComplexMotion_Goal request(::cm_interfaces::action::ComplexMotion_Goal::_request_type arg)
  {
    msg_.request = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cm_interfaces::action::ComplexMotion_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::cm_interfaces::action::ComplexMotion_Goal>()
{
  return cm_interfaces::action::builder::Init_ComplexMotion_Goal_request();
}

}  // namespace cm_interfaces


namespace cm_interfaces
{

namespace action
{

namespace builder
{

class Init_ComplexMotion_Result_result
{
public:
  Init_ComplexMotion_Result_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::cm_interfaces::action::ComplexMotion_Result result(::cm_interfaces::action::ComplexMotion_Result::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cm_interfaces::action::ComplexMotion_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::cm_interfaces::action::ComplexMotion_Result>()
{
  return cm_interfaces::action::builder::Init_ComplexMotion_Result_result();
}

}  // namespace cm_interfaces


namespace cm_interfaces
{

namespace action
{

namespace builder
{

class Init_ComplexMotion_Feedback_feedback
{
public:
  Init_ComplexMotion_Feedback_feedback()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::cm_interfaces::action::ComplexMotion_Feedback feedback(::cm_interfaces::action::ComplexMotion_Feedback::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cm_interfaces::action::ComplexMotion_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::cm_interfaces::action::ComplexMotion_Feedback>()
{
  return cm_interfaces::action::builder::Init_ComplexMotion_Feedback_feedback();
}

}  // namespace cm_interfaces


namespace cm_interfaces
{

namespace action
{

namespace builder
{

class Init_ComplexMotion_SendGoal_Request_goal
{
public:
  explicit Init_ComplexMotion_SendGoal_Request_goal(::cm_interfaces::action::ComplexMotion_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::cm_interfaces::action::ComplexMotion_SendGoal_Request goal(::cm_interfaces::action::ComplexMotion_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cm_interfaces::action::ComplexMotion_SendGoal_Request msg_;
};

class Init_ComplexMotion_SendGoal_Request_goal_id
{
public:
  Init_ComplexMotion_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ComplexMotion_SendGoal_Request_goal goal_id(::cm_interfaces::action::ComplexMotion_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ComplexMotion_SendGoal_Request_goal(msg_);
  }

private:
  ::cm_interfaces::action::ComplexMotion_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::cm_interfaces::action::ComplexMotion_SendGoal_Request>()
{
  return cm_interfaces::action::builder::Init_ComplexMotion_SendGoal_Request_goal_id();
}

}  // namespace cm_interfaces


namespace cm_interfaces
{

namespace action
{

namespace builder
{

class Init_ComplexMotion_SendGoal_Response_stamp
{
public:
  explicit Init_ComplexMotion_SendGoal_Response_stamp(::cm_interfaces::action::ComplexMotion_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::cm_interfaces::action::ComplexMotion_SendGoal_Response stamp(::cm_interfaces::action::ComplexMotion_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cm_interfaces::action::ComplexMotion_SendGoal_Response msg_;
};

class Init_ComplexMotion_SendGoal_Response_accepted
{
public:
  Init_ComplexMotion_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ComplexMotion_SendGoal_Response_stamp accepted(::cm_interfaces::action::ComplexMotion_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_ComplexMotion_SendGoal_Response_stamp(msg_);
  }

private:
  ::cm_interfaces::action::ComplexMotion_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::cm_interfaces::action::ComplexMotion_SendGoal_Response>()
{
  return cm_interfaces::action::builder::Init_ComplexMotion_SendGoal_Response_accepted();
}

}  // namespace cm_interfaces


namespace cm_interfaces
{

namespace action
{

namespace builder
{

class Init_ComplexMotion_GetResult_Request_goal_id
{
public:
  Init_ComplexMotion_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::cm_interfaces::action::ComplexMotion_GetResult_Request goal_id(::cm_interfaces::action::ComplexMotion_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cm_interfaces::action::ComplexMotion_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::cm_interfaces::action::ComplexMotion_GetResult_Request>()
{
  return cm_interfaces::action::builder::Init_ComplexMotion_GetResult_Request_goal_id();
}

}  // namespace cm_interfaces


namespace cm_interfaces
{

namespace action
{

namespace builder
{

class Init_ComplexMotion_GetResult_Response_result
{
public:
  explicit Init_ComplexMotion_GetResult_Response_result(::cm_interfaces::action::ComplexMotion_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::cm_interfaces::action::ComplexMotion_GetResult_Response result(::cm_interfaces::action::ComplexMotion_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cm_interfaces::action::ComplexMotion_GetResult_Response msg_;
};

class Init_ComplexMotion_GetResult_Response_status
{
public:
  Init_ComplexMotion_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ComplexMotion_GetResult_Response_result status(::cm_interfaces::action::ComplexMotion_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_ComplexMotion_GetResult_Response_result(msg_);
  }

private:
  ::cm_interfaces::action::ComplexMotion_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::cm_interfaces::action::ComplexMotion_GetResult_Response>()
{
  return cm_interfaces::action::builder::Init_ComplexMotion_GetResult_Response_status();
}

}  // namespace cm_interfaces


namespace cm_interfaces
{

namespace action
{

namespace builder
{

class Init_ComplexMotion_FeedbackMessage_feedback
{
public:
  explicit Init_ComplexMotion_FeedbackMessage_feedback(::cm_interfaces::action::ComplexMotion_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::cm_interfaces::action::ComplexMotion_FeedbackMessage feedback(::cm_interfaces::action::ComplexMotion_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cm_interfaces::action::ComplexMotion_FeedbackMessage msg_;
};

class Init_ComplexMotion_FeedbackMessage_goal_id
{
public:
  Init_ComplexMotion_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ComplexMotion_FeedbackMessage_feedback goal_id(::cm_interfaces::action::ComplexMotion_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ComplexMotion_FeedbackMessage_feedback(msg_);
  }

private:
  ::cm_interfaces::action::ComplexMotion_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::cm_interfaces::action::ComplexMotion_FeedbackMessage>()
{
  return cm_interfaces::action::builder::Init_ComplexMotion_FeedbackMessage_goal_id();
}

}  // namespace cm_interfaces

#endif  // CM_INTERFACES__ACTION__DETAIL__COMPLEX_MOTION__BUILDER_HPP_
