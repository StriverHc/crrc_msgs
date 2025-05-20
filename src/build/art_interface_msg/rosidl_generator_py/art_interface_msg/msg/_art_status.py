# generated from rosidl_generator_py/resource/_idl.py.em
# with input from art_interface_msg:msg/ArtStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ArtStatus(type):
    """Metaclass of message 'ArtStatus'."""

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
                'art_interface_msg.msg.ArtStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__art_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__art_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__art_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__art_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__art_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ArtStatus(metaclass=Metaclass_ArtStatus):
    """Message class 'ArtStatus'."""

    __slots__ = [
        '_das_control_disfunction',
        '_lateral_control_activation',
        '_deviation_warning_activation',
        '_iehs_comm_error',
        '_ccu_life',
        '_tram_speed',
        '_movement_direction_activation_signal',
        '_actual_tire_angle',
        '_axle1_sensor_error_a',
        '_axle1_sensor_error_b',
        '_axle1_sensor_error_electrical',
        '_axle2_sensor_error_a',
        '_axle2_sensor_error_b',
        '_axle2_sensor_error_electrical',
        '_actual_steering_angle',
        '_iehs_device_fault',
    ]

    _fields_and_field_types = {
        'das_control_disfunction': 'boolean',
        'lateral_control_activation': 'boolean',
        'deviation_warning_activation': 'boolean',
        'iehs_comm_error': 'boolean',
        'ccu_life': 'uint8',
        'tram_speed': 'double',
        'movement_direction_activation_signal': 'boolean',
        'actual_tire_angle': 'double',
        'axle1_sensor_error_a': 'boolean',
        'axle1_sensor_error_b': 'boolean',
        'axle1_sensor_error_electrical': 'boolean',
        'axle2_sensor_error_a': 'boolean',
        'axle2_sensor_error_b': 'boolean',
        'axle2_sensor_error_electrical': 'boolean',
        'actual_steering_angle': 'double',
        'iehs_device_fault': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.das_control_disfunction = kwargs.get('das_control_disfunction', bool())
        self.lateral_control_activation = kwargs.get('lateral_control_activation', bool())
        self.deviation_warning_activation = kwargs.get('deviation_warning_activation', bool())
        self.iehs_comm_error = kwargs.get('iehs_comm_error', bool())
        self.ccu_life = kwargs.get('ccu_life', int())
        self.tram_speed = kwargs.get('tram_speed', float())
        self.movement_direction_activation_signal = kwargs.get('movement_direction_activation_signal', bool())
        self.actual_tire_angle = kwargs.get('actual_tire_angle', float())
        self.axle1_sensor_error_a = kwargs.get('axle1_sensor_error_a', bool())
        self.axle1_sensor_error_b = kwargs.get('axle1_sensor_error_b', bool())
        self.axle1_sensor_error_electrical = kwargs.get('axle1_sensor_error_electrical', bool())
        self.axle2_sensor_error_a = kwargs.get('axle2_sensor_error_a', bool())
        self.axle2_sensor_error_b = kwargs.get('axle2_sensor_error_b', bool())
        self.axle2_sensor_error_electrical = kwargs.get('axle2_sensor_error_electrical', bool())
        self.actual_steering_angle = kwargs.get('actual_steering_angle', float())
        self.iehs_device_fault = kwargs.get('iehs_device_fault', bool())

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
        if self.das_control_disfunction != other.das_control_disfunction:
            return False
        if self.lateral_control_activation != other.lateral_control_activation:
            return False
        if self.deviation_warning_activation != other.deviation_warning_activation:
            return False
        if self.iehs_comm_error != other.iehs_comm_error:
            return False
        if self.ccu_life != other.ccu_life:
            return False
        if self.tram_speed != other.tram_speed:
            return False
        if self.movement_direction_activation_signal != other.movement_direction_activation_signal:
            return False
        if self.actual_tire_angle != other.actual_tire_angle:
            return False
        if self.axle1_sensor_error_a != other.axle1_sensor_error_a:
            return False
        if self.axle1_sensor_error_b != other.axle1_sensor_error_b:
            return False
        if self.axle1_sensor_error_electrical != other.axle1_sensor_error_electrical:
            return False
        if self.axle2_sensor_error_a != other.axle2_sensor_error_a:
            return False
        if self.axle2_sensor_error_b != other.axle2_sensor_error_b:
            return False
        if self.axle2_sensor_error_electrical != other.axle2_sensor_error_electrical:
            return False
        if self.actual_steering_angle != other.actual_steering_angle:
            return False
        if self.iehs_device_fault != other.iehs_device_fault:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def das_control_disfunction(self):
        """Message field 'das_control_disfunction'."""
        return self._das_control_disfunction

    @das_control_disfunction.setter
    def das_control_disfunction(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'das_control_disfunction' field must be of type 'bool'"
        self._das_control_disfunction = value

    @builtins.property
    def lateral_control_activation(self):
        """Message field 'lateral_control_activation'."""
        return self._lateral_control_activation

    @lateral_control_activation.setter
    def lateral_control_activation(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'lateral_control_activation' field must be of type 'bool'"
        self._lateral_control_activation = value

    @builtins.property
    def deviation_warning_activation(self):
        """Message field 'deviation_warning_activation'."""
        return self._deviation_warning_activation

    @deviation_warning_activation.setter
    def deviation_warning_activation(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'deviation_warning_activation' field must be of type 'bool'"
        self._deviation_warning_activation = value

    @builtins.property
    def iehs_comm_error(self):
        """Message field 'iehs_comm_error'."""
        return self._iehs_comm_error

    @iehs_comm_error.setter
    def iehs_comm_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'iehs_comm_error' field must be of type 'bool'"
        self._iehs_comm_error = value

    @builtins.property
    def ccu_life(self):
        """Message field 'ccu_life'."""
        return self._ccu_life

    @ccu_life.setter
    def ccu_life(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ccu_life' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ccu_life' field must be an unsigned integer in [0, 255]"
        self._ccu_life = value

    @builtins.property
    def tram_speed(self):
        """Message field 'tram_speed'."""
        return self._tram_speed

    @tram_speed.setter
    def tram_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'tram_speed' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'tram_speed' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._tram_speed = value

    @builtins.property
    def movement_direction_activation_signal(self):
        """Message field 'movement_direction_activation_signal'."""
        return self._movement_direction_activation_signal

    @movement_direction_activation_signal.setter
    def movement_direction_activation_signal(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'movement_direction_activation_signal' field must be of type 'bool'"
        self._movement_direction_activation_signal = value

    @builtins.property
    def actual_tire_angle(self):
        """Message field 'actual_tire_angle'."""
        return self._actual_tire_angle

    @actual_tire_angle.setter
    def actual_tire_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'actual_tire_angle' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'actual_tire_angle' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._actual_tire_angle = value

    @builtins.property
    def axle1_sensor_error_a(self):
        """Message field 'axle1_sensor_error_a'."""
        return self._axle1_sensor_error_a

    @axle1_sensor_error_a.setter
    def axle1_sensor_error_a(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'axle1_sensor_error_a' field must be of type 'bool'"
        self._axle1_sensor_error_a = value

    @builtins.property
    def axle1_sensor_error_b(self):
        """Message field 'axle1_sensor_error_b'."""
        return self._axle1_sensor_error_b

    @axle1_sensor_error_b.setter
    def axle1_sensor_error_b(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'axle1_sensor_error_b' field must be of type 'bool'"
        self._axle1_sensor_error_b = value

    @builtins.property
    def axle1_sensor_error_electrical(self):
        """Message field 'axle1_sensor_error_electrical'."""
        return self._axle1_sensor_error_electrical

    @axle1_sensor_error_electrical.setter
    def axle1_sensor_error_electrical(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'axle1_sensor_error_electrical' field must be of type 'bool'"
        self._axle1_sensor_error_electrical = value

    @builtins.property
    def axle2_sensor_error_a(self):
        """Message field 'axle2_sensor_error_a'."""
        return self._axle2_sensor_error_a

    @axle2_sensor_error_a.setter
    def axle2_sensor_error_a(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'axle2_sensor_error_a' field must be of type 'bool'"
        self._axle2_sensor_error_a = value

    @builtins.property
    def axle2_sensor_error_b(self):
        """Message field 'axle2_sensor_error_b'."""
        return self._axle2_sensor_error_b

    @axle2_sensor_error_b.setter
    def axle2_sensor_error_b(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'axle2_sensor_error_b' field must be of type 'bool'"
        self._axle2_sensor_error_b = value

    @builtins.property
    def axle2_sensor_error_electrical(self):
        """Message field 'axle2_sensor_error_electrical'."""
        return self._axle2_sensor_error_electrical

    @axle2_sensor_error_electrical.setter
    def axle2_sensor_error_electrical(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'axle2_sensor_error_electrical' field must be of type 'bool'"
        self._axle2_sensor_error_electrical = value

    @builtins.property
    def actual_steering_angle(self):
        """Message field 'actual_steering_angle'."""
        return self._actual_steering_angle

    @actual_steering_angle.setter
    def actual_steering_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'actual_steering_angle' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'actual_steering_angle' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._actual_steering_angle = value

    @builtins.property
    def iehs_device_fault(self):
        """Message field 'iehs_device_fault'."""
        return self._iehs_device_fault

    @iehs_device_fault.setter
    def iehs_device_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'iehs_device_fault' field must be of type 'bool'"
        self._iehs_device_fault = value
