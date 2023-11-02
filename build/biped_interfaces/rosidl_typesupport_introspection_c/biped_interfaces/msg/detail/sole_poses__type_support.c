// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from biped_interfaces:msg/SolePoses.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "biped_interfaces/msg/detail/sole_poses__rosidl_typesupport_introspection_c.h"
#include "biped_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "biped_interfaces/msg/detail/sole_poses__functions.h"
#include "biped_interfaces/msg/detail/sole_poses__struct.h"


// Include directives for member types
// Member `l_sole`
// Member `r_sole`
#include "geometry_msgs/msg/pose.h"
// Member `l_sole`
// Member `r_sole`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void biped_interfaces__msg__SolePoses__rosidl_typesupport_introspection_c__SolePoses_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  biped_interfaces__msg__SolePoses__init(message_memory);
}

void biped_interfaces__msg__SolePoses__rosidl_typesupport_introspection_c__SolePoses_fini_function(void * message_memory)
{
  biped_interfaces__msg__SolePoses__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember biped_interfaces__msg__SolePoses__rosidl_typesupport_introspection_c__SolePoses_message_member_array[2] = {
  {
    "l_sole",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(biped_interfaces__msg__SolePoses, l_sole),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "r_sole",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(biped_interfaces__msg__SolePoses, r_sole),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers biped_interfaces__msg__SolePoses__rosidl_typesupport_introspection_c__SolePoses_message_members = {
  "biped_interfaces__msg",  // message namespace
  "SolePoses",  // message name
  2,  // number of fields
  sizeof(biped_interfaces__msg__SolePoses),
  biped_interfaces__msg__SolePoses__rosidl_typesupport_introspection_c__SolePoses_message_member_array,  // message members
  biped_interfaces__msg__SolePoses__rosidl_typesupport_introspection_c__SolePoses_init_function,  // function to initialize message memory (memory has to be allocated)
  biped_interfaces__msg__SolePoses__rosidl_typesupport_introspection_c__SolePoses_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t biped_interfaces__msg__SolePoses__rosidl_typesupport_introspection_c__SolePoses_message_type_support_handle = {
  0,
  &biped_interfaces__msg__SolePoses__rosidl_typesupport_introspection_c__SolePoses_message_members,
  get_message_typesupport_handle_function,
  &biped_interfaces__msg__SolePoses__get_type_hash,
  &biped_interfaces__msg__SolePoses__get_type_description,
  &biped_interfaces__msg__SolePoses__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_biped_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, biped_interfaces, msg, SolePoses)() {
  biped_interfaces__msg__SolePoses__rosidl_typesupport_introspection_c__SolePoses_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  biped_interfaces__msg__SolePoses__rosidl_typesupport_introspection_c__SolePoses_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!biped_interfaces__msg__SolePoses__rosidl_typesupport_introspection_c__SolePoses_message_type_support_handle.typesupport_identifier) {
    biped_interfaces__msg__SolePoses__rosidl_typesupport_introspection_c__SolePoses_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &biped_interfaces__msg__SolePoses__rosidl_typesupport_introspection_c__SolePoses_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
