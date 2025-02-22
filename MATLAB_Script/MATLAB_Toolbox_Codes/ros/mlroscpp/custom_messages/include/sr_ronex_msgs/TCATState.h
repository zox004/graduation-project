// Generated by gencpp from file sr_ronex_msgs/TCATState.msg
// DO NOT EDIT!


#ifndef SR_RONEX_MSGS_MESSAGE_TCATSTATE_H
#define SR_RONEX_MSGS_MESSAGE_TCATSTATE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <sr_ronex_msgs/ReceiverData.h>

namespace sr_ronex_msgs
{
template <class ContainerAllocator>
struct TCATState_
{
  typedef TCATState_<ContainerAllocator> Type;

  TCATState_()
    : header()
    , sequence_number(0)
    , received_data()  {
    }
  TCATState_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , sequence_number(0)
    , received_data()  {
  (void)_alloc;
      received_data.assign( ::sr_ronex_msgs::ReceiverData_<ContainerAllocator> (_alloc));
  }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint16_t _sequence_number_type;
  _sequence_number_type sequence_number;

   typedef boost::array< ::sr_ronex_msgs::ReceiverData_<ContainerAllocator> , 4>  _received_data_type;
  _received_data_type received_data;





  typedef boost::shared_ptr< ::sr_ronex_msgs::TCATState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::sr_ronex_msgs::TCATState_<ContainerAllocator> const> ConstPtr;

}; // struct TCATState_

typedef ::sr_ronex_msgs::TCATState_<std::allocator<void> > TCATState;

typedef boost::shared_ptr< ::sr_ronex_msgs::TCATState > TCATStatePtr;
typedef boost::shared_ptr< ::sr_ronex_msgs::TCATState const> TCATStateConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::sr_ronex_msgs::TCATState_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::sr_ronex_msgs::TCATState_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace sr_ronex_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'sr_ronex_msgs': ['/mathworks/home/pmurali/Documents/Working/matlab_msg_gen_ros1/glnxa64/src/sr_ronex_msgs/msg'], 'std_msgs': ['/mathworks/devel/sbs/31/pmurali.Brobot.j1329247.2/matlab/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg', '/mathworks/devel/sbs/31/pmurali.Brobot.j1329247.2/matlab/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::sr_ronex_msgs::TCATState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sr_ronex_msgs::TCATState_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sr_ronex_msgs::TCATState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sr_ronex_msgs::TCATState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sr_ronex_msgs::TCATState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sr_ronex_msgs::TCATState_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::sr_ronex_msgs::TCATState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "111c06a71da4f225240b922d7dd93b63";
  }

  static const char* value(const ::sr_ronex_msgs::TCATState_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x111c06a71da4f225ULL;
  static const uint64_t static_value2 = 0x240b922d7dd93b63ULL;
};

template<class ContainerAllocator>
struct DataType< ::sr_ronex_msgs::TCATState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sr_ronex_msgs/TCATState";
  }

  static const char* value(const ::sr_ronex_msgs::TCATState_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::sr_ronex_msgs::TCATState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"\n"
"#digital and analogue contain either 6 or 12 elements depending on whether\n"
"# a stacker board is attached to the RoNeX or not.\n"
"uint16 sequence_number\n"
"sr_ronex_msgs/ReceiverData[4] received_data\n"
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
"MSG: sr_ronex_msgs/ReceiverData\n"
"bool data_received\n"
"uint16[] reserved\n"
"sr_ronex_msgs/ImpulseSample[] impulse_response\n"
"uint16 first_sample_number\n"
"uint16[] payload\n"
"uint32 rx_frame_information\n"
"uint16 std_noise\n"
"uint32 flags\n"
"float32 FPI\n"
"float64 timestamp_ns\n"
"\n"
"================================================================================\n"
"MSG: sr_ronex_msgs/ImpulseSample\n"
"int16 real\n"
"int16 imaginary\n"
;
  }

  static const char* value(const ::sr_ronex_msgs::TCATState_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::sr_ronex_msgs::TCATState_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.sequence_number);
      stream.next(m.received_data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TCATState_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sr_ronex_msgs::TCATState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::sr_ronex_msgs::TCATState_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "sequence_number: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.sequence_number);
    s << indent << "received_data[]" << std::endl;
    for (size_t i = 0; i < v.received_data.size(); ++i)
    {
      s << indent << "  received_data[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::sr_ronex_msgs::ReceiverData_<ContainerAllocator> >::stream(s, indent + "    ", v.received_data[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // SR_RONEX_MSGS_MESSAGE_TCATSTATE_H
