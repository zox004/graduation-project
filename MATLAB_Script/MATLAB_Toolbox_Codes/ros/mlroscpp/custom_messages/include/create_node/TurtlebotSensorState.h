// Generated by gencpp from file create_node/TurtlebotSensorState.msg
// DO NOT EDIT!


#ifndef CREATE_NODE_MESSAGE_TURTLEBOTSENSORSTATE_H
#define CREATE_NODE_MESSAGE_TURTLEBOTSENSORSTATE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace create_node
{
template <class ContainerAllocator>
struct TurtlebotSensorState_
{
  typedef TurtlebotSensorState_<ContainerAllocator> Type;

  TurtlebotSensorState_()
    : header()
    , bumps_wheeldrops(0)
    , wall(false)
    , cliff_left(false)
    , cliff_front_left(false)
    , cliff_front_right(false)
    , cliff_right(false)
    , virtual_wall(false)
    , motor_overcurrents(0)
    , dirt_detector_left(0)
    , dirt_detector_right(0)
    , remote_opcode(0)
    , buttons(0)
    , distance(0.0)
    , angle(0.0)
    , charging_state(0)
    , voltage(0)
    , current(0)
    , temperature(0)
    , charge(0)
    , capacity(0)
    , wall_signal(0)
    , cliff_left_signal(0)
    , cliff_front_left_signal(0)
    , cliff_front_right_signal(0)
    , cliff_right_signal(0)
    , user_digital_outputs(0)
    , user_digital_inputs(0)
    , user_analog_input(0)
    , charging_sources_available(0)
    , oi_mode(0)
    , song_number(0)
    , song_playing(false)
    , number_of_stream_packets(0)
    , requested_velocity(0)
    , requested_radius(0)
    , requested_right_velocity(0)
    , requested_left_velocity(0)  {
    }
  TurtlebotSensorState_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , bumps_wheeldrops(0)
    , wall(false)
    , cliff_left(false)
    , cliff_front_left(false)
    , cliff_front_right(false)
    , cliff_right(false)
    , virtual_wall(false)
    , motor_overcurrents(0)
    , dirt_detector_left(0)
    , dirt_detector_right(0)
    , remote_opcode(0)
    , buttons(0)
    , distance(0.0)
    , angle(0.0)
    , charging_state(0)
    , voltage(0)
    , current(0)
    , temperature(0)
    , charge(0)
    , capacity(0)
    , wall_signal(0)
    , cliff_left_signal(0)
    , cliff_front_left_signal(0)
    , cliff_front_right_signal(0)
    , cliff_right_signal(0)
    , user_digital_outputs(0)
    , user_digital_inputs(0)
    , user_analog_input(0)
    , charging_sources_available(0)
    , oi_mode(0)
    , song_number(0)
    , song_playing(false)
    , number_of_stream_packets(0)
    , requested_velocity(0)
    , requested_radius(0)
    , requested_right_velocity(0)
    , requested_left_velocity(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _bumps_wheeldrops_type;
  _bumps_wheeldrops_type bumps_wheeldrops;

   typedef uint8_t _wall_type;
  _wall_type wall;

   typedef uint8_t _cliff_left_type;
  _cliff_left_type cliff_left;

   typedef uint8_t _cliff_front_left_type;
  _cliff_front_left_type cliff_front_left;

   typedef uint8_t _cliff_front_right_type;
  _cliff_front_right_type cliff_front_right;

   typedef uint8_t _cliff_right_type;
  _cliff_right_type cliff_right;

   typedef uint8_t _virtual_wall_type;
  _virtual_wall_type virtual_wall;

   typedef uint8_t _motor_overcurrents_type;
  _motor_overcurrents_type motor_overcurrents;

   typedef uint8_t _dirt_detector_left_type;
  _dirt_detector_left_type dirt_detector_left;

   typedef uint8_t _dirt_detector_right_type;
  _dirt_detector_right_type dirt_detector_right;

   typedef uint8_t _remote_opcode_type;
  _remote_opcode_type remote_opcode;

   typedef uint8_t _buttons_type;
  _buttons_type buttons;

   typedef double _distance_type;
  _distance_type distance;

   typedef double _angle_type;
  _angle_type angle;

   typedef uint8_t _charging_state_type;
  _charging_state_type charging_state;

   typedef uint16_t _voltage_type;
  _voltage_type voltage;

   typedef int16_t _current_type;
  _current_type current;

   typedef int8_t _temperature_type;
  _temperature_type temperature;

   typedef uint16_t _charge_type;
  _charge_type charge;

   typedef uint16_t _capacity_type;
  _capacity_type capacity;

   typedef uint16_t _wall_signal_type;
  _wall_signal_type wall_signal;

   typedef uint16_t _cliff_left_signal_type;
  _cliff_left_signal_type cliff_left_signal;

   typedef uint16_t _cliff_front_left_signal_type;
  _cliff_front_left_signal_type cliff_front_left_signal;

   typedef uint16_t _cliff_front_right_signal_type;
  _cliff_front_right_signal_type cliff_front_right_signal;

   typedef uint16_t _cliff_right_signal_type;
  _cliff_right_signal_type cliff_right_signal;

   typedef uint8_t _user_digital_outputs_type;
  _user_digital_outputs_type user_digital_outputs;

   typedef uint8_t _user_digital_inputs_type;
  _user_digital_inputs_type user_digital_inputs;

   typedef uint16_t _user_analog_input_type;
  _user_analog_input_type user_analog_input;

   typedef uint8_t _charging_sources_available_type;
  _charging_sources_available_type charging_sources_available;

   typedef uint8_t _oi_mode_type;
  _oi_mode_type oi_mode;

   typedef uint8_t _song_number_type;
  _song_number_type song_number;

   typedef uint8_t _song_playing_type;
  _song_playing_type song_playing;

   typedef uint8_t _number_of_stream_packets_type;
  _number_of_stream_packets_type number_of_stream_packets;

   typedef int32_t _requested_velocity_type;
  _requested_velocity_type requested_velocity;

   typedef int32_t _requested_radius_type;
  _requested_radius_type requested_radius;

   typedef int32_t _requested_right_velocity_type;
  _requested_right_velocity_type requested_right_velocity;

   typedef int32_t _requested_left_velocity_type;
  _requested_left_velocity_type requested_left_velocity;



  enum {
    OI_MODE_OFF = 0u,
    OI_MODE_PASSIVE = 1u,
    OI_MODE_SAFE = 2u,
    OI_MODE_FULL = 3u,
    REMOTE_LEFT = 129u,
    REMOTE_FORWARD = 130u,
    REMOTE_RIGHT = 131u,
    REMOTE_SPOT = 132u,
    REMOTE_MAX = 133u,
    REMOTE_SMALL = 134u,
    REMOTE_MEDIUM = 135u,
    REMOTE_LARGE = 136u,
    REMOTE_CLEAN = 136u,
    REMOTE_PAUSE = 137u,
    REMOTE_POWER = 138u,
    REMOTE_ARC_LEFT = 139u,
    REMOTE_ARC_RIGHT = 140u,
    REMOTE_DRIVE_STOP = 141u,
    REMOTE_SEND_ALL = 142u,
    REMOTE_SEEK_DOCK = 143u,
    REMOTE_RESERVED = 240u,
    REMOTE_FORCE_FIELD = 242u,
    REMOTE_GREEN_BUOY = 244u,
    REMOTE_GREEN_BUOY_AND_FORCE_FIELD = 246u,
    REMOTE_RED_BUOY = 248u,
    REMOTE_RED_BUOY_AND_FORCE_FIELD = 250u,
    REMOTE_RED_BUOY_AND_GREEN_BUOY = 252u,
    REMOTE_RED_BUOY_AND_GREEN_BUOY_AND_FORCE_FIELD = 254u,
    REMOTE_NONE = 255u,
    CHARGING_NOT_CHARGING = 0u,
    CHARGING_CHARGING_RECOVERY = 1u,
    CHARGING_CHARGING = 2u,
    CHARGING_TRICKLE_CHARGING = 3u,
    CHARGING_WAITING = 4u,
    CHARGING_CHARGING_ERROR = 5u,
  };


  typedef boost::shared_ptr< ::create_node::TurtlebotSensorState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::create_node::TurtlebotSensorState_<ContainerAllocator> const> ConstPtr;

}; // struct TurtlebotSensorState_

typedef ::create_node::TurtlebotSensorState_<std::allocator<void> > TurtlebotSensorState;

typedef boost::shared_ptr< ::create_node::TurtlebotSensorState > TurtlebotSensorStatePtr;
typedef boost::shared_ptr< ::create_node::TurtlebotSensorState const> TurtlebotSensorStateConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::create_node::TurtlebotSensorState_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::create_node::TurtlebotSensorState_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace create_node

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'create_node': ['/mathworks/home/pmurali/Documents/Working/matlab_msg_gen_ros1/glnxa64/src/create_node/msg'], 'std_msgs': ['/mathworks/devel/sbs/31/pmurali.Brobot.j1329247.2/matlab/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg', '/mathworks/devel/sbs/31/pmurali.Brobot.j1329247.2/matlab/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::create_node::TurtlebotSensorState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::create_node::TurtlebotSensorState_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::create_node::TurtlebotSensorState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::create_node::TurtlebotSensorState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::create_node::TurtlebotSensorState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::create_node::TurtlebotSensorState_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::create_node::TurtlebotSensorState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d8f8ec7fa031fc9cc88e8319cd08a785";
  }

  static const char* value(const ::create_node::TurtlebotSensorState_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd8f8ec7fa031fc9cULL;
  static const uint64_t static_value2 = 0xc88e8319cd08a785ULL;
};

template<class ContainerAllocator>
struct DataType< ::create_node::TurtlebotSensorState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "create_node/TurtlebotSensorState";
  }

  static const char* value(const ::create_node::TurtlebotSensorState_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::create_node::TurtlebotSensorState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 OI_MODE_OFF = 0\n"
"uint8 OI_MODE_PASSIVE = 1\n"
"uint8 OI_MODE_SAFE = 2\n"
"uint8 OI_MODE_FULL = 3\n"
"\n"
"uint8 REMOTE_LEFT = 129\n"
"uint8 REMOTE_FORWARD = 130 \n"
"uint8 REMOTE_RIGHT = 131 \n"
"uint8 REMOTE_SPOT = 132 \n"
"uint8 REMOTE_MAX = 133 \n"
"uint8 REMOTE_SMALL = 134 \n"
"uint8 REMOTE_MEDIUM = 135 \n"
"uint8 REMOTE_LARGE = 136 \n"
"uint8 REMOTE_CLEAN = 136 \n"
"uint8 REMOTE_PAUSE = 137 \n"
"uint8 REMOTE_POWER = 138 \n"
"uint8 REMOTE_ARC_LEFT = 139 \n"
"uint8 REMOTE_ARC_RIGHT = 140 \n"
"uint8 REMOTE_DRIVE_STOP = 141 \n"
"# Scheduling remote\n"
"uint8 REMOTE_SEND_ALL = 142 \n"
"uint8 REMOTE_SEEK_DOCK = 143 \n"
"# Home base\n"
"uint8 REMOTE_RESERVED = 240 \n"
"uint8 REMOTE_FORCE_FIELD = 242 \n"
"uint8 REMOTE_GREEN_BUOY = 244 \n"
"uint8 REMOTE_GREEN_BUOY_AND_FORCE_FIELD = 246 \n"
"uint8 REMOTE_RED_BUOY = 248 \n"
"uint8 REMOTE_RED_BUOY_AND_FORCE_FIELD = 250 \n"
"uint8 REMOTE_RED_BUOY_AND_GREEN_BUOY = 252 \n"
"uint8 REMOTE_RED_BUOY_AND_GREEN_BUOY_AND_FORCE_FIELD = 254 \n"
"uint8 REMOTE_NONE = 255\n"
"\n"
"uint8 CHARGING_NOT_CHARGING = 0\n"
"uint8 CHARGING_CHARGING_RECOVERY = 1\n"
"uint8 CHARGING_CHARGING = 2\n"
"uint8 CHARGING_TRICKLE_CHARGING = 3\n"
"uint8 CHARGING_WAITING = 4 \n"
"uint8 CHARGING_CHARGING_ERROR = 5\n"
"\n"
"Header header\n"
"\n"
"uint8 bumps_wheeldrops\n"
"bool wall\n"
"bool cliff_left\n"
"bool cliff_front_left\n"
"bool cliff_front_right\n"
"bool cliff_right\n"
"bool virtual_wall\n"
"uint8 motor_overcurrents\n"
"uint8 dirt_detector_left  #roomba_only\n"
"uint8 dirt_detector_right #roomba_only\n"
"uint8 remote_opcode\n"
"uint8 buttons\n"
"float64 distance  # m\n"
"float64 angle #radians\n"
"uint8 charging_state\n"
"uint16 voltage  # mV\n"
"int16 current  # mA\n"
"int8 temperature  # C\n"
"uint16 charge  # mAh\n"
"uint16 capacity  # mAh\n"
"\n"
"uint16 wall_signal\n"
"uint16 cliff_left_signal\n"
"uint16 cliff_front_left_signal\n"
"uint16 cliff_front_right_signal\n"
"uint16 cliff_right_signal\n"
"uint8 user_digital_outputs\n"
"uint8 user_digital_inputs\n"
"uint16 user_analog_input\n"
"uint8 charging_sources_available\n"
"uint8 oi_mode\n"
"uint8 song_number\n"
"bool song_playing\n"
"\n"
"uint8 number_of_stream_packets\n"
"int32 requested_velocity  # m/s\n"
"int32 requested_radius  # m\n"
"int32 requested_right_velocity  # m/s\n"
"int32 requested_left_velocity  # m/s\n"
"\n"
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

  static const char* value(const ::create_node::TurtlebotSensorState_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::create_node::TurtlebotSensorState_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.bumps_wheeldrops);
      stream.next(m.wall);
      stream.next(m.cliff_left);
      stream.next(m.cliff_front_left);
      stream.next(m.cliff_front_right);
      stream.next(m.cliff_right);
      stream.next(m.virtual_wall);
      stream.next(m.motor_overcurrents);
      stream.next(m.dirt_detector_left);
      stream.next(m.dirt_detector_right);
      stream.next(m.remote_opcode);
      stream.next(m.buttons);
      stream.next(m.distance);
      stream.next(m.angle);
      stream.next(m.charging_state);
      stream.next(m.voltage);
      stream.next(m.current);
      stream.next(m.temperature);
      stream.next(m.charge);
      stream.next(m.capacity);
      stream.next(m.wall_signal);
      stream.next(m.cliff_left_signal);
      stream.next(m.cliff_front_left_signal);
      stream.next(m.cliff_front_right_signal);
      stream.next(m.cliff_right_signal);
      stream.next(m.user_digital_outputs);
      stream.next(m.user_digital_inputs);
      stream.next(m.user_analog_input);
      stream.next(m.charging_sources_available);
      stream.next(m.oi_mode);
      stream.next(m.song_number);
      stream.next(m.song_playing);
      stream.next(m.number_of_stream_packets);
      stream.next(m.requested_velocity);
      stream.next(m.requested_radius);
      stream.next(m.requested_right_velocity);
      stream.next(m.requested_left_velocity);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TurtlebotSensorState_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::create_node::TurtlebotSensorState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::create_node::TurtlebotSensorState_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "bumps_wheeldrops: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.bumps_wheeldrops);
    s << indent << "wall: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.wall);
    s << indent << "cliff_left: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.cliff_left);
    s << indent << "cliff_front_left: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.cliff_front_left);
    s << indent << "cliff_front_right: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.cliff_front_right);
    s << indent << "cliff_right: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.cliff_right);
    s << indent << "virtual_wall: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.virtual_wall);
    s << indent << "motor_overcurrents: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.motor_overcurrents);
    s << indent << "dirt_detector_left: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.dirt_detector_left);
    s << indent << "dirt_detector_right: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.dirt_detector_right);
    s << indent << "remote_opcode: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.remote_opcode);
    s << indent << "buttons: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.buttons);
    s << indent << "distance: ";
    Printer<double>::stream(s, indent + "  ", v.distance);
    s << indent << "angle: ";
    Printer<double>::stream(s, indent + "  ", v.angle);
    s << indent << "charging_state: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.charging_state);
    s << indent << "voltage: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.voltage);
    s << indent << "current: ";
    Printer<int16_t>::stream(s, indent + "  ", v.current);
    s << indent << "temperature: ";
    Printer<int8_t>::stream(s, indent + "  ", v.temperature);
    s << indent << "charge: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.charge);
    s << indent << "capacity: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.capacity);
    s << indent << "wall_signal: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.wall_signal);
    s << indent << "cliff_left_signal: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.cliff_left_signal);
    s << indent << "cliff_front_left_signal: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.cliff_front_left_signal);
    s << indent << "cliff_front_right_signal: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.cliff_front_right_signal);
    s << indent << "cliff_right_signal: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.cliff_right_signal);
    s << indent << "user_digital_outputs: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.user_digital_outputs);
    s << indent << "user_digital_inputs: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.user_digital_inputs);
    s << indent << "user_analog_input: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.user_analog_input);
    s << indent << "charging_sources_available: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.charging_sources_available);
    s << indent << "oi_mode: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.oi_mode);
    s << indent << "song_number: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.song_number);
    s << indent << "song_playing: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.song_playing);
    s << indent << "number_of_stream_packets: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.number_of_stream_packets);
    s << indent << "requested_velocity: ";
    Printer<int32_t>::stream(s, indent + "  ", v.requested_velocity);
    s << indent << "requested_radius: ";
    Printer<int32_t>::stream(s, indent + "  ", v.requested_radius);
    s << indent << "requested_right_velocity: ";
    Printer<int32_t>::stream(s, indent + "  ", v.requested_right_velocity);
    s << indent << "requested_left_velocity: ";
    Printer<int32_t>::stream(s, indent + "  ", v.requested_left_velocity);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CREATE_NODE_MESSAGE_TURTLEBOTSENSORSTATE_H
