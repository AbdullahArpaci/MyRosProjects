# generated from rosidl_generator_py/resource/_idl.py.em
# with input from drone_interfaces:srv/MissionDispatch.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'target_loc'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MissionDispatch_Request(type):
    """Metaclass of message 'MissionDispatch_Request'."""

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
            module = import_type_support('drone_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'drone_interfaces.srv.MissionDispatch_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__mission_dispatch__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__mission_dispatch__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__mission_dispatch__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__mission_dispatch__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__mission_dispatch__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MissionDispatch_Request(metaclass=Metaclass_MissionDispatch_Request):
    """Message class 'MissionDispatch_Request'."""

    __slots__ = [
        '_target_drone_id',
        '_target_loc',
        '_mission_type',
    ]

    _fields_and_field_types = {
        'target_drone_id': 'int32',
        'target_loc': 'float[3]',
        'mission_type': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.target_drone_id = kwargs.get('target_drone_id', int())
        if 'target_loc' not in kwargs:
            self.target_loc = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.target_loc = kwargs.get('target_loc')
        self.mission_type = kwargs.get('mission_type', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
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
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.target_drone_id != other.target_drone_id:
            return False
        if any(self.target_loc != other.target_loc):
            return False
        if self.mission_type != other.mission_type:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def target_drone_id(self):
        """Message field 'target_drone_id'."""
        return self._target_drone_id

    @target_drone_id.setter
    def target_drone_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'target_drone_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'target_drone_id' field must be an integer in [-2147483648, 2147483647]"
        self._target_drone_id = value

    @builtins.property
    def target_loc(self):
        """Message field 'target_loc'."""
        return self._target_loc

    @target_loc.setter
    def target_loc(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'target_loc' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'target_loc' numpy.ndarray() must have a size of 3"
            self._target_loc = value
            return
        if __debug__:
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
                 len(value) == 3 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'target_loc' field must be a set or sequence with length 3 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._target_loc = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def mission_type(self):
        """Message field 'mission_type'."""
        return self._mission_type

    @mission_type.setter
    def mission_type(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'mission_type' field must be of type 'str'"
        self._mission_type = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_MissionDispatch_Response(type):
    """Metaclass of message 'MissionDispatch_Response'."""

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
            module = import_type_support('drone_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'drone_interfaces.srv.MissionDispatch_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__mission_dispatch__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__mission_dispatch__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__mission_dispatch__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__mission_dispatch__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__mission_dispatch__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MissionDispatch_Response(metaclass=Metaclass_MissionDispatch_Response):
    """Message class 'MissionDispatch_Response'."""

    __slots__ = [
        '_success',
        '_status_message',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'status_message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        self.status_message = kwargs.get('status_message', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
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
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.success != other.success:
            return False
        if self.status_message != other.status_message:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

    @builtins.property
    def status_message(self):
        """Message field 'status_message'."""
        return self._status_message

    @status_message.setter
    def status_message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'status_message' field must be of type 'str'"
        self._status_message = value


class Metaclass_MissionDispatch(type):
    """Metaclass of service 'MissionDispatch'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('drone_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'drone_interfaces.srv.MissionDispatch')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__mission_dispatch

            from drone_interfaces.srv import _mission_dispatch
            if _mission_dispatch.Metaclass_MissionDispatch_Request._TYPE_SUPPORT is None:
                _mission_dispatch.Metaclass_MissionDispatch_Request.__import_type_support__()
            if _mission_dispatch.Metaclass_MissionDispatch_Response._TYPE_SUPPORT is None:
                _mission_dispatch.Metaclass_MissionDispatch_Response.__import_type_support__()


class MissionDispatch(metaclass=Metaclass_MissionDispatch):
    from drone_interfaces.srv._mission_dispatch import MissionDispatch_Request as Request
    from drone_interfaces.srv._mission_dispatch import MissionDispatch_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
