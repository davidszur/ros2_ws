// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from simple_div:msg/TwoFloats.idl
// generated code does not contain a copyright notice
#include "simple_div/msg/detail/two_floats__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "simple_div/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "simple_div/msg/detail/two_floats__struct.h"
#include "simple_div/msg/detail/two_floats__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _TwoFloats__ros_msg_type = simple_div__msg__TwoFloats;

static bool _TwoFloats__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TwoFloats__ros_msg_type * ros_message = static_cast<const _TwoFloats__ros_msg_type *>(untyped_ros_message);
  // Field name: first_number
  {
    cdr << ros_message->first_number;
  }

  // Field name: second_number
  {
    cdr << ros_message->second_number;
  }

  return true;
}

static bool _TwoFloats__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TwoFloats__ros_msg_type * ros_message = static_cast<_TwoFloats__ros_msg_type *>(untyped_ros_message);
  // Field name: first_number
  {
    cdr >> ros_message->first_number;
  }

  // Field name: second_number
  {
    cdr >> ros_message->second_number;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_simple_div
size_t get_serialized_size_simple_div__msg__TwoFloats(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TwoFloats__ros_msg_type * ros_message = static_cast<const _TwoFloats__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name first_number
  {
    size_t item_size = sizeof(ros_message->first_number);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name second_number
  {
    size_t item_size = sizeof(ros_message->second_number);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _TwoFloats__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_simple_div__msg__TwoFloats(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_simple_div
size_t max_serialized_size_simple_div__msg__TwoFloats(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: first_number
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: second_number
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = simple_div__msg__TwoFloats;
    is_plain =
      (
      offsetof(DataType, second_number) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _TwoFloats__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_simple_div__msg__TwoFloats(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_TwoFloats = {
  "simple_div::msg",
  "TwoFloats",
  _TwoFloats__cdr_serialize,
  _TwoFloats__cdr_deserialize,
  _TwoFloats__get_serialized_size,
  _TwoFloats__max_serialized_size
};

static rosidl_message_type_support_t _TwoFloats__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TwoFloats,
  get_message_typesupport_handle_function,
  &simple_div__msg__TwoFloats__get_type_hash,
  &simple_div__msg__TwoFloats__get_type_description,
  &simple_div__msg__TwoFloats__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, simple_div, msg, TwoFloats)() {
  return &_TwoFloats__type_support;
}

#if defined(__cplusplus)
}
#endif
