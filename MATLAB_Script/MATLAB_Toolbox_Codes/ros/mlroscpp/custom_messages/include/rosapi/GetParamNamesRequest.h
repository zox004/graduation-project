// Generated by gencpp from file rosapi/GetParamNamesRequest.msg
// DO NOT EDIT!


#ifndef ROSAPI_MESSAGE_GETPARAMNAMESREQUEST_H
#define ROSAPI_MESSAGE_GETPARAMNAMESREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace rosapi
{
template <class ContainerAllocator>
struct GetParamNamesRequest_
{
  typedef GetParamNamesRequest_<ContainerAllocator> Type;

  GetParamNamesRequest_()
    {
    }
  GetParamNamesRequest_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::rosapi::GetParamNamesRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rosapi::GetParamNamesRequest_<ContainerAllocator> const> ConstPtr;

}; // struct GetParamNamesRequest_

typedef ::rosapi::GetParamNamesRequest_<std::allocator<void> > GetParamNamesRequest;

typedef boost::shared_ptr< ::rosapi::GetParamNamesRequest > GetParamNamesRequestPtr;
typedef boost::shared_ptr< ::rosapi::GetParamNamesRequest const> GetParamNamesRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rosapi::GetParamNamesRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rosapi::GetParamNamesRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace rosapi

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/mathworks/devel/sbs/31/pmurali.Brobot.j1352567/matlab/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg'], 'rosapi': ['/mathworks/home/pmurali/Documents/rosjava_messages/GEN-4-6/12/matlab_msg_gen_ros1/glnxa64/src/rosapi/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::rosapi::GetParamNamesRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rosapi::GetParamNamesRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rosapi::GetParamNamesRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rosapi::GetParamNamesRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosapi::GetParamNamesRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosapi::GetParamNamesRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rosapi::GetParamNamesRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::rosapi::GetParamNamesRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::rosapi::GetParamNamesRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rosapi/GetParamNamesRequest";
  }

  static const char* value(const ::rosapi::GetParamNamesRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rosapi::GetParamNamesRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
;
  }

  static const char* value(const ::rosapi::GetParamNamesRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rosapi::GetParamNamesRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetParamNamesRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rosapi::GetParamNamesRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::rosapi::GetParamNamesRequest_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // ROSAPI_MESSAGE_GETPARAMNAMESREQUEST_H
