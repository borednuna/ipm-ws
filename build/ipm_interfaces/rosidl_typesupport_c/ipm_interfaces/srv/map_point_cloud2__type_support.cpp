// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from ipm_interfaces:srv/MapPointCloud2.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "ipm_interfaces/srv/detail/map_point_cloud2__struct.h"
#include "ipm_interfaces/srv/detail/map_point_cloud2__type_support.h"
#include "ipm_interfaces/srv/detail/map_point_cloud2__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace ipm_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _MapPointCloud2_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MapPointCloud2_Request_type_support_ids_t;

static const _MapPointCloud2_Request_type_support_ids_t _MapPointCloud2_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MapPointCloud2_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MapPointCloud2_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MapPointCloud2_Request_type_support_symbol_names_t _MapPointCloud2_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ipm_interfaces, srv, MapPointCloud2_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ipm_interfaces, srv, MapPointCloud2_Request)),
  }
};

typedef struct _MapPointCloud2_Request_type_support_data_t
{
  void * data[2];
} _MapPointCloud2_Request_type_support_data_t;

static _MapPointCloud2_Request_type_support_data_t _MapPointCloud2_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MapPointCloud2_Request_message_typesupport_map = {
  2,
  "ipm_interfaces",
  &_MapPointCloud2_Request_message_typesupport_ids.typesupport_identifier[0],
  &_MapPointCloud2_Request_message_typesupport_symbol_names.symbol_name[0],
  &_MapPointCloud2_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MapPointCloud2_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MapPointCloud2_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &ipm_interfaces__srv__MapPointCloud2_Request__get_type_hash,
  &ipm_interfaces__srv__MapPointCloud2_Request__get_type_description,
  &ipm_interfaces__srv__MapPointCloud2_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace ipm_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ipm_interfaces, srv, MapPointCloud2_Request)() {
  return &::ipm_interfaces::srv::rosidl_typesupport_c::MapPointCloud2_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ipm_interfaces/srv/detail/map_point_cloud2__struct.h"
// already included above
// #include "ipm_interfaces/srv/detail/map_point_cloud2__type_support.h"
// already included above
// #include "ipm_interfaces/srv/detail/map_point_cloud2__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ipm_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _MapPointCloud2_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MapPointCloud2_Response_type_support_ids_t;

static const _MapPointCloud2_Response_type_support_ids_t _MapPointCloud2_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MapPointCloud2_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MapPointCloud2_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MapPointCloud2_Response_type_support_symbol_names_t _MapPointCloud2_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ipm_interfaces, srv, MapPointCloud2_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ipm_interfaces, srv, MapPointCloud2_Response)),
  }
};

typedef struct _MapPointCloud2_Response_type_support_data_t
{
  void * data[2];
} _MapPointCloud2_Response_type_support_data_t;

static _MapPointCloud2_Response_type_support_data_t _MapPointCloud2_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MapPointCloud2_Response_message_typesupport_map = {
  2,
  "ipm_interfaces",
  &_MapPointCloud2_Response_message_typesupport_ids.typesupport_identifier[0],
  &_MapPointCloud2_Response_message_typesupport_symbol_names.symbol_name[0],
  &_MapPointCloud2_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MapPointCloud2_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MapPointCloud2_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &ipm_interfaces__srv__MapPointCloud2_Response__get_type_hash,
  &ipm_interfaces__srv__MapPointCloud2_Response__get_type_description,
  &ipm_interfaces__srv__MapPointCloud2_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace ipm_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ipm_interfaces, srv, MapPointCloud2_Response)() {
  return &::ipm_interfaces::srv::rosidl_typesupport_c::MapPointCloud2_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ipm_interfaces/srv/detail/map_point_cloud2__struct.h"
// already included above
// #include "ipm_interfaces/srv/detail/map_point_cloud2__type_support.h"
// already included above
// #include "ipm_interfaces/srv/detail/map_point_cloud2__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ipm_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _MapPointCloud2_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MapPointCloud2_Event_type_support_ids_t;

static const _MapPointCloud2_Event_type_support_ids_t _MapPointCloud2_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MapPointCloud2_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MapPointCloud2_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MapPointCloud2_Event_type_support_symbol_names_t _MapPointCloud2_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ipm_interfaces, srv, MapPointCloud2_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ipm_interfaces, srv, MapPointCloud2_Event)),
  }
};

typedef struct _MapPointCloud2_Event_type_support_data_t
{
  void * data[2];
} _MapPointCloud2_Event_type_support_data_t;

static _MapPointCloud2_Event_type_support_data_t _MapPointCloud2_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MapPointCloud2_Event_message_typesupport_map = {
  2,
  "ipm_interfaces",
  &_MapPointCloud2_Event_message_typesupport_ids.typesupport_identifier[0],
  &_MapPointCloud2_Event_message_typesupport_symbol_names.symbol_name[0],
  &_MapPointCloud2_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MapPointCloud2_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MapPointCloud2_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &ipm_interfaces__srv__MapPointCloud2_Event__get_type_hash,
  &ipm_interfaces__srv__MapPointCloud2_Event__get_type_description,
  &ipm_interfaces__srv__MapPointCloud2_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace ipm_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ipm_interfaces, srv, MapPointCloud2_Event)() {
  return &::ipm_interfaces::srv::rosidl_typesupport_c::MapPointCloud2_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ipm_interfaces/srv/detail/map_point_cloud2__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace ipm_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _MapPointCloud2_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MapPointCloud2_type_support_ids_t;

static const _MapPointCloud2_type_support_ids_t _MapPointCloud2_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MapPointCloud2_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MapPointCloud2_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MapPointCloud2_type_support_symbol_names_t _MapPointCloud2_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ipm_interfaces, srv, MapPointCloud2)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ipm_interfaces, srv, MapPointCloud2)),
  }
};

typedef struct _MapPointCloud2_type_support_data_t
{
  void * data[2];
} _MapPointCloud2_type_support_data_t;

static _MapPointCloud2_type_support_data_t _MapPointCloud2_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MapPointCloud2_service_typesupport_map = {
  2,
  "ipm_interfaces",
  &_MapPointCloud2_service_typesupport_ids.typesupport_identifier[0],
  &_MapPointCloud2_service_typesupport_symbol_names.symbol_name[0],
  &_MapPointCloud2_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t MapPointCloud2_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MapPointCloud2_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &MapPointCloud2_Request_message_type_support_handle,
  &MapPointCloud2_Response_message_type_support_handle,
  &MapPointCloud2_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    ipm_interfaces,
    srv,
    MapPointCloud2
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    ipm_interfaces,
    srv,
    MapPointCloud2
  ),
  &ipm_interfaces__srv__MapPointCloud2__get_type_hash,
  &ipm_interfaces__srv__MapPointCloud2__get_type_description,
  &ipm_interfaces__srv__MapPointCloud2__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace ipm_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, ipm_interfaces, srv, MapPointCloud2)() {
  return &::ipm_interfaces::srv::rosidl_typesupport_c::MapPointCloud2_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
