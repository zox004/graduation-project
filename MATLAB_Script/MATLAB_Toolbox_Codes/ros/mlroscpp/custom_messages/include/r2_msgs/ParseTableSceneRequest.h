// Generated by gencpp from file r2_msgs/ParseTableSceneRequest.msg
// DO NOT EDIT!


#ifndef R2_MSGS_MESSAGE_PARSETABLESCENEREQUEST_H
#define R2_MSGS_MESSAGE_PARSETABLESCENEREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace r2_msgs
{
template <class ContainerAllocator>
struct ParseTableSceneRequest_
{
  typedef ParseTableSceneRequest_<ContainerAllocator> Type;

  ParseTableSceneRequest_()
    : cmd(false)  {
    }
  ParseTableSceneRequest_(const ContainerAllocator& _alloc)
    : cmd(false)  {
  (void)_alloc;
    }



   typedef uint8_t _cmd_type;
  _cmd_type cmd;





  typedef boost::shared_ptr< ::r2_msgs::ParseTableSceneRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::r2_msgs::ParseTableSceneRequest_<ContainerAllocator> const> ConstPtr;

}; // struct ParseTableSceneRequest_

typedef ::r2_msgs::ParseTableSceneRequest_<std::allocator<void> > ParseTableSceneRequest;

typedef boost::shared_ptr< ::r2_msgs::ParseTableSceneRequest > ParseTableSceneRequestPtr;
typedef boost::shared_ptr< ::r2_msgs::ParseTableSceneRequest const> ParseTableSceneRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::r2_msgs::ParseTableSceneRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::r2_msgs::ParseTableSceneRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace r2_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/mathworks/devel/sbs/31/pmurali.Brobot.j1339814/matlab/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg'], 'r2_msgs': ['/mathworks/home/pmurali/Documents/R/matlab_msg_gen_ros1/glnxa64/src/r2_msgs/msg'], 'std_msgs': ['/mathworks/devel/sbs/31/pmurali.Brobot.j1339814/matlab/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg', '/mathworks/devel/sbs/31/pmurali.Brobot.j1339814/matlab/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg'], 'visualization_msgs': ['/mathworks/devel/sbs/31/pmurali.Brobot.j1339814/matlab/sys/ros1/glnxa64/ros1/share/visualization_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::r2_msgs::ParseTableSceneRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::r2_msgs::ParseTableSceneRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::r2_msgs::ParseTableSceneRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::r2_msgs::ParseTableSceneRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::r2_msgs::ParseTableSceneRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::r2_msgs::ParseTableSceneRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::r2_msgs::ParseTableSceneRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "fab6d5f499de320aad10749bce1f85cf";
  }

  static const char* value(const ::r2_msgs::ParseTableSceneRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xfab6d5f499de320aULL;
  static const uint64_t static_value2 = 0xad10749bce1f85cfULL;
};

template<class ContainerAllocator>
struct DataType< ::r2_msgs::ParseTableSceneRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "r2_msgs/ParseTableSceneRequest";
  }

  static const char* value(const ::r2_msgs::ParseTableSceneRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::r2_msgs::ParseTableSceneRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool cmd\n"
;
  }

  static const char* value(const ::r2_msgs::ParseTableSceneRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::r2_msgs::ParseTableSceneRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.cmd);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ParseTableSceneRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::r2_msgs::ParseTableSceneRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::r2_msgs::ParseTableSceneRequest_<ContainerAllocator>& v)
  {
    s << indent << "cmd: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.cmd);
  }
};

} // namespace message_operations
} // namespace ros

#endif // R2_MSGS_MESSAGE_PARSETABLESCENEREQUEST_H
