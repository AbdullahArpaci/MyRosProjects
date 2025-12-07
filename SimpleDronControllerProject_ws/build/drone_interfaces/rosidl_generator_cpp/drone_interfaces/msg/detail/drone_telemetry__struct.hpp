// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from drone_interfaces:msg/DroneTelemetry.idl
// generated code does not contain a copyright notice

#ifndef DRONE_INTERFACES__MSG__DETAIL__DRONE_TELEMETRY__STRUCT_HPP_
#define DRONE_INTERFACES__MSG__DETAIL__DRONE_TELEMETRY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__drone_interfaces__msg__DroneTelemetry __attribute__((deprecated))
#else
# define DEPRECATED__drone_interfaces__msg__DroneTelemetry __declspec(deprecated)
#endif

namespace drone_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DroneTelemetry_
{
  using Type = DroneTelemetry_<ContainerAllocator>;

  explicit DroneTelemetry_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->drone_id = 0l;
      this->flight_mode = "";
      this->battery_level = 0.0f;
      std::fill<typename std::array<float, 3>::iterator, float>(this->position.begin(), this->position.end(), 0.0f);
    }
  }

  explicit DroneTelemetry_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : flight_mode(_alloc),
    position(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->drone_id = 0l;
      this->flight_mode = "";
      this->battery_level = 0.0f;
      std::fill<typename std::array<float, 3>::iterator, float>(this->position.begin(), this->position.end(), 0.0f);
    }
  }

  // field types and members
  using _drone_id_type =
    int32_t;
  _drone_id_type drone_id;
  using _flight_mode_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _flight_mode_type flight_mode;
  using _battery_level_type =
    float;
  _battery_level_type battery_level;
  using _position_type =
    std::array<float, 3>;
  _position_type position;

  // setters for named parameter idiom
  Type & set__drone_id(
    const int32_t & _arg)
  {
    this->drone_id = _arg;
    return *this;
  }
  Type & set__flight_mode(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->flight_mode = _arg;
    return *this;
  }
  Type & set__battery_level(
    const float & _arg)
  {
    this->battery_level = _arg;
    return *this;
  }
  Type & set__position(
    const std::array<float, 3> & _arg)
  {
    this->position = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    drone_interfaces::msg::DroneTelemetry_<ContainerAllocator> *;
  using ConstRawPtr =
    const drone_interfaces::msg::DroneTelemetry_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<drone_interfaces::msg::DroneTelemetry_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<drone_interfaces::msg::DroneTelemetry_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      drone_interfaces::msg::DroneTelemetry_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<drone_interfaces::msg::DroneTelemetry_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      drone_interfaces::msg::DroneTelemetry_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<drone_interfaces::msg::DroneTelemetry_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<drone_interfaces::msg::DroneTelemetry_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<drone_interfaces::msg::DroneTelemetry_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__drone_interfaces__msg__DroneTelemetry
    std::shared_ptr<drone_interfaces::msg::DroneTelemetry_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__drone_interfaces__msg__DroneTelemetry
    std::shared_ptr<drone_interfaces::msg::DroneTelemetry_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DroneTelemetry_ & other) const
  {
    if (this->drone_id != other.drone_id) {
      return false;
    }
    if (this->flight_mode != other.flight_mode) {
      return false;
    }
    if (this->battery_level != other.battery_level) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    return true;
  }
  bool operator!=(const DroneTelemetry_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DroneTelemetry_

// alias to use template instance with default allocator
using DroneTelemetry =
  drone_interfaces::msg::DroneTelemetry_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace drone_interfaces

#endif  // DRONE_INTERFACES__MSG__DETAIL__DRONE_TELEMETRY__STRUCT_HPP_
