// Generated by gencpp from file mavros_msgs/RCIn.msg
// DO NOT EDIT!


#ifndef MAVROS_MSGS_MESSAGE_RCIN_H
#define MAVROS_MSGS_MESSAGE_RCIN_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace mavros_msgs
{
template <class ContainerAllocator>
struct RCIn_
{
  typedef RCIn_<ContainerAllocator> Type;

  RCIn_()
    : header()
    , rssi(0)
    , channels()  {
    }
  RCIn_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , rssi(0)
    , channels(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _rssi_type;
  _rssi_type rssi;

   typedef std::vector<uint16_t, typename ContainerAllocator::template rebind<uint16_t>::other >  _channels_type;
  _channels_type channels;





  typedef boost::shared_ptr< ::mavros_msgs::RCIn_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mavros_msgs::RCIn_<ContainerAllocator> const> ConstPtr;

}; // struct RCIn_

typedef ::mavros_msgs::RCIn_<std::allocator<void> > RCIn;

typedef boost::shared_ptr< ::mavros_msgs::RCIn > RCInPtr;
typedef boost::shared_ptr< ::mavros_msgs::RCIn const> RCInConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mavros_msgs::RCIn_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mavros_msgs::RCIn_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace mavros_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'geographic_msgs': ['/mathworks/devel/sbs/33/hakakarl.Brobot.j1694180/matlab/toolbox/ros/mlroscpp/custom_messages/share/geographic_msgs/cmake/../msg'], 'actionlib': ['/mathworks/devel/sbs/33/hakakarl.Brobot.j1694180/matlab/sys/ros1/glnxa64/ros1/share/actionlib/cmake/../msg'], 'std_msgs': ['/mathworks/devel/sbs/33/hakakarl.Brobot.j1694180/matlab/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg', '/mathworks/devel/sbs/33/hakakarl.Brobot.j1694180/matlab/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg'], 'mavros_msgs': ['/local-ssd1/mavros/mavros-1.7.0/mavros-1.7.0/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg'], 'geometry_msgs': ['/mathworks/devel/sbs/33/hakakarl.Brobot.j1694180/matlab/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg'], 'uuid_msgs': ['/mathworks/devel/sbs/33/hakakarl.Brobot.j1694180/matlab/toolbox/ros/mlroscpp/custom_messages/share/uuid_msgs/cmake/../msg'], 'actionlib_msgs': ['/mathworks/devel/sbs/33/hakakarl.Brobot.j1694180/matlab/sys/ros1/glnxa64/ros1/share/actionlib_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::RCIn_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::RCIn_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::RCIn_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::RCIn_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::RCIn_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::RCIn_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mavros_msgs::RCIn_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1c3eafdb5efbcda3c334e1788bbcfe39";
  }

  static const char* value(const ::mavros_msgs::RCIn_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1c3eafdb5efbcda3ULL;
  static const uint64_t static_value2 = 0xc334e1788bbcfe39ULL;
};

template<class ContainerAllocator>
struct DataType< ::mavros_msgs::RCIn_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mavros_msgs/RCIn";
  }

  static const char* value(const ::mavros_msgs::RCIn_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mavros_msgs::RCIn_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# RAW RC input state\n"
"\n"
"std_msgs/Header header\n"
"uint8 rssi\n"
"uint16[] channels\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
;
  }

  static const char* value(const ::mavros_msgs::RCIn_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mavros_msgs::RCIn_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.rssi);
      stream.next(m.channels);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RCIn_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mavros_msgs::RCIn_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mavros_msgs::RCIn_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "rssi: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.rssi);
    s << indent << "channels[]" << std::endl;
    for (size_t i = 0; i < v.channels.size(); ++i)
    {
      s << indent << "  channels[" << i << "]: ";
      Printer<uint16_t>::stream(s, indent + "  ", v.channels[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // MAVROS_MSGS_MESSAGE_RCIN_H
