// Generated by gencpp from file multimaster_msgs_fkie/TaskRequest.msg
// DO NOT EDIT!


#ifndef MULTIMASTER_MSGS_FKIE_MESSAGE_TASKREQUEST_H
#define MULTIMASTER_MSGS_FKIE_MESSAGE_TASKREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace multimaster_msgs_fkie
{
template <class ContainerAllocator>
struct TaskRequest_
{
  typedef TaskRequest_<ContainerAllocator> Type;

  TaskRequest_()
    : node()  {
    }
  TaskRequest_(const ContainerAllocator& _alloc)
    : node(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _node_type;
  _node_type node;





  typedef boost::shared_ptr< ::multimaster_msgs_fkie::TaskRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::multimaster_msgs_fkie::TaskRequest_<ContainerAllocator> const> ConstPtr;

}; // struct TaskRequest_

typedef ::multimaster_msgs_fkie::TaskRequest_<std::allocator<void> > TaskRequest;

typedef boost::shared_ptr< ::multimaster_msgs_fkie::TaskRequest > TaskRequestPtr;
typedef boost::shared_ptr< ::multimaster_msgs_fkie::TaskRequest const> TaskRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::multimaster_msgs_fkie::TaskRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::multimaster_msgs_fkie::TaskRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace multimaster_msgs_fkie

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'multimaster_msgs_fkie': ['/mathworks/home/pmurali/Documents/rosjava_messages/GEN-4-6/11/matlab_msg_gen_ros1/glnxa64/src/multimaster_msgs_fkie/msg'], 'std_msgs': ['/mathworks/devel/sbs/31/pmurali.Brobot.j1352567/matlab/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg', '/mathworks/devel/sbs/31/pmurali.Brobot.j1352567/matlab/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::multimaster_msgs_fkie::TaskRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::multimaster_msgs_fkie::TaskRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::multimaster_msgs_fkie::TaskRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::multimaster_msgs_fkie::TaskRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::multimaster_msgs_fkie::TaskRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::multimaster_msgs_fkie::TaskRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::multimaster_msgs_fkie::TaskRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a94c40e70a4b82863e6e52ec16732447";
  }

  static const char* value(const ::multimaster_msgs_fkie::TaskRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa94c40e70a4b8286ULL;
  static const uint64_t static_value2 = 0x3e6e52ec16732447ULL;
};

template<class ContainerAllocator>
struct DataType< ::multimaster_msgs_fkie::TaskRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "multimaster_msgs_fkie/TaskRequest";
  }

  static const char* value(const ::multimaster_msgs_fkie::TaskRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::multimaster_msgs_fkie::TaskRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string node\n"
;
  }

  static const char* value(const ::multimaster_msgs_fkie::TaskRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::multimaster_msgs_fkie::TaskRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.node);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TaskRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::multimaster_msgs_fkie::TaskRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::multimaster_msgs_fkie::TaskRequest_<ContainerAllocator>& v)
  {
    s << indent << "node: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.node);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MULTIMASTER_MSGS_FKIE_MESSAGE_TASKREQUEST_H
