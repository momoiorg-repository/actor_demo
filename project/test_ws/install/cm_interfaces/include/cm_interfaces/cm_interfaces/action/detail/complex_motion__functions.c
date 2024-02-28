// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cm_interfaces:action/ComplexMotion.idl
// generated code does not contain a copyright notice
#include "cm_interfaces/action/detail/complex_motion__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `request`
#include "rosidl_runtime_c/string_functions.h"

bool
cm_interfaces__action__ComplexMotion_Goal__init(cm_interfaces__action__ComplexMotion_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // request
  if (!rosidl_runtime_c__String__init(&msg->request)) {
    cm_interfaces__action__ComplexMotion_Goal__fini(msg);
    return false;
  }
  return true;
}

void
cm_interfaces__action__ComplexMotion_Goal__fini(cm_interfaces__action__ComplexMotion_Goal * msg)
{
  if (!msg) {
    return;
  }
  // request
  rosidl_runtime_c__String__fini(&msg->request);
}

bool
cm_interfaces__action__ComplexMotion_Goal__are_equal(const cm_interfaces__action__ComplexMotion_Goal * lhs, const cm_interfaces__action__ComplexMotion_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // request
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  return true;
}

bool
cm_interfaces__action__ComplexMotion_Goal__copy(
  const cm_interfaces__action__ComplexMotion_Goal * input,
  cm_interfaces__action__ComplexMotion_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // request
  if (!rosidl_runtime_c__String__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  return true;
}

cm_interfaces__action__ComplexMotion_Goal *
cm_interfaces__action__ComplexMotion_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cm_interfaces__action__ComplexMotion_Goal * msg = (cm_interfaces__action__ComplexMotion_Goal *)allocator.allocate(sizeof(cm_interfaces__action__ComplexMotion_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cm_interfaces__action__ComplexMotion_Goal));
  bool success = cm_interfaces__action__ComplexMotion_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cm_interfaces__action__ComplexMotion_Goal__destroy(cm_interfaces__action__ComplexMotion_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cm_interfaces__action__ComplexMotion_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cm_interfaces__action__ComplexMotion_Goal__Sequence__init(cm_interfaces__action__ComplexMotion_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cm_interfaces__action__ComplexMotion_Goal * data = NULL;

  if (size) {
    data = (cm_interfaces__action__ComplexMotion_Goal *)allocator.zero_allocate(size, sizeof(cm_interfaces__action__ComplexMotion_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cm_interfaces__action__ComplexMotion_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cm_interfaces__action__ComplexMotion_Goal__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
cm_interfaces__action__ComplexMotion_Goal__Sequence__fini(cm_interfaces__action__ComplexMotion_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      cm_interfaces__action__ComplexMotion_Goal__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

cm_interfaces__action__ComplexMotion_Goal__Sequence *
cm_interfaces__action__ComplexMotion_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cm_interfaces__action__ComplexMotion_Goal__Sequence * array = (cm_interfaces__action__ComplexMotion_Goal__Sequence *)allocator.allocate(sizeof(cm_interfaces__action__ComplexMotion_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cm_interfaces__action__ComplexMotion_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cm_interfaces__action__ComplexMotion_Goal__Sequence__destroy(cm_interfaces__action__ComplexMotion_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cm_interfaces__action__ComplexMotion_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cm_interfaces__action__ComplexMotion_Goal__Sequence__are_equal(const cm_interfaces__action__ComplexMotion_Goal__Sequence * lhs, const cm_interfaces__action__ComplexMotion_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cm_interfaces__action__ComplexMotion_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cm_interfaces__action__ComplexMotion_Goal__Sequence__copy(
  const cm_interfaces__action__ComplexMotion_Goal__Sequence * input,
  cm_interfaces__action__ComplexMotion_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cm_interfaces__action__ComplexMotion_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    cm_interfaces__action__ComplexMotion_Goal * data =
      (cm_interfaces__action__ComplexMotion_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cm_interfaces__action__ComplexMotion_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          cm_interfaces__action__ComplexMotion_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cm_interfaces__action__ComplexMotion_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
cm_interfaces__action__ComplexMotion_Result__init(cm_interfaces__action__ComplexMotion_Result * msg)
{
  if (!msg) {
    return false;
  }
  // result
  if (!rosidl_runtime_c__String__init(&msg->result)) {
    cm_interfaces__action__ComplexMotion_Result__fini(msg);
    return false;
  }
  return true;
}

void
cm_interfaces__action__ComplexMotion_Result__fini(cm_interfaces__action__ComplexMotion_Result * msg)
{
  if (!msg) {
    return;
  }
  // result
  rosidl_runtime_c__String__fini(&msg->result);
}

bool
cm_interfaces__action__ComplexMotion_Result__are_equal(const cm_interfaces__action__ComplexMotion_Result * lhs, const cm_interfaces__action__ComplexMotion_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // result
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
cm_interfaces__action__ComplexMotion_Result__copy(
  const cm_interfaces__action__ComplexMotion_Result * input,
  cm_interfaces__action__ComplexMotion_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // result
  if (!rosidl_runtime_c__String__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

cm_interfaces__action__ComplexMotion_Result *
cm_interfaces__action__ComplexMotion_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cm_interfaces__action__ComplexMotion_Result * msg = (cm_interfaces__action__ComplexMotion_Result *)allocator.allocate(sizeof(cm_interfaces__action__ComplexMotion_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cm_interfaces__action__ComplexMotion_Result));
  bool success = cm_interfaces__action__ComplexMotion_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cm_interfaces__action__ComplexMotion_Result__destroy(cm_interfaces__action__ComplexMotion_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cm_interfaces__action__ComplexMotion_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cm_interfaces__action__ComplexMotion_Result__Sequence__init(cm_interfaces__action__ComplexMotion_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cm_interfaces__action__ComplexMotion_Result * data = NULL;

  if (size) {
    data = (cm_interfaces__action__ComplexMotion_Result *)allocator.zero_allocate(size, sizeof(cm_interfaces__action__ComplexMotion_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cm_interfaces__action__ComplexMotion_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cm_interfaces__action__ComplexMotion_Result__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
cm_interfaces__action__ComplexMotion_Result__Sequence__fini(cm_interfaces__action__ComplexMotion_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      cm_interfaces__action__ComplexMotion_Result__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

cm_interfaces__action__ComplexMotion_Result__Sequence *
cm_interfaces__action__ComplexMotion_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cm_interfaces__action__ComplexMotion_Result__Sequence * array = (cm_interfaces__action__ComplexMotion_Result__Sequence *)allocator.allocate(sizeof(cm_interfaces__action__ComplexMotion_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cm_interfaces__action__ComplexMotion_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cm_interfaces__action__ComplexMotion_Result__Sequence__destroy(cm_interfaces__action__ComplexMotion_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cm_interfaces__action__ComplexMotion_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cm_interfaces__action__ComplexMotion_Result__Sequence__are_equal(const cm_interfaces__action__ComplexMotion_Result__Sequence * lhs, const cm_interfaces__action__ComplexMotion_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cm_interfaces__action__ComplexMotion_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cm_interfaces__action__ComplexMotion_Result__Sequence__copy(
  const cm_interfaces__action__ComplexMotion_Result__Sequence * input,
  cm_interfaces__action__ComplexMotion_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cm_interfaces__action__ComplexMotion_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    cm_interfaces__action__ComplexMotion_Result * data =
      (cm_interfaces__action__ComplexMotion_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cm_interfaces__action__ComplexMotion_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          cm_interfaces__action__ComplexMotion_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cm_interfaces__action__ComplexMotion_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `feedback`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
cm_interfaces__action__ComplexMotion_Feedback__init(cm_interfaces__action__ComplexMotion_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // feedback
  if (!rosidl_runtime_c__String__init(&msg->feedback)) {
    cm_interfaces__action__ComplexMotion_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
cm_interfaces__action__ComplexMotion_Feedback__fini(cm_interfaces__action__ComplexMotion_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // feedback
  rosidl_runtime_c__String__fini(&msg->feedback);
}

bool
cm_interfaces__action__ComplexMotion_Feedback__are_equal(const cm_interfaces__action__ComplexMotion_Feedback * lhs, const cm_interfaces__action__ComplexMotion_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // feedback
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
cm_interfaces__action__ComplexMotion_Feedback__copy(
  const cm_interfaces__action__ComplexMotion_Feedback * input,
  cm_interfaces__action__ComplexMotion_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // feedback
  if (!rosidl_runtime_c__String__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

cm_interfaces__action__ComplexMotion_Feedback *
cm_interfaces__action__ComplexMotion_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cm_interfaces__action__ComplexMotion_Feedback * msg = (cm_interfaces__action__ComplexMotion_Feedback *)allocator.allocate(sizeof(cm_interfaces__action__ComplexMotion_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cm_interfaces__action__ComplexMotion_Feedback));
  bool success = cm_interfaces__action__ComplexMotion_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cm_interfaces__action__ComplexMotion_Feedback__destroy(cm_interfaces__action__ComplexMotion_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cm_interfaces__action__ComplexMotion_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cm_interfaces__action__ComplexMotion_Feedback__Sequence__init(cm_interfaces__action__ComplexMotion_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cm_interfaces__action__ComplexMotion_Feedback * data = NULL;

  if (size) {
    data = (cm_interfaces__action__ComplexMotion_Feedback *)allocator.zero_allocate(size, sizeof(cm_interfaces__action__ComplexMotion_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cm_interfaces__action__ComplexMotion_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cm_interfaces__action__ComplexMotion_Feedback__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
cm_interfaces__action__ComplexMotion_Feedback__Sequence__fini(cm_interfaces__action__ComplexMotion_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      cm_interfaces__action__ComplexMotion_Feedback__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

cm_interfaces__action__ComplexMotion_Feedback__Sequence *
cm_interfaces__action__ComplexMotion_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cm_interfaces__action__ComplexMotion_Feedback__Sequence * array = (cm_interfaces__action__ComplexMotion_Feedback__Sequence *)allocator.allocate(sizeof(cm_interfaces__action__ComplexMotion_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cm_interfaces__action__ComplexMotion_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cm_interfaces__action__ComplexMotion_Feedback__Sequence__destroy(cm_interfaces__action__ComplexMotion_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cm_interfaces__action__ComplexMotion_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cm_interfaces__action__ComplexMotion_Feedback__Sequence__are_equal(const cm_interfaces__action__ComplexMotion_Feedback__Sequence * lhs, const cm_interfaces__action__ComplexMotion_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cm_interfaces__action__ComplexMotion_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cm_interfaces__action__ComplexMotion_Feedback__Sequence__copy(
  const cm_interfaces__action__ComplexMotion_Feedback__Sequence * input,
  cm_interfaces__action__ComplexMotion_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cm_interfaces__action__ComplexMotion_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    cm_interfaces__action__ComplexMotion_Feedback * data =
      (cm_interfaces__action__ComplexMotion_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cm_interfaces__action__ComplexMotion_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          cm_interfaces__action__ComplexMotion_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cm_interfaces__action__ComplexMotion_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "cm_interfaces/action/detail/complex_motion__functions.h"

bool
cm_interfaces__action__ComplexMotion_SendGoal_Request__init(cm_interfaces__action__ComplexMotion_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    cm_interfaces__action__ComplexMotion_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!cm_interfaces__action__ComplexMotion_Goal__init(&msg->goal)) {
    cm_interfaces__action__ComplexMotion_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
cm_interfaces__action__ComplexMotion_SendGoal_Request__fini(cm_interfaces__action__ComplexMotion_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  cm_interfaces__action__ComplexMotion_Goal__fini(&msg->goal);
}

bool
cm_interfaces__action__ComplexMotion_SendGoal_Request__are_equal(const cm_interfaces__action__ComplexMotion_SendGoal_Request * lhs, const cm_interfaces__action__ComplexMotion_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!cm_interfaces__action__ComplexMotion_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
cm_interfaces__action__ComplexMotion_SendGoal_Request__copy(
  const cm_interfaces__action__ComplexMotion_SendGoal_Request * input,
  cm_interfaces__action__ComplexMotion_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!cm_interfaces__action__ComplexMotion_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

cm_interfaces__action__ComplexMotion_SendGoal_Request *
cm_interfaces__action__ComplexMotion_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cm_interfaces__action__ComplexMotion_SendGoal_Request * msg = (cm_interfaces__action__ComplexMotion_SendGoal_Request *)allocator.allocate(sizeof(cm_interfaces__action__ComplexMotion_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cm_interfaces__action__ComplexMotion_SendGoal_Request));
  bool success = cm_interfaces__action__ComplexMotion_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cm_interfaces__action__ComplexMotion_SendGoal_Request__destroy(cm_interfaces__action__ComplexMotion_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cm_interfaces__action__ComplexMotion_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cm_interfaces__action__ComplexMotion_SendGoal_Request__Sequence__init(cm_interfaces__action__ComplexMotion_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cm_interfaces__action__ComplexMotion_SendGoal_Request * data = NULL;

  if (size) {
    data = (cm_interfaces__action__ComplexMotion_SendGoal_Request *)allocator.zero_allocate(size, sizeof(cm_interfaces__action__ComplexMotion_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cm_interfaces__action__ComplexMotion_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cm_interfaces__action__ComplexMotion_SendGoal_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
cm_interfaces__action__ComplexMotion_SendGoal_Request__Sequence__fini(cm_interfaces__action__ComplexMotion_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      cm_interfaces__action__ComplexMotion_SendGoal_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

cm_interfaces__action__ComplexMotion_SendGoal_Request__Sequence *
cm_interfaces__action__ComplexMotion_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cm_interfaces__action__ComplexMotion_SendGoal_Request__Sequence * array = (cm_interfaces__action__ComplexMotion_SendGoal_Request__Sequence *)allocator.allocate(sizeof(cm_interfaces__action__ComplexMotion_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cm_interfaces__action__ComplexMotion_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cm_interfaces__action__ComplexMotion_SendGoal_Request__Sequence__destroy(cm_interfaces__action__ComplexMotion_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cm_interfaces__action__ComplexMotion_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cm_interfaces__action__ComplexMotion_SendGoal_Request__Sequence__are_equal(const cm_interfaces__action__ComplexMotion_SendGoal_Request__Sequence * lhs, const cm_interfaces__action__ComplexMotion_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cm_interfaces__action__ComplexMotion_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cm_interfaces__action__ComplexMotion_SendGoal_Request__Sequence__copy(
  const cm_interfaces__action__ComplexMotion_SendGoal_Request__Sequence * input,
  cm_interfaces__action__ComplexMotion_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cm_interfaces__action__ComplexMotion_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    cm_interfaces__action__ComplexMotion_SendGoal_Request * data =
      (cm_interfaces__action__ComplexMotion_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cm_interfaces__action__ComplexMotion_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          cm_interfaces__action__ComplexMotion_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cm_interfaces__action__ComplexMotion_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
cm_interfaces__action__ComplexMotion_SendGoal_Response__init(cm_interfaces__action__ComplexMotion_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    cm_interfaces__action__ComplexMotion_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
cm_interfaces__action__ComplexMotion_SendGoal_Response__fini(cm_interfaces__action__ComplexMotion_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
cm_interfaces__action__ComplexMotion_SendGoal_Response__are_equal(const cm_interfaces__action__ComplexMotion_SendGoal_Response * lhs, const cm_interfaces__action__ComplexMotion_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
cm_interfaces__action__ComplexMotion_SendGoal_Response__copy(
  const cm_interfaces__action__ComplexMotion_SendGoal_Response * input,
  cm_interfaces__action__ComplexMotion_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

cm_interfaces__action__ComplexMotion_SendGoal_Response *
cm_interfaces__action__ComplexMotion_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cm_interfaces__action__ComplexMotion_SendGoal_Response * msg = (cm_interfaces__action__ComplexMotion_SendGoal_Response *)allocator.allocate(sizeof(cm_interfaces__action__ComplexMotion_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cm_interfaces__action__ComplexMotion_SendGoal_Response));
  bool success = cm_interfaces__action__ComplexMotion_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cm_interfaces__action__ComplexMotion_SendGoal_Response__destroy(cm_interfaces__action__ComplexMotion_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cm_interfaces__action__ComplexMotion_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cm_interfaces__action__ComplexMotion_SendGoal_Response__Sequence__init(cm_interfaces__action__ComplexMotion_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cm_interfaces__action__ComplexMotion_SendGoal_Response * data = NULL;

  if (size) {
    data = (cm_interfaces__action__ComplexMotion_SendGoal_Response *)allocator.zero_allocate(size, sizeof(cm_interfaces__action__ComplexMotion_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cm_interfaces__action__ComplexMotion_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cm_interfaces__action__ComplexMotion_SendGoal_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
cm_interfaces__action__ComplexMotion_SendGoal_Response__Sequence__fini(cm_interfaces__action__ComplexMotion_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      cm_interfaces__action__ComplexMotion_SendGoal_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

cm_interfaces__action__ComplexMotion_SendGoal_Response__Sequence *
cm_interfaces__action__ComplexMotion_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cm_interfaces__action__ComplexMotion_SendGoal_Response__Sequence * array = (cm_interfaces__action__ComplexMotion_SendGoal_Response__Sequence *)allocator.allocate(sizeof(cm_interfaces__action__ComplexMotion_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cm_interfaces__action__ComplexMotion_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cm_interfaces__action__ComplexMotion_SendGoal_Response__Sequence__destroy(cm_interfaces__action__ComplexMotion_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cm_interfaces__action__ComplexMotion_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cm_interfaces__action__ComplexMotion_SendGoal_Response__Sequence__are_equal(const cm_interfaces__action__ComplexMotion_SendGoal_Response__Sequence * lhs, const cm_interfaces__action__ComplexMotion_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cm_interfaces__action__ComplexMotion_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cm_interfaces__action__ComplexMotion_SendGoal_Response__Sequence__copy(
  const cm_interfaces__action__ComplexMotion_SendGoal_Response__Sequence * input,
  cm_interfaces__action__ComplexMotion_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cm_interfaces__action__ComplexMotion_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    cm_interfaces__action__ComplexMotion_SendGoal_Response * data =
      (cm_interfaces__action__ComplexMotion_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cm_interfaces__action__ComplexMotion_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          cm_interfaces__action__ComplexMotion_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cm_interfaces__action__ComplexMotion_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
cm_interfaces__action__ComplexMotion_GetResult_Request__init(cm_interfaces__action__ComplexMotion_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    cm_interfaces__action__ComplexMotion_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
cm_interfaces__action__ComplexMotion_GetResult_Request__fini(cm_interfaces__action__ComplexMotion_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
cm_interfaces__action__ComplexMotion_GetResult_Request__are_equal(const cm_interfaces__action__ComplexMotion_GetResult_Request * lhs, const cm_interfaces__action__ComplexMotion_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
cm_interfaces__action__ComplexMotion_GetResult_Request__copy(
  const cm_interfaces__action__ComplexMotion_GetResult_Request * input,
  cm_interfaces__action__ComplexMotion_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

cm_interfaces__action__ComplexMotion_GetResult_Request *
cm_interfaces__action__ComplexMotion_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cm_interfaces__action__ComplexMotion_GetResult_Request * msg = (cm_interfaces__action__ComplexMotion_GetResult_Request *)allocator.allocate(sizeof(cm_interfaces__action__ComplexMotion_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cm_interfaces__action__ComplexMotion_GetResult_Request));
  bool success = cm_interfaces__action__ComplexMotion_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cm_interfaces__action__ComplexMotion_GetResult_Request__destroy(cm_interfaces__action__ComplexMotion_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cm_interfaces__action__ComplexMotion_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cm_interfaces__action__ComplexMotion_GetResult_Request__Sequence__init(cm_interfaces__action__ComplexMotion_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cm_interfaces__action__ComplexMotion_GetResult_Request * data = NULL;

  if (size) {
    data = (cm_interfaces__action__ComplexMotion_GetResult_Request *)allocator.zero_allocate(size, sizeof(cm_interfaces__action__ComplexMotion_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cm_interfaces__action__ComplexMotion_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cm_interfaces__action__ComplexMotion_GetResult_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
cm_interfaces__action__ComplexMotion_GetResult_Request__Sequence__fini(cm_interfaces__action__ComplexMotion_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      cm_interfaces__action__ComplexMotion_GetResult_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

cm_interfaces__action__ComplexMotion_GetResult_Request__Sequence *
cm_interfaces__action__ComplexMotion_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cm_interfaces__action__ComplexMotion_GetResult_Request__Sequence * array = (cm_interfaces__action__ComplexMotion_GetResult_Request__Sequence *)allocator.allocate(sizeof(cm_interfaces__action__ComplexMotion_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cm_interfaces__action__ComplexMotion_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cm_interfaces__action__ComplexMotion_GetResult_Request__Sequence__destroy(cm_interfaces__action__ComplexMotion_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cm_interfaces__action__ComplexMotion_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cm_interfaces__action__ComplexMotion_GetResult_Request__Sequence__are_equal(const cm_interfaces__action__ComplexMotion_GetResult_Request__Sequence * lhs, const cm_interfaces__action__ComplexMotion_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cm_interfaces__action__ComplexMotion_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cm_interfaces__action__ComplexMotion_GetResult_Request__Sequence__copy(
  const cm_interfaces__action__ComplexMotion_GetResult_Request__Sequence * input,
  cm_interfaces__action__ComplexMotion_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cm_interfaces__action__ComplexMotion_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    cm_interfaces__action__ComplexMotion_GetResult_Request * data =
      (cm_interfaces__action__ComplexMotion_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cm_interfaces__action__ComplexMotion_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          cm_interfaces__action__ComplexMotion_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cm_interfaces__action__ComplexMotion_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "cm_interfaces/action/detail/complex_motion__functions.h"

bool
cm_interfaces__action__ComplexMotion_GetResult_Response__init(cm_interfaces__action__ComplexMotion_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!cm_interfaces__action__ComplexMotion_Result__init(&msg->result)) {
    cm_interfaces__action__ComplexMotion_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
cm_interfaces__action__ComplexMotion_GetResult_Response__fini(cm_interfaces__action__ComplexMotion_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  cm_interfaces__action__ComplexMotion_Result__fini(&msg->result);
}

bool
cm_interfaces__action__ComplexMotion_GetResult_Response__are_equal(const cm_interfaces__action__ComplexMotion_GetResult_Response * lhs, const cm_interfaces__action__ComplexMotion_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!cm_interfaces__action__ComplexMotion_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
cm_interfaces__action__ComplexMotion_GetResult_Response__copy(
  const cm_interfaces__action__ComplexMotion_GetResult_Response * input,
  cm_interfaces__action__ComplexMotion_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!cm_interfaces__action__ComplexMotion_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

cm_interfaces__action__ComplexMotion_GetResult_Response *
cm_interfaces__action__ComplexMotion_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cm_interfaces__action__ComplexMotion_GetResult_Response * msg = (cm_interfaces__action__ComplexMotion_GetResult_Response *)allocator.allocate(sizeof(cm_interfaces__action__ComplexMotion_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cm_interfaces__action__ComplexMotion_GetResult_Response));
  bool success = cm_interfaces__action__ComplexMotion_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cm_interfaces__action__ComplexMotion_GetResult_Response__destroy(cm_interfaces__action__ComplexMotion_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cm_interfaces__action__ComplexMotion_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cm_interfaces__action__ComplexMotion_GetResult_Response__Sequence__init(cm_interfaces__action__ComplexMotion_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cm_interfaces__action__ComplexMotion_GetResult_Response * data = NULL;

  if (size) {
    data = (cm_interfaces__action__ComplexMotion_GetResult_Response *)allocator.zero_allocate(size, sizeof(cm_interfaces__action__ComplexMotion_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cm_interfaces__action__ComplexMotion_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cm_interfaces__action__ComplexMotion_GetResult_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
cm_interfaces__action__ComplexMotion_GetResult_Response__Sequence__fini(cm_interfaces__action__ComplexMotion_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      cm_interfaces__action__ComplexMotion_GetResult_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

cm_interfaces__action__ComplexMotion_GetResult_Response__Sequence *
cm_interfaces__action__ComplexMotion_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cm_interfaces__action__ComplexMotion_GetResult_Response__Sequence * array = (cm_interfaces__action__ComplexMotion_GetResult_Response__Sequence *)allocator.allocate(sizeof(cm_interfaces__action__ComplexMotion_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cm_interfaces__action__ComplexMotion_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cm_interfaces__action__ComplexMotion_GetResult_Response__Sequence__destroy(cm_interfaces__action__ComplexMotion_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cm_interfaces__action__ComplexMotion_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cm_interfaces__action__ComplexMotion_GetResult_Response__Sequence__are_equal(const cm_interfaces__action__ComplexMotion_GetResult_Response__Sequence * lhs, const cm_interfaces__action__ComplexMotion_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cm_interfaces__action__ComplexMotion_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cm_interfaces__action__ComplexMotion_GetResult_Response__Sequence__copy(
  const cm_interfaces__action__ComplexMotion_GetResult_Response__Sequence * input,
  cm_interfaces__action__ComplexMotion_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cm_interfaces__action__ComplexMotion_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    cm_interfaces__action__ComplexMotion_GetResult_Response * data =
      (cm_interfaces__action__ComplexMotion_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cm_interfaces__action__ComplexMotion_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          cm_interfaces__action__ComplexMotion_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cm_interfaces__action__ComplexMotion_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "cm_interfaces/action/detail/complex_motion__functions.h"

bool
cm_interfaces__action__ComplexMotion_FeedbackMessage__init(cm_interfaces__action__ComplexMotion_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    cm_interfaces__action__ComplexMotion_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!cm_interfaces__action__ComplexMotion_Feedback__init(&msg->feedback)) {
    cm_interfaces__action__ComplexMotion_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
cm_interfaces__action__ComplexMotion_FeedbackMessage__fini(cm_interfaces__action__ComplexMotion_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  cm_interfaces__action__ComplexMotion_Feedback__fini(&msg->feedback);
}

bool
cm_interfaces__action__ComplexMotion_FeedbackMessage__are_equal(const cm_interfaces__action__ComplexMotion_FeedbackMessage * lhs, const cm_interfaces__action__ComplexMotion_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!cm_interfaces__action__ComplexMotion_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
cm_interfaces__action__ComplexMotion_FeedbackMessage__copy(
  const cm_interfaces__action__ComplexMotion_FeedbackMessage * input,
  cm_interfaces__action__ComplexMotion_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!cm_interfaces__action__ComplexMotion_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

cm_interfaces__action__ComplexMotion_FeedbackMessage *
cm_interfaces__action__ComplexMotion_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cm_interfaces__action__ComplexMotion_FeedbackMessage * msg = (cm_interfaces__action__ComplexMotion_FeedbackMessage *)allocator.allocate(sizeof(cm_interfaces__action__ComplexMotion_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cm_interfaces__action__ComplexMotion_FeedbackMessage));
  bool success = cm_interfaces__action__ComplexMotion_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cm_interfaces__action__ComplexMotion_FeedbackMessage__destroy(cm_interfaces__action__ComplexMotion_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cm_interfaces__action__ComplexMotion_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cm_interfaces__action__ComplexMotion_FeedbackMessage__Sequence__init(cm_interfaces__action__ComplexMotion_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cm_interfaces__action__ComplexMotion_FeedbackMessage * data = NULL;

  if (size) {
    data = (cm_interfaces__action__ComplexMotion_FeedbackMessage *)allocator.zero_allocate(size, sizeof(cm_interfaces__action__ComplexMotion_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cm_interfaces__action__ComplexMotion_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cm_interfaces__action__ComplexMotion_FeedbackMessage__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
cm_interfaces__action__ComplexMotion_FeedbackMessage__Sequence__fini(cm_interfaces__action__ComplexMotion_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      cm_interfaces__action__ComplexMotion_FeedbackMessage__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

cm_interfaces__action__ComplexMotion_FeedbackMessage__Sequence *
cm_interfaces__action__ComplexMotion_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cm_interfaces__action__ComplexMotion_FeedbackMessage__Sequence * array = (cm_interfaces__action__ComplexMotion_FeedbackMessage__Sequence *)allocator.allocate(sizeof(cm_interfaces__action__ComplexMotion_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cm_interfaces__action__ComplexMotion_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cm_interfaces__action__ComplexMotion_FeedbackMessage__Sequence__destroy(cm_interfaces__action__ComplexMotion_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cm_interfaces__action__ComplexMotion_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cm_interfaces__action__ComplexMotion_FeedbackMessage__Sequence__are_equal(const cm_interfaces__action__ComplexMotion_FeedbackMessage__Sequence * lhs, const cm_interfaces__action__ComplexMotion_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cm_interfaces__action__ComplexMotion_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cm_interfaces__action__ComplexMotion_FeedbackMessage__Sequence__copy(
  const cm_interfaces__action__ComplexMotion_FeedbackMessage__Sequence * input,
  cm_interfaces__action__ComplexMotion_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cm_interfaces__action__ComplexMotion_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    cm_interfaces__action__ComplexMotion_FeedbackMessage * data =
      (cm_interfaces__action__ComplexMotion_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cm_interfaces__action__ComplexMotion_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          cm_interfaces__action__ComplexMotion_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cm_interfaces__action__ComplexMotion_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
