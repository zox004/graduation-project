// Generated by gencpp from file sr_robot_msgs/JointControllerState.msg
// DO NOT EDIT!


#ifndef SR_ROBOT_MSGS_MESSAGE_JOINTCONTROLLERSTATE_H
#define SR_ROBOT_MSGS_MESSAGE_JOINTCONTROLLERSTATE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace sr_robot_msgs
{
template <class ContainerAllocator>
struct JointControllerState_
{
  typedef JointControllerState_<ContainerAllocator> Type;

  JointControllerState_()
    : header()
    , set_point(0.0)
    , process_value(0.0)
    , process_value_dot(0.0)
    , commanded_velocity(0.0)
    , error(0.0)
    , time_step(0.0)
    , command(0.0)
    , measured_effort(0.0)
    , friction_compensation(0.0)
    , position_p(0.0)
    , position_i(0.0)
    , position_d(0.0)
    , position_i_clamp(0.0)
    , velocity_p(0.0)
    , velocity_i(0.0)
    , velocity_d(0.0)
    , velocity_i_clamp(0.0)  {
    }
  JointControllerState_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , set_point(0.0)
    , process_value(0.0)
    , process_value_dot(0.0)
    , commanded_velocity(0.0)
    , error(0.0)
    , time_step(0.0)
    , command(0.0)
    , measured_effort(0.0)
    , friction_compensation(0.0)
    , position_p(0.0)
    , position_i(0.0)
    , position_d(0.0)
    , position_i_clamp(0.0)
    , velocity_p(0.0)
    , velocity_i(0.0)
    , velocity_d(0.0)
    , velocity_i_clamp(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef double _set_point_type;
  _set_point_type set_point;

   typedef double _process_value_type;
  _process_value_type process_value;

   typedef double _process_value_dot_type;
  _process_value_dot_type process_value_dot;

   typedef double _commanded_velocity_type;
  _commanded_velocity_type commanded_velocity;

   typedef double _error_type;
  _error_type error;

   typedef double _time_step_type;
  _time_step_type time_step;

   typedef double _command_type;
  _command_type command;

   typedef double _measured_effort_type;
  _measured_effort_type measured_effort;

   typedef double _friction_compensation_type;
  _friction_compensation_type friction_compensation;

   typedef double _position_p_type;
  _position_p_type position_p;

   typedef double _position_i_type;
  _position_i_type position_i;

   typedef double _position_d_type;
  _position_d_type position_d;

   typedef double _position_i_clamp_type;
  _position_i_clamp_type position_i_clamp;

   typedef double _velocity_p_type;
  _velocity_p_type velocity_p;

   typedef double _velocity_i_type;
  _velocity_i_type velocity_i;

   typedef double _velocity_d_type;
  _velocity_d_type velocity_d;

   typedef double _velocity_i_clamp_type;
  _velocity_i_clamp_type velocity_i_clamp;





  typedef boost::shared_ptr< ::sr_robot_msgs::JointControllerState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::sr_robot_msgs::JointControllerState_<ContainerAllocator> const> ConstPtr;

}; // struct JointControllerState_

typedef ::sr_robot_msgs::JointControllerState_<std::allocator<void> > JointControllerState;

typedef boost::shared_ptr< ::sr_robot_msgs::JointControllerState > JointControllerStatePtr;
typedef boost::shared_ptr< ::sr_robot_msgs::JointControllerState const> JointControllerStateConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::sr_robot_msgs::JointControllerState_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::sr_robot_msgs::JointControllerState_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace sr_robot_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'sr_robot_msgs': ['/mathworks/home/pmurali/Documents/Working/matlab_msg_gen_ros1/glnxa64/src/sr_robot_msgs/msg'], 'std_msgs': ['/mathworks/devel/sbs/31/pmurali.Brobot.j1329247.2/matlab/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg', '/mathworks/devel/sbs/31/pmurali.Brobot.j1329247.2/matlab/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::sr_robot_msgs::JointControllerState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sr_robot_msgs::JointControllerState_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sr_robot_msgs::JointControllerState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sr_robot_msgs::JointControllerState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sr_robot_msgs::JointControllerState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sr_robot_msgs::JointControllerState_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::sr_robot_msgs::JointControllerState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6d5ccb5452fd11516b5e350fcf60090e";
  }

  static const char* value(const ::sr_robot_msgs::JointControllerState_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6d5ccb5452fd1151ULL;
  static const uint64_t static_value2 = 0x6b5e350fcf60090eULL;
};

template<class ContainerAllocator>
struct DataType< ::sr_robot_msgs::JointControllerState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sr_robot_msgs/JointControllerState";
  }

  static const char* value(const ::sr_robot_msgs::JointControllerState_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::sr_robot_msgs::JointControllerState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"float64 set_point\n"
"float64 process_value\n"
"float64 process_value_dot\n"
"float64 commanded_velocity\n"
"float64 error\n"
"float64 time_step\n"
"float64 command\n"
"float64 measured_effort\n"
"float64 friction_compensation\n"
"float64 position_p\n"
"float64 position_i\n"
"float64 position_d\n"
"float64 position_i_clamp\n"
"float64 velocity_p\n"
"float64 velocity_i\n"
"float64 velocity_d\n"
"float64 velocity_i_clamp\n"
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

  static const char* value(const ::sr_robot_msgs::JointControllerState_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::sr_robot_msgs::JointControllerState_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.set_point);
      stream.next(m.process_value);
      stream.next(m.process_value_dot);
      stream.next(m.commanded_velocity);
      stream.next(m.error);
      stream.next(m.time_step);
      stream.next(m.command);
      stream.next(m.measured_effort);
      stream.next(m.friction_compensation);
      stream.next(m.position_p);
      stream.next(m.position_i);
      stream.next(m.position_d);
      stream.next(m.position_i_clamp);
      stream.next(m.velocity_p);
      stream.next(m.velocity_i);
      stream.next(m.velocity_d);
      stream.next(m.velocity_i_clamp);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct JointControllerState_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sr_robot_msgs::JointControllerState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::sr_robot_msgs::JointControllerState_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "set_point: ";
    Printer<double>::stream(s, indent + "  ", v.set_point);
    s << indent << "process_value: ";
    Printer<double>::stream(s, indent + "  ", v.process_value);
    s << indent << "process_value_dot: ";
    Printer<double>::stream(s, indent + "  ", v.process_value_dot);
    s << indent << "commanded_velocity: ";
    Printer<double>::stream(s, indent + "  ", v.commanded_velocity);
    s << indent << "error: ";
    Printer<double>::stream(s, indent + "  ", v.error);
    s << indent << "time_step: ";
    Printer<double>::stream(s, indent + "  ", v.time_step);
    s << indent << "command: ";
    Printer<double>::stream(s, indent + "  ", v.command);
    s << indent << "measured_effort: ";
    Printer<double>::stream(s, indent + "  ", v.measured_effort);
    s << indent << "friction_compensation: ";
    Printer<double>::stream(s, indent + "  ", v.friction_compensation);
    s << indent << "position_p: ";
    Printer<double>::stream(s, indent + "  ", v.position_p);
    s << indent << "position_i: ";
    Printer<double>::stream(s, indent + "  ", v.position_i);
    s << indent << "position_d: ";
    Printer<double>::stream(s, indent + "  ", v.position_d);
    s << indent << "position_i_clamp: ";
    Printer<double>::stream(s, indent + "  ", v.position_i_clamp);
    s << indent << "velocity_p: ";
    Printer<double>::stream(s, indent + "  ", v.velocity_p);
    s << indent << "velocity_i: ";
    Printer<double>::stream(s, indent + "  ", v.velocity_i);
    s << indent << "velocity_d: ";
    Printer<double>::stream(s, indent + "  ", v.velocity_d);
    s << indent << "velocity_i_clamp: ";
    Printer<double>::stream(s, indent + "  ", v.velocity_i_clamp);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SR_ROBOT_MSGS_MESSAGE_JOINTCONTROLLERSTATE_H
