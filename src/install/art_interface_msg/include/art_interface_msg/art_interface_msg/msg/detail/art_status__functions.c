// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from art_interface_msg:msg/ArtStatus.idl
// generated code does not contain a copyright notice
#include "art_interface_msg/msg/detail/art_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
art_interface_msg__msg__ArtStatus__init(art_interface_msg__msg__ArtStatus * msg)
{
  if (!msg) {
    return false;
  }
  // das_control_disfunction
  // lateral_control_activation
  // deviation_warning_activation
  // iehs_comm_error
  // ccu_life
  // tram_speed
  // movement_direction_activation_signal
  // actual_tire_angle
  // axle1_sensor_error_a
  // axle1_sensor_error_b
  // axle1_sensor_error_electrical
  // axle2_sensor_error_a
  // axle2_sensor_error_b
  // axle2_sensor_error_electrical
  // actual_steering_angle
  // iehs_device_fault
  return true;
}

void
art_interface_msg__msg__ArtStatus__fini(art_interface_msg__msg__ArtStatus * msg)
{
  if (!msg) {
    return;
  }
  // das_control_disfunction
  // lateral_control_activation
  // deviation_warning_activation
  // iehs_comm_error
  // ccu_life
  // tram_speed
  // movement_direction_activation_signal
  // actual_tire_angle
  // axle1_sensor_error_a
  // axle1_sensor_error_b
  // axle1_sensor_error_electrical
  // axle2_sensor_error_a
  // axle2_sensor_error_b
  // axle2_sensor_error_electrical
  // actual_steering_angle
  // iehs_device_fault
}

bool
art_interface_msg__msg__ArtStatus__are_equal(const art_interface_msg__msg__ArtStatus * lhs, const art_interface_msg__msg__ArtStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // das_control_disfunction
  if (lhs->das_control_disfunction != rhs->das_control_disfunction) {
    return false;
  }
  // lateral_control_activation
  if (lhs->lateral_control_activation != rhs->lateral_control_activation) {
    return false;
  }
  // deviation_warning_activation
  if (lhs->deviation_warning_activation != rhs->deviation_warning_activation) {
    return false;
  }
  // iehs_comm_error
  if (lhs->iehs_comm_error != rhs->iehs_comm_error) {
    return false;
  }
  // ccu_life
  if (lhs->ccu_life != rhs->ccu_life) {
    return false;
  }
  // tram_speed
  if (lhs->tram_speed != rhs->tram_speed) {
    return false;
  }
  // movement_direction_activation_signal
  if (lhs->movement_direction_activation_signal != rhs->movement_direction_activation_signal) {
    return false;
  }
  // actual_tire_angle
  if (lhs->actual_tire_angle != rhs->actual_tire_angle) {
    return false;
  }
  // axle1_sensor_error_a
  if (lhs->axle1_sensor_error_a != rhs->axle1_sensor_error_a) {
    return false;
  }
  // axle1_sensor_error_b
  if (lhs->axle1_sensor_error_b != rhs->axle1_sensor_error_b) {
    return false;
  }
  // axle1_sensor_error_electrical
  if (lhs->axle1_sensor_error_electrical != rhs->axle1_sensor_error_electrical) {
    return false;
  }
  // axle2_sensor_error_a
  if (lhs->axle2_sensor_error_a != rhs->axle2_sensor_error_a) {
    return false;
  }
  // axle2_sensor_error_b
  if (lhs->axle2_sensor_error_b != rhs->axle2_sensor_error_b) {
    return false;
  }
  // axle2_sensor_error_electrical
  if (lhs->axle2_sensor_error_electrical != rhs->axle2_sensor_error_electrical) {
    return false;
  }
  // actual_steering_angle
  if (lhs->actual_steering_angle != rhs->actual_steering_angle) {
    return false;
  }
  // iehs_device_fault
  if (lhs->iehs_device_fault != rhs->iehs_device_fault) {
    return false;
  }
  return true;
}

bool
art_interface_msg__msg__ArtStatus__copy(
  const art_interface_msg__msg__ArtStatus * input,
  art_interface_msg__msg__ArtStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // das_control_disfunction
  output->das_control_disfunction = input->das_control_disfunction;
  // lateral_control_activation
  output->lateral_control_activation = input->lateral_control_activation;
  // deviation_warning_activation
  output->deviation_warning_activation = input->deviation_warning_activation;
  // iehs_comm_error
  output->iehs_comm_error = input->iehs_comm_error;
  // ccu_life
  output->ccu_life = input->ccu_life;
  // tram_speed
  output->tram_speed = input->tram_speed;
  // movement_direction_activation_signal
  output->movement_direction_activation_signal = input->movement_direction_activation_signal;
  // actual_tire_angle
  output->actual_tire_angle = input->actual_tire_angle;
  // axle1_sensor_error_a
  output->axle1_sensor_error_a = input->axle1_sensor_error_a;
  // axle1_sensor_error_b
  output->axle1_sensor_error_b = input->axle1_sensor_error_b;
  // axle1_sensor_error_electrical
  output->axle1_sensor_error_electrical = input->axle1_sensor_error_electrical;
  // axle2_sensor_error_a
  output->axle2_sensor_error_a = input->axle2_sensor_error_a;
  // axle2_sensor_error_b
  output->axle2_sensor_error_b = input->axle2_sensor_error_b;
  // axle2_sensor_error_electrical
  output->axle2_sensor_error_electrical = input->axle2_sensor_error_electrical;
  // actual_steering_angle
  output->actual_steering_angle = input->actual_steering_angle;
  // iehs_device_fault
  output->iehs_device_fault = input->iehs_device_fault;
  return true;
}

art_interface_msg__msg__ArtStatus *
art_interface_msg__msg__ArtStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  art_interface_msg__msg__ArtStatus * msg = (art_interface_msg__msg__ArtStatus *)allocator.allocate(sizeof(art_interface_msg__msg__ArtStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(art_interface_msg__msg__ArtStatus));
  bool success = art_interface_msg__msg__ArtStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
art_interface_msg__msg__ArtStatus__destroy(art_interface_msg__msg__ArtStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    art_interface_msg__msg__ArtStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
art_interface_msg__msg__ArtStatus__Sequence__init(art_interface_msg__msg__ArtStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  art_interface_msg__msg__ArtStatus * data = NULL;

  if (size) {
    data = (art_interface_msg__msg__ArtStatus *)allocator.zero_allocate(size, sizeof(art_interface_msg__msg__ArtStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = art_interface_msg__msg__ArtStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        art_interface_msg__msg__ArtStatus__fini(&data[i - 1]);
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
art_interface_msg__msg__ArtStatus__Sequence__fini(art_interface_msg__msg__ArtStatus__Sequence * array)
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
      art_interface_msg__msg__ArtStatus__fini(&array->data[i]);
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

art_interface_msg__msg__ArtStatus__Sequence *
art_interface_msg__msg__ArtStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  art_interface_msg__msg__ArtStatus__Sequence * array = (art_interface_msg__msg__ArtStatus__Sequence *)allocator.allocate(sizeof(art_interface_msg__msg__ArtStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = art_interface_msg__msg__ArtStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
art_interface_msg__msg__ArtStatus__Sequence__destroy(art_interface_msg__msg__ArtStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    art_interface_msg__msg__ArtStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
art_interface_msg__msg__ArtStatus__Sequence__are_equal(const art_interface_msg__msg__ArtStatus__Sequence * lhs, const art_interface_msg__msg__ArtStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!art_interface_msg__msg__ArtStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
art_interface_msg__msg__ArtStatus__Sequence__copy(
  const art_interface_msg__msg__ArtStatus__Sequence * input,
  art_interface_msg__msg__ArtStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(art_interface_msg__msg__ArtStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    art_interface_msg__msg__ArtStatus * data =
      (art_interface_msg__msg__ArtStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!art_interface_msg__msg__ArtStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          art_interface_msg__msg__ArtStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!art_interface_msg__msg__ArtStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
