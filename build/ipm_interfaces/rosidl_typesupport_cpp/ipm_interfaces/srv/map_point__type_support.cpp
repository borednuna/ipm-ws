// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from ipm_interfaces:srv/MapPoint.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "ipm_interfaces/srv/detail/map_point__functions.h"
#include "ipm_interfaces/srv/detail/map_point__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace ipm_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _MapPoint_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MapPoint_Request_type_support_ids_t;

static const _MapPoint_Request_type_support_ids_t _MapPoint_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MapPoint_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MapPoint_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MapPoint_Request_type_support_symbol_names_t _MapPoint_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ipm_interfaces, srv, MapPoint_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ipm_interfaces, srv, MapPoint_Request)),
  }
};

typedef struct _MapPoint_Request_type_support_data_t
{
  void * data[2];
} _MapPoint_Request_type_support_data_t;

static _MapPoint_Request_type_support_data_t _MapPoint_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MapPoint_Request_message_typesupport_map = {
  2,
  "ipm_interfaces",
  &_MapPoint_Request_message_typesupport_ids.typesupport_identifier[0],
  &_MapPoint_Request_message_typesupport_symbol_names.symbol_name[0],
  &_MapPoint_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MapPoint_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MapPoint_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ipm_interfaces__srv__MapPoint_Request__get_type_hash,
  &ipm_interfaces__srv__MapPoint_Request__get_type_description,
  &ipm_interfaces__srv__MapPoint_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace ipm_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ipm_interfaces::srv::MapPoint_Request>()
{
  return &::ipm_interfaces::srv::rosidl_typesupport_cpp::MapPoint_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ipm_interfaces, srv, MapPoint_Request)() {
  return get_message_type_support_handle<ipm_interfaces::srv::MapPoint_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ipm_interfaces/srv/detail/map_point__functions.h"
// already included above
// #include "ipm_interfaces/srv/detail/map_point__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ipm_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _MapPoint_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MapPoint_Response_type_support_ids_t;

static const _MapPoint_Response_type_support_ids_t _MapPoint_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MapPoint_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MapPoint_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MapPoint_Response_type_support_symbol_names_t _MapPoint_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ipm_interfaces, srv, MapPoint_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ipm_interfaces, srv, MapPoint_Response)),
  }
};

typedef struct _MapPoint_Response_type_support_data_t
{
  void * data[2];
} _MapPoint_Response_type_support_data_t;

static _MapPoint_Response_type_support_data_t _MapPoint_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MapPoint_Response_message_typesupport_map = {
  2,
  "ipm_interfaces",
  &_MapPoint_Response_message_typesupport_ids.typesupport_identifier[0],
  &_MapPoint_Response_message_typesupport_symbol_names.symbol_name[0],
  &_MapPoint_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MapPoint_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MapPoint_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ipm_interfaces__srv__MapPoint_Response__get_type_hash,
  &ipm_interfaces__srv__MapPoint_Response__get_type_description,
  &ipm_interfaces__srv__MapPoint_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace ipm_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ipm_interfaces::srv::MapPoint_Response>()
{
  return &::ipm_interfaces::srv::rosidl_typesupport_cpp::MapPoint_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ipm_interfaces, srv, MapPoint_Response)() {
  return get_message_type_support_handle<ipm_interfaces::srv::MapPoint_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ipm_interfaces/srv/detail/map_point__functions.h"
// already included above
// #include "ipm_interfaces/srv/detail/map_point__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ipm_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _MapPoint_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MapPoint_Event_type_support_ids_t;

static const _MapPoint_Event_type_support_ids_t _MapPoint_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MapPoint_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MapPoint_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MapPoint_Event_type_support_symbol_names_t _MapPoint_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ipm_interfaces, srv, MapPoint_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ipm_interfaces, srv, MapPoint_Event)),
  }
};

typedef struct _MapPoint_Event_type_support_data_t
{
  void * data[2];
} _MapPoint_Event_type_support_data_t;

static _MapPoint_Event_type_support_data_t _MapPoint_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MapPoint_Event_message_typesupport_map = {
  2,
  "ipm_interfaces",
  &_MapPoint_Event_message_typesupport_ids.typesupport_identifier[0],
  &_MapPoint_Event_message_typesupport_symbol_names.symbol_name[0],
  &_MapPoint_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MapPoint_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MapPoint_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ipm_interfaces__srv__MapPoint_Event__get_type_hash,
  &ipm_interfaces__srv__MapPoint_Event__get_type_description,
  &ipm_interfaces__srv__MapPoint_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace ipm_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ipm_interfaces::srv::MapPoint_Event>()
{
  return &::ipm_interfaces::srv::rosidl_typesupport_cpp::MapPoint_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ipm_interfaces, srv, MapPoint_Event)() {
  return get_message_type_support_handle<ipm_interfaces::srv::MapPoint_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "ipm_interfaces/srv/detail/map_point__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ipm_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _MapPoint_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MapPoint_type_support_ids_t;

static const _MapPoint_type_support_ids_t _MapPoint_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MapPoint_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MapPoint_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MapPoint_type_support_symbol_names_t _MapPoint_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ipm_interfaces, srv, MapPoint)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ipm_interfaces, srv, MapPoint)),
  }
};

typedef struct _MapPoint_type_support_data_t
{
  void * data[2];
} _MapPoint_type_support_data_t;

static _MapPoint_type_support_data_t _MapPoint_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MapPoint_service_typesupport_map = {
  2,
  "ipm_interfaces",
  &_MapPoint_service_typesupport_ids.typesupport_identifier[0],
  &_MapPoint_service_typesupport_symbol_names.symbol_name[0],
  &_MapPoint_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t MapPoint_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MapPoint_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<ipm_interfaces::srv::MapPoint_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<ipm_interfaces::srv::MapPoint_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<ipm_interfaces::srv::MapPoint_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<ipm_interfaces::srv::MapPoint>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<ipm_interfaces::srv::MapPoint>,
  &ipm_interfaces__srv__MapPoint__get_type_hash,
  &ipm_interfaces__srv__MapPoint__get_type_description,
  &ipm_interfaces__srv__MapPoint__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace ipm_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<ipm_interfaces::srv::MapPoint>()
{
  return &::ipm_interfaces::srv::rosidl_typesupport_cpp::MapPoint_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, ipm_interfaces, srv, MapPoint)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<ipm_interfaces::srv::MapPoint>();
}

#ifdef __cplusplus
}
#endif
