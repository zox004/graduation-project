// Generated by gencpp from file wfov_camera_msgs/WFOVTrigger.msg
// DO NOT EDIT!


#ifndef WFOV_CAMERA_MSGS_MESSAGE_WFOVTRIGGER_H
#define WFOV_CAMERA_MSGS_MESSAGE_WFOVTRIGGER_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace wfov_camera_msgs
{
template <class ContainerAllocator>
struct WFOVTrigger_
{
  typedef WFOVTrigger_<ContainerAllocator> Type;

  WFOVTrigger_()
    : header()
    , time_reference()
    , trigger_time()
    , trigger_time_reference()
    , shutter(0)
    , id(0)
    , trigger_seq(0)  {
    }
  WFOVTrigger_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , time_reference(_alloc)
    , trigger_time()
    , trigger_time_reference(_alloc)
    , shutter(0)
    , id(0)
    , trigger_seq(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _time_reference_type;
  _time_reference_type time_reference;

   typedef ros::Time _trigger_time_type;
  _trigger_time_type trigger_time;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _trigger_time_reference_type;
  _trigger_time_reference_type trigger_time_reference;

   typedef uint32_t _shutter_type;
  _shutter_type shutter;

   typedef uint32_t _id_type;
  _id_type id;

   typedef uint32_t _trigger_seq_type;
  _trigger_seq_type trigger_seq;





  typedef boost::shared_ptr< ::wfov_camera_msgs::WFOVTrigger_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::wfov_camera_msgs::WFOVTrigger_<ContainerAllocator> const> ConstPtr;

}; // struct WFOVTrigger_

typedef ::wfov_camera_msgs::WFOVTrigger_<std::allocator<void> > WFOVTrigger;

typedef boost::shared_ptr< ::wfov_camera_msgs::WFOVTrigger > WFOVTriggerPtr;
typedef boost::shared_ptr< ::wfov_camera_msgs::WFOVTrigger const> WFOVTriggerConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::wfov_camera_msgs::WFOVTrigger_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::wfov_camera_msgs::WFOVTrigger_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace wfov_camera_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'sensor_msgs': ['/mathworks/home/pmurali/Documents/Working/matlab_msg_gen_ros1/glnxa64/src/sensor_msgs/msg'], 'geometry_msgs': ['/mathworks/home/pmurali/Documents/Working/matlab_msg_gen_ros1/glnxa64/src/geometry_msgs/msg'], 'wfov_camera_msgs': ['/mathworks/home/pmurali/Documents/Working/matlab_msg_gen_ros1/glnxa64/src/wfov_camera_msgs/msg'], 'std_msgs': ['/mathworks/devel/sbs/31/pmurali.Brobot.j1329247.2/matlab/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg', '/mathworks/devel/sbs/31/pmurali.Brobot.j1329247.2/matlab/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::wfov_camera_msgs::WFOVTrigger_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::wfov_camera_msgs::WFOVTrigger_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::wfov_camera_msgs::WFOVTrigger_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::wfov_camera_msgs::WFOVTrigger_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::wfov_camera_msgs::WFOVTrigger_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::wfov_camera_msgs::WFOVTrigger_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::wfov_camera_msgs::WFOVTrigger_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e38c040150f1be3148468f6b9974f8bf";
  }

  static const char* value(const ::wfov_camera_msgs::WFOVTrigger_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe38c040150f1be31ULL;
  static const uint64_t static_value2 = 0x48468f6b9974f8bfULL;
};

template<class ContainerAllocator>
struct DataType< ::wfov_camera_msgs::WFOVTrigger_<ContainerAllocator> >
{
  static const char* value()
  {
    return "wfov_camera_msgs/WFOVTrigger";
  }

  static const char* value(const ::wfov_camera_msgs::WFOVTrigger_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::wfov_camera_msgs::WFOVTrigger_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Message for the time synchronization packets for the WFOV cameras.\n"
"\n"
"Header header			# stamp is the time at which the trigger was received.\n"
"\n"
"string time_reference		# The name of the reference clock for this message's timestamp.\n"
"\n"
"time trigger_time		# The trigger time at which the data was valid.\n"
"\n"
"string trigger_time_reference	# The name of the reference clock for this message's trigger timestamp.\n"
"\n"
"uint32 shutter			# Time duration (microseconds) the shutter was open.\n"
"\n"
"uint32 id			# Camera ID Number\n"
"\n"
"uint32 trigger_seq		# Number of triggers sent to this camera ID number\n"
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

  static const char* value(const ::wfov_camera_msgs::WFOVTrigger_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::wfov_camera_msgs::WFOVTrigger_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.time_reference);
      stream.next(m.trigger_time);
      stream.next(m.trigger_time_reference);
      stream.next(m.shutter);
      stream.next(m.id);
      stream.next(m.trigger_seq);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct WFOVTrigger_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::wfov_camera_msgs::WFOVTrigger_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::wfov_camera_msgs::WFOVTrigger_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "time_reference: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.time_reference);
    s << indent << "trigger_time: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.trigger_time);
    s << indent << "trigger_time_reference: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.trigger_time_reference);
    s << indent << "shutter: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.shutter);
    s << indent << "id: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.id);
    s << indent << "trigger_seq: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.trigger_seq);
  }
};

} // namespace message_operations
} // namespace ros

#endif // WFOV_CAMERA_MSGS_MESSAGE_WFOVTRIGGER_H
