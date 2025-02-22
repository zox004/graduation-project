// Generated by gencpp from file sr_edc_ethercat_drivers/ActuatorInfo.msg
// DO NOT EDIT!


#ifndef SR_EDC_ETHERCAT_DRIVERS_MESSAGE_ACTUATORINFO_H
#define SR_EDC_ETHERCAT_DRIVERS_MESSAGE_ACTUATORINFO_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace sr_edc_ethercat_drivers
{
template <class ContainerAllocator>
struct ActuatorInfo_
{
  typedef ActuatorInfo_<ContainerAllocator> Type;

  ActuatorInfo_()
    : name()
    , slow_motor_current_limit(0.0)
    , quick_motor_current_limit(0.0)
    , duty_limit(0.0)
    , max_duty(0.0)  {
    }
  ActuatorInfo_(const ContainerAllocator& _alloc)
    : name(_alloc)
    , slow_motor_current_limit(0.0)
    , quick_motor_current_limit(0.0)
    , duty_limit(0.0)
    , max_duty(0.0)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _name_type;
  _name_type name;

   typedef double _slow_motor_current_limit_type;
  _slow_motor_current_limit_type slow_motor_current_limit;

   typedef double _quick_motor_current_limit_type;
  _quick_motor_current_limit_type quick_motor_current_limit;

   typedef double _duty_limit_type;
  _duty_limit_type duty_limit;

   typedef double _max_duty_type;
  _max_duty_type max_duty;





  typedef boost::shared_ptr< ::sr_edc_ethercat_drivers::ActuatorInfo_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::sr_edc_ethercat_drivers::ActuatorInfo_<ContainerAllocator> const> ConstPtr;

}; // struct ActuatorInfo_

typedef ::sr_edc_ethercat_drivers::ActuatorInfo_<std::allocator<void> > ActuatorInfo;

typedef boost::shared_ptr< ::sr_edc_ethercat_drivers::ActuatorInfo > ActuatorInfoPtr;
typedef boost::shared_ptr< ::sr_edc_ethercat_drivers::ActuatorInfo const> ActuatorInfoConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::sr_edc_ethercat_drivers::ActuatorInfo_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::sr_edc_ethercat_drivers::ActuatorInfo_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace sr_edc_ethercat_drivers

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/mathworks/devel/sbs/31/pmurali.Brobot.j1329247.2/matlab/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg', '/mathworks/devel/sbs/31/pmurali.Brobot.j1329247.2/matlab/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg'], 'sr_edc_ethercat_drivers': ['/mathworks/home/pmurali/Documents/Working/matlab_msg_gen_ros1/glnxa64/src/sr_edc_ethercat_drivers/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::sr_edc_ethercat_drivers::ActuatorInfo_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sr_edc_ethercat_drivers::ActuatorInfo_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sr_edc_ethercat_drivers::ActuatorInfo_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sr_edc_ethercat_drivers::ActuatorInfo_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sr_edc_ethercat_drivers::ActuatorInfo_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sr_edc_ethercat_drivers::ActuatorInfo_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::sr_edc_ethercat_drivers::ActuatorInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b69309b2980b8b35e7e2b52bad59330a";
  }

  static const char* value(const ::sr_edc_ethercat_drivers::ActuatorInfo_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb69309b2980b8b35ULL;
  static const uint64_t static_value2 = 0xe7e2b52bad59330aULL;
};

template<class ContainerAllocator>
struct DataType< ::sr_edc_ethercat_drivers::ActuatorInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sr_edc_ethercat_drivers/ActuatorInfo";
  }

  static const char* value(const ::sr_edc_ethercat_drivers::ActuatorInfo_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::sr_edc_ethercat_drivers::ActuatorInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string name\n"
"float64 slow_motor_current_limit\n"
"float64 quick_motor_current_limit\n"
"float64 duty_limit\n"
"float64 max_duty\n"
;
  }

  static const char* value(const ::sr_edc_ethercat_drivers::ActuatorInfo_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::sr_edc_ethercat_drivers::ActuatorInfo_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.name);
      stream.next(m.slow_motor_current_limit);
      stream.next(m.quick_motor_current_limit);
      stream.next(m.duty_limit);
      stream.next(m.max_duty);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ActuatorInfo_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sr_edc_ethercat_drivers::ActuatorInfo_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::sr_edc_ethercat_drivers::ActuatorInfo_<ContainerAllocator>& v)
  {
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name);
    s << indent << "slow_motor_current_limit: ";
    Printer<double>::stream(s, indent + "  ", v.slow_motor_current_limit);
    s << indent << "quick_motor_current_limit: ";
    Printer<double>::stream(s, indent + "  ", v.quick_motor_current_limit);
    s << indent << "duty_limit: ";
    Printer<double>::stream(s, indent + "  ", v.duty_limit);
    s << indent << "max_duty: ";
    Printer<double>::stream(s, indent + "  ", v.max_duty);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SR_EDC_ETHERCAT_DRIVERS_MESSAGE_ACTUATORINFO_H
