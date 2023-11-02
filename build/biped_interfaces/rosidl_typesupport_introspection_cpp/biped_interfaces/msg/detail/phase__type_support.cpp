// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from biped_interfaces:msg/Phase.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "biped_interfaces/msg/detail/phase__functions.h"
#include "biped_interfaces/msg/detail/phase__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace biped_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Phase_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) biped_interfaces::msg::Phase(_init);
}

void Phase_fini_function(void * message_memory)
{
  auto typed_message = static_cast<biped_interfaces::msg::Phase *>(message_memory);
  typed_message->~Phase();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Phase_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(biped_interfaces::msg::Phase, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "phase",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(biped_interfaces::msg::Phase, phase),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Phase_message_members = {
  "biped_interfaces::msg",  // message namespace
  "Phase",  // message name
  2,  // number of fields
  sizeof(biped_interfaces::msg::Phase),
  Phase_message_member_array,  // message members
  Phase_init_function,  // function to initialize message memory (memory has to be allocated)
  Phase_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Phase_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Phase_message_members,
  get_message_typesupport_handle_function,
  &biped_interfaces__msg__Phase__get_type_hash,
  &biped_interfaces__msg__Phase__get_type_description,
  &biped_interfaces__msg__Phase__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace biped_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<biped_interfaces::msg::Phase>()
{
  return &::biped_interfaces::msg::rosidl_typesupport_introspection_cpp::Phase_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, biped_interfaces, msg, Phase)() {
  return &::biped_interfaces::msg::rosidl_typesupport_introspection_cpp::Phase_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
