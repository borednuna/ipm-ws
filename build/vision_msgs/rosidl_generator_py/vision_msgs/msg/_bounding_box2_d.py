# generated from rosidl_generator_py/resource/_idl.py.em
# with input from vision_msgs:msg/BoundingBox2D.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BoundingBox2D(type):
    """Metaclass of message 'BoundingBox2D'."""

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
            module = import_type_support('vision_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'vision_msgs.msg.BoundingBox2D')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__bounding_box2_d
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__bounding_box2_d
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__bounding_box2_d
            cls._TYPE_SUPPORT = module.type_support_msg__msg__bounding_box2_d
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__bounding_box2_d

            from vision_msgs.msg import Pose2D
            if Pose2D.__class__._TYPE_SUPPORT is None:
                Pose2D.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class BoundingBox2D(metaclass=Metaclass_BoundingBox2D):
    """Message class 'BoundingBox2D'."""

    __slots__ = [
        '_center',
        '_size_x',
        '_size_y',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'center': 'vision_msgs/Pose2D',
        'size_x': 'double',
        'size_y': 'double',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['vision_msgs', 'msg'], 'Pose2D'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
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
        from vision_msgs.msg import Pose2D
        self.center = kwargs.get('center', Pose2D())
        self.size_x = kwargs.get('size_x', float())
        self.size_y = kwargs.get('size_y', float())

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
        if self.center != other.center:
            return False
        if self.size_x != other.size_x:
            return False
        if self.size_y != other.size_y:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def center(self):
        """Message field 'center'."""
        return self._center

    @center.setter
    def center(self, value):
        if self._check_fields:
            from vision_msgs.msg import Pose2D
            assert \
                isinstance(value, Pose2D), \
                "The 'center' field must be a sub message of type 'Pose2D'"
        self._center = value

    @builtins.property
    def size_x(self):
        """Message field 'size_x'."""
        return self._size_x

    @size_x.setter
    def size_x(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'size_x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'size_x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._size_x = value

    @builtins.property
    def size_y(self):
        """Message field 'size_y'."""
        return self._size_y

    @size_y.setter
    def size_y(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'size_y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'size_y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._size_y = value
