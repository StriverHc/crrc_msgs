// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from art_interface_msg:msg/ArtLifeSignal.idl
// generated code does not contain a copyright notice

#ifndef ART_INTERFACE_MSG__MSG__DETAIL__ART_LIFE_SIGNAL__FUNCTIONS_H_
#define ART_INTERFACE_MSG__MSG__DETAIL__ART_LIFE_SIGNAL__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "art_interface_msg/msg/rosidl_generator_c__visibility_control.h"

#include "art_interface_msg/msg/detail/art_life_signal__struct.h"

/// Initialize msg/ArtLifeSignal message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * art_interface_msg__msg__ArtLifeSignal
 * )) before or use
 * art_interface_msg__msg__ArtLifeSignal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_art_interface_msg
bool
art_interface_msg__msg__ArtLifeSignal__init(art_interface_msg__msg__ArtLifeSignal * msg);

/// Finalize msg/ArtLifeSignal message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_art_interface_msg
void
art_interface_msg__msg__ArtLifeSignal__fini(art_interface_msg__msg__ArtLifeSignal * msg);

/// Create msg/ArtLifeSignal message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * art_interface_msg__msg__ArtLifeSignal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_art_interface_msg
art_interface_msg__msg__ArtLifeSignal *
art_interface_msg__msg__ArtLifeSignal__create();

/// Destroy msg/ArtLifeSignal message.
/**
 * It calls
 * art_interface_msg__msg__ArtLifeSignal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_art_interface_msg
void
art_interface_msg__msg__ArtLifeSignal__destroy(art_interface_msg__msg__ArtLifeSignal * msg);

/// Check for msg/ArtLifeSignal message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_art_interface_msg
bool
art_interface_msg__msg__ArtLifeSignal__are_equal(const art_interface_msg__msg__ArtLifeSignal * lhs, const art_interface_msg__msg__ArtLifeSignal * rhs);

/// Copy a msg/ArtLifeSignal message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_art_interface_msg
bool
art_interface_msg__msg__ArtLifeSignal__copy(
  const art_interface_msg__msg__ArtLifeSignal * input,
  art_interface_msg__msg__ArtLifeSignal * output);

/// Initialize array of msg/ArtLifeSignal messages.
/**
 * It allocates the memory for the number of elements and calls
 * art_interface_msg__msg__ArtLifeSignal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_art_interface_msg
bool
art_interface_msg__msg__ArtLifeSignal__Sequence__init(art_interface_msg__msg__ArtLifeSignal__Sequence * array, size_t size);

/// Finalize array of msg/ArtLifeSignal messages.
/**
 * It calls
 * art_interface_msg__msg__ArtLifeSignal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_art_interface_msg
void
art_interface_msg__msg__ArtLifeSignal__Sequence__fini(art_interface_msg__msg__ArtLifeSignal__Sequence * array);

/// Create array of msg/ArtLifeSignal messages.
/**
 * It allocates the memory for the array and calls
 * art_interface_msg__msg__ArtLifeSignal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_art_interface_msg
art_interface_msg__msg__ArtLifeSignal__Sequence *
art_interface_msg__msg__ArtLifeSignal__Sequence__create(size_t size);

/// Destroy array of msg/ArtLifeSignal messages.
/**
 * It calls
 * art_interface_msg__msg__ArtLifeSignal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_art_interface_msg
void
art_interface_msg__msg__ArtLifeSignal__Sequence__destroy(art_interface_msg__msg__ArtLifeSignal__Sequence * array);

/// Check for msg/ArtLifeSignal message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_art_interface_msg
bool
art_interface_msg__msg__ArtLifeSignal__Sequence__are_equal(const art_interface_msg__msg__ArtLifeSignal__Sequence * lhs, const art_interface_msg__msg__ArtLifeSignal__Sequence * rhs);

/// Copy an array of msg/ArtLifeSignal messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_art_interface_msg
bool
art_interface_msg__msg__ArtLifeSignal__Sequence__copy(
  const art_interface_msg__msg__ArtLifeSignal__Sequence * input,
  art_interface_msg__msg__ArtLifeSignal__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ART_INTERFACE_MSG__MSG__DETAIL__ART_LIFE_SIGNAL__FUNCTIONS_H_
