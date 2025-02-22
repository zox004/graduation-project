// Generated by gencpp from file universal_teleop/Control.msg
// DO NOT EDIT!


#ifndef UNIVERSAL_TELEOP_MESSAGE_CONTROL_H
#define UNIVERSAL_TELEOP_MESSAGE_CONTROL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace universal_teleop
{
template <class ContainerAllocator>
struct Control_
{
  typedef Control_<ContainerAllocator> Type;

  Control_()
    : header()
    , control()
    , value(0.0)  {
    }
  Control_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , control(_alloc)
    , value(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _control_type;
  _control_type control;

   typedef float _value_type;
  _value_type value;





  typedef boost::shared_ptr< ::universal_teleop::Control_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::universal_teleop::Control_<ContainerAllocator> const> ConstPtr;

}; // struct Control_

typedef ::universal_teleop::Control_<std::allocator<void> > Control;

typedef boost::shared_ptr< ::universal_teleop::Control > ControlPtr;
typedef boost::shared_ptr< ::universal_teleop::Control const> ControlConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::universal_teleop::Control_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::universal_teleop::Control_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace universal_teleop

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/mathworks/devel/sbs/31/pmurali.Brobot.j1329247.2/matlab/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg', '/mathworks/devel/sbs/31/pmurali.Brobot.j1329247.2/matlab/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg'], 'universal_teleop': ['/mathworks/home/pmurali/Documents/Working/matlab_msg_gen_ros1/glnxa64/src/universal_teleop/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::universal_teleop::Control_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::universal_teleop::Control_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::universal_teleop::Control_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::universal_teleop::Control_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::universal_teleop::Control_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::universal_teleop::Control_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::universal_teleop::Control_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e96dab30e0ce0490fc168ec7e380bd1f";
  }

  static const char* value(const ::universal_teleop::Control_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe96dab30e0ce0490ULL;
  static const uint64_t static_value2 = 0xfc168ec7e380bd1fULL;
};

template<class ContainerAllocator>
struct DataType< ::universal_teleop::Control_<ContainerAllocator> >
{
  static const char* value()
  {
    return "universal_teleop/Control";
  }

  static const char* value(const ::universal_teleop::Control_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::universal_teleop::Control_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"string control\n"
"float32 value\n"
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

  static const char* value(const ::universal_teleop::Control_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::universal_teleop::Control_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.control);
      stream.next(m.value);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Control_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::universal_teleop::Control_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::universal_teleop::Control_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "control: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.control);
    s << indent << "value: ";
    Printer<float>::stream(s, indent + "  ", v.value);
  }
};

} // namespace message_operations
} // namespace ros

#endif // UNIVERSAL_TELEOP_MESSAGE_CONTROL_H
