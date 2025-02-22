// Generated by gencpp from file mavros_msgs/LandingTarget.msg
// DO NOT EDIT!


#ifndef MAVROS_MSGS_MESSAGE_LANDINGTARGET_H
#define MAVROS_MSGS_MESSAGE_LANDINGTARGET_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/Pose.h>

namespace mavros_msgs
{
template <class ContainerAllocator>
struct LandingTarget_
{
  typedef LandingTarget_<ContainerAllocator> Type;

  LandingTarget_()
    : header()
    , target_num(0)
    , frame(0)
    , angle()
    , distance(0.0)
    , size()
    , pose()
    , type(0)  {
      angle.assign(0.0);

      size.assign(0.0);
  }
  LandingTarget_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , target_num(0)
    , frame(0)
    , angle()
    , distance(0.0)
    , size()
    , pose(_alloc)
    , type(0)  {
  (void)_alloc;
      angle.assign(0.0);

      size.assign(0.0);
  }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _target_num_type;
  _target_num_type target_num;

   typedef uint8_t _frame_type;
  _frame_type frame;

   typedef boost::array<float, 2>  _angle_type;
  _angle_type angle;

   typedef float _distance_type;
  _distance_type distance;

   typedef boost::array<float, 2>  _size_type;
  _size_type size;

   typedef  ::geometry_msgs::Pose_<ContainerAllocator>  _pose_type;
  _pose_type pose;

   typedef uint8_t _type_type;
  _type_type type;



  enum {
 
    GLOBAL = 0u,
 
    LOCAL_NED = 2u,
 
    MISSION = 3u,
 
    GLOBAL_RELATIVE_ALT = 4u,
 
    LOCAL_ENU = 5u,
 
    GLOBAL_INT = 6u,
 
    GLOBAL_RELATIVE_ALT_INT = 7u,
 
    LOCAL_OFFSET_NED = 8u,
 
    BODY_NED = 9u,
 
    BODY_OFFSET_NED = 10u,
 
    GLOBAL_TERRAIN_ALT = 11u,
 
    GLOBAL_TERRAIN_ALT_INT = 12u,
 
    LIGHT_BEACON = 0u,
 
    RADIO_BEACON = 1u,
 
    VISION_FIDUCIAL = 2u,
 
    VISION_OTHER = 3u,
  };


  typedef boost::shared_ptr< ::mavros_msgs::LandingTarget_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mavros_msgs::LandingTarget_<ContainerAllocator> const> ConstPtr;

}; // struct LandingTarget_

typedef ::mavros_msgs::LandingTarget_<std::allocator<void> > LandingTarget;

typedef boost::shared_ptr< ::mavros_msgs::LandingTarget > LandingTargetPtr;
typedef boost::shared_ptr< ::mavros_msgs::LandingTarget const> LandingTargetConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mavros_msgs::LandingTarget_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mavros_msgs::LandingTarget_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::mavros_msgs::LandingTarget_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::LandingTarget_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::LandingTarget_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::LandingTarget_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::LandingTarget_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::LandingTarget_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mavros_msgs::LandingTarget_<ContainerAllocator> >
{
  static const char* value()
  {
    return "76548ee08437914830bb7319d04d5490";
  }

  static const char* value(const ::mavros_msgs::LandingTarget_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x76548ee084379148ULL;
  static const uint64_t static_value2 = 0x30bb7319d04d5490ULL;
};

template<class ContainerAllocator>
struct DataType< ::mavros_msgs::LandingTarget_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mavros_msgs/LandingTarget";
  }

  static const char* value(const ::mavros_msgs::LandingTarget_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mavros_msgs::LandingTarget_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# MAVLink message: LANDING_TARGET\n"
"# https://mavlink.io/en/messages/common.html\n"
"\n"
"std_msgs/Header header\n"
"\n"
"## MAV_FRAME enum\n"
"uint8 GLOBAL = 0                   # Global coordinate frame, WGS84 coordinate system. First value / x: latitude, second value / y: longitude, third value / z: positive altitude over mean sea level (MSL)\n"
"uint8 LOCAL_NED = 2                # Local coordinate frame, Z-up (x: north, y: east, z: down).\n"
"uint8 MISSION = 3                  # NOT a coordinate frame, indicates a mission command.\n"
"uint8 GLOBAL_RELATIVE_ALT = 4      # Global coordinate frame, WGS84 coordinate system, relative altitude over ground with respect to the home position. First value / x: latitude, second value / y: longitude, third value / z: positive altitude with 0 being at the altitude of the home location.\n"
"uint8 LOCAL_ENU = 5                # Local coordinate frame, Z-down (x: east, y: north, z: up)\n"
"uint8 GLOBAL_INT = 6               # Global coordinate frame, WGS84 coordinate system. First value / x: latitude in degrees*1.0e-7, second value / y: longitude in degrees*1.0e-7, third value / z: positive altitude over mean sea level (MSL)\n"
"uint8 GLOBAL_RELATIVE_ALT_INT = 7  # Global coordinate frame, WGS84 coordinate system, relative altitude over ground with respect to the home position. First value / x: latitude in degrees*10e-7, second value / y: longitude in degrees*10e-7, third value / z: positive altitude with 0 being at the altitude of the home location.\n"
"uint8 LOCAL_OFFSET_NED = 8         # Offset to the current local frame. Anything expressed in this frame should be added to the current local frame position.\n"
"uint8 BODY_NED = 9                 # Setpoint in body NED frame. This makes sense if all position control is externalized - e.g. useful to command 2 m/s^2 acceleration to the right.\n"
"uint8 BODY_OFFSET_NED = 10         # Offset in body NED frame. This makes sense if adding setpoints to the current flight path, to avoid an obstacle - e.g. useful to command 2 m/s^2 acceleration to the east.\n"
"uint8 GLOBAL_TERRAIN_ALT = 11      # Global coordinate frame with above terrain level altitude. WGS84 coordinate system, relative altitude over terrain with respect to the waypoint coordinate. First value / x: latitude in degrees, second value / y: longitude in degrees, third value / z: positive altitude in meters with 0 being at ground level in terrain model.\n"
"uint8 GLOBAL_TERRAIN_ALT_INT = 12  # Global coordinate frame with above terrain level altitude. WGS84 coordinate system, relative altitude over terrain with respect to the waypoint coordinate. First value / x: latitude in degrees*10e-7, second value / y: longitude in degrees*10e-7, third value / z: positive altitude in meters with 0 being at ground level in terrain model.\n"
"\n"
"## LANDING_TARGET_TYPE enum\n"
"uint8 LIGHT_BEACON = 0             # Landing target signaled by light beacon (ex: IR-LOCK)\n"
"uint8 RADIO_BEACON = 1             # Landing target signaled by radio beacon (ex: ILS, NDB)\n"
"uint8 VISION_FIDUCIAL = 2          # Landing target represented by a fiducial marker (ex: ARTag)\n"
"uint8 VISION_OTHER = 3             # Landing target represented by a pre-defined visual shape/feature (ex: X-marker, H-marker, square)\n"
"\n"
"uint8 target_num\n"
"uint8 frame\n"
"float32[2] angle\n"
"float32 distance\n"
"float32[2] size\n"
"geometry_msgs/Pose pose\n"
"uint8 type\n"
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
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
;
  }

  static const char* value(const ::mavros_msgs::LandingTarget_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mavros_msgs::LandingTarget_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.target_num);
      stream.next(m.frame);
      stream.next(m.angle);
      stream.next(m.distance);
      stream.next(m.size);
      stream.next(m.pose);
      stream.next(m.type);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LandingTarget_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mavros_msgs::LandingTarget_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mavros_msgs::LandingTarget_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "target_num: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.target_num);
    s << indent << "frame: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.frame);
    s << indent << "angle[]" << std::endl;
    for (size_t i = 0; i < v.angle.size(); ++i)
    {
      s << indent << "  angle[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.angle[i]);
    }
    s << indent << "distance: ";
    Printer<float>::stream(s, indent + "  ", v.distance);
    s << indent << "size[]" << std::endl;
    for (size_t i = 0; i < v.size.size(); ++i)
    {
      s << indent << "  size[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.size[i]);
    }
    s << indent << "pose: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "  ", v.pose);
    s << indent << "type: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.type);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MAVROS_MSGS_MESSAGE_LANDINGTARGET_H
