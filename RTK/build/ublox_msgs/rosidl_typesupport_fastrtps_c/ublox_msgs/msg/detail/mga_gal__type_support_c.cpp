// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ublox_msgs:msg/MgaGAL.idl
// generated code does not contain a copyright notice
#include "ublox_msgs/msg/detail/mga_gal__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ublox_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ublox_msgs/msg/detail/mga_gal__struct.h"
#include "ublox_msgs/msg/detail/mga_gal__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _MgaGAL__ros_msg_type = ublox_msgs__msg__MgaGAL;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ublox_msgs
bool cdr_serialize_ublox_msgs__msg__MgaGAL(
  const ublox_msgs__msg__MgaGAL * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: type
  {
    cdr << ros_message->type;
  }

  // Field name: version
  {
    cdr << ros_message->version;
  }

  // Field name: svid
  {
    cdr << ros_message->svid;
  }

  // Field name: reserved0
  {
    cdr << ros_message->reserved0;
  }

  // Field name: iod_nav
  {
    cdr << ros_message->iod_nav;
  }

  // Field name: delta_n
  {
    cdr << ros_message->delta_n;
  }

  // Field name: m0
  {
    cdr << ros_message->m0;
  }

  // Field name: e
  {
    cdr << ros_message->e;
  }

  // Field name: sqrt_a
  {
    cdr << ros_message->sqrt_a;
  }

  // Field name: omega0
  {
    cdr << ros_message->omega0;
  }

  // Field name: i0
  {
    cdr << ros_message->i0;
  }

  // Field name: omega
  {
    cdr << ros_message->omega;
  }

  // Field name: omega_dot
  {
    cdr << ros_message->omega_dot;
  }

  // Field name: i_dot
  {
    cdr << ros_message->i_dot;
  }

  // Field name: cuc
  {
    cdr << ros_message->cuc;
  }

  // Field name: cus
  {
    cdr << ros_message->cus;
  }

  // Field name: crc
  {
    cdr << ros_message->crc;
  }

  // Field name: crs
  {
    cdr << ros_message->crs;
  }

  // Field name: cic
  {
    cdr << ros_message->cic;
  }

  // Field name: cis
  {
    cdr << ros_message->cis;
  }

  // Field name: toe
  {
    cdr << ros_message->toe;
  }

  // Field name: af0
  {
    cdr << ros_message->af0;
  }

  // Field name: af1
  {
    cdr << ros_message->af1;
  }

  // Field name: af2
  {
    cdr << ros_message->af2;
  }

  // Field name: sisaindex_e1_e5b
  {
    cdr << ros_message->sisaindex_e1_e5b;
  }

  // Field name: toc
  {
    cdr << ros_message->toc;
  }

  // Field name: bgd_e1_e5b
  {
    cdr << ros_message->bgd_e1_e5b;
  }

  // Field name: reserved1
  {
    size_t size = 2;
    auto array_ptr = ros_message->reserved1;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: health_e1b
  {
    cdr << ros_message->health_e1b;
  }

  // Field name: data_validity_e1b
  {
    cdr << ros_message->data_validity_e1b;
  }

  // Field name: health_e5b
  {
    cdr << ros_message->health_e5b;
  }

  // Field name: data_validity_e5b
  {
    cdr << ros_message->data_validity_e5b;
  }

  // Field name: reserved2
  {
    size_t size = 4;
    auto array_ptr = ros_message->reserved2;
    cdr.serialize_array(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ublox_msgs
bool cdr_deserialize_ublox_msgs__msg__MgaGAL(
  eprosima::fastcdr::Cdr & cdr,
  ublox_msgs__msg__MgaGAL * ros_message)
{
  // Field name: type
  {
    cdr >> ros_message->type;
  }

  // Field name: version
  {
    cdr >> ros_message->version;
  }

  // Field name: svid
  {
    cdr >> ros_message->svid;
  }

  // Field name: reserved0
  {
    cdr >> ros_message->reserved0;
  }

  // Field name: iod_nav
  {
    cdr >> ros_message->iod_nav;
  }

  // Field name: delta_n
  {
    cdr >> ros_message->delta_n;
  }

  // Field name: m0
  {
    cdr >> ros_message->m0;
  }

  // Field name: e
  {
    cdr >> ros_message->e;
  }

  // Field name: sqrt_a
  {
    cdr >> ros_message->sqrt_a;
  }

  // Field name: omega0
  {
    cdr >> ros_message->omega0;
  }

  // Field name: i0
  {
    cdr >> ros_message->i0;
  }

  // Field name: omega
  {
    cdr >> ros_message->omega;
  }

  // Field name: omega_dot
  {
    cdr >> ros_message->omega_dot;
  }

  // Field name: i_dot
  {
    cdr >> ros_message->i_dot;
  }

  // Field name: cuc
  {
    cdr >> ros_message->cuc;
  }

  // Field name: cus
  {
    cdr >> ros_message->cus;
  }

  // Field name: crc
  {
    cdr >> ros_message->crc;
  }

  // Field name: crs
  {
    cdr >> ros_message->crs;
  }

  // Field name: cic
  {
    cdr >> ros_message->cic;
  }

  // Field name: cis
  {
    cdr >> ros_message->cis;
  }

  // Field name: toe
  {
    cdr >> ros_message->toe;
  }

  // Field name: af0
  {
    cdr >> ros_message->af0;
  }

  // Field name: af1
  {
    cdr >> ros_message->af1;
  }

  // Field name: af2
  {
    cdr >> ros_message->af2;
  }

  // Field name: sisaindex_e1_e5b
  {
    cdr >> ros_message->sisaindex_e1_e5b;
  }

  // Field name: toc
  {
    cdr >> ros_message->toc;
  }

  // Field name: bgd_e1_e5b
  {
    cdr >> ros_message->bgd_e1_e5b;
  }

  // Field name: reserved1
  {
    size_t size = 2;
    auto array_ptr = ros_message->reserved1;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: health_e1b
  {
    cdr >> ros_message->health_e1b;
  }

  // Field name: data_validity_e1b
  {
    cdr >> ros_message->data_validity_e1b;
  }

  // Field name: health_e5b
  {
    cdr >> ros_message->health_e5b;
  }

  // Field name: data_validity_e5b
  {
    cdr >> ros_message->data_validity_e5b;
  }

  // Field name: reserved2
  {
    size_t size = 4;
    auto array_ptr = ros_message->reserved2;
    cdr.deserialize_array(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ublox_msgs
size_t get_serialized_size_ublox_msgs__msg__MgaGAL(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MgaGAL__ros_msg_type * ros_message = static_cast<const _MgaGAL__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: type
  {
    size_t item_size = sizeof(ros_message->type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: version
  {
    size_t item_size = sizeof(ros_message->version);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: svid
  {
    size_t item_size = sizeof(ros_message->svid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: reserved0
  {
    size_t item_size = sizeof(ros_message->reserved0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: iod_nav
  {
    size_t item_size = sizeof(ros_message->iod_nav);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: delta_n
  {
    size_t item_size = sizeof(ros_message->delta_n);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: m0
  {
    size_t item_size = sizeof(ros_message->m0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: e
  {
    size_t item_size = sizeof(ros_message->e);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: sqrt_a
  {
    size_t item_size = sizeof(ros_message->sqrt_a);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: omega0
  {
    size_t item_size = sizeof(ros_message->omega0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: i0
  {
    size_t item_size = sizeof(ros_message->i0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: omega
  {
    size_t item_size = sizeof(ros_message->omega);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: omega_dot
  {
    size_t item_size = sizeof(ros_message->omega_dot);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: i_dot
  {
    size_t item_size = sizeof(ros_message->i_dot);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: cuc
  {
    size_t item_size = sizeof(ros_message->cuc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: cus
  {
    size_t item_size = sizeof(ros_message->cus);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: crc
  {
    size_t item_size = sizeof(ros_message->crc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: crs
  {
    size_t item_size = sizeof(ros_message->crs);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: cic
  {
    size_t item_size = sizeof(ros_message->cic);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: cis
  {
    size_t item_size = sizeof(ros_message->cis);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: toe
  {
    size_t item_size = sizeof(ros_message->toe);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: af0
  {
    size_t item_size = sizeof(ros_message->af0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: af1
  {
    size_t item_size = sizeof(ros_message->af1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: af2
  {
    size_t item_size = sizeof(ros_message->af2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: sisaindex_e1_e5b
  {
    size_t item_size = sizeof(ros_message->sisaindex_e1_e5b);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: toc
  {
    size_t item_size = sizeof(ros_message->toc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: bgd_e1_e5b
  {
    size_t item_size = sizeof(ros_message->bgd_e1_e5b);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: reserved1
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->reserved1;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: health_e1b
  {
    size_t item_size = sizeof(ros_message->health_e1b);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: data_validity_e1b
  {
    size_t item_size = sizeof(ros_message->data_validity_e1b);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: health_e5b
  {
    size_t item_size = sizeof(ros_message->health_e5b);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: data_validity_e5b
  {
    size_t item_size = sizeof(ros_message->data_validity_e5b);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: reserved2
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->reserved2;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ublox_msgs
size_t max_serialized_size_ublox_msgs__msg__MgaGAL(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: type
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: version
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: svid
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: reserved0
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: iod_nav
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: delta_n
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: m0
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: e
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: sqrt_a
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: omega0
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: i0
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: omega
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: omega_dot
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: i_dot
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: cuc
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: cus
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: crc
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: crs
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: cic
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: cis
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: toe
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: af0
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: af1
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: af2
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: sisaindex_e1_e5b
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: toc
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: bgd_e1_e5b
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: reserved1
  {
    size_t array_size = 2;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: health_e1b
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: data_validity_e1b
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: health_e5b
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: data_validity_e5b
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: reserved2
  {
    size_t array_size = 4;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ublox_msgs__msg__MgaGAL;
    is_plain =
      (
      offsetof(DataType, reserved2) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ublox_msgs
bool cdr_serialize_key_ublox_msgs__msg__MgaGAL(
  const ublox_msgs__msg__MgaGAL * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: type
  {
    cdr << ros_message->type;
  }

  // Field name: version
  {
    cdr << ros_message->version;
  }

  // Field name: svid
  {
    cdr << ros_message->svid;
  }

  // Field name: reserved0
  {
    cdr << ros_message->reserved0;
  }

  // Field name: iod_nav
  {
    cdr << ros_message->iod_nav;
  }

  // Field name: delta_n
  {
    cdr << ros_message->delta_n;
  }

  // Field name: m0
  {
    cdr << ros_message->m0;
  }

  // Field name: e
  {
    cdr << ros_message->e;
  }

  // Field name: sqrt_a
  {
    cdr << ros_message->sqrt_a;
  }

  // Field name: omega0
  {
    cdr << ros_message->omega0;
  }

  // Field name: i0
  {
    cdr << ros_message->i0;
  }

  // Field name: omega
  {
    cdr << ros_message->omega;
  }

  // Field name: omega_dot
  {
    cdr << ros_message->omega_dot;
  }

  // Field name: i_dot
  {
    cdr << ros_message->i_dot;
  }

  // Field name: cuc
  {
    cdr << ros_message->cuc;
  }

  // Field name: cus
  {
    cdr << ros_message->cus;
  }

  // Field name: crc
  {
    cdr << ros_message->crc;
  }

  // Field name: crs
  {
    cdr << ros_message->crs;
  }

  // Field name: cic
  {
    cdr << ros_message->cic;
  }

  // Field name: cis
  {
    cdr << ros_message->cis;
  }

  // Field name: toe
  {
    cdr << ros_message->toe;
  }

  // Field name: af0
  {
    cdr << ros_message->af0;
  }

  // Field name: af1
  {
    cdr << ros_message->af1;
  }

  // Field name: af2
  {
    cdr << ros_message->af2;
  }

  // Field name: sisaindex_e1_e5b
  {
    cdr << ros_message->sisaindex_e1_e5b;
  }

  // Field name: toc
  {
    cdr << ros_message->toc;
  }

  // Field name: bgd_e1_e5b
  {
    cdr << ros_message->bgd_e1_e5b;
  }

  // Field name: reserved1
  {
    size_t size = 2;
    auto array_ptr = ros_message->reserved1;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: health_e1b
  {
    cdr << ros_message->health_e1b;
  }

  // Field name: data_validity_e1b
  {
    cdr << ros_message->data_validity_e1b;
  }

  // Field name: health_e5b
  {
    cdr << ros_message->health_e5b;
  }

  // Field name: data_validity_e5b
  {
    cdr << ros_message->data_validity_e5b;
  }

  // Field name: reserved2
  {
    size_t size = 4;
    auto array_ptr = ros_message->reserved2;
    cdr.serialize_array(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ublox_msgs
size_t get_serialized_size_key_ublox_msgs__msg__MgaGAL(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MgaGAL__ros_msg_type * ros_message = static_cast<const _MgaGAL__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: type
  {
    size_t item_size = sizeof(ros_message->type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: version
  {
    size_t item_size = sizeof(ros_message->version);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: svid
  {
    size_t item_size = sizeof(ros_message->svid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: reserved0
  {
    size_t item_size = sizeof(ros_message->reserved0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: iod_nav
  {
    size_t item_size = sizeof(ros_message->iod_nav);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: delta_n
  {
    size_t item_size = sizeof(ros_message->delta_n);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: m0
  {
    size_t item_size = sizeof(ros_message->m0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: e
  {
    size_t item_size = sizeof(ros_message->e);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: sqrt_a
  {
    size_t item_size = sizeof(ros_message->sqrt_a);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: omega0
  {
    size_t item_size = sizeof(ros_message->omega0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: i0
  {
    size_t item_size = sizeof(ros_message->i0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: omega
  {
    size_t item_size = sizeof(ros_message->omega);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: omega_dot
  {
    size_t item_size = sizeof(ros_message->omega_dot);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: i_dot
  {
    size_t item_size = sizeof(ros_message->i_dot);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: cuc
  {
    size_t item_size = sizeof(ros_message->cuc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: cus
  {
    size_t item_size = sizeof(ros_message->cus);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: crc
  {
    size_t item_size = sizeof(ros_message->crc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: crs
  {
    size_t item_size = sizeof(ros_message->crs);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: cic
  {
    size_t item_size = sizeof(ros_message->cic);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: cis
  {
    size_t item_size = sizeof(ros_message->cis);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: toe
  {
    size_t item_size = sizeof(ros_message->toe);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: af0
  {
    size_t item_size = sizeof(ros_message->af0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: af1
  {
    size_t item_size = sizeof(ros_message->af1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: af2
  {
    size_t item_size = sizeof(ros_message->af2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: sisaindex_e1_e5b
  {
    size_t item_size = sizeof(ros_message->sisaindex_e1_e5b);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: toc
  {
    size_t item_size = sizeof(ros_message->toc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: bgd_e1_e5b
  {
    size_t item_size = sizeof(ros_message->bgd_e1_e5b);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: reserved1
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->reserved1;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: health_e1b
  {
    size_t item_size = sizeof(ros_message->health_e1b);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: data_validity_e1b
  {
    size_t item_size = sizeof(ros_message->data_validity_e1b);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: health_e5b
  {
    size_t item_size = sizeof(ros_message->health_e5b);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: data_validity_e5b
  {
    size_t item_size = sizeof(ros_message->data_validity_e5b);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: reserved2
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->reserved2;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ublox_msgs
size_t max_serialized_size_key_ublox_msgs__msg__MgaGAL(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: type
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: version
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: svid
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: reserved0
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: iod_nav
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: delta_n
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: m0
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: e
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: sqrt_a
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: omega0
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: i0
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: omega
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: omega_dot
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: i_dot
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: cuc
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: cus
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: crc
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: crs
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: cic
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: cis
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: toe
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: af0
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: af1
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: af2
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: sisaindex_e1_e5b
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: toc
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: bgd_e1_e5b
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: reserved1
  {
    size_t array_size = 2;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: health_e1b
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: data_validity_e1b
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: health_e5b
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: data_validity_e5b
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: reserved2
  {
    size_t array_size = 4;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ublox_msgs__msg__MgaGAL;
    is_plain =
      (
      offsetof(DataType, reserved2) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _MgaGAL__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const ublox_msgs__msg__MgaGAL * ros_message = static_cast<const ublox_msgs__msg__MgaGAL *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_ublox_msgs__msg__MgaGAL(ros_message, cdr);
}

static bool _MgaGAL__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  ublox_msgs__msg__MgaGAL * ros_message = static_cast<ublox_msgs__msg__MgaGAL *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_ublox_msgs__msg__MgaGAL(cdr, ros_message);
}

static uint32_t _MgaGAL__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ublox_msgs__msg__MgaGAL(
      untyped_ros_message, 0));
}

static size_t _MgaGAL__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ublox_msgs__msg__MgaGAL(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MgaGAL = {
  "ublox_msgs::msg",
  "MgaGAL",
  _MgaGAL__cdr_serialize,
  _MgaGAL__cdr_deserialize,
  _MgaGAL__get_serialized_size,
  _MgaGAL__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _MgaGAL__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MgaGAL,
  get_message_typesupport_handle_function,
  &ublox_msgs__msg__MgaGAL__get_type_hash,
  &ublox_msgs__msg__MgaGAL__get_type_description,
  &ublox_msgs__msg__MgaGAL__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ublox_msgs, msg, MgaGAL)() {
  return &_MgaGAL__type_support;
}

#if defined(__cplusplus)
}
#endif
