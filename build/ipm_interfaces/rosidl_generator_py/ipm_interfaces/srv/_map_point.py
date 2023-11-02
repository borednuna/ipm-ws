# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ipm_interfaces:srv/MapPoint.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MapPoint_Request(type):
    """Metaclass of message 'MapPoint_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('ipm_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ipm_interfaces.srv.MapPoint_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__map_point__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__map_point__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__map_point__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__map_point__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__map_point__request

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

            from shape_msgs.msg import Plane
            if Plane.__class__._TYPE_SUPPORT is None:
                Plane.__class__.__import_type_support__()

            from vision_msgs.msg import Point2D
            if Point2D.__class__._TYPE_SUPPORT is None:
                Point2D.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MapPoint_Request(metaclass=Metaclass_MapPoint_Request):
    """Message class 'MapPoint_Request'."""

    __slots__ = [
        '_plane',
        '_point',
        '_time',
        '_plane_frame_id',
        '_output_frame_id',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'plane': 'shape_msgs/Plane',
        'point': 'vision_msgs/Point2D',
        'time': 'builtin_interfaces/Time',
        'plane_frame_id': 'string',
        'output_frame_id': 'string',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['shape_msgs', 'msg'], 'Plane'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['vision_msgs', 'msg'], 'Point2D'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from shape_msgs.msg import Plane
        self.plane = kwargs.get('plane', Plane())
        from vision_msgs.msg import Point2D
        self.point = kwargs.get('point', Point2D())
        from builtin_interfaces.msg import Time
        self.time = kwargs.get('time', Time())
        self.plane_frame_id = kwargs.get('plane_frame_id', str())
        self.output_frame_id = kwargs.get('output_frame_id', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.plane != other.plane:
            return False
        if self.point != other.point:
            return False
        if self.time != other.time:
            return False
        if self.plane_frame_id != other.plane_frame_id:
            return False
        if self.output_frame_id != other.output_frame_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def plane(self):
        """Message field 'plane'."""
        return self._plane

    @plane.setter
    def plane(self, value):
        if self._check_fields:
            from shape_msgs.msg import Plane
            assert \
                isinstance(value, Plane), \
                "The 'plane' field must be a sub message of type 'Plane'"
        self._plane = value

    @builtins.property
    def point(self):
        """Message field 'point'."""
        return self._point

    @point.setter
    def point(self, value):
        if self._check_fields:
            from vision_msgs.msg import Point2D
            assert \
                isinstance(value, Point2D), \
                "The 'point' field must be a sub message of type 'Point2D'"
        self._point = value

    @builtins.property
    def time(self):
        """Message field 'time'."""
        return self._time

    @time.setter
    def time(self, value):
        if self._check_fields:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'time' field must be a sub message of type 'Time'"
        self._time = value

    @builtins.property
    def plane_frame_id(self):
        """Message field 'plane_frame_id'."""
        return self._plane_frame_id

    @plane_frame_id.setter
    def plane_frame_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'plane_frame_id' field must be of type 'str'"
        self._plane_frame_id = value

    @builtins.property
    def output_frame_id(self):
        """Message field 'output_frame_id'."""
        return self._output_frame_id

    @output_frame_id.setter
    def output_frame_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'output_frame_id' field must be of type 'str'"
        self._output_frame_id = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_MapPoint_Response(type):
    """Metaclass of message 'MapPoint_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'RESULT_SUCCESS': 0,
        'RESULT_NO_CAMERA_INFO': 1,
        'RESULT_INVALID_PLANE': 2,
        'RESULT_NO_INTERSECTION': 3,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('ipm_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ipm_interfaces.srv.MapPoint_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__map_point__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__map_point__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__map_point__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__map_point__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__map_point__response

            from geometry_msgs.msg import PointStamped
            if PointStamped.__class__._TYPE_SUPPORT is None:
                PointStamped.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'RESULT_SUCCESS': cls.__constants['RESULT_SUCCESS'],
            'RESULT_NO_CAMERA_INFO': cls.__constants['RESULT_NO_CAMERA_INFO'],
            'RESULT_INVALID_PLANE': cls.__constants['RESULT_INVALID_PLANE'],
            'RESULT_NO_INTERSECTION': cls.__constants['RESULT_NO_INTERSECTION'],
        }

    @property
    def RESULT_SUCCESS(self):
        """Message constant 'RESULT_SUCCESS'."""
        return Metaclass_MapPoint_Response.__constants['RESULT_SUCCESS']

    @property
    def RESULT_NO_CAMERA_INFO(self):
        """Message constant 'RESULT_NO_CAMERA_INFO'."""
        return Metaclass_MapPoint_Response.__constants['RESULT_NO_CAMERA_INFO']

    @property
    def RESULT_INVALID_PLANE(self):
        """Message constant 'RESULT_INVALID_PLANE'."""
        return Metaclass_MapPoint_Response.__constants['RESULT_INVALID_PLANE']

    @property
    def RESULT_NO_INTERSECTION(self):
        """Message constant 'RESULT_NO_INTERSECTION'."""
        return Metaclass_MapPoint_Response.__constants['RESULT_NO_INTERSECTION']


class MapPoint_Response(metaclass=Metaclass_MapPoint_Response):
    """
    Message class 'MapPoint_Response'.

    Constants:
      RESULT_SUCCESS
      RESULT_NO_CAMERA_INFO
      RESULT_INVALID_PLANE
      RESULT_NO_INTERSECTION
    """

    __slots__ = [
        '_point',
        '_result',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'point': 'geometry_msgs/PointStamped',
        'result': 'uint8',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PointStamped'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from geometry_msgs.msg import PointStamped
        self.point = kwargs.get('point', PointStamped())
        self.result = kwargs.get('result', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.point != other.point:
            return False
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def point(self):
        """Message field 'point'."""
        return self._point

    @point.setter
    def point(self, value):
        if self._check_fields:
            from geometry_msgs.msg import PointStamped
            assert \
                isinstance(value, PointStamped), \
                "The 'point' field must be a sub message of type 'PointStamped'"
        self._point = value

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'result' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'result' field must be an unsigned integer in [0, 255]"
        self._result = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_MapPoint_Event(type):
    """Metaclass of message 'MapPoint_Event'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('ipm_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ipm_interfaces.srv.MapPoint_Event')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__map_point__event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__map_point__event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__map_point__event
            cls._TYPE_SUPPORT = module.type_support_msg__srv__map_point__event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__map_point__event

            from service_msgs.msg import ServiceEventInfo
            if ServiceEventInfo.__class__._TYPE_SUPPORT is None:
                ServiceEventInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MapPoint_Event(metaclass=Metaclass_MapPoint_Event):
    """Message class 'MapPoint_Event'."""

    __slots__ = [
        '_info',
        '_request',
        '_response',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'info': 'service_msgs/ServiceEventInfo',
        'request': 'sequence<ipm_interfaces/MapPoint_Request, 1>',
        'response': 'sequence<ipm_interfaces/MapPoint_Response, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['service_msgs', 'msg'], 'ServiceEventInfo'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['ipm_interfaces', 'srv'], 'MapPoint_Request'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['ipm_interfaces', 'srv'], 'MapPoint_Response'), 1),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from service_msgs.msg import ServiceEventInfo
        self.info = kwargs.get('info', ServiceEventInfo())
        self.request = kwargs.get('request', [])
        self.response = kwargs.get('response', [])

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.info != other.info:
            return False
        if self.request != other.request:
            return False
        if self.response != other.response:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def info(self):
        """Message field 'info'."""
        return self._info

    @info.setter
    def info(self, value):
        if self._check_fields:
            from service_msgs.msg import ServiceEventInfo
            assert \
                isinstance(value, ServiceEventInfo), \
                "The 'info' field must be a sub message of type 'ServiceEventInfo'"
        self._info = value

    @builtins.property
    def request(self):
        """Message field 'request'."""
        return self._request

    @request.setter
    def request(self, value):
        if self._check_fields:
            from ipm_interfaces.srv import MapPoint_Request
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) <= 1 and
                 all(isinstance(v, MapPoint_Request) for v in value) and
                 True), \
                "The 'request' field must be a set or sequence with length <= 1 and each value of type 'MapPoint_Request'"
        self._request = value

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if self._check_fields:
            from ipm_interfaces.srv import MapPoint_Response
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) <= 1 and
                 all(isinstance(v, MapPoint_Response) for v in value) and
                 True), \
                "The 'response' field must be a set or sequence with length <= 1 and each value of type 'MapPoint_Response'"
        self._response = value


class Metaclass_MapPoint(type):
    """Metaclass of service 'MapPoint'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('ipm_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ipm_interfaces.srv.MapPoint')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__map_point

            from ipm_interfaces.srv import _map_point
            if _map_point.Metaclass_MapPoint_Request._TYPE_SUPPORT is None:
                _map_point.Metaclass_MapPoint_Request.__import_type_support__()
            if _map_point.Metaclass_MapPoint_Response._TYPE_SUPPORT is None:
                _map_point.Metaclass_MapPoint_Response.__import_type_support__()
            if _map_point.Metaclass_MapPoint_Event._TYPE_SUPPORT is None:
                _map_point.Metaclass_MapPoint_Event.__import_type_support__()


class MapPoint(metaclass=Metaclass_MapPoint):
    from ipm_interfaces.srv._map_point import MapPoint_Request as Request
    from ipm_interfaces.srv._map_point import MapPoint_Response as Response
    from ipm_interfaces.srv._map_point import MapPoint_Event as Event

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
