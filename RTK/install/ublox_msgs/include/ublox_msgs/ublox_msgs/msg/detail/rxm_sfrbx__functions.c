// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ublox_msgs:msg/RxmSFRBX.idl
// generated code does not contain a copyright notice
#include "ublox_msgs/msg/detail/rxm_sfrbx__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `dwrd`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
ublox_msgs__msg__RxmSFRBX__init(ublox_msgs__msg__RxmSFRBX * msg)
{
  if (!msg) {
    return false;
  }
  // gnss_id
  // sv_id
  // reserved0
  // freq_id
  // num_words
  // chn
  // version
  // reserved1
  // dwrd
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->dwrd, 0)) {
    ublox_msgs__msg__RxmSFRBX__fini(msg);
    return false;
  }
  return true;
}

void
ublox_msgs__msg__RxmSFRBX__fini(ublox_msgs__msg__RxmSFRBX * msg)
{
  if (!msg) {
    return;
  }
  // gnss_id
  // sv_id
  // reserved0
  // freq_id
  // num_words
  // chn
  // version
  // reserved1
  // dwrd
  rosidl_runtime_c__uint32__Sequence__fini(&msg->dwrd);
}

bool
ublox_msgs__msg__RxmSFRBX__are_equal(const ublox_msgs__msg__RxmSFRBX * lhs, const ublox_msgs__msg__RxmSFRBX * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // gnss_id
  if (lhs->gnss_id != rhs->gnss_id) {
    return false;
  }
  // sv_id
  if (lhs->sv_id != rhs->sv_id) {
    return false;
  }
  // reserved0
  if (lhs->reserved0 != rhs->reserved0) {
    return false;
  }
  // freq_id
  if (lhs->freq_id != rhs->freq_id) {
    return false;
  }
  // num_words
  if (lhs->num_words != rhs->num_words) {
    return false;
  }
  // chn
  if (lhs->chn != rhs->chn) {
    return false;
  }
  // version
  if (lhs->version != rhs->version) {
    return false;
  }
  // reserved1
  if (lhs->reserved1 != rhs->reserved1) {
    return false;
  }
  // dwrd
  if (!rosidl_runtime_c__uint32__Sequence__are_equal(
      &(lhs->dwrd), &(rhs->dwrd)))
  {
    return false;
  }
  return true;
}

bool
ublox_msgs__msg__RxmSFRBX__copy(
  const ublox_msgs__msg__RxmSFRBX * input,
  ublox_msgs__msg__RxmSFRBX * output)
{
  if (!input || !output) {
    return false;
  }
  // gnss_id
  output->gnss_id = input->gnss_id;
  // sv_id
  output->sv_id = input->sv_id;
  // reserved0
  output->reserved0 = input->reserved0;
  // freq_id
  output->freq_id = input->freq_id;
  // num_words
  output->num_words = input->num_words;
  // chn
  output->chn = input->chn;
  // version
  output->version = input->version;
  // reserved1
  output->reserved1 = input->reserved1;
  // dwrd
  if (!rosidl_runtime_c__uint32__Sequence__copy(
      &(input->dwrd), &(output->dwrd)))
  {
    return false;
  }
  return true;
}

ublox_msgs__msg__RxmSFRBX *
ublox_msgs__msg__RxmSFRBX__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ublox_msgs__msg__RxmSFRBX * msg = (ublox_msgs__msg__RxmSFRBX *)allocator.allocate(sizeof(ublox_msgs__msg__RxmSFRBX), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ublox_msgs__msg__RxmSFRBX));
  bool success = ublox_msgs__msg__RxmSFRBX__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ublox_msgs__msg__RxmSFRBX__destroy(ublox_msgs__msg__RxmSFRBX * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ublox_msgs__msg__RxmSFRBX__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ublox_msgs__msg__RxmSFRBX__Sequence__init(ublox_msgs__msg__RxmSFRBX__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ublox_msgs__msg__RxmSFRBX * data = NULL;

  if (size) {
    data = (ublox_msgs__msg__RxmSFRBX *)allocator.zero_allocate(size, sizeof(ublox_msgs__msg__RxmSFRBX), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ublox_msgs__msg__RxmSFRBX__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ublox_msgs__msg__RxmSFRBX__fini(&data[i - 1]);
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
ublox_msgs__msg__RxmSFRBX__Sequence__fini(ublox_msgs__msg__RxmSFRBX__Sequence * array)
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
      ublox_msgs__msg__RxmSFRBX__fini(&array->data[i]);
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

ublox_msgs__msg__RxmSFRBX__Sequence *
ublox_msgs__msg__RxmSFRBX__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ublox_msgs__msg__RxmSFRBX__Sequence * array = (ublox_msgs__msg__RxmSFRBX__Sequence *)allocator.allocate(sizeof(ublox_msgs__msg__RxmSFRBX__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ublox_msgs__msg__RxmSFRBX__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ublox_msgs__msg__RxmSFRBX__Sequence__destroy(ublox_msgs__msg__RxmSFRBX__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ublox_msgs__msg__RxmSFRBX__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ublox_msgs__msg__RxmSFRBX__Sequence__are_equal(const ublox_msgs__msg__RxmSFRBX__Sequence * lhs, const ublox_msgs__msg__RxmSFRBX__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ublox_msgs__msg__RxmSFRBX__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ublox_msgs__msg__RxmSFRBX__Sequence__copy(
  const ublox_msgs__msg__RxmSFRBX__Sequence * input,
  ublox_msgs__msg__RxmSFRBX__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ublox_msgs__msg__RxmSFRBX);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ublox_msgs__msg__RxmSFRBX * data =
      (ublox_msgs__msg__RxmSFRBX *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ublox_msgs__msg__RxmSFRBX__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ublox_msgs__msg__RxmSFRBX__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ublox_msgs__msg__RxmSFRBX__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
