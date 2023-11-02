// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from biped_interfaces:msg/SolePoses.idl
// generated code does not contain a copyright notice
#include "biped_interfaces/msg/detail/sole_poses__rosidl_typesupport_fastrtps_cpp.hpp"
#include "biped_interfaces/msg/detail/sole_poses__functions.h"
#include "biped_interfaces/msg/detail/sole_poses__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace geometry_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const geometry_msgs::msg::Pose &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  geometry_msgs::msg::Pose &);
size_t get_serialized_size(
  const geometry_msgs::msg::Pose &,
  size_t current_alignment);
size_t
max_serialized_size_Pose(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace geometry_msgs

// functions for geometry_msgs::msg::Pose already declared above


namespace biped_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_biped_interfaces
cdr_serialize(
  const biped_interfaces::msg::SolePoses & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: l_sole
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.l_sole,
    cdr);
  // Member: r_sole
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.r_sole,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_biped_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  biped_interfaces::msg::SolePoses & ros_message)
{
  // Member: l_sole
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.l_sole);

  // Member: r_sole
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.r_sole);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_biped_interfaces
get_serialized_size(
  const biped_interfaces::msg::SolePoses & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: l_sole

  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.l_sole, current_alignment);
  // Member: r_sole

  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.r_sole, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_biped_interfaces
max_serialized_size_SolePoses(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: l_sole
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Pose(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: r_sole
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Pose(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _SolePoses__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const biped_interfaces::msg::SolePoses *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SolePoses__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<biped_interfaces::msg::SolePoses *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SolePoses__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const biped_interfaces::msg::SolePoses *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SolePoses__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SolePoses(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SolePoses__callbacks = {
  "biped_interfaces::msg",
  "SolePoses",
  _SolePoses__cdr_serialize,
  _SolePoses__cdr_deserialize,
  _SolePoses__get_serialized_size,
  _SolePoses__max_serialized_size
};

static rosidl_message_type_support_t _SolePoses__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SolePoses__callbacks,
  get_message_typesupport_handle_function,
  &biped_interfaces__msg__SolePoses__get_type_hash,
  &biped_interfaces__msg__SolePoses__get_type_description,
  &biped_interfaces__msg__SolePoses__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace biped_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_biped_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<biped_interfaces::msg::SolePoses>()
{
  return &biped_interfaces::msg::typesupport_fastrtps_cpp::_SolePoses__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, biped_interfaces, msg, SolePoses)() {
  return &biped_interfaces::msg::typesupport_fastrtps_cpp::_SolePoses__handle;
}

#ifdef __cplusplus
}
#endif
