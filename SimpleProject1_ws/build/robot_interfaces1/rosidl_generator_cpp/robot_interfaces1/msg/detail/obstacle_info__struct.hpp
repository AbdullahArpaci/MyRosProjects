// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robot_interfaces1:msg/ObstacleInfo.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES1__MSG__DETAIL__OBSTACLE_INFO__STRUCT_HPP_
#define ROBOT_INTERFACES1__MSG__DETAIL__OBSTACLE_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__robot_interfaces1__msg__ObstacleInfo __attribute__((deprecated))
#else
# define DEPRECATED__robot_interfaces1__msg__ObstacleInfo __declspec(deprecated)
#endif

namespace robot_interfaces1
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ObstacleInfo_
{
  using Type = ObstacleInfo_<ContainerAllocator>;

  explicit ObstacleInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->found = false;
      this->distance = 0.0;
    }
  }

  explicit ObstacleInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->found = false;
      this->distance = 0.0;
    }
  }

  // field types and members
  using _found_type =
    bool;
  _found_type found;
  using _distance_type =
    double;
  _distance_type distance;

  // setters for named parameter idiom
  Type & set__found(
    const bool & _arg)
  {
    this->found = _arg;
    return *this;
  }
  Type & set__distance(
    const double & _arg)
  {
    this->distance = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robot_interfaces1::msg::ObstacleInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot_interfaces1::msg::ObstacleInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot_interfaces1::msg::ObstacleInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot_interfaces1::msg::ObstacleInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot_interfaces1::msg::ObstacleInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot_interfaces1::msg::ObstacleInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot_interfaces1::msg::ObstacleInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot_interfaces1::msg::ObstacleInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot_interfaces1::msg::ObstacleInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot_interfaces1::msg::ObstacleInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot_interfaces1__msg__ObstacleInfo
    std::shared_ptr<robot_interfaces1::msg::ObstacleInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot_interfaces1__msg__ObstacleInfo
    std::shared_ptr<robot_interfaces1::msg::ObstacleInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObstacleInfo_ & other) const
  {
    if (this->found != other.found) {
      return false;
    }
    if (this->distance != other.distance) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObstacleInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObstacleInfo_

// alias to use template instance with default allocator
using ObstacleInfo =
  robot_interfaces1::msg::ObstacleInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robot_interfaces1

#endif  // ROBOT_INTERFACES1__MSG__DETAIL__OBSTACLE_INFO__STRUCT_HPP_
