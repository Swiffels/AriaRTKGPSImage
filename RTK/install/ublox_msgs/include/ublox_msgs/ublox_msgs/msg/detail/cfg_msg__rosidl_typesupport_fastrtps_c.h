// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from ublox_msgs:msg/CfgMSG.idl
// generated code does not contain a copyright notice
#ifndef UBLOX_MSGS__MSG__DETAIL__CFG_MSG__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define UBLOX_MSGS__MSG__DETAIL__CFG_MSG__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "ublox_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ublox_msgs/msg/detail/cfg_msg__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ublox_msgs
bool cdr_serialize_ublox_msgs__msg__CfgMSG(
  const ublox_msgs__msg__CfgMSG * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ublox_msgs
bool cdr_deserialize_ublox_msgs__msg__CfgMSG(
  eprosima::fastcdr::Cdr &,
  ublox_msgs__msg__CfgMSG * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ublox_msgs
size_t get_serialized_size_ublox_msgs__msg__CfgMSG(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ublox_msgs
size_t max_serialized_size_ublox_msgs__msg__CfgMSG(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ublox_msgs
bool cdr_serialize_key_ublox_msgs__msg__CfgMSG(
  const ublox_msgs__msg__CfgMSG * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ublox_msgs
size_t get_serialized_size_key_ublox_msgs__msg__CfgMSG(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ublox_msgs
size_t max_serialized_size_key_ublox_msgs__msg__CfgMSG(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ublox_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ublox_msgs, msg, CfgMSG)();

#ifdef __cplusplus
}
#endif

#endif  // UBLOX_MSGS__MSG__DETAIL__CFG_MSG__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
