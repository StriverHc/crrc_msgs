# generated from rosidl_generator_py/resource/_idl.py.em
# with input from art_interface_msg:msg/ControlCommand.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ControlCommand(type):
    """Metaclass of message 'ControlCommand'."""

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
            module = import_type_support('art_interface_msg')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'art_interface_msg.msg.ControlCommand')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__control_command
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__control_command
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__control_command
            cls._TYPE_SUPPORT = module.type_support_msg__msg__control_command
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__control_command

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ControlCommand(metaclass=Metaclass_ControlCommand):
    """Message class 'ControlCommand'."""

    __slots__ = [
        '_desired_steering_wheel_angle',
        '_desired_iehs_work_mode',
        '_vcu_status',
        '_desired_steering_angle_enable',
        '_desired_additional_torque',
        '_desired_steering_wheel_angle_speed',
        '_ids_life',
    ]

    _fields_and_field_types = {
        'desired_steering_wheel_angle': 'double',
        'desired_iehs_work_mode': 'uint8',
        'vcu_status': 'uint8',
        'desired_steering_angle_enable': 'uint8',
        'desired_additional_torque': 'double',
        'desired_steering_wheel_angle_speed': 'double',
        'ids_life': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.desired_steering_wheel_angle = kwargs.get('desired_steering_wheel_angle', float())
        self.desired_iehs_work_mode = kwargs.get('desired_iehs_work_mode', int())
        self.vcu_status = kwargs.get('vcu_status', int())
        self.desired_steering_angle_enable = kwargs.get('desired_steering_angle_enable', int())
        self.desired_additional_torque = kwargs.get('desired_additional_torque', float())
        self.desired_steering_wheel_angle_speed = kwargs.get('desired_steering_wheel_angle_speed', float())
        self.ids_life = kwargs.get('ids_life', int())

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
        if self.desired_steering_wheel_angle != other.desired_steering_wheel_angle:
            return False
        if self.desired_iehs_work_mode != other.desired_iehs_work_mode:
            return False
        if self.vcu_status != other.vcu_status:
            return False
        if self.desired_steering_angle_enable != other.desired_steering_angle_enable:
            return False
        if self.desired_additional_torque != other.desired_additional_torque:
            return False
        if self.desired_steering_wheel_angle_speed != other.desired_steering_wheel_angle_speed:
            return False
        if self.ids_life != other.ids_life:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def desired_steering_wheel_angle(self):
        """Message field 'desired_steering_wheel_angle'."""
        return self._desired_steering_wheel_angle

    @desired_steering_wheel_angle.setter
    def desired_steering_wheel_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'desired_steering_wheel_angle' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'desired_steering_wheel_angle' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._desired_steering_wheel_angle = value

    @builtins.property
    def desired_iehs_work_mode(self):
        """Message field 'desired_iehs_work_mode'."""
        return self._desired_iehs_work_mode

    @desired_iehs_work_mode.setter
    def desired_iehs_work_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'desired_iehs_work_mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'desired_iehs_work_mode' field must be an unsigned integer in [0, 255]"
        self._desired_iehs_work_mode = value

    @builtins.property
    def vcu_status(self):
        """Message field 'vcu_status'."""
        return self._vcu_status

    @vcu_status.setter
    def vcu_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vcu_status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'vcu_status' field must be an unsigned integer in [0, 255]"
        self._vcu_status = value

    @builtins.property
    def desired_steering_angle_enable(self):
        """Message field 'desired_steering_angle_enable'."""
        return self._desired_steering_angle_enable

    @desired_steering_angle_enable.setter
    def desired_steering_angle_enable(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'desired_steering_angle_enable' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'desired_steering_angle_enable' field must be an unsigned integer in [0, 255]"
        self._desired_steering_angle_enable = value

    @builtins.property
    def desired_additional_torque(self):
        """Message field 'desired_additional_torque'."""
        return self._desired_additional_torque

    @desired_additional_torque.setter
    def desired_additional_torque(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'desired_additional_torque' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'desired_additional_torque' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._desired_additional_torque = value

    @builtins.property
    def desired_steering_wheel_angle_speed(self):
        """Message field 'desired_steering_wheel_angle_speed'."""
        return self._desired_steering_wheel_angle_speed

    @desired_steering_wheel_angle_speed.setter
    def desired_steering_wheel_angle_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'desired_steering_wheel_angle_speed' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'desired_steering_wheel_angle_speed' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._desired_steering_wheel_angle_speed = value

    @builtins.property
    def ids_life(self):
        """Message field 'ids_life'."""
        return self._ids_life

    @ids_life.setter
    def ids_life(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ids_life' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ids_life' field must be an unsigned integer in [0, 255]"
        self._ids_life = value
