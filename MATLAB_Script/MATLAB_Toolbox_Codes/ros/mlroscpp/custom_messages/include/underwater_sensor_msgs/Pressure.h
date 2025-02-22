// Generated by gencpp from file underwater_sensor_msgs/Pressure.msg
// DO NOT EDIT!


#ifndef UNDERWATER_SENSOR_MSGS_MESSAGE_PRESSURE_H
#define UNDERWATER_SENSOR_MSGS_MESSAGE_PRESSURE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace underwater_sensor_msgs
{
template <class ContainerAllocator>
struct Pressure_
{
  typedef Pressure_<ContainerAllocator> Type;

  Pressure_()
    : header()
    , pressure(0.0)  {
    }
  Pressure_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , pressure(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef float _pressure_type;
  _pressure_type pressure;





  typedef boost::shared_ptr< ::underwater_sensor_msgs::Pressure_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::underwater_sensor_msgs::Pressure_<ContainerAllocator> const> ConstPtr;

}; // struct Pressure_

typedef ::underwater_sensor_msgs::Pressure_<std::allocator<void> > Pressure;

typedef boost::shared_ptr< ::underwater_sensor_msgs::Pressure > PressurePtr;
typedef boost::shared_ptr< ::underwater_sensor_msgs::Pressure const> PressureConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::underwater_sensor_msgs::Pressure_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::underwater_sensor_msgs::Pressure_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace underwater_sensor_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'underwater_sensor_msgs': ['/mathworks/home/pmurali/Documents/Working/matlab_msg_gen_ros1/glnxa64/src/underwater_sensor_msgs/msg'], 'std_msgs': ['/mathworks/devel/sbs/31/pmurali.Brobot.j1329247.2/matlab/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg', '/mathworks/devel/sbs/31/pmurali.Brobot.j1329247.2/matlab/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::underwater_sensor_msgs::Pressure_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::underwater_sensor_msgs::Pressure_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::underwater_sensor_msgs::Pressure_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::underwater_sensor_msgs::Pressure_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::underwater_sensor_msgs::Pressure_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::underwater_sensor_msgs::Pressure_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::underwater_sensor_msgs::Pressure_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cc86d3e590cd90e822f975defafdf965";
  }

  static const char* value(const ::underwater_sensor_msgs::Pressure_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xcc86d3e590cd90e8ULL;
  static const uint64_t static_value2 = 0x22f975defafdf965ULL;
};

template<class ContainerAllocator>
struct DataType< ::underwater_sensor_msgs::Pressure_<ContainerAllocator> >
{
  static const char* value()
  {
    return "underwater_sensor_msgs/Pressure";
  }

  static const char* value(const ::underwater_sensor_msgs::Pressure_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::underwater_sensor_msgs::Pressure_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"float32 pressure \n"
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

  static const char* value(const ::underwater_sensor_msgs::Pressure_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::underwater_sensor_msgs::Pressure_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.pressure);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Pressure_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::underwater_sensor_msgs::Pressure_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::underwater_sensor_msgs::Pressure_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "pressure: ";
    Printer<float>::stream(s, indent + "  ", v.pressure);
  }
};

} // namespace message_operations
} // namespace ros

#endif // UNDERWATER_SENSOR_MSGS_MESSAGE_PRESSURE_H
