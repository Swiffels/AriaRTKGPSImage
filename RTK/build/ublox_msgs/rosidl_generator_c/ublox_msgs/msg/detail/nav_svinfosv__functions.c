// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ublox_msgs:msg/NavSVINFOSV.idl
// generated code does not contain a copyright notice
#include "ublox_msgs/msg/detail/nav_svinfosv__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
ublox_msgs__msg__NavSVINFOSV__init(ublox_msgs__msg__NavSVINFOSV * msg)
{
  if (!msg) {
    return false;
  }
  // chn
  // svid
  // flags
  // quality
  // cno
  // elev
  // azim
  // pr_res
  return true;
}

void
ublox_msgs__msg__NavSVINFOSV__fini(ublox_msgs__msg__NavSVINFOSV * msg)
{
  if (!msg) {
    return;
  }
  // chn
  // svid
  // flags
  // quality
  // cno
  // elev
  // azim
  // pr_res
}

bool
ublox_msgs__msg__NavSVINFOSV__are_equal(const ublox_msgs__msg__NavSVINFOSV * lhs, const ublox_msgs__msg__NavSVINFOSV * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // chn
  if (lhs->chn != rhs->chn) {
    return false;
  }
  // svid
  if (lhs->svid != rhs->svid) {
    return false;
  }
  // flags
  if (lhs->flags != rhs->flags) {
    return false;
  }
  // quality
  if (lhs->quality != rhs->quality) {
    return false;
  }
  // cno
  if (lhs->cno != rhs->cno) {
    return false;
  }
  // elev
  if (lhs->elev != rhs->elev) {
    return false;
  }
  // azim
  if (lhs->azim != rhs->azim) {
    return false;
  }
  // pr_res
  if (lhs->pr_res != rhs->pr_res) {
    return false;
  }
  return true;
}

bool
ublox_msgs__msg__NavSVINFOSV__copy(
  const ublox_msgs__msg__NavSVINFOSV * input,
  ublox_msgs__msg__NavSVINFOSV * output)
{
  if (!input || !output) {
    return false;
  }
  // chn
  output->chn = input->chn;
  // svid
  output->svid = input->svid;
  // flags
  output->flags = input->flags;
  // quality
  output->quality = input->quality;
  // cno
  output->cno = input->cno;
  // elev
  output->elev = input->elev;
  // azim
  output->azim = input->azim;
  // pr_res
  output->pr_res = input->pr_res;
  return true;
}

ublox_msgs__msg__NavSVINFOSV *
ublox_msgs__msg__NavSVINFOSV__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ublox_msgs__msg__NavSVINFOSV * msg = (ublox_msgs__msg__NavSVINFOSV *)allocator.allocate(sizeof(ublox_msgs__msg__NavSVINFOSV), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ublox_msgs__msg__NavSVINFOSV));
  bool success = ublox_msgs__msg__NavSVINFOSV__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ublox_msgs__msg__NavSVINFOSV__destroy(ublox_msgs__msg__NavSVINFOSV * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ublox_msgs__msg__NavSVINFOSV__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ublox_msgs__msg__NavSVINFOSV__Sequence__init(ublox_msgs__msg__NavSVINFOSV__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ublox_msgs__msg__NavSVINFOSV * data = NULL;

  if (size) {
    data = (ublox_msgs__msg__NavSVINFOSV *)allocator.zero_allocate(size, sizeof(ublox_msgs__msg__NavSVINFOSV), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ublox_msgs__msg__NavSVINFOSV__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ublox_msgs__msg__NavSVINFOSV__fini(&data[i - 1]);
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
ublox_msgs__msg__NavSVINFOSV__Sequence__fini(ublox_msgs__msg__NavSVINFOSV__Sequence * array)
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
      ublox_msgs__msg__NavSVINFOSV__fini(&array->data[i]);
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

ublox_msgs__msg__NavSVINFOSV__Sequence *
ublox_msgs__msg__NavSVINFOSV__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ublox_msgs__msg__NavSVINFOSV__Sequence * array = (ublox_msgs__msg__NavSVINFOSV__Sequence *)allocator.allocate(sizeof(ublox_msgs__msg__NavSVINFOSV__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ublox_msgs__msg__NavSVINFOSV__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ublox_msgs__msg__NavSVINFOSV__Sequence__destroy(ublox_msgs__msg__NavSVINFOSV__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ublox_msgs__msg__NavSVINFOSV__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ublox_msgs__msg__NavSVINFOSV__Sequence__are_equal(const ublox_msgs__msg__NavSVINFOSV__Sequence * lhs, const ublox_msgs__msg__NavSVINFOSV__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ublox_msgs__msg__NavSVINFOSV__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ublox_msgs__msg__NavSVINFOSV__Sequence__copy(
  const ublox_msgs__msg__NavSVINFOSV__Sequence * input,
  ublox_msgs__msg__NavSVINFOSV__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ublox_msgs__msg__NavSVINFOSV);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ublox_msgs__msg__NavSVINFOSV * data =
      (ublox_msgs__msg__NavSVINFOSV *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ublox_msgs__msg__NavSVINFOSV__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ublox_msgs__msg__NavSVINFOSV__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ublox_msgs__msg__NavSVINFOSV__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
