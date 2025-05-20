// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from art_interface_msg:msg/ControlCommand.idl
// generated code does not contain a copyright notice
#include "art_interface_msg/msg/detail/control_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
art_interface_msg__msg__ControlCommand__init(art_interface_msg__msg__ControlCommand * msg)
{
  if (!msg) {
    return false;
  }
  // desired_steering_wheel_angle
  // desired_iehs_work_mode
  // vcu_status
  // desired_steering_angle_enable
  // desired_additional_torque
  // desired_steering_wheel_angle_speed
  // ids_life
  return true;
}

void
art_interface_msg__msg__ControlCommand__fini(art_interface_msg__msg__ControlCommand * msg)
{
  if (!msg) {
    return;
  }
  // desired_steering_wheel_angle
  // desired_iehs_work_mode
  // vcu_status
  // desired_steering_angle_enable
  // desired_additional_torque
  // desired_steering_wheel_angle_speed
  // ids_life
}

bool
art_interface_msg__msg__ControlCommand__are_equal(const art_interface_msg__msg__ControlCommand * lhs, const art_interface_msg__msg__ControlCommand * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // desired_steering_wheel_angle
  if (lhs->desired_steering_wheel_angle != rhs->desired_steering_wheel_angle) {
    return false;
  }
  // desired_iehs_work_mode
  if (lhs->desired_iehs_work_mode != rhs->desired_iehs_work_mode) {
    return false;
  }
  // vcu_status
  if (lhs->vcu_status != rhs->vcu_status) {
    return false;
  }
  // desired_steering_angle_enable
  if (lhs->desired_steering_angle_enable != rhs->desired_steering_angle_enable) {
    return false;
  }
  // desired_additional_torque
  if (lhs->desired_additional_torque != rhs->desired_additional_torque) {
    return false;
  }
  // desired_steering_wheel_angle_speed
  if (lhs->desired_steering_wheel_angle_speed != rhs->desired_steering_wheel_angle_speed) {
    return false;
  }
  // ids_life
  if (lhs->ids_life != rhs->ids_life) {
    return false;
  }
  return true;
}

bool
art_interface_msg__msg__ControlCommand__copy(
  const art_interface_msg__msg__ControlCommand * input,
  art_interface_msg__msg__ControlCommand * output)
{
  if (!input || !output) {
    return false;
  }
  // desired_steering_wheel_angle
  output->desired_steering_wheel_angle = input->desired_steering_wheel_angle;
  // desired_iehs_work_mode
  output->desired_iehs_work_mode = input->desired_iehs_work_mode;
  // vcu_status
  output->vcu_status = input->vcu_status;
  // desired_steering_angle_enable
  output->desired_steering_angle_enable = input->desired_steering_angle_enable;
  // desired_additional_torque
  output->desired_additional_torque = input->desired_additional_torque;
  // desired_steering_wheel_angle_speed
  output->desired_steering_wheel_angle_speed = input->desired_steering_wheel_angle_speed;
  // ids_life
  output->ids_life = input->ids_life;
  return true;
}

art_interface_msg__msg__ControlCommand *
art_interface_msg__msg__ControlCommand__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  art_interface_msg__msg__ControlCommand * msg = (art_interface_msg__msg__ControlCommand *)allocator.allocate(sizeof(art_interface_msg__msg__ControlCommand), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(art_interface_msg__msg__ControlCommand));
  bool success = art_interface_msg__msg__ControlCommand__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
art_interface_msg__msg__ControlCommand__destroy(art_interface_msg__msg__ControlCommand * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    art_interface_msg__msg__ControlCommand__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
art_interface_msg__msg__ControlCommand__Sequence__init(art_interface_msg__msg__ControlCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  art_interface_msg__msg__ControlCommand * data = NULL;

  if (size) {
    data = (art_interface_msg__msg__ControlCommand *)allocator.zero_allocate(size, sizeof(art_interface_msg__msg__ControlCommand), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = art_interface_msg__msg__ControlCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        art_interface_msg__msg__ControlCommand__fini(&data[i - 1]);
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
art_interface_msg__msg__ControlCommand__Sequence__fini(art_interface_msg__msg__ControlCommand__Sequence * array)
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
      art_interface_msg__msg__ControlCommand__fini(&array->data[i]);
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

art_interface_msg__msg__ControlCommand__Sequence *
art_interface_msg__msg__ControlCommand__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  art_interface_msg__msg__ControlCommand__Sequence * array = (art_interface_msg__msg__ControlCommand__Sequence *)allocator.allocate(sizeof(art_interface_msg__msg__ControlCommand__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = art_interface_msg__msg__ControlCommand__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
art_interface_msg__msg__ControlCommand__Sequence__destroy(art_interface_msg__msg__ControlCommand__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    art_interface_msg__msg__ControlCommand__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
art_interface_msg__msg__ControlCommand__Sequence__are_equal(const art_interface_msg__msg__ControlCommand__Sequence * lhs, const art_interface_msg__msg__ControlCommand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!art_interface_msg__msg__ControlCommand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
art_interface_msg__msg__ControlCommand__Sequence__copy(
  const art_interface_msg__msg__ControlCommand__Sequence * input,
  art_interface_msg__msg__ControlCommand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(art_interface_msg__msg__ControlCommand);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    art_interface_msg__msg__ControlCommand * data =
      (art_interface_msg__msg__ControlCommand *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!art_interface_msg__msg__ControlCommand__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          art_interface_msg__msg__ControlCommand__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!art_interface_msg__msg__ControlCommand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
