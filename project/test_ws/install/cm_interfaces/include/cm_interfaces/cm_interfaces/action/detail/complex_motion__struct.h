// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cm_interfaces:action/ComplexMotion.idl
// generated code does not contain a copyright notice

#ifndef CM_INTERFACES__ACTION__DETAIL__COMPLEX_MOTION__STRUCT_H_
#define CM_INTERFACES__ACTION__DETAIL__COMPLEX_MOTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'request'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/ComplexMotion in the package cm_interfaces.
typedef struct cm_interfaces__action__ComplexMotion_Goal
{
  rosidl_runtime_c__String request;
} cm_interfaces__action__ComplexMotion_Goal;

// Struct for a sequence of cm_interfaces__action__ComplexMotion_Goal.
typedef struct cm_interfaces__action__ComplexMotion_Goal__Sequence
{
  cm_interfaces__action__ComplexMotion_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cm_interfaces__action__ComplexMotion_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/ComplexMotion in the package cm_interfaces.
typedef struct cm_interfaces__action__ComplexMotion_Result
{
  rosidl_runtime_c__String result;
} cm_interfaces__action__ComplexMotion_Result;

// Struct for a sequence of cm_interfaces__action__ComplexMotion_Result.
typedef struct cm_interfaces__action__ComplexMotion_Result__Sequence
{
  cm_interfaces__action__ComplexMotion_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cm_interfaces__action__ComplexMotion_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'feedback'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/ComplexMotion in the package cm_interfaces.
typedef struct cm_interfaces__action__ComplexMotion_Feedback
{
  rosidl_runtime_c__String feedback;
} cm_interfaces__action__ComplexMotion_Feedback;

// Struct for a sequence of cm_interfaces__action__ComplexMotion_Feedback.
typedef struct cm_interfaces__action__ComplexMotion_Feedback__Sequence
{
  cm_interfaces__action__ComplexMotion_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cm_interfaces__action__ComplexMotion_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "cm_interfaces/action/detail/complex_motion__struct.h"

/// Struct defined in action/ComplexMotion in the package cm_interfaces.
typedef struct cm_interfaces__action__ComplexMotion_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  cm_interfaces__action__ComplexMotion_Goal goal;
} cm_interfaces__action__ComplexMotion_SendGoal_Request;

// Struct for a sequence of cm_interfaces__action__ComplexMotion_SendGoal_Request.
typedef struct cm_interfaces__action__ComplexMotion_SendGoal_Request__Sequence
{
  cm_interfaces__action__ComplexMotion_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cm_interfaces__action__ComplexMotion_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/ComplexMotion in the package cm_interfaces.
typedef struct cm_interfaces__action__ComplexMotion_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} cm_interfaces__action__ComplexMotion_SendGoal_Response;

// Struct for a sequence of cm_interfaces__action__ComplexMotion_SendGoal_Response.
typedef struct cm_interfaces__action__ComplexMotion_SendGoal_Response__Sequence
{
  cm_interfaces__action__ComplexMotion_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cm_interfaces__action__ComplexMotion_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/ComplexMotion in the package cm_interfaces.
typedef struct cm_interfaces__action__ComplexMotion_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} cm_interfaces__action__ComplexMotion_GetResult_Request;

// Struct for a sequence of cm_interfaces__action__ComplexMotion_GetResult_Request.
typedef struct cm_interfaces__action__ComplexMotion_GetResult_Request__Sequence
{
  cm_interfaces__action__ComplexMotion_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cm_interfaces__action__ComplexMotion_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "cm_interfaces/action/detail/complex_motion__struct.h"

/// Struct defined in action/ComplexMotion in the package cm_interfaces.
typedef struct cm_interfaces__action__ComplexMotion_GetResult_Response
{
  int8_t status;
  cm_interfaces__action__ComplexMotion_Result result;
} cm_interfaces__action__ComplexMotion_GetResult_Response;

// Struct for a sequence of cm_interfaces__action__ComplexMotion_GetResult_Response.
typedef struct cm_interfaces__action__ComplexMotion_GetResult_Response__Sequence
{
  cm_interfaces__action__ComplexMotion_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cm_interfaces__action__ComplexMotion_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "cm_interfaces/action/detail/complex_motion__struct.h"

/// Struct defined in action/ComplexMotion in the package cm_interfaces.
typedef struct cm_interfaces__action__ComplexMotion_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  cm_interfaces__action__ComplexMotion_Feedback feedback;
} cm_interfaces__action__ComplexMotion_FeedbackMessage;

// Struct for a sequence of cm_interfaces__action__ComplexMotion_FeedbackMessage.
typedef struct cm_interfaces__action__ComplexMotion_FeedbackMessage__Sequence
{
  cm_interfaces__action__ComplexMotion_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cm_interfaces__action__ComplexMotion_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CM_INTERFACES__ACTION__DETAIL__COMPLEX_MOTION__STRUCT_H_
