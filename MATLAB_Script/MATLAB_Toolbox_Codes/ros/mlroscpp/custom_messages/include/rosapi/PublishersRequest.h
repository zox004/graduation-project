// Generated by gencpp from file rosapi/PublishersRequest.msg
// DO NOT EDIT!


#ifndef ROSAPI_MESSAGE_PUBLISHERSREQUEST_H
#define ROSAPI_MESSAGE_PUBLISHERSREQUEST_H


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
struct PublishersRequest_
{
  typedef PublishersRequest_<ContainerAllocator> Type;

  PublishersRequest_()
    : topic()  {
    }
  PublishersRequest_(const ContainerAllocator& _alloc)
    : topic(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _topic_type;
  _topic_type topic;





  typedef boost::shared_ptr< ::rosapi::PublishersRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rosapi::PublishersRequest_<ContainerAllocator> const> ConstPtr;

}; // struct PublishersRequest_

typedef ::rosapi::PublishersRequest_<std::allocator<void> > PublishersRequest;

typedef boost::shared_ptr< ::rosapi::PublishersRequest > PublishersRequestPtr;
typedef boost::shared_ptr< ::rosapi::PublishersRequest const> PublishersRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rosapi::PublishersRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rosapi::PublishersRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace rosapi

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/mathworks/devel/sbs/31/pmurali.Brobot.j1352567/matlab/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg'], 'rosapi': ['/mathworks/home/pmurali/Documents/rosjava_messages/GEN-4-6/12/matlab_msg_gen_ros1/glnxa64/src/rosapi/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::rosapi::PublishersRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rosapi::PublishersRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rosapi::PublishersRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rosapi::PublishersRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosapi::PublishersRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosapi::PublishersRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rosapi::PublishersRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d8f94bae31b356b24d0427f80426d0c3";
  }

  static const char* value(const ::rosapi::PublishersRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd8f94bae31b356b2ULL;
  static const uint64_t static_value2 = 0x4d0427f80426d0c3ULL;
};

template<class ContainerAllocator>
struct DataType< ::rosapi::PublishersRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rosapi/PublishersRequest";
  }

  static const char* value(const ::rosapi::PublishersRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rosapi::PublishersRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string topic\n"
;
  }

  static const char* value(const ::rosapi::PublishersRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rosapi::PublishersRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.topic);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PublishersRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rosapi::PublishersRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rosapi::PublishersRequest_<ContainerAllocator>& v)
  {
    s << indent << "topic: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.topic);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROSAPI_MESSAGE_PUBLISHERSREQUEST_H
