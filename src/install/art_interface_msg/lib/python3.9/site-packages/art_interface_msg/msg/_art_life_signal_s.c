// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from art_interface_msg:msg/ArtLifeSignal.idl
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
#include "art_interface_msg/msg/detail/art_life_signal__struct.h"
#include "art_interface_msg/msg/detail/art_life_signal__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool art_interface_msg__msg__art_life_signal__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[53];
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
    assert(strncmp("art_interface_msg.msg._art_life_signal.ArtLifeSignal", full_classname_dest, 52) == 0);
  }
  art_interface_msg__msg__ArtLifeSignal * ros_message = _ros_message;
  {  // ccu_life
    PyObject * field = PyObject_GetAttrString(_pymsg, "ccu_life");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ccu_life = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // scs_life
    PyObject * field = PyObject_GetAttrString(_pymsg, "scs_life");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->scs_life = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // dpu_life
    PyObject * field = PyObject_GetAttrString(_pymsg, "dpu_life");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->dpu_life = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * art_interface_msg__msg__art_life_signal__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ArtLifeSignal */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("art_interface_msg.msg._art_life_signal");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ArtLifeSignal");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  art_interface_msg__msg__ArtLifeSignal * ros_message = (art_interface_msg__msg__ArtLifeSignal *)raw_ros_message;
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
  {  // scs_life
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->scs_life);
    {
      int rc = PyObject_SetAttrString(_pymessage, "scs_life", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dpu_life
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->dpu_life);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dpu_life", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
