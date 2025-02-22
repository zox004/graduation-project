// Generated by gencpp from file jsk_footstep_controller/GroundContactState.msg
// DO NOT EDIT!


#ifndef JSK_FOOTSTEP_CONTROLLER_MESSAGE_GROUNDCONTACTSTATE_H
#define JSK_FOOTSTEP_CONTROLLER_MESSAGE_GROUNDCONTACTSTATE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace jsk_footstep_controller
{
template <class ContainerAllocator>
struct GroundContactState_
{
  typedef GroundContactState_<ContainerAllocator> Type;

  GroundContactState_()
    : header()
    , contact_state(0)
    , error_pitch_angle(0.0)
    , error_roll_angle(0.0)
    , error_yaw_angle(0.0)
    , error_z(0.0)  {
    }
  GroundContactState_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , contact_state(0)
    , error_pitch_angle(0.0)
    , error_roll_angle(0.0)
    , error_yaw_angle(0.0)
    , error_z(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _contact_state_type;
  _contact_state_type contact_state;

   typedef double _error_pitch_angle_type;
  _error_pitch_angle_type error_pitch_angle;

   typedef double _error_roll_angle_type;
  _error_roll_angle_type error_roll_angle;

   typedef double _error_yaw_angle_type;
  _error_yaw_angle_type error_yaw_angle;

   typedef double _error_z_type;
  _error_z_type error_z;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(CONTACT_BOTH_GROUND)
  #undef CONTACT_BOTH_GROUND
#endif
#if defined(_WIN32) && defined(CONTACT_AIR)
  #undef CONTACT_AIR
#endif
#if defined(_WIN32) && defined(CONTACT_LLEG_GROUND)
  #undef CONTACT_LLEG_GROUND
#endif
#if defined(_WIN32) && defined(CONTACT_RLEG_GROUND)
  #undef CONTACT_RLEG_GROUND
#endif
#if defined(_WIN32) && defined(CONTACT_UNSTABLE)
  #undef CONTACT_UNSTABLE
#endif

  enum {
    CONTACT_BOTH_GROUND = 1u,
    CONTACT_AIR = 2u,
    CONTACT_LLEG_GROUND = 3u,
    CONTACT_RLEG_GROUND = 4u,
    CONTACT_UNSTABLE = 5u,
  };


  typedef boost::shared_ptr< ::jsk_footstep_controller::GroundContactState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::jsk_footstep_controller::GroundContactState_<ContainerAllocator> const> ConstPtr;

}; // struct GroundContactState_

typedef ::jsk_footstep_controller::GroundContactState_<std::allocator<void> > GroundContactState;

typedef boost::shared_ptr< ::jsk_footstep_controller::GroundContactState > GroundContactStatePtr;
typedef boost::shared_ptr< ::jsk_footstep_controller::GroundContactState const> GroundContactStateConstPtr;

// constants requiring out of line definition

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::jsk_footstep_controller::GroundContactState_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::jsk_footstep_controller::GroundContactState_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::jsk_footstep_controller::GroundContactState_<ContainerAllocator1> & lhs, const ::jsk_footstep_controller::GroundContactState_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.contact_state == rhs.contact_state &&
    lhs.error_pitch_angle == rhs.error_pitch_angle &&
    lhs.error_roll_angle == rhs.error_roll_angle &&
    lhs.error_yaw_angle == rhs.error_yaw_angle &&
    lhs.error_z == rhs.error_z;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::jsk_footstep_controller::GroundContactState_<ContainerAllocator1> & lhs, const ::jsk_footstep_controller::GroundContactState_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace jsk_footstep_controller

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::jsk_footstep_controller::GroundContactState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::jsk_footstep_controller::GroundContactState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::jsk_footstep_controller::GroundContactState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::jsk_footstep_controller::GroundContactState_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::jsk_footstep_controller::GroundContactState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::jsk_footstep_controller::GroundContactState_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::jsk_footstep_controller::GroundContactState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "da0f3906e0a6eafe324ba582440493ea";
  }

  static const char* value(const ::jsk_footstep_controller::GroundContactState_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xda0f3906e0a6eafeULL;
  static const uint64_t static_value2 = 0x324ba582440493eaULL;
};

template<class ContainerAllocator>
struct DataType< ::jsk_footstep_controller::GroundContactState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "jsk_footstep_controller/GroundContactState";
  }

  static const char* value(const ::jsk_footstep_controller::GroundContactState_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::jsk_footstep_controller::GroundContactState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"\n"
"uint8 CONTACT_BOTH_GROUND=1\n"
"uint8 CONTACT_AIR=2\n"
"uint8 CONTACT_LLEG_GROUND=3\n"
"uint8 CONTACT_RLEG_GROUND=4\n"
"uint8 CONTACT_UNSTABLE=5\n"
"uint8 contact_state\n"
"\n"
"float64 error_pitch_angle\n"
"float64 error_roll_angle\n"
"float64 error_yaw_angle\n"
"float64 error_z\n"
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

  static const char* value(const ::jsk_footstep_controller::GroundContactState_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::jsk_footstep_controller::GroundContactState_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.contact_state);
      stream.next(m.error_pitch_angle);
      stream.next(m.error_roll_angle);
      stream.next(m.error_yaw_angle);
      stream.next(m.error_z);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GroundContactState_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::jsk_footstep_controller::GroundContactState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::jsk_footstep_controller::GroundContactState_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "contact_state: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.contact_state);
    s << indent << "error_pitch_angle: ";
    Printer<double>::stream(s, indent + "  ", v.error_pitch_angle);
    s << indent << "error_roll_angle: ";
    Printer<double>::stream(s, indent + "  ", v.error_roll_angle);
    s << indent << "error_yaw_angle: ";
    Printer<double>::stream(s, indent + "  ", v.error_yaw_angle);
    s << indent << "error_z: ";
    Printer<double>::stream(s, indent + "  ", v.error_z);
  }
};

} // namespace message_operations
} // namespace ros

#endif // JSK_FOOTSTEP_CONTROLLER_MESSAGE_GROUNDCONTACTSTATE_H
