// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from art_interface_msg:msg/ArtStatus.idl
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
#include "art_interface_msg/msg/detail/art_status__struct.h"
#include "art_interface_msg/msg/detail/art_status__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool art_interface_msg__msg__art_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[44];
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
    assert(strncmp("art_interface_msg.msg._art_status.ArtStatus", full_classname_dest, 43) == 0);
  }
  art_interface_msg__msg__ArtStatus * ros_message = _ros_message;
  {  // das_control_disfunction
    PyObject * field = PyObject_GetAttrString(_pymsg, "das_control_disfunction");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->das_control_disfunction = (Py_True == field);
    Py_DECREF(field);
  }
  {  // lateral_control_activation
    PyObject * field = PyObject_GetAttrString(_pymsg, "lateral_control_activation");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->lateral_control_activation = (Py_True == field);
    Py_DECREF(field);
  }
  {  // deviation_warning_activation
    PyObject * field = PyObject_GetAttrString(_pymsg, "deviation_warning_activation");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->deviation_warning_activation = (Py_True == field);
    Py_DECREF(field);
  }
  {  // iehs_comm_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "iehs_comm_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->iehs_comm_error = (Py_True == field);
    Py_DECREF(field);
  }
  {  // ccu_life
    PyObject * field = PyObject_GetAttrString(_pymsg, "ccu_life");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ccu_life = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // tram_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "tram_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->tram_speed = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // movement_direction_activation_signal
    PyObject * field = PyObject_GetAttrString(_pymsg, "movement_direction_activation_signal");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->movement_direction_activation_signal = (Py_True == field);
    Py_DECREF(field);
  }
  {  // actual_tire_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "actual_tire_angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->actual_tire_angle = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // axle1_sensor_error_a
    PyObject * field = PyObject_GetAttrString(_pymsg, "axle1_sensor_error_a");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->axle1_sensor_error_a = (Py_True == field);
    Py_DECREF(field);
  }
  {  // axle1_sensor_error_b
    PyObject * field = PyObject_GetAttrString(_pymsg, "axle1_sensor_error_b");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->axle1_sensor_error_b = (Py_True == field);
    Py_DECREF(field);
  }
  {  // axle1_sensor_error_electrical
    PyObject * field = PyObject_GetAttrString(_pymsg, "axle1_sensor_error_electrical");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->axle1_sensor_error_electrical = (Py_True == field);
    Py_DECREF(field);
  }
  {  // axle2_sensor_error_a
    PyObject * field = PyObject_GetAttrString(_pymsg, "axle2_sensor_error_a");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->axle2_sensor_error_a = (Py_True == field);
    Py_DECREF(field);
  }
  {  // axle2_sensor_error_b
    PyObject * field = PyObject_GetAttrString(_pymsg, "axle2_sensor_error_b");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->axle2_sensor_error_b = (Py_True == field);
    Py_DECREF(field);
  }
  {  // axle2_sensor_error_electrical
    PyObject * field = PyObject_GetAttrString(_pymsg, "axle2_sensor_error_electrical");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->axle2_sensor_error_electrical = (Py_True == field);
    Py_DECREF(field);
  }
  {  // actual_steering_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "actual_steering_angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->actual_steering_angle = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // iehs_device_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "iehs_device_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->iehs_device_fault = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * art_interface_msg__msg__art_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ArtStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("art_interface_msg.msg._art_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ArtStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  art_interface_msg__msg__ArtStatus * ros_message = (art_interface_msg__msg__ArtStatus *)raw_ros_message;
  {  // das_control_disfunction
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->das_control_disfunction ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "das_control_disfunction", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lateral_control_activation
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->lateral_control_activation ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lateral_control_activation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // deviation_warning_activation
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->deviation_warning_activation ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "deviation_warning_activation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // iehs_comm_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->iehs_comm_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "iehs_comm_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ccu_life
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ccu_life);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ccu_life", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tram_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->tram_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tram_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // movement_direction_activation_signal
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->movement_direction_activation_signal ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "movement_direction_activation_signal", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // actual_tire_angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->actual_tire_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "actual_tire_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // axle1_sensor_error_a
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->axle1_sensor_error_a ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "axle1_sensor_error_a", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // axle1_sensor_error_b
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->axle1_sensor_error_b ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "axle1_sensor_error_b", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // axle1_sensor_error_electrical
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->axle1_sensor_error_electrical ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "axle1_sensor_error_electrical", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // axle2_sensor_error_a
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->axle2_sensor_error_a ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "axle2_sensor_error_a", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // axle2_sensor_error_b
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->axle2_sensor_error_b ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "axle2_sensor_error_b", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // axle2_sensor_error_electrical
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->axle2_sensor_error_electrical ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "axle2_sensor_error_electrical", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // actual_steering_angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->actual_steering_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "actual_steering_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // iehs_device_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->iehs_device_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "iehs_device_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
