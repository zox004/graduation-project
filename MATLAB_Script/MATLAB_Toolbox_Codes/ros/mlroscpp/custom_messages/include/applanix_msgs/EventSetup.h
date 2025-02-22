// Generated by gencpp from file applanix_msgs/EventSetup.msg
// DO NOT EDIT!


#ifndef APPLANIX_MSGS_MESSAGE_EVENTSETUP_H
#define APPLANIX_MSGS_MESSAGE_EVENTSETUP_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace applanix_msgs
{
template <class ContainerAllocator>
struct EventSetup_
{
  typedef EventSetup_<ContainerAllocator> Type;

  EventSetup_()
    : transaction(0)
    , event_1_trigger(0)
    , event_2_trigger(0)
    , event_3_trigger(0)
    , event_4_trigger(0)
    , event_5_trigger(0)
    , event_6_trigger(0)
    , event_1_guard_time(0)
    , event_2_guard_time(0)
    , event_3_guard_time(0)
    , event_4_guard_time(0)
    , event_5_guard_time(0)
    , event_6_guard_time(0)
    , pps_out_polarity(0)  {
    }
  EventSetup_(const ContainerAllocator& _alloc)
    : transaction(0)
    , event_1_trigger(0)
    , event_2_trigger(0)
    , event_3_trigger(0)
    , event_4_trigger(0)
    , event_5_trigger(0)
    , event_6_trigger(0)
    , event_1_guard_time(0)
    , event_2_guard_time(0)
    , event_3_guard_time(0)
    , event_4_guard_time(0)
    , event_5_guard_time(0)
    , event_6_guard_time(0)
    , pps_out_polarity(0)  {
  (void)_alloc;
    }



   typedef uint16_t _transaction_type;
  _transaction_type transaction;

   typedef uint8_t _event_1_trigger_type;
  _event_1_trigger_type event_1_trigger;

   typedef uint8_t _event_2_trigger_type;
  _event_2_trigger_type event_2_trigger;

   typedef uint8_t _event_3_trigger_type;
  _event_3_trigger_type event_3_trigger;

   typedef uint8_t _event_4_trigger_type;
  _event_4_trigger_type event_4_trigger;

   typedef uint8_t _event_5_trigger_type;
  _event_5_trigger_type event_5_trigger;

   typedef uint8_t _event_6_trigger_type;
  _event_6_trigger_type event_6_trigger;

   typedef uint16_t _event_1_guard_time_type;
  _event_1_guard_time_type event_1_guard_time;

   typedef uint16_t _event_2_guard_time_type;
  _event_2_guard_time_type event_2_guard_time;

   typedef uint16_t _event_3_guard_time_type;
  _event_3_guard_time_type event_3_guard_time;

   typedef uint16_t _event_4_guard_time_type;
  _event_4_guard_time_type event_4_guard_time;

   typedef uint16_t _event_5_guard_time_type;
  _event_5_guard_time_type event_5_guard_time;

   typedef uint16_t _event_6_guard_time_type;
  _event_6_guard_time_type event_6_guard_time;

   typedef uint8_t _pps_out_polarity_type;
  _pps_out_polarity_type pps_out_polarity;



  enum {
    TRIGGER_POSITIVE_EDGE = 0u,
    TRIGGER_NEGATIVE_EDGE = 1u,
    POLARITY_POSITIVE_PULSE = 0u,
    POLARITY_NEGATIVE_PULSE = 1u,
    POLARITY_PASS_THROUGH = 2u,
  };


  typedef boost::shared_ptr< ::applanix_msgs::EventSetup_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::applanix_msgs::EventSetup_<ContainerAllocator> const> ConstPtr;

}; // struct EventSetup_

typedef ::applanix_msgs::EventSetup_<std::allocator<void> > EventSetup;

typedef boost::shared_ptr< ::applanix_msgs::EventSetup > EventSetupPtr;
typedef boost::shared_ptr< ::applanix_msgs::EventSetup const> EventSetupConstPtr;

// constants requiring out of line definition

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::applanix_msgs::EventSetup_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::applanix_msgs::EventSetup_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace applanix_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/mathworks/home/pmurali/Documents/Working/matlab_msg_gen_ros1/glnxa64/src/geometry_msgs/msg'], 'std_msgs': ['/mathworks/devel/sbs/31/pmurali.Brobot.j1329247.2/matlab/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg'], 'applanix_msgs': ['/mathworks/home/pmurali/Documents/Working/matlab_msg_gen_ros1/glnxa64/src/applanix_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::applanix_msgs::EventSetup_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::applanix_msgs::EventSetup_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::applanix_msgs::EventSetup_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::applanix_msgs::EventSetup_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::applanix_msgs::EventSetup_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::applanix_msgs::EventSetup_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::applanix_msgs::EventSetup_<ContainerAllocator> >
{
  static const char* value()
  {
    return "74cd1b437edb1231c0f1f35556a051a7";
  }

  static const char* value(const ::applanix_msgs::EventSetup_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x74cd1b437edb1231ULL;
  static const uint64_t static_value2 = 0xc0f1f35556a051a7ULL;
};

template<class ContainerAllocator>
struct DataType< ::applanix_msgs::EventSetup_<ContainerAllocator> >
{
  static const char* value()
  {
    return "applanix_msgs/EventSetup";
  }

  static const char* value(const ::applanix_msgs::EventSetup_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::applanix_msgs::EventSetup_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Msg 33\n"
"uint16 transaction\n"
"\n"
"uint8 TRIGGER_POSITIVE_EDGE=0\n"
"uint8 TRIGGER_NEGATIVE_EDGE=1\n"
"uint8 event_1_trigger\n"
"uint8 event_2_trigger\n"
"uint8 event_3_trigger\n"
"uint8 event_4_trigger\n"
"uint8 event_5_trigger\n"
"uint8 event_6_trigger\n"
"\n"
"uint16 event_1_guard_time\n"
"uint16 event_2_guard_time\n"
"uint16 event_3_guard_time\n"
"uint16 event_4_guard_time\n"
"uint16 event_5_guard_time\n"
"uint16 event_6_guard_time\n"
"\n"
"uint8 POLARITY_POSITIVE_PULSE=0\n"
"uint8 POLARITY_NEGATIVE_PULSE=1\n"
"uint8 POLARITY_PASS_THROUGH=2\n"
"uint8 pps_out_polarity\n"
;
  }

  static const char* value(const ::applanix_msgs::EventSetup_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::applanix_msgs::EventSetup_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.transaction);
      stream.next(m.event_1_trigger);
      stream.next(m.event_2_trigger);
      stream.next(m.event_3_trigger);
      stream.next(m.event_4_trigger);
      stream.next(m.event_5_trigger);
      stream.next(m.event_6_trigger);
      stream.next(m.event_1_guard_time);
      stream.next(m.event_2_guard_time);
      stream.next(m.event_3_guard_time);
      stream.next(m.event_4_guard_time);
      stream.next(m.event_5_guard_time);
      stream.next(m.event_6_guard_time);
      stream.next(m.pps_out_polarity);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct EventSetup_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::applanix_msgs::EventSetup_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::applanix_msgs::EventSetup_<ContainerAllocator>& v)
  {
    s << indent << "transaction: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.transaction);
    s << indent << "event_1_trigger: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.event_1_trigger);
    s << indent << "event_2_trigger: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.event_2_trigger);
    s << indent << "event_3_trigger: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.event_3_trigger);
    s << indent << "event_4_trigger: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.event_4_trigger);
    s << indent << "event_5_trigger: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.event_5_trigger);
    s << indent << "event_6_trigger: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.event_6_trigger);
    s << indent << "event_1_guard_time: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.event_1_guard_time);
    s << indent << "event_2_guard_time: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.event_2_guard_time);
    s << indent << "event_3_guard_time: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.event_3_guard_time);
    s << indent << "event_4_guard_time: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.event_4_guard_time);
    s << indent << "event_5_guard_time: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.event_5_guard_time);
    s << indent << "event_6_guard_time: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.event_6_guard_time);
    s << indent << "pps_out_polarity: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.pps_out_polarity);
  }
};

} // namespace message_operations
} // namespace ros

#endif // APPLANIX_MSGS_MESSAGE_EVENTSETUP_H
