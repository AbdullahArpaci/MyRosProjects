// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from drone_interfaces:action/MoveToWaypoint.idl
// generated code does not contain a copyright notice

#ifndef DRONE_INTERFACES__ACTION__DETAIL__MOVE_TO_WAYPOINT__FUNCTIONS_H_
#define DRONE_INTERFACES__ACTION__DETAIL__MOVE_TO_WAYPOINT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "drone_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "drone_interfaces/action/detail/move_to_waypoint__struct.h"

/// Initialize action/MoveToWaypoint message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * drone_interfaces__action__MoveToWaypoint_Goal
 * )) before or use
 * drone_interfaces__action__MoveToWaypoint_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
bool
drone_interfaces__action__MoveToWaypoint_Goal__init(drone_interfaces__action__MoveToWaypoint_Goal * msg);

/// Finalize action/MoveToWaypoint message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
void
drone_interfaces__action__MoveToWaypoint_Goal__fini(drone_interfaces__action__MoveToWaypoint_Goal * msg);

/// Create action/MoveToWaypoint message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * drone_interfaces__action__MoveToWaypoint_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
drone_interfaces__action__MoveToWaypoint_Goal *
drone_interfaces__action__MoveToWaypoint_Goal__create();

/// Destroy action/MoveToWaypoint message.
/**
 * It calls
 * drone_interfaces__action__MoveToWaypoint_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
void
drone_interfaces__action__MoveToWaypoint_Goal__destroy(drone_interfaces__action__MoveToWaypoint_Goal * msg);

/// Check for action/MoveToWaypoint message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
bool
drone_interfaces__action__MoveToWaypoint_Goal__are_equal(const drone_interfaces__action__MoveToWaypoint_Goal * lhs, const drone_interfaces__action__MoveToWaypoint_Goal * rhs);

/// Copy a action/MoveToWaypoint message.
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
ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
bool
drone_interfaces__action__MoveToWaypoint_Goal__copy(
  const drone_interfaces__action__MoveToWaypoint_Goal * input,
  drone_interfaces__action__MoveToWaypoint_Goal * output);

/// Initialize array of action/MoveToWaypoint messages.
/**
 * It allocates the memory for the number of elements and calls
 * drone_interfaces__action__MoveToWaypoint_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
bool
drone_interfaces__action__MoveToWaypoint_Goal__Sequence__init(drone_interfaces__action__MoveToWaypoint_Goal__Sequence * array, size_t size);

/// Finalize array of action/MoveToWaypoint messages.
/**
 * It calls
 * drone_interfaces__action__MoveToWaypoint_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
void
drone_interfaces__action__MoveToWaypoint_Goal__Sequence__fini(drone_interfaces__action__MoveToWaypoint_Goal__Sequence * array);

/// Create array of action/MoveToWaypoint messages.
/**
 * It allocates the memory for the array and calls
 * drone_interfaces__action__MoveToWaypoint_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
drone_interfaces__action__MoveToWaypoint_Goal__Sequence *
drone_interfaces__action__MoveToWaypoint_Goal__Sequence__create(size_t size);

/// Destroy array of action/MoveToWaypoint messages.
/**
 * It calls
 * drone_interfaces__action__MoveToWaypoint_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
void
drone_interfaces__action__MoveToWaypoint_Goal__Sequence__destroy(drone_interfaces__action__MoveToWaypoint_Goal__Sequence * array);

/// Check for action/MoveToWaypoint message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
bool
drone_interfaces__action__MoveToWaypoint_Goal__Sequence__are_equal(const drone_interfaces__action__MoveToWaypoint_Goal__Sequence * lhs, const drone_interfaces__action__MoveToWaypoint_Goal__Sequence * rhs);

/// Copy an array of action/MoveToWaypoint messages.
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
ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
bool
drone_interfaces__action__MoveToWaypoint_Goal__Sequence__copy(
  const drone_interfaces__action__MoveToWaypoint_Goal__Sequence * input,
  drone_interfaces__action__MoveToWaypoint_Goal__Sequence * output);

/// Initialize action/MoveToWaypoint message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * drone_interfaces__action__MoveToWaypoint_Result
 * )) before or use
 * drone_interfaces__action__MoveToWaypoint_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
bool
drone_interfaces__action__MoveToWaypoint_Result__init(drone_interfaces__action__MoveToWaypoint_Result * msg);

/// Finalize action/MoveToWaypoint message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
void
drone_interfaces__action__MoveToWaypoint_Result__fini(drone_interfaces__action__MoveToWaypoint_Result * msg);

/// Create action/MoveToWaypoint message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * drone_interfaces__action__MoveToWaypoint_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
drone_interfaces__action__MoveToWaypoint_Result *
drone_interfaces__action__MoveToWaypoint_Result__create();

/// Destroy action/MoveToWaypoint message.
/**
 * It calls
 * drone_interfaces__action__MoveToWaypoint_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
void
drone_interfaces__action__MoveToWaypoint_Result__destroy(drone_interfaces__action__MoveToWaypoint_Result * msg);

/// Check for action/MoveToWaypoint message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
bool
drone_interfaces__action__MoveToWaypoint_Result__are_equal(const drone_interfaces__action__MoveToWaypoint_Result * lhs, const drone_interfaces__action__MoveToWaypoint_Result * rhs);

/// Copy a action/MoveToWaypoint message.
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
ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
bool
drone_interfaces__action__MoveToWaypoint_Result__copy(
  const drone_interfaces__action__MoveToWaypoint_Result * input,
  drone_interfaces__action__MoveToWaypoint_Result * output);

/// Initialize array of action/MoveToWaypoint messages.
/**
 * It allocates the memory for the number of elements and calls
 * drone_interfaces__action__MoveToWaypoint_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
bool
drone_interfaces__action__MoveToWaypoint_Result__Sequence__init(drone_interfaces__action__MoveToWaypoint_Result__Sequence * array, size_t size);

/// Finalize array of action/MoveToWaypoint messages.
/**
 * It calls
 * drone_interfaces__action__MoveToWaypoint_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
void
drone_interfaces__action__MoveToWaypoint_Result__Sequence__fini(drone_interfaces__action__MoveToWaypoint_Result__Sequence * array);

/// Create array of action/MoveToWaypoint messages.
/**
 * It allocates the memory for the array and calls
 * drone_interfaces__action__MoveToWaypoint_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
drone_interfaces__action__MoveToWaypoint_Result__Sequence *
drone_interfaces__action__MoveToWaypoint_Result__Sequence__create(size_t size);

/// Destroy array of action/MoveToWaypoint messages.
/**
 * It calls
 * drone_interfaces__action__MoveToWaypoint_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
void
drone_interfaces__action__MoveToWaypoint_Result__Sequence__destroy(drone_interfaces__action__MoveToWaypoint_Result__Sequence * array);

/// Check for action/MoveToWaypoint message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
bool
drone_interfaces__action__MoveToWaypoint_Result__Sequence__are_equal(const drone_interfaces__action__MoveToWaypoint_Result__Sequence * lhs, const drone_interfaces__action__MoveToWaypoint_Result__Sequence * rhs);

/// Copy an array of action/MoveToWaypoint messages.
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
ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
bool
drone_interfaces__action__MoveToWaypoint_Result__Sequence__copy(
  const drone_interfaces__action__MoveToWaypoint_Result__Sequence * input,
  drone_interfaces__action__MoveToWaypoint_Result__Sequence * output);

/// Initialize action/MoveToWaypoint message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * drone_interfaces__action__MoveToWaypoint_Feedback
 * )) before or use
 * drone_interfaces__action__MoveToWaypoint_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
bool
drone_interfaces__action__MoveToWaypoint_Feedback__init(drone_interfaces__action__MoveToWaypoint_Feedback * msg);

/// Finalize action/MoveToWaypoint message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
void
drone_interfaces__action__MoveToWaypoint_Feedback__fini(drone_interfaces__action__MoveToWaypoint_Feedback * msg);

/// Create action/MoveToWaypoint message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * drone_interfaces__action__MoveToWaypoint_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
drone_interfaces__action__MoveToWaypoint_Feedback *
drone_interfaces__action__MoveToWaypoint_Feedback__create();

/// Destroy action/MoveToWaypoint message.
/**
 * It calls
 * drone_interfaces__action__MoveToWaypoint_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
void
drone_interfaces__action__MoveToWaypoint_Feedback__destroy(drone_interfaces__action__MoveToWaypoint_Feedback * msg);

/// Check for action/MoveToWaypoint message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
bool
drone_interfaces__action__MoveToWaypoint_Feedback__are_equal(const drone_interfaces__action__MoveToWaypoint_Feedback * lhs, const drone_interfaces__action__MoveToWaypoint_Feedback * rhs);

/// Copy a action/MoveToWaypoint message.
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
ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
bool
drone_interfaces__action__MoveToWaypoint_Feedback__copy(
  const drone_interfaces__action__MoveToWaypoint_Feedback * input,
  drone_interfaces__action__MoveToWaypoint_Feedback * output);

/// Initialize array of action/MoveToWaypoint messages.
/**
 * It allocates the memory for the number of elements and calls
 * drone_interfaces__action__MoveToWaypoint_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
bool
drone_interfaces__action__MoveToWaypoint_Feedback__Sequence__init(drone_interfaces__action__MoveToWaypoint_Feedback__Sequence * array, size_t size);

/// Finalize array of action/MoveToWaypoint messages.
/**
 * It calls
 * drone_interfaces__action__MoveToWaypoint_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
void
drone_interfaces__action__MoveToWaypoint_Feedback__Sequence__fini(drone_interfaces__action__MoveToWaypoint_Feedback__Sequence * array);

/// Create array of action/MoveToWaypoint messages.
/**
 * It allocates the memory for the array and calls
 * drone_interfaces__action__MoveToWaypoint_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
drone_interfaces__action__MoveToWaypoint_Feedback__Sequence *
drone_interfaces__action__MoveToWaypoint_Feedback__Sequence__create(size_t size);

/// Destroy array of action/MoveToWaypoint messages.
/**
 * It calls
 * drone_interfaces__action__MoveToWaypoint_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
void
drone_interfaces__action__MoveToWaypoint_Feedback__Sequence__destroy(drone_interfaces__action__MoveToWaypoint_Feedback__Sequence * array);

/// Check for action/MoveToWaypoint message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
bool
drone_interfaces__action__MoveToWaypoint_Feedback__Sequence__are_equal(const drone_interfaces__action__MoveToWaypoint_Feedback__Sequence * lhs, const drone_interfaces__action__MoveToWaypoint_Feedback__Sequence * rhs);

/// Copy an array of action/MoveToWaypoint messages.
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
ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
bool
drone_interfaces__action__MoveToWaypoint_Feedback__Sequence__copy(
  const drone_interfaces__action__MoveToWaypoint_Feedback__Sequence * input,
  drone_interfaces__action__MoveToWaypoint_Feedback__Sequence * output);

/// Initialize action/MoveToWaypoint message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * drone_interfaces__action__MoveToWaypoint_SendGoal_Request
 * )) before or use
 * drone_interfaces__action__MoveToWaypoint_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
bool
drone_interfaces__action__MoveToWaypoint_SendGoal_Request__init(drone_interfaces__action__MoveToWaypoint_SendGoal_Request * msg);

/// Finalize action/MoveToWaypoint message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
void
drone_interfaces__action__MoveToWaypoint_SendGoal_Request__fini(drone_interfaces__action__MoveToWaypoint_SendGoal_Request * msg);

/// Create action/MoveToWaypoint message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * drone_interfaces__action__MoveToWaypoint_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
drone_interfaces__action__MoveToWaypoint_SendGoal_Request *
drone_interfaces__action__MoveToWaypoint_SendGoal_Request__create();

/// Destroy action/MoveToWaypoint message.
/**
 * It calls
 * drone_interfaces__action__MoveToWaypoint_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
void
drone_interfaces__action__MoveToWaypoint_SendGoal_Request__destroy(drone_interfaces__action__MoveToWaypoint_SendGoal_Request * msg);

/// Check for action/MoveToWaypoint message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
bool
drone_interfaces__action__MoveToWaypoint_SendGoal_Request__are_equal(const drone_interfaces__action__MoveToWaypoint_SendGoal_Request * lhs, const drone_interfaces__action__MoveToWaypoint_SendGoal_Request * rhs);

/// Copy a action/MoveToWaypoint message.
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
ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
bool
drone_interfaces__action__MoveToWaypoint_SendGoal_Request__copy(
  const drone_interfaces__action__MoveToWaypoint_SendGoal_Request * input,
  drone_interfaces__action__MoveToWaypoint_SendGoal_Request * output);

/// Initialize array of action/MoveToWaypoint messages.
/**
 * It allocates the memory for the number of elements and calls
 * drone_interfaces__action__MoveToWaypoint_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
bool
drone_interfaces__action__MoveToWaypoint_SendGoal_Request__Sequence__init(drone_interfaces__action__MoveToWaypoint_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/MoveToWaypoint messages.
/**
 * It calls
 * drone_interfaces__action__MoveToWaypoint_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
void
drone_interfaces__action__MoveToWaypoint_SendGoal_Request__Sequence__fini(drone_interfaces__action__MoveToWaypoint_SendGoal_Request__Sequence * array);

/// Create array of action/MoveToWaypoint messages.
/**
 * It allocates the memory for the array and calls
 * drone_interfaces__action__MoveToWaypoint_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
drone_interfaces__action__MoveToWaypoint_SendGoal_Request__Sequence *
drone_interfaces__action__MoveToWaypoint_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/MoveToWaypoint messages.
/**
 * It calls
 * drone_interfaces__action__MoveToWaypoint_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
void
drone_interfaces__action__MoveToWaypoint_SendGoal_Request__Sequence__destroy(drone_interfaces__action__MoveToWaypoint_SendGoal_Request__Sequence * array);

/// Check for action/MoveToWaypoint message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
bool
drone_interfaces__action__MoveToWaypoint_SendGoal_Request__Sequence__are_equal(const drone_interfaces__action__MoveToWaypoint_SendGoal_Request__Sequence * lhs, const drone_interfaces__action__MoveToWaypoint_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/MoveToWaypoint messages.
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
ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
bool
drone_interfaces__action__MoveToWaypoint_SendGoal_Request__Sequence__copy(
  const drone_interfaces__action__MoveToWaypoint_SendGoal_Request__Sequence * input,
  drone_interfaces__action__MoveToWaypoint_SendGoal_Request__Sequence * output);

/// Initialize action/MoveToWaypoint message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * drone_interfaces__action__MoveToWaypoint_SendGoal_Response
 * )) before or use
 * drone_interfaces__action__MoveToWaypoint_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
bool
drone_interfaces__action__MoveToWaypoint_SendGoal_Response__init(drone_interfaces__action__MoveToWaypoint_SendGoal_Response * msg);

/// Finalize action/MoveToWaypoint message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
void
drone_interfaces__action__MoveToWaypoint_SendGoal_Response__fini(drone_interfaces__action__MoveToWaypoint_SendGoal_Response * msg);

/// Create action/MoveToWaypoint message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * drone_interfaces__action__MoveToWaypoint_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
drone_interfaces__action__MoveToWaypoint_SendGoal_Response *
drone_interfaces__action__MoveToWaypoint_SendGoal_Response__create();

/// Destroy action/MoveToWaypoint message.
/**
 * It calls
 * drone_interfaces__action__MoveToWaypoint_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
void
drone_interfaces__action__MoveToWaypoint_SendGoal_Response__destroy(drone_interfaces__action__MoveToWaypoint_SendGoal_Response * msg);

/// Check for action/MoveToWaypoint message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
bool
drone_interfaces__action__MoveToWaypoint_SendGoal_Response__are_equal(const drone_interfaces__action__MoveToWaypoint_SendGoal_Response * lhs, const drone_interfaces__action__MoveToWaypoint_SendGoal_Response * rhs);

/// Copy a action/MoveToWaypoint message.
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
ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
bool
drone_interfaces__action__MoveToWaypoint_SendGoal_Response__copy(
  const drone_interfaces__action__MoveToWaypoint_SendGoal_Response * input,
  drone_interfaces__action__MoveToWaypoint_SendGoal_Response * output);

/// Initialize array of action/MoveToWaypoint messages.
/**
 * It allocates the memory for the number of elements and calls
 * drone_interfaces__action__MoveToWaypoint_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
bool
drone_interfaces__action__MoveToWaypoint_SendGoal_Response__Sequence__init(drone_interfaces__action__MoveToWaypoint_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/MoveToWaypoint messages.
/**
 * It calls
 * drone_interfaces__action__MoveToWaypoint_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
void
drone_interfaces__action__MoveToWaypoint_SendGoal_Response__Sequence__fini(drone_interfaces__action__MoveToWaypoint_SendGoal_Response__Sequence * array);

/// Create array of action/MoveToWaypoint messages.
/**
 * It allocates the memory for the array and calls
 * drone_interfaces__action__MoveToWaypoint_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
drone_interfaces__action__MoveToWaypoint_SendGoal_Response__Sequence *
drone_interfaces__action__MoveToWaypoint_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/MoveToWaypoint messages.
/**
 * It calls
 * drone_interfaces__action__MoveToWaypoint_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
void
drone_interfaces__action__MoveToWaypoint_SendGoal_Response__Sequence__destroy(drone_interfaces__action__MoveToWaypoint_SendGoal_Response__Sequence * array);

/// Check for action/MoveToWaypoint message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
bool
drone_interfaces__action__MoveToWaypoint_SendGoal_Response__Sequence__are_equal(const drone_interfaces__action__MoveToWaypoint_SendGoal_Response__Sequence * lhs, const drone_interfaces__action__MoveToWaypoint_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/MoveToWaypoint messages.
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
ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
bool
drone_interfaces__action__MoveToWaypoint_SendGoal_Response__Sequence__copy(
  const drone_interfaces__action__MoveToWaypoint_SendGoal_Response__Sequence * input,
  drone_interfaces__action__MoveToWaypoint_SendGoal_Response__Sequence * output);

/// Initialize action/MoveToWaypoint message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * drone_interfaces__action__MoveToWaypoint_GetResult_Request
 * )) before or use
 * drone_interfaces__action__MoveToWaypoint_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
bool
drone_interfaces__action__MoveToWaypoint_GetResult_Request__init(drone_interfaces__action__MoveToWaypoint_GetResult_Request * msg);

/// Finalize action/MoveToWaypoint message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
void
drone_interfaces__action__MoveToWaypoint_GetResult_Request__fini(drone_interfaces__action__MoveToWaypoint_GetResult_Request * msg);

/// Create action/MoveToWaypoint message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * drone_interfaces__action__MoveToWaypoint_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
drone_interfaces__action__MoveToWaypoint_GetResult_Request *
drone_interfaces__action__MoveToWaypoint_GetResult_Request__create();

/// Destroy action/MoveToWaypoint message.
/**
 * It calls
 * drone_interfaces__action__MoveToWaypoint_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
void
drone_interfaces__action__MoveToWaypoint_GetResult_Request__destroy(drone_interfaces__action__MoveToWaypoint_GetResult_Request * msg);

/// Check for action/MoveToWaypoint message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
bool
drone_interfaces__action__MoveToWaypoint_GetResult_Request__are_equal(const drone_interfaces__action__MoveToWaypoint_GetResult_Request * lhs, const drone_interfaces__action__MoveToWaypoint_GetResult_Request * rhs);

/// Copy a action/MoveToWaypoint message.
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
ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
bool
drone_interfaces__action__MoveToWaypoint_GetResult_Request__copy(
  const drone_interfaces__action__MoveToWaypoint_GetResult_Request * input,
  drone_interfaces__action__MoveToWaypoint_GetResult_Request * output);

/// Initialize array of action/MoveToWaypoint messages.
/**
 * It allocates the memory for the number of elements and calls
 * drone_interfaces__action__MoveToWaypoint_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
bool
drone_interfaces__action__MoveToWaypoint_GetResult_Request__Sequence__init(drone_interfaces__action__MoveToWaypoint_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/MoveToWaypoint messages.
/**
 * It calls
 * drone_interfaces__action__MoveToWaypoint_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
void
drone_interfaces__action__MoveToWaypoint_GetResult_Request__Sequence__fini(drone_interfaces__action__MoveToWaypoint_GetResult_Request__Sequence * array);

/// Create array of action/MoveToWaypoint messages.
/**
 * It allocates the memory for the array and calls
 * drone_interfaces__action__MoveToWaypoint_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
drone_interfaces__action__MoveToWaypoint_GetResult_Request__Sequence *
drone_interfaces__action__MoveToWaypoint_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/MoveToWaypoint messages.
/**
 * It calls
 * drone_interfaces__action__MoveToWaypoint_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
void
drone_interfaces__action__MoveToWaypoint_GetResult_Request__Sequence__destroy(drone_interfaces__action__MoveToWaypoint_GetResult_Request__Sequence * array);

/// Check for action/MoveToWaypoint message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
bool
drone_interfaces__action__MoveToWaypoint_GetResult_Request__Sequence__are_equal(const drone_interfaces__action__MoveToWaypoint_GetResult_Request__Sequence * lhs, const drone_interfaces__action__MoveToWaypoint_GetResult_Request__Sequence * rhs);

/// Copy an array of action/MoveToWaypoint messages.
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
ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
bool
drone_interfaces__action__MoveToWaypoint_GetResult_Request__Sequence__copy(
  const drone_interfaces__action__MoveToWaypoint_GetResult_Request__Sequence * input,
  drone_interfaces__action__MoveToWaypoint_GetResult_Request__Sequence * output);

/// Initialize action/MoveToWaypoint message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * drone_interfaces__action__MoveToWaypoint_GetResult_Response
 * )) before or use
 * drone_interfaces__action__MoveToWaypoint_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
bool
drone_interfaces__action__MoveToWaypoint_GetResult_Response__init(drone_interfaces__action__MoveToWaypoint_GetResult_Response * msg);

/// Finalize action/MoveToWaypoint message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
void
drone_interfaces__action__MoveToWaypoint_GetResult_Response__fini(drone_interfaces__action__MoveToWaypoint_GetResult_Response * msg);

/// Create action/MoveToWaypoint message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * drone_interfaces__action__MoveToWaypoint_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
drone_interfaces__action__MoveToWaypoint_GetResult_Response *
drone_interfaces__action__MoveToWaypoint_GetResult_Response__create();

/// Destroy action/MoveToWaypoint message.
/**
 * It calls
 * drone_interfaces__action__MoveToWaypoint_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
void
drone_interfaces__action__MoveToWaypoint_GetResult_Response__destroy(drone_interfaces__action__MoveToWaypoint_GetResult_Response * msg);

/// Check for action/MoveToWaypoint message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
bool
drone_interfaces__action__MoveToWaypoint_GetResult_Response__are_equal(const drone_interfaces__action__MoveToWaypoint_GetResult_Response * lhs, const drone_interfaces__action__MoveToWaypoint_GetResult_Response * rhs);

/// Copy a action/MoveToWaypoint message.
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
ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
bool
drone_interfaces__action__MoveToWaypoint_GetResult_Response__copy(
  const drone_interfaces__action__MoveToWaypoint_GetResult_Response * input,
  drone_interfaces__action__MoveToWaypoint_GetResult_Response * output);

/// Initialize array of action/MoveToWaypoint messages.
/**
 * It allocates the memory for the number of elements and calls
 * drone_interfaces__action__MoveToWaypoint_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
bool
drone_interfaces__action__MoveToWaypoint_GetResult_Response__Sequence__init(drone_interfaces__action__MoveToWaypoint_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/MoveToWaypoint messages.
/**
 * It calls
 * drone_interfaces__action__MoveToWaypoint_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
void
drone_interfaces__action__MoveToWaypoint_GetResult_Response__Sequence__fini(drone_interfaces__action__MoveToWaypoint_GetResult_Response__Sequence * array);

/// Create array of action/MoveToWaypoint messages.
/**
 * It allocates the memory for the array and calls
 * drone_interfaces__action__MoveToWaypoint_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
drone_interfaces__action__MoveToWaypoint_GetResult_Response__Sequence *
drone_interfaces__action__MoveToWaypoint_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/MoveToWaypoint messages.
/**
 * It calls
 * drone_interfaces__action__MoveToWaypoint_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
void
drone_interfaces__action__MoveToWaypoint_GetResult_Response__Sequence__destroy(drone_interfaces__action__MoveToWaypoint_GetResult_Response__Sequence * array);

/// Check for action/MoveToWaypoint message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
bool
drone_interfaces__action__MoveToWaypoint_GetResult_Response__Sequence__are_equal(const drone_interfaces__action__MoveToWaypoint_GetResult_Response__Sequence * lhs, const drone_interfaces__action__MoveToWaypoint_GetResult_Response__Sequence * rhs);

/// Copy an array of action/MoveToWaypoint messages.
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
ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
bool
drone_interfaces__action__MoveToWaypoint_GetResult_Response__Sequence__copy(
  const drone_interfaces__action__MoveToWaypoint_GetResult_Response__Sequence * input,
  drone_interfaces__action__MoveToWaypoint_GetResult_Response__Sequence * output);

/// Initialize action/MoveToWaypoint message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * drone_interfaces__action__MoveToWaypoint_FeedbackMessage
 * )) before or use
 * drone_interfaces__action__MoveToWaypoint_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
bool
drone_interfaces__action__MoveToWaypoint_FeedbackMessage__init(drone_interfaces__action__MoveToWaypoint_FeedbackMessage * msg);

/// Finalize action/MoveToWaypoint message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
void
drone_interfaces__action__MoveToWaypoint_FeedbackMessage__fini(drone_interfaces__action__MoveToWaypoint_FeedbackMessage * msg);

/// Create action/MoveToWaypoint message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * drone_interfaces__action__MoveToWaypoint_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
drone_interfaces__action__MoveToWaypoint_FeedbackMessage *
drone_interfaces__action__MoveToWaypoint_FeedbackMessage__create();

/// Destroy action/MoveToWaypoint message.
/**
 * It calls
 * drone_interfaces__action__MoveToWaypoint_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
void
drone_interfaces__action__MoveToWaypoint_FeedbackMessage__destroy(drone_interfaces__action__MoveToWaypoint_FeedbackMessage * msg);

/// Check for action/MoveToWaypoint message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
bool
drone_interfaces__action__MoveToWaypoint_FeedbackMessage__are_equal(const drone_interfaces__action__MoveToWaypoint_FeedbackMessage * lhs, const drone_interfaces__action__MoveToWaypoint_FeedbackMessage * rhs);

/// Copy a action/MoveToWaypoint message.
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
ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
bool
drone_interfaces__action__MoveToWaypoint_FeedbackMessage__copy(
  const drone_interfaces__action__MoveToWaypoint_FeedbackMessage * input,
  drone_interfaces__action__MoveToWaypoint_FeedbackMessage * output);

/// Initialize array of action/MoveToWaypoint messages.
/**
 * It allocates the memory for the number of elements and calls
 * drone_interfaces__action__MoveToWaypoint_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
bool
drone_interfaces__action__MoveToWaypoint_FeedbackMessage__Sequence__init(drone_interfaces__action__MoveToWaypoint_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/MoveToWaypoint messages.
/**
 * It calls
 * drone_interfaces__action__MoveToWaypoint_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
void
drone_interfaces__action__MoveToWaypoint_FeedbackMessage__Sequence__fini(drone_interfaces__action__MoveToWaypoint_FeedbackMessage__Sequence * array);

/// Create array of action/MoveToWaypoint messages.
/**
 * It allocates the memory for the array and calls
 * drone_interfaces__action__MoveToWaypoint_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
drone_interfaces__action__MoveToWaypoint_FeedbackMessage__Sequence *
drone_interfaces__action__MoveToWaypoint_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/MoveToWaypoint messages.
/**
 * It calls
 * drone_interfaces__action__MoveToWaypoint_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
void
drone_interfaces__action__MoveToWaypoint_FeedbackMessage__Sequence__destroy(drone_interfaces__action__MoveToWaypoint_FeedbackMessage__Sequence * array);

/// Check for action/MoveToWaypoint message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
bool
drone_interfaces__action__MoveToWaypoint_FeedbackMessage__Sequence__are_equal(const drone_interfaces__action__MoveToWaypoint_FeedbackMessage__Sequence * lhs, const drone_interfaces__action__MoveToWaypoint_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/MoveToWaypoint messages.
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
ROSIDL_GENERATOR_C_PUBLIC_drone_interfaces
bool
drone_interfaces__action__MoveToWaypoint_FeedbackMessage__Sequence__copy(
  const drone_interfaces__action__MoveToWaypoint_FeedbackMessage__Sequence * input,
  drone_interfaces__action__MoveToWaypoint_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // DRONE_INTERFACES__ACTION__DETAIL__MOVE_TO_WAYPOINT__FUNCTIONS_H_
