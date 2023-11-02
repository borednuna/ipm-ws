// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ipm_interfaces:srv/MapPoint.idl
// generated code does not contain a copyright notice

#include "ipm_interfaces/srv/detail/map_point__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ipm_interfaces
const rosidl_type_hash_t *
ipm_interfaces__srv__MapPoint__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xaf, 0xef, 0xc2, 0x88, 0xc2, 0xcd, 0x14, 0x10,
      0x63, 0xf8, 0x7a, 0x15, 0x8d, 0x49, 0xd5, 0xc6,
      0xe1, 0xa7, 0x7c, 0x88, 0x0a, 0xfd, 0xf9, 0x96,
      0x58, 0x21, 0x17, 0x64, 0x9a, 0xd7, 0xcd, 0xdb,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_ipm_interfaces
const rosidl_type_hash_t *
ipm_interfaces__srv__MapPoint_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x19, 0x6d, 0x73, 0x64, 0xfb, 0xdc, 0x33, 0x02,
      0x9b, 0x1c, 0xca, 0x6e, 0xa8, 0xdd, 0xdf, 0x26,
      0x88, 0x84, 0x47, 0x88, 0x45, 0x4d, 0x4d, 0xe7,
      0x18, 0xc9, 0x4f, 0xd2, 0x65, 0x8d, 0xb3, 0xaf,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_ipm_interfaces
const rosidl_type_hash_t *
ipm_interfaces__srv__MapPoint_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x39, 0xd6, 0x9e, 0x8b, 0x59, 0x92, 0xd8, 0x17,
      0x65, 0x9d, 0x9e, 0xa3, 0x08, 0xa0, 0xe7, 0x37,
      0x42, 0xe9, 0xe4, 0xec, 0x19, 0x20, 0x1a, 0x04,
      0xad, 0x36, 0x77, 0x15, 0xa8, 0x5b, 0xed, 0xad,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_ipm_interfaces
const rosidl_type_hash_t *
ipm_interfaces__srv__MapPoint_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x55, 0x11, 0x1b, 0x86, 0xbc, 0x5f, 0x57, 0xd8,
      0x77, 0x7c, 0xbe, 0x54, 0x78, 0x83, 0x81, 0x9e,
      0x0b, 0x70, 0x20, 0xa1, 0x31, 0x3e, 0x9b, 0x57,
      0x17, 0x81, 0x0b, 0x95, 0x84, 0x7a, 0xd8, 0x6d,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "geometry_msgs/msg/detail/point__functions.h"
#include "geometry_msgs/msg/detail/point_stamped__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "std_msgs/msg/detail/header__functions.h"
#include "vision_msgs/msg/detail/point2_d__functions.h"
#include "shape_msgs/msg/detail/plane__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Point__EXPECTED_HASH = {1, {
    0x69, 0x63, 0x08, 0x48, 0x42, 0xa9, 0xb0, 0x44,
    0x94, 0xd6, 0xb2, 0x94, 0x1d, 0x11, 0x44, 0x47,
    0x08, 0xd8, 0x92, 0xda, 0x2f, 0x4b, 0x09, 0x84,
    0x3b, 0x9c, 0x43, 0xf4, 0x2a, 0x7f, 0x68, 0x81,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__PointStamped__EXPECTED_HASH = {1, {
    0x4c, 0x02, 0x96, 0xaf, 0x86, 0xe0, 0x1e, 0x56,
    0x2e, 0x9e, 0x04, 0x05, 0xd1, 0x38, 0xa0, 0x15,
    0x37, 0x24, 0x75, 0x80, 0x07, 0x6c, 0x58, 0xea,
    0x38, 0xd7, 0x92, 0x3a, 0xc1, 0x04, 0x58, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
static const rosidl_type_hash_t shape_msgs__msg__Plane__EXPECTED_HASH = {1, {
    0xdf, 0xbf, 0xe8, 0x31, 0x46, 0x89, 0xc8, 0x50,
    0x61, 0x5d, 0x4a, 0x72, 0x7a, 0xf0, 0x17, 0xe9,
    0xaa, 0x86, 0xc1, 0x0e, 0x36, 0x9a, 0x60, 0x6c,
    0x8c, 0x85, 0x1e, 0xf8, 0xf1, 0x6c, 0x58, 0xc8,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
static const rosidl_type_hash_t vision_msgs__msg__Point2D__EXPECTED_HASH = {1, {
    0xea, 0xb0, 0xe8, 0x3f, 0x44, 0xab, 0x4d, 0xe9,
    0x2c, 0xea, 0xf7, 0x6d, 0xd7, 0xd0, 0xe7, 0x63,
    0x8f, 0x2b, 0xdd, 0x1d, 0x16, 0xff, 0xbe, 0x16,
    0xc7, 0xa1, 0x36, 0xc4, 0x8e, 0x40, 0x72, 0x47,
  }};
#endif

static char ipm_interfaces__srv__MapPoint__TYPE_NAME[] = "ipm_interfaces/srv/MapPoint";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";
static char geometry_msgs__msg__PointStamped__TYPE_NAME[] = "geometry_msgs/msg/PointStamped";
static char ipm_interfaces__srv__MapPoint_Event__TYPE_NAME[] = "ipm_interfaces/srv/MapPoint_Event";
static char ipm_interfaces__srv__MapPoint_Request__TYPE_NAME[] = "ipm_interfaces/srv/MapPoint_Request";
static char ipm_interfaces__srv__MapPoint_Response__TYPE_NAME[] = "ipm_interfaces/srv/MapPoint_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char shape_msgs__msg__Plane__TYPE_NAME[] = "shape_msgs/msg/Plane";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";
static char vision_msgs__msg__Point2D__TYPE_NAME[] = "vision_msgs/msg/Point2D";

// Define type names, field names, and default values
static char ipm_interfaces__srv__MapPoint__FIELD_NAME__request_message[] = "request_message";
static char ipm_interfaces__srv__MapPoint__FIELD_NAME__response_message[] = "response_message";
static char ipm_interfaces__srv__MapPoint__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field ipm_interfaces__srv__MapPoint__FIELDS[] = {
  {
    {ipm_interfaces__srv__MapPoint__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ipm_interfaces__srv__MapPoint_Request__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
  {
    {ipm_interfaces__srv__MapPoint__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ipm_interfaces__srv__MapPoint_Response__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
  {
    {ipm_interfaces__srv__MapPoint__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ipm_interfaces__srv__MapPoint_Event__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ipm_interfaces__srv__MapPoint__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__PointStamped__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {ipm_interfaces__srv__MapPoint_Event__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {ipm_interfaces__srv__MapPoint_Request__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {ipm_interfaces__srv__MapPoint_Response__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {shape_msgs__msg__Plane__TYPE_NAME, 20, 20},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
  {
    {vision_msgs__msg__Point2D__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ipm_interfaces__srv__MapPoint__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ipm_interfaces__srv__MapPoint__TYPE_NAME, 27, 27},
      {ipm_interfaces__srv__MapPoint__FIELDS, 3, 3},
    },
    {ipm_interfaces__srv__MapPoint__REFERENCED_TYPE_DESCRIPTIONS, 10, 10},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__PointStamped__EXPECTED_HASH, geometry_msgs__msg__PointStamped__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = geometry_msgs__msg__PointStamped__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = ipm_interfaces__srv__MapPoint_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = ipm_interfaces__srv__MapPoint_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[5].fields = ipm_interfaces__srv__MapPoint_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&shape_msgs__msg__Plane__EXPECTED_HASH, shape_msgs__msg__Plane__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = shape_msgs__msg__Plane__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[8].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&vision_msgs__msg__Point2D__EXPECTED_HASH, vision_msgs__msg__Point2D__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[9].fields = vision_msgs__msg__Point2D__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char ipm_interfaces__srv__MapPoint_Request__FIELD_NAME__plane[] = "plane";
static char ipm_interfaces__srv__MapPoint_Request__FIELD_NAME__point[] = "point";
static char ipm_interfaces__srv__MapPoint_Request__FIELD_NAME__time[] = "time";
static char ipm_interfaces__srv__MapPoint_Request__FIELD_NAME__plane_frame_id[] = "plane_frame_id";
static char ipm_interfaces__srv__MapPoint_Request__FIELD_NAME__output_frame_id[] = "output_frame_id";

static rosidl_runtime_c__type_description__Field ipm_interfaces__srv__MapPoint_Request__FIELDS[] = {
  {
    {ipm_interfaces__srv__MapPoint_Request__FIELD_NAME__plane, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {shape_msgs__msg__Plane__TYPE_NAME, 20, 20},
    },
    {NULL, 0, 0},
  },
  {
    {ipm_interfaces__srv__MapPoint_Request__FIELD_NAME__point, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {vision_msgs__msg__Point2D__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
  {
    {ipm_interfaces__srv__MapPoint_Request__FIELD_NAME__time, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {ipm_interfaces__srv__MapPoint_Request__FIELD_NAME__plane_frame_id, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ipm_interfaces__srv__MapPoint_Request__FIELD_NAME__output_frame_id, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ipm_interfaces__srv__MapPoint_Request__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {shape_msgs__msg__Plane__TYPE_NAME, 20, 20},
    {NULL, 0, 0},
  },
  {
    {vision_msgs__msg__Point2D__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ipm_interfaces__srv__MapPoint_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ipm_interfaces__srv__MapPoint_Request__TYPE_NAME, 35, 35},
      {ipm_interfaces__srv__MapPoint_Request__FIELDS, 5, 5},
    },
    {ipm_interfaces__srv__MapPoint_Request__REFERENCED_TYPE_DESCRIPTIONS, 3, 3},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&shape_msgs__msg__Plane__EXPECTED_HASH, shape_msgs__msg__Plane__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = shape_msgs__msg__Plane__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&vision_msgs__msg__Point2D__EXPECTED_HASH, vision_msgs__msg__Point2D__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = vision_msgs__msg__Point2D__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char ipm_interfaces__srv__MapPoint_Response__FIELD_NAME__point[] = "point";
static char ipm_interfaces__srv__MapPoint_Response__FIELD_NAME__result[] = "result";

static rosidl_runtime_c__type_description__Field ipm_interfaces__srv__MapPoint_Response__FIELDS[] = {
  {
    {ipm_interfaces__srv__MapPoint_Response__FIELD_NAME__point, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__PointStamped__TYPE_NAME, 30, 30},
    },
    {NULL, 0, 0},
  },
  {
    {ipm_interfaces__srv__MapPoint_Response__FIELD_NAME__result, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ipm_interfaces__srv__MapPoint_Response__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__PointStamped__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ipm_interfaces__srv__MapPoint_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ipm_interfaces__srv__MapPoint_Response__TYPE_NAME, 36, 36},
      {ipm_interfaces__srv__MapPoint_Response__FIELDS, 2, 2},
    },
    {ipm_interfaces__srv__MapPoint_Response__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__PointStamped__EXPECTED_HASH, geometry_msgs__msg__PointStamped__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = geometry_msgs__msg__PointStamped__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char ipm_interfaces__srv__MapPoint_Event__FIELD_NAME__info[] = "info";
static char ipm_interfaces__srv__MapPoint_Event__FIELD_NAME__request[] = "request";
static char ipm_interfaces__srv__MapPoint_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field ipm_interfaces__srv__MapPoint_Event__FIELDS[] = {
  {
    {ipm_interfaces__srv__MapPoint_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {ipm_interfaces__srv__MapPoint_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {ipm_interfaces__srv__MapPoint_Request__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
  {
    {ipm_interfaces__srv__MapPoint_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {ipm_interfaces__srv__MapPoint_Response__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ipm_interfaces__srv__MapPoint_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__PointStamped__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {ipm_interfaces__srv__MapPoint_Request__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {ipm_interfaces__srv__MapPoint_Response__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {shape_msgs__msg__Plane__TYPE_NAME, 20, 20},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
  {
    {vision_msgs__msg__Point2D__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ipm_interfaces__srv__MapPoint_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ipm_interfaces__srv__MapPoint_Event__TYPE_NAME, 33, 33},
      {ipm_interfaces__srv__MapPoint_Event__FIELDS, 3, 3},
    },
    {ipm_interfaces__srv__MapPoint_Event__REFERENCED_TYPE_DESCRIPTIONS, 9, 9},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__PointStamped__EXPECTED_HASH, geometry_msgs__msg__PointStamped__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = geometry_msgs__msg__PointStamped__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = ipm_interfaces__srv__MapPoint_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = ipm_interfaces__srv__MapPoint_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&shape_msgs__msg__Plane__EXPECTED_HASH, shape_msgs__msg__Plane__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = shape_msgs__msg__Plane__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&vision_msgs__msg__Point2D__EXPECTED_HASH, vision_msgs__msg__Point2D__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[8].fields = vision_msgs__msg__Point2D__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "shape_msgs/Plane plane\n"
  "vision_msgs/Point2D point\n"
  "builtin_interfaces/Time time\n"
  "string plane_frame_id\n"
  "string output_frame_id\n"
  "---\n"
  "# Result code defintions\n"
  "uint8 RESULT_SUCCESS=0\n"
  "uint8 RESULT_NO_CAMERA_INFO=1\n"
  "uint8 RESULT_INVALID_PLANE=2\n"
  "uint8 RESULT_NO_INTERSECTION=3\n"
  "\n"
  "# Returned point is only valid if result equals RESULT_SUCCESS\n"
  "geometry_msgs/PointStamped point\n"
  "uint8 result";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ipm_interfaces__srv__MapPoint__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ipm_interfaces__srv__MapPoint__TYPE_NAME, 27, 27},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 375, 375},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
ipm_interfaces__srv__MapPoint_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ipm_interfaces__srv__MapPoint_Request__TYPE_NAME, 35, 35},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
ipm_interfaces__srv__MapPoint_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ipm_interfaces__srv__MapPoint_Response__TYPE_NAME, 36, 36},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
ipm_interfaces__srv__MapPoint_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ipm_interfaces__srv__MapPoint_Event__TYPE_NAME, 33, 33},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ipm_interfaces__srv__MapPoint__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[11];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 11, 11};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ipm_interfaces__srv__MapPoint__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[3] = *geometry_msgs__msg__PointStamped__get_individual_type_description_source(NULL);
    sources[4] = *ipm_interfaces__srv__MapPoint_Event__get_individual_type_description_source(NULL);
    sources[5] = *ipm_interfaces__srv__MapPoint_Request__get_individual_type_description_source(NULL);
    sources[6] = *ipm_interfaces__srv__MapPoint_Response__get_individual_type_description_source(NULL);
    sources[7] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[8] = *shape_msgs__msg__Plane__get_individual_type_description_source(NULL);
    sources[9] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    sources[10] = *vision_msgs__msg__Point2D__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ipm_interfaces__srv__MapPoint_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ipm_interfaces__srv__MapPoint_Request__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *shape_msgs__msg__Plane__get_individual_type_description_source(NULL);
    sources[3] = *vision_msgs__msg__Point2D__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ipm_interfaces__srv__MapPoint_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ipm_interfaces__srv__MapPoint_Response__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[3] = *geometry_msgs__msg__PointStamped__get_individual_type_description_source(NULL);
    sources[4] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ipm_interfaces__srv__MapPoint_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[10];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 10, 10};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ipm_interfaces__srv__MapPoint_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[3] = *geometry_msgs__msg__PointStamped__get_individual_type_description_source(NULL);
    sources[4] = *ipm_interfaces__srv__MapPoint_Request__get_individual_type_description_source(NULL);
    sources[5] = *ipm_interfaces__srv__MapPoint_Response__get_individual_type_description_source(NULL);
    sources[6] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[7] = *shape_msgs__msg__Plane__get_individual_type_description_source(NULL);
    sources[8] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    sources[9] = *vision_msgs__msg__Point2D__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
