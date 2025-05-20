// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from art_interface_msg:msg/ArtLifeSignal.idl
// generated code does not contain a copyright notice
#include "art_interface_msg/msg/detail/art_life_signal__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
art_interface_msg__msg__ArtLifeSignal__init(art_interface_msg__msg__ArtLifeSignal * msg)
{
  if (!msg) {
    return false;
  }
  // ccu_life
  // scs_life
  // dpu_life
  return true;
}

void
art_interface_msg__msg__ArtLifeSignal__fini(art_interface_msg__msg__ArtLifeSignal * msg)
{
  if (!msg) {
    return;
  }
  // ccu_life
  // scs_life
  // dpu_life
}

bool
art_interface_msg__msg__ArtLifeSignal__are_equal(const art_interface_msg__msg__ArtLifeSignal * lhs, const art_interface_msg__msg__ArtLifeSignal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // ccu_life
  if (lhs->ccu_life != rhs->ccu_life) {
    return false;
  }
  // scs_life
  if (lhs->scs_life != rhs->scs_life) {
    return false;
  }
  // dpu_life
  if (lhs->dpu_life != rhs->dpu_life) {
    return false;
  }
  return true;
}

bool
art_interface_msg__msg__ArtLifeSignal__copy(
  const art_interface_msg__msg__ArtLifeSignal * input,
  art_interface_msg__msg__ArtLifeSignal * output)
{
  if (!input || !output) {
    return false;
  }
  // ccu_life
  output->ccu_life = input->ccu_life;
  // scs_life
  output->scs_life = input->scs_life;
  // dpu_life
  output->dpu_life = input->dpu_life;
  return true;
}

art_interface_msg__msg__ArtLifeSignal *
art_interface_msg__msg__ArtLifeSignal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  art_interface_msg__msg__ArtLifeSignal * msg = (art_interface_msg__msg__ArtLifeSignal *)allocator.allocate(sizeof(art_interface_msg__msg__ArtLifeSignal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(art_interface_msg__msg__ArtLifeSignal));
  bool success = art_interface_msg__msg__ArtLifeSignal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
art_interface_msg__msg__ArtLifeSignal__destroy(art_interface_msg__msg__ArtLifeSignal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    art_interface_msg__msg__ArtLifeSignal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
art_interface_msg__msg__ArtLifeSignal__Sequence__init(art_interface_msg__msg__ArtLifeSignal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  art_interface_msg__msg__ArtLifeSignal * data = NULL;

  if (size) {
    data = (art_interface_msg__msg__ArtLifeSignal *)allocator.zero_allocate(size, sizeof(art_interface_msg__msg__ArtLifeSignal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = art_interface_msg__msg__ArtLifeSignal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        art_interface_msg__msg__ArtLifeSignal__fini(&data[i - 1]);
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
art_interface_msg__msg__ArtLifeSignal__Sequence__fini(art_interface_msg__msg__ArtLifeSignal__Sequence * array)
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
      art_interface_msg__msg__ArtLifeSignal__fini(&array->data[i]);
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

art_interface_msg__msg__ArtLifeSignal__Sequence *
art_interface_msg__msg__ArtLifeSignal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  art_interface_msg__msg__ArtLifeSignal__Sequence * array = (art_interface_msg__msg__ArtLifeSignal__Sequence *)allocator.allocate(sizeof(art_interface_msg__msg__ArtLifeSignal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = art_interface_msg__msg__ArtLifeSignal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
art_interface_msg__msg__ArtLifeSignal__Sequence__destroy(art_interface_msg__msg__ArtLifeSignal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    art_interface_msg__msg__ArtLifeSignal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
art_interface_msg__msg__ArtLifeSignal__Sequence__are_equal(const art_interface_msg__msg__ArtLifeSignal__Sequence * lhs, const art_interface_msg__msg__ArtLifeSignal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!art_interface_msg__msg__ArtLifeSignal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
art_interface_msg__msg__ArtLifeSignal__Sequence__copy(
  const art_interface_msg__msg__ArtLifeSignal__Sequence * input,
  art_interface_msg__msg__ArtLifeSignal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(art_interface_msg__msg__ArtLifeSignal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    art_interface_msg__msg__ArtLifeSignal * data =
      (art_interface_msg__msg__ArtLifeSignal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!art_interface_msg__msg__ArtLifeSignal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          art_interface_msg__msg__ArtLifeSignal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!art_interface_msg__msg__ArtLifeSignal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
