// Generated by gencpp from file topic_proxy/RequestMessageRequest.msg
// DO NOT EDIT!


#ifndef TOPIC_PROXY_MESSAGE_REQUESTMESSAGEREQUEST_H
#define TOPIC_PROXY_MESSAGE_REQUESTMESSAGEREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace topic_proxy
{
template <class ContainerAllocator>
struct RequestMessageRequest_
{
  typedef RequestMessageRequest_<ContainerAllocator> Type;

  RequestMessageRequest_()
    : topic()
    , remote_topic()
    , compressed(false)
    , timeout()
    , interval()
    , latch(false)  {
    }
  RequestMessageRequest_(const ContainerAllocator& _alloc)
    : topic(_alloc)
    , remote_topic(_alloc)
    , compressed(false)
    , timeout()
    , interval()
    , latch(false)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _topic_type;
  _topic_type topic;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _remote_topic_type;
  _remote_topic_type remote_topic;

   typedef uint8_t _compressed_type;
  _compressed_type compressed;

   typedef ros::Duration _timeout_type;
  _timeout_type timeout;

   typedef ros::Duration _interval_type;
  _interval_type interval;

   typedef uint8_t _latch_type;
  _latch_type latch;





  typedef boost::shared_ptr< ::topic_proxy::RequestMessageRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::topic_proxy::RequestMessageRequest_<ContainerAllocator> const> ConstPtr;

}; // struct RequestMessageRequest_

typedef ::topic_proxy::RequestMessageRequest_<std::allocator<void> > RequestMessageRequest;

typedef boost::shared_ptr< ::topic_proxy::RequestMessageRequest > RequestMessageRequestPtr;
typedef boost::shared_ptr< ::topic_proxy::RequestMessageRequest const> RequestMessageRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::topic_proxy::RequestMessageRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::topic_proxy::RequestMessageRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace topic_proxy

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'topic_proxy': ['/mathworks/home/pmurali/Documents/S/matlab_msg_gen_ros1/glnxa64/src/topic_proxy/msg'], 'std_msgs': ['/mathworks/devel/sbs/31/pmurali.Brobot.j1339814/matlab/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg'], 'blob': ['/mathworks/home/pmurali/Documents/S/matlab_msg_gen_ros1/glnxa64/src/blob/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::topic_proxy::RequestMessageRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::topic_proxy::RequestMessageRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::topic_proxy::RequestMessageRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::topic_proxy::RequestMessageRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::topic_proxy::RequestMessageRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::topic_proxy::RequestMessageRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::topic_proxy::RequestMessageRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a9efb95582ffc17bbc0b4de0200e72d0";
  }

  static const char* value(const ::topic_proxy::RequestMessageRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa9efb95582ffc17bULL;
  static const uint64_t static_value2 = 0xbc0b4de0200e72d0ULL;
};

template<class ContainerAllocator>
struct DataType< ::topic_proxy::RequestMessageRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "topic_proxy/RequestMessageRequest";
  }

  static const char* value(const ::topic_proxy::RequestMessageRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::topic_proxy::RequestMessageRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"string topic\n"
"string remote_topic\n"
"bool compressed\n"
"duration timeout\n"
"duration interval\n"
"bool latch\n"
;
  }

  static const char* value(const ::topic_proxy::RequestMessageRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::topic_proxy::RequestMessageRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.topic);
      stream.next(m.remote_topic);
      stream.next(m.compressed);
      stream.next(m.timeout);
      stream.next(m.interval);
      stream.next(m.latch);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RequestMessageRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::topic_proxy::RequestMessageRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::topic_proxy::RequestMessageRequest_<ContainerAllocator>& v)
  {
    s << indent << "topic: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.topic);
    s << indent << "remote_topic: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.remote_topic);
    s << indent << "compressed: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.compressed);
    s << indent << "timeout: ";
    Printer<ros::Duration>::stream(s, indent + "  ", v.timeout);
    s << indent << "interval: ";
    Printer<ros::Duration>::stream(s, indent + "  ", v.interval);
    s << indent << "latch: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.latch);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TOPIC_PROXY_MESSAGE_REQUESTMESSAGEREQUEST_H
