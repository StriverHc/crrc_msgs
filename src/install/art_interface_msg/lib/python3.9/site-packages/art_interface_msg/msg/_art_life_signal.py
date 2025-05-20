# generated from rosidl_generator_py/resource/_idl.py.em
# with input from art_interface_msg:msg/ArtLifeSignal.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ArtLifeSignal(type):
    """Metaclass of message 'ArtLifeSignal'."""

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
                'art_interface_msg.msg.ArtLifeSignal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__art_life_signal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__art_life_signal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__art_life_signal
            cls._TYPE_SUPPORT = module.type_support_msg__msg__art_life_signal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__art_life_signal

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ArtLifeSignal(metaclass=Metaclass_ArtLifeSignal):
    """Message class 'ArtLifeSignal'."""

    __slots__ = [
        '_ccu_life',
        '_scs_life',
        '_dpu_life',
    ]

    _fields_and_field_types = {
        'ccu_life': 'uint8',
        'scs_life': 'uint8',
        'dpu_life': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.ccu_life = kwargs.get('ccu_life', int())
        self.scs_life = kwargs.get('scs_life', int())
        self.dpu_life = kwargs.get('dpu_life', int())

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
        if self.ccu_life != other.ccu_life:
            return False
        if self.scs_life != other.scs_life:
            return False
        if self.dpu_life != other.dpu_life:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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
    def scs_life(self):
        """Message field 'scs_life'."""
        return self._scs_life

    @scs_life.setter
    def scs_life(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'scs_life' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'scs_life' field must be an unsigned integer in [0, 255]"
        self._scs_life = value

    @builtins.property
    def dpu_life(self):
        """Message field 'dpu_life'."""
        return self._dpu_life

    @dpu_life.setter
    def dpu_life(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'dpu_life' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'dpu_life' field must be an unsigned integer in [0, 255]"
        self._dpu_life = value
