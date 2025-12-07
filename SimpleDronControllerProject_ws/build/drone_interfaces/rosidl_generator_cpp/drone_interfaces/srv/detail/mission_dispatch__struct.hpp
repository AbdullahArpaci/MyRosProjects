// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from drone_interfaces:srv/MissionDispatch.idl
// generated code does not contain a copyright notice

#ifndef DRONE_INTERFACES__SRV__DETAIL__MISSION_DISPATCH__STRUCT_HPP_
#define DRONE_INTERFACES__SRV__DETAIL__MISSION_DISPATCH__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__drone_interfaces__srv__MissionDispatch_Request __attribute__((deprecated))
#else
# define DEPRECATED__drone_interfaces__srv__MissionDispatch_Request __declspec(deprecated)
#endif

namespace drone_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MissionDispatch_Request_
{
  using Type = MissionDispatch_Request_<ContainerAllocator>;

  explicit MissionDispatch_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_drone_id = 0l;
      std::fill<typename std::array<float, 3>::iterator, float>(this->target_loc.begin(), this->target_loc.end(), 0.0f);
      this->mission_type = "";
    }
  }

  explicit MissionDispatch_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target_loc(_alloc),
    mission_type(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_drone_id = 0l;
      std::fill<typename std::array<float, 3>::iterator, float>(this->target_loc.begin(), this->target_loc.end(), 0.0f);
      this->mission_type = "";
    }
  }

  // field types and members
  using _target_drone_id_type =
    int32_t;
  _target_drone_id_type target_drone_id;
  using _target_loc_type =
    std::array<float, 3>;
  _target_loc_type target_loc;
  using _mission_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _mission_type_type mission_type;

  // setters for named parameter idiom
  Type & set__target_drone_id(
    const int32_t & _arg)
  {
    this->target_drone_id = _arg;
    return *this;
  }
  Type & set__target_loc(
    const std::array<float, 3> & _arg)
  {
    this->target_loc = _arg;
    return *this;
  }
  Type & set__mission_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->mission_type = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    drone_interfaces::srv::MissionDispatch_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const drone_interfaces::srv::MissionDispatch_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<drone_interfaces::srv::MissionDispatch_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<drone_interfaces::srv::MissionDispatch_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      drone_interfaces::srv::MissionDispatch_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<drone_interfaces::srv::MissionDispatch_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      drone_interfaces::srv::MissionDispatch_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<drone_interfaces::srv::MissionDispatch_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<drone_interfaces::srv::MissionDispatch_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<drone_interfaces::srv::MissionDispatch_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__drone_interfaces__srv__MissionDispatch_Request
    std::shared_ptr<drone_interfaces::srv::MissionDispatch_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__drone_interfaces__srv__MissionDispatch_Request
    std::shared_ptr<drone_interfaces::srv::MissionDispatch_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MissionDispatch_Request_ & other) const
  {
    if (this->target_drone_id != other.target_drone_id) {
      return false;
    }
    if (this->target_loc != other.target_loc) {
      return false;
    }
    if (this->mission_type != other.mission_type) {
      return false;
    }
    return true;
  }
  bool operator!=(const MissionDispatch_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MissionDispatch_Request_

// alias to use template instance with default allocator
using MissionDispatch_Request =
  drone_interfaces::srv::MissionDispatch_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace drone_interfaces


#ifndef _WIN32
# define DEPRECATED__drone_interfaces__srv__MissionDispatch_Response __attribute__((deprecated))
#else
# define DEPRECATED__drone_interfaces__srv__MissionDispatch_Response __declspec(deprecated)
#endif

namespace drone_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MissionDispatch_Response_
{
  using Type = MissionDispatch_Response_<ContainerAllocator>;

  explicit MissionDispatch_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->status_message = "";
    }
  }

  explicit MissionDispatch_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status_message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->status_message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _status_message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _status_message_type status_message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__status_message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->status_message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    drone_interfaces::srv::MissionDispatch_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const drone_interfaces::srv::MissionDispatch_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<drone_interfaces::srv::MissionDispatch_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<drone_interfaces::srv::MissionDispatch_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      drone_interfaces::srv::MissionDispatch_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<drone_interfaces::srv::MissionDispatch_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      drone_interfaces::srv::MissionDispatch_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<drone_interfaces::srv::MissionDispatch_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<drone_interfaces::srv::MissionDispatch_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<drone_interfaces::srv::MissionDispatch_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__drone_interfaces__srv__MissionDispatch_Response
    std::shared_ptr<drone_interfaces::srv::MissionDispatch_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__drone_interfaces__srv__MissionDispatch_Response
    std::shared_ptr<drone_interfaces::srv::MissionDispatch_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MissionDispatch_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->status_message != other.status_message) {
      return false;
    }
    return true;
  }
  bool operator!=(const MissionDispatch_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MissionDispatch_Response_

// alias to use template instance with default allocator
using MissionDispatch_Response =
  drone_interfaces::srv::MissionDispatch_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace drone_interfaces

namespace drone_interfaces
{

namespace srv
{

struct MissionDispatch
{
  using Request = drone_interfaces::srv::MissionDispatch_Request;
  using Response = drone_interfaces::srv::MissionDispatch_Response;
};

}  // namespace srv

}  // namespace drone_interfaces

#endif  // DRONE_INTERFACES__SRV__DETAIL__MISSION_DISPATCH__STRUCT_HPP_
