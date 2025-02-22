// Generated by gencpp from file pr2_mechanism_msgs/ReloadControllerLibrariesRequest.msg
// DO NOT EDIT!


#ifndef PR2_MECHANISM_MSGS_MESSAGE_RELOADCONTROLLERLIBRARIESREQUEST_H
#define PR2_MECHANISM_MSGS_MESSAGE_RELOADCONTROLLERLIBRARIESREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace pr2_mechanism_msgs
{
template <class ContainerAllocator>
struct ReloadControllerLibrariesRequest_
{
  typedef ReloadControllerLibrariesRequest_<ContainerAllocator> Type;

  ReloadControllerLibrariesRequest_()
    : force_kill(false)  {
    }
  ReloadControllerLibrariesRequest_(const ContainerAllocator& _alloc)
    : force_kill(false)  {
  (void)_alloc;
    }



   typedef uint8_t _force_kill_type;
  _force_kill_type force_kill;





  typedef boost::shared_ptr< ::pr2_mechanism_msgs::ReloadControllerLibrariesRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pr2_mechanism_msgs::ReloadControllerLibrariesRequest_<ContainerAllocator> const> ConstPtr;

}; // struct ReloadControllerLibrariesRequest_

typedef ::pr2_mechanism_msgs::ReloadControllerLibrariesRequest_<std::allocator<void> > ReloadControllerLibrariesRequest;

typedef boost::shared_ptr< ::pr2_mechanism_msgs::ReloadControllerLibrariesRequest > ReloadControllerLibrariesRequestPtr;
typedef boost::shared_ptr< ::pr2_mechanism_msgs::ReloadControllerLibrariesRequest const> ReloadControllerLibrariesRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pr2_mechanism_msgs::ReloadControllerLibrariesRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pr2_mechanism_msgs::ReloadControllerLibrariesRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace pr2_mechanism_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'pr2_mechanism_msgs': ['/mathworks/home/pmurali/Documents/P/matlab_msg_gen_ros1/glnxa64/src/pr2_mechanism_msgs/msg'], 'std_msgs': ['/mathworks/devel/sbs/31/pmurali.Brobot.j1339814/matlab/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg', '/mathworks/devel/sbs/31/pmurali.Brobot.j1339814/matlab/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::pr2_mechanism_msgs::ReloadControllerLibrariesRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pr2_mechanism_msgs::ReloadControllerLibrariesRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pr2_mechanism_msgs::ReloadControllerLibrariesRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pr2_mechanism_msgs::ReloadControllerLibrariesRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pr2_mechanism_msgs::ReloadControllerLibrariesRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pr2_mechanism_msgs::ReloadControllerLibrariesRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pr2_mechanism_msgs::ReloadControllerLibrariesRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "18442b59be9479097f11c543bddbac62";
  }

  static const char* value(const ::pr2_mechanism_msgs::ReloadControllerLibrariesRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x18442b59be947909ULL;
  static const uint64_t static_value2 = 0x7f11c543bddbac62ULL;
};

template<class ContainerAllocator>
struct DataType< ::pr2_mechanism_msgs::ReloadControllerLibrariesRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pr2_mechanism_msgs/ReloadControllerLibrariesRequest";
  }

  static const char* value(const ::pr2_mechanism_msgs::ReloadControllerLibrariesRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pr2_mechanism_msgs::ReloadControllerLibrariesRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"bool force_kill\n"
;
  }

  static const char* value(const ::pr2_mechanism_msgs::ReloadControllerLibrariesRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pr2_mechanism_msgs::ReloadControllerLibrariesRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.force_kill);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ReloadControllerLibrariesRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pr2_mechanism_msgs::ReloadControllerLibrariesRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pr2_mechanism_msgs::ReloadControllerLibrariesRequest_<ContainerAllocator>& v)
  {
    s << indent << "force_kill: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.force_kill);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PR2_MECHANISM_MSGS_MESSAGE_RELOADCONTROLLERLIBRARIESREQUEST_H
