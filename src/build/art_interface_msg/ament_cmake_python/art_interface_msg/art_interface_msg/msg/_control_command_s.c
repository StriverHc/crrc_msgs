// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from art_interface_msg:msg/ControlCommand.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "art_interface_msg/msg/detail/control_command__struct.h"
#include "art_interface_msg/msg/detail/control_command__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool art_interface_msg__msg__control_command__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[54];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("art_interface_msg.msg._control_command.ControlCommand", full_classname_dest, 53) == 0);
  }
  art_interface_msg__msg__ControlCommand * ros_message = _ros_message;
  {  // desired_steering_wheel_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "desired_steering_wheel_angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->desired_steering_wheel_angle = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // desired_iehs_work_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "desired_iehs_work_mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->desired_iehs_work_mode = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // vcu_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "vcu_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vcu_status = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // desired_steering_angle_enable
    PyObject * field = PyObject_GetAttrString(_pymsg, "desired_steering_angle_enable");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->desired_steering_angle_enable = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // desired_additional_torque
    PyObject * field = PyObject_GetAttrString(_pymsg, "desired_additional_torque");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->desired_additional_torque = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // desired_steering_wheel_angle_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "desired_steering_wheel_angle_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->desired_steering_wheel_angle_speed = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ids_life
    PyObject * field = PyObject_GetAttrString(_pymsg, "ids_life");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ids_life = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * art_interface_msg__msg__control_command__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ControlCommand */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("art_interface_msg.msg._control_command");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ControlCommand");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  art_interface_msg__msg__ControlCommand * ros_message = (art_interface_msg__msg__ControlCommand *)raw_ros_message;
  {  // desired_steering_wheel_angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->desired_steering_wheel_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "desired_steering_wheel_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // desired_iehs_work_mode
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->desired_iehs_work_mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "desired_iehs_work_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vcu_status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->vcu_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vcu_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // desired_steering_angle_enable
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->desired_steering_angle_enable);
    {
      int rc = PyObject_SetAttrString(_pymessage, "desired_steering_angle_enable", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // desired_additional_torque
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->desired_additional_torque);
    {
      int rc = PyObject_SetAttrString(_pymessage, "desired_additional_torque", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // desired_steering_wheel_angle_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->desired_steering_wheel_angle_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "desired_steering_wheel_angle_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ids_life
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ids_life);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ids_life", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
