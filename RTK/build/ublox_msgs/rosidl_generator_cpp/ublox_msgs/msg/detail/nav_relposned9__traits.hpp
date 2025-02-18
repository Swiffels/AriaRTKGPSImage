// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ublox_msgs:msg/NavRELPOSNED9.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ublox_msgs/msg/nav_relposned9.hpp"


#ifndef UBLOX_MSGS__MSG__DETAIL__NAV_RELPOSNED9__TRAITS_HPP_
#define UBLOX_MSGS__MSG__DETAIL__NAV_RELPOSNED9__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ublox_msgs/msg/detail/nav_relposned9__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ublox_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const NavRELPOSNED9 & msg,
  std::ostream & out)
{
  out << "{";
  // member: version
  {
    out << "version: ";
    rosidl_generator_traits::value_to_yaml(msg.version, out);
    out << ", ";
  }

  // member: reserved1
  {
    out << "reserved1: ";
    rosidl_generator_traits::value_to_yaml(msg.reserved1, out);
    out << ", ";
  }

  // member: ref_station_id
  {
    out << "ref_station_id: ";
    rosidl_generator_traits::value_to_yaml(msg.ref_station_id, out);
    out << ", ";
  }

  // member: i_tow
  {
    out << "i_tow: ";
    rosidl_generator_traits::value_to_yaml(msg.i_tow, out);
    out << ", ";
  }

  // member: rel_pos_n
  {
    out << "rel_pos_n: ";
    rosidl_generator_traits::value_to_yaml(msg.rel_pos_n, out);
    out << ", ";
  }

  // member: rel_pos_e
  {
    out << "rel_pos_e: ";
    rosidl_generator_traits::value_to_yaml(msg.rel_pos_e, out);
    out << ", ";
  }

  // member: rel_pos_d
  {
    out << "rel_pos_d: ";
    rosidl_generator_traits::value_to_yaml(msg.rel_pos_d, out);
    out << ", ";
  }

  // member: rel_pos_length
  {
    out << "rel_pos_length: ";
    rosidl_generator_traits::value_to_yaml(msg.rel_pos_length, out);
    out << ", ";
  }

  // member: rel_pos_heading
  {
    out << "rel_pos_heading: ";
    rosidl_generator_traits::value_to_yaml(msg.rel_pos_heading, out);
    out << ", ";
  }

  // member: reserved2
  {
    if (msg.reserved2.size() == 0) {
      out << "reserved2: []";
    } else {
      out << "reserved2: [";
      size_t pending_items = msg.reserved2.size();
      for (auto item : msg.reserved2) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: rel_pos_hpn
  {
    out << "rel_pos_hpn: ";
    rosidl_generator_traits::value_to_yaml(msg.rel_pos_hpn, out);
    out << ", ";
  }

  // member: rel_pos_hpe
  {
    out << "rel_pos_hpe: ";
    rosidl_generator_traits::value_to_yaml(msg.rel_pos_hpe, out);
    out << ", ";
  }

  // member: rel_pos_hpd
  {
    out << "rel_pos_hpd: ";
    rosidl_generator_traits::value_to_yaml(msg.rel_pos_hpd, out);
    out << ", ";
  }

  // member: rel_pos_hp_length
  {
    out << "rel_pos_hp_length: ";
    rosidl_generator_traits::value_to_yaml(msg.rel_pos_hp_length, out);
    out << ", ";
  }

  // member: acc_n
  {
    out << "acc_n: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_n, out);
    out << ", ";
  }

  // member: acc_e
  {
    out << "acc_e: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_e, out);
    out << ", ";
  }

  // member: acc_d
  {
    out << "acc_d: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_d, out);
    out << ", ";
  }

  // member: acc_length
  {
    out << "acc_length: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_length, out);
    out << ", ";
  }

  // member: acc_heading
  {
    out << "acc_heading: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_heading, out);
    out << ", ";
  }

  // member: reserved3
  {
    if (msg.reserved3.size() == 0) {
      out << "reserved3: []";
    } else {
      out << "reserved3: [";
      size_t pending_items = msg.reserved3.size();
      for (auto item : msg.reserved3) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: flags
  {
    out << "flags: ";
    rosidl_generator_traits::value_to_yaml(msg.flags, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NavRELPOSNED9 & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "version: ";
    rosidl_generator_traits::value_to_yaml(msg.version, out);
    out << "\n";
  }

  // member: reserved1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reserved1: ";
    rosidl_generator_traits::value_to_yaml(msg.reserved1, out);
    out << "\n";
  }

  // member: ref_station_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ref_station_id: ";
    rosidl_generator_traits::value_to_yaml(msg.ref_station_id, out);
    out << "\n";
  }

  // member: i_tow
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "i_tow: ";
    rosidl_generator_traits::value_to_yaml(msg.i_tow, out);
    out << "\n";
  }

  // member: rel_pos_n
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rel_pos_n: ";
    rosidl_generator_traits::value_to_yaml(msg.rel_pos_n, out);
    out << "\n";
  }

  // member: rel_pos_e
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rel_pos_e: ";
    rosidl_generator_traits::value_to_yaml(msg.rel_pos_e, out);
    out << "\n";
  }

  // member: rel_pos_d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rel_pos_d: ";
    rosidl_generator_traits::value_to_yaml(msg.rel_pos_d, out);
    out << "\n";
  }

  // member: rel_pos_length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rel_pos_length: ";
    rosidl_generator_traits::value_to_yaml(msg.rel_pos_length, out);
    out << "\n";
  }

  // member: rel_pos_heading
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rel_pos_heading: ";
    rosidl_generator_traits::value_to_yaml(msg.rel_pos_heading, out);
    out << "\n";
  }

  // member: reserved2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.reserved2.size() == 0) {
      out << "reserved2: []\n";
    } else {
      out << "reserved2:\n";
      for (auto item : msg.reserved2) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: rel_pos_hpn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rel_pos_hpn: ";
    rosidl_generator_traits::value_to_yaml(msg.rel_pos_hpn, out);
    out << "\n";
  }

  // member: rel_pos_hpe
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rel_pos_hpe: ";
    rosidl_generator_traits::value_to_yaml(msg.rel_pos_hpe, out);
    out << "\n";
  }

  // member: rel_pos_hpd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rel_pos_hpd: ";
    rosidl_generator_traits::value_to_yaml(msg.rel_pos_hpd, out);
    out << "\n";
  }

  // member: rel_pos_hp_length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rel_pos_hp_length: ";
    rosidl_generator_traits::value_to_yaml(msg.rel_pos_hp_length, out);
    out << "\n";
  }

  // member: acc_n
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acc_n: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_n, out);
    out << "\n";
  }

  // member: acc_e
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acc_e: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_e, out);
    out << "\n";
  }

  // member: acc_d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acc_d: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_d, out);
    out << "\n";
  }

  // member: acc_length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acc_length: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_length, out);
    out << "\n";
  }

  // member: acc_heading
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acc_heading: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_heading, out);
    out << "\n";
  }

  // member: reserved3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.reserved3.size() == 0) {
      out << "reserved3: []\n";
    } else {
      out << "reserved3:\n";
      for (auto item : msg.reserved3) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: flags
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flags: ";
    rosidl_generator_traits::value_to_yaml(msg.flags, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NavRELPOSNED9 & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace ublox_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ublox_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ublox_msgs::msg::NavRELPOSNED9 & msg,
  std::ostream & out, size_t indentation = 0)
{
  ublox_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ublox_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ublox_msgs::msg::NavRELPOSNED9 & msg)
{
  return ublox_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ublox_msgs::msg::NavRELPOSNED9>()
{
  return "ublox_msgs::msg::NavRELPOSNED9";
}

template<>
inline const char * name<ublox_msgs::msg::NavRELPOSNED9>()
{
  return "ublox_msgs/msg/NavRELPOSNED9";
}

template<>
struct has_fixed_size<ublox_msgs::msg::NavRELPOSNED9>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ublox_msgs::msg::NavRELPOSNED9>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ublox_msgs::msg::NavRELPOSNED9>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // UBLOX_MSGS__MSG__DETAIL__NAV_RELPOSNED9__TRAITS_HPP_
