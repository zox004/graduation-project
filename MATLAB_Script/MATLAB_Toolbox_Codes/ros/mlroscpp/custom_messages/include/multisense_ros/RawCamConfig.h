// Generated by gencpp from file multisense_ros/RawCamConfig.msg
// DO NOT EDIT!


#ifndef MULTISENSE_ROS_MESSAGE_RAWCAMCONFIG_H
#define MULTISENSE_ROS_MESSAGE_RAWCAMCONFIG_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace multisense_ros
{
template <class ContainerAllocator>
struct RawCamConfig_
{
  typedef RawCamConfig_<ContainerAllocator> Type;

  RawCamConfig_()
    : width(0)
    , height(0)
    , frames_per_second(0.0)
    , gain(0.0)
    , exposure_time(0)
    , fx(0.0)
    , fy(0.0)
    , cx(0.0)
    , cy(0.0)
    , tx(0.0)
    , ty(0.0)
    , tz(0.0)
    , roll(0.0)
    , pitch(0.0)
    , yaw(0.0)  {
    }
  RawCamConfig_(const ContainerAllocator& _alloc)
    : width(0)
    , height(0)
    , frames_per_second(0.0)
    , gain(0.0)
    , exposure_time(0)
    , fx(0.0)
    , fy(0.0)
    , cx(0.0)
    , cy(0.0)
    , tx(0.0)
    , ty(0.0)
    , tz(0.0)
    , roll(0.0)
    , pitch(0.0)
    , yaw(0.0)  {
  (void)_alloc;
    }



   typedef uint16_t _width_type;
  _width_type width;

   typedef uint16_t _height_type;
  _height_type height;

   typedef float _frames_per_second_type;
  _frames_per_second_type frames_per_second;

   typedef float _gain_type;
  _gain_type gain;

   typedef uint32_t _exposure_time_type;
  _exposure_time_type exposure_time;

   typedef float _fx_type;
  _fx_type fx;

   typedef float _fy_type;
  _fy_type fy;

   typedef float _cx_type;
  _cx_type cx;

   typedef float _cy_type;
  _cy_type cy;

   typedef float _tx_type;
  _tx_type tx;

   typedef float _ty_type;
  _ty_type ty;

   typedef float _tz_type;
  _tz_type tz;

   typedef float _roll_type;
  _roll_type roll;

   typedef float _pitch_type;
  _pitch_type pitch;

   typedef float _yaw_type;
  _yaw_type yaw;





  typedef boost::shared_ptr< ::multisense_ros::RawCamConfig_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::multisense_ros::RawCamConfig_<ContainerAllocator> const> ConstPtr;

}; // struct RawCamConfig_

typedef ::multisense_ros::RawCamConfig_<std::allocator<void> > RawCamConfig;

typedef boost::shared_ptr< ::multisense_ros::RawCamConfig > RawCamConfigPtr;
typedef boost::shared_ptr< ::multisense_ros::RawCamConfig const> RawCamConfigConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::multisense_ros::RawCamConfig_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::multisense_ros::RawCamConfig_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::multisense_ros::RawCamConfig_<ContainerAllocator1> & lhs, const ::multisense_ros::RawCamConfig_<ContainerAllocator2> & rhs)
{
  return lhs.width == rhs.width &&
    lhs.height == rhs.height &&
    lhs.frames_per_second == rhs.frames_per_second &&
    lhs.gain == rhs.gain &&
    lhs.exposure_time == rhs.exposure_time &&
    lhs.fx == rhs.fx &&
    lhs.fy == rhs.fy &&
    lhs.cx == rhs.cx &&
    lhs.cy == rhs.cy &&
    lhs.tx == rhs.tx &&
    lhs.ty == rhs.ty &&
    lhs.tz == rhs.tz &&
    lhs.roll == rhs.roll &&
    lhs.pitch == rhs.pitch &&
    lhs.yaw == rhs.yaw;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::multisense_ros::RawCamConfig_<ContainerAllocator1> & lhs, const ::multisense_ros::RawCamConfig_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace multisense_ros

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::multisense_ros::RawCamConfig_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::multisense_ros::RawCamConfig_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::multisense_ros::RawCamConfig_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::multisense_ros::RawCamConfig_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::multisense_ros::RawCamConfig_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::multisense_ros::RawCamConfig_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::multisense_ros::RawCamConfig_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cfc6caf0d17e5d50531b927f32fd6a90";
  }

  static const char* value(const ::multisense_ros::RawCamConfig_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xcfc6caf0d17e5d50ULL;
  static const uint64_t static_value2 = 0x531b927f32fd6a90ULL;
};

template<class ContainerAllocator>
struct DataType< ::multisense_ros::RawCamConfig_<ContainerAllocator> >
{
  static const char* value()
  {
    return "multisense_ros/RawCamConfig";
  }

  static const char* value(const ::multisense_ros::RawCamConfig_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::multisense_ros::RawCamConfig_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint16  width\n"
"uint16  height\n"
"float32 frames_per_second\n"
"float32 gain\n"
"uint32  exposure_time\n"
"float32 fx\n"
"float32 fy\n"
"float32 cx\n"
"float32 cy\n"
"float32 tx\n"
"float32 ty\n"
"float32 tz\n"
"float32 roll\n"
"float32 pitch\n"
"float32 yaw\n"
;
  }

  static const char* value(const ::multisense_ros::RawCamConfig_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::multisense_ros::RawCamConfig_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.width);
      stream.next(m.height);
      stream.next(m.frames_per_second);
      stream.next(m.gain);
      stream.next(m.exposure_time);
      stream.next(m.fx);
      stream.next(m.fy);
      stream.next(m.cx);
      stream.next(m.cy);
      stream.next(m.tx);
      stream.next(m.ty);
      stream.next(m.tz);
      stream.next(m.roll);
      stream.next(m.pitch);
      stream.next(m.yaw);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RawCamConfig_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::multisense_ros::RawCamConfig_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::multisense_ros::RawCamConfig_<ContainerAllocator>& v)
  {
    s << indent << "width: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.width);
    s << indent << "height: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.height);
    s << indent << "frames_per_second: ";
    Printer<float>::stream(s, indent + "  ", v.frames_per_second);
    s << indent << "gain: ";
    Printer<float>::stream(s, indent + "  ", v.gain);
    s << indent << "exposure_time: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.exposure_time);
    s << indent << "fx: ";
    Printer<float>::stream(s, indent + "  ", v.fx);
    s << indent << "fy: ";
    Printer<float>::stream(s, indent + "  ", v.fy);
    s << indent << "cx: ";
    Printer<float>::stream(s, indent + "  ", v.cx);
    s << indent << "cy: ";
    Printer<float>::stream(s, indent + "  ", v.cy);
    s << indent << "tx: ";
    Printer<float>::stream(s, indent + "  ", v.tx);
    s << indent << "ty: ";
    Printer<float>::stream(s, indent + "  ", v.ty);
    s << indent << "tz: ";
    Printer<float>::stream(s, indent + "  ", v.tz);
    s << indent << "roll: ";
    Printer<float>::stream(s, indent + "  ", v.roll);
    s << indent << "pitch: ";
    Printer<float>::stream(s, indent + "  ", v.pitch);
    s << indent << "yaw: ";
    Printer<float>::stream(s, indent + "  ", v.yaw);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MULTISENSE_ROS_MESSAGE_RAWCAMCONFIG_H
