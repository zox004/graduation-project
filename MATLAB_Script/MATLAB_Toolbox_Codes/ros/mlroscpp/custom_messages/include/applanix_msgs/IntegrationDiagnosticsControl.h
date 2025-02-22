// Generated by gencpp from file applanix_msgs/IntegrationDiagnosticsControl.msg
// DO NOT EDIT!


#ifndef APPLANIX_MSGS_MESSAGE_INTEGRATIONDIAGNOSTICSCONTROL_H
#define APPLANIX_MSGS_MESSAGE_INTEGRATIONDIAGNOSTICSCONTROL_H


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
struct IntegrationDiagnosticsControl_
{
  typedef IntegrationDiagnosticsControl_<ContainerAllocator> Type;

  IntegrationDiagnosticsControl_()
    : transaction(0)
    , output_data(0)
    , user_roll(0.0)
    , user_pitch(0.0)
    , user_heading(0.0)
    , reserved()  {
      reserved.assign(0);
  }
  IntegrationDiagnosticsControl_(const ContainerAllocator& _alloc)
    : transaction(0)
    , output_data(0)
    , user_roll(0.0)
    , user_pitch(0.0)
    , user_heading(0.0)
    , reserved()  {
  (void)_alloc;
      reserved.assign(0);
  }



   typedef uint16_t _transaction_type;
  _transaction_type transaction;

   typedef uint8_t _output_data_type;
  _output_data_type output_data;

   typedef float _user_roll_type;
  _user_roll_type user_roll;

   typedef float _user_pitch_type;
  _user_pitch_type user_pitch;

   typedef float _user_heading_type;
  _user_heading_type user_heading;

   typedef boost::array<uint8_t, 4>  _reserved_type;
  _reserved_type reserved;



  enum {
    OUTPUT_IMU_FRAME = 0u,
    OUTPUT_USER_PARAM = 1u,
  };


  typedef boost::shared_ptr< ::applanix_msgs::IntegrationDiagnosticsControl_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::applanix_msgs::IntegrationDiagnosticsControl_<ContainerAllocator> const> ConstPtr;

}; // struct IntegrationDiagnosticsControl_

typedef ::applanix_msgs::IntegrationDiagnosticsControl_<std::allocator<void> > IntegrationDiagnosticsControl;

typedef boost::shared_ptr< ::applanix_msgs::IntegrationDiagnosticsControl > IntegrationDiagnosticsControlPtr;
typedef boost::shared_ptr< ::applanix_msgs::IntegrationDiagnosticsControl const> IntegrationDiagnosticsControlConstPtr;

// constants requiring out of line definition

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::applanix_msgs::IntegrationDiagnosticsControl_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::applanix_msgs::IntegrationDiagnosticsControl_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::applanix_msgs::IntegrationDiagnosticsControl_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::applanix_msgs::IntegrationDiagnosticsControl_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::applanix_msgs::IntegrationDiagnosticsControl_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::applanix_msgs::IntegrationDiagnosticsControl_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::applanix_msgs::IntegrationDiagnosticsControl_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::applanix_msgs::IntegrationDiagnosticsControl_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::applanix_msgs::IntegrationDiagnosticsControl_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c9348736c3ef1fae7afe188eacd6d167";
  }

  static const char* value(const ::applanix_msgs::IntegrationDiagnosticsControl_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc9348736c3ef1faeULL;
  static const uint64_t static_value2 = 0x7afe188eacd6d167ULL;
};

template<class ContainerAllocator>
struct DataType< ::applanix_msgs::IntegrationDiagnosticsControl_<ContainerAllocator> >
{
  static const char* value()
  {
    return "applanix_msgs/IntegrationDiagnosticsControl";
  }

  static const char* value(const ::applanix_msgs::IntegrationDiagnosticsControl_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::applanix_msgs::IntegrationDiagnosticsControl_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Msg 92\n"
"uint16 transaction\n"
"\n"
"uint8 OUTPUT_IMU_FRAME=0\n"
"uint8 OUTPUT_USER_PARAM=1\n"
"uint8 output_data\n"
"\n"
"float32 user_roll\n"
"float32 user_pitch\n"
"float32 user_heading\n"
"uint8[4] reserved\n"
;
  }

  static const char* value(const ::applanix_msgs::IntegrationDiagnosticsControl_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::applanix_msgs::IntegrationDiagnosticsControl_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.transaction);
      stream.next(m.output_data);
      stream.next(m.user_roll);
      stream.next(m.user_pitch);
      stream.next(m.user_heading);
      stream.next(m.reserved);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct IntegrationDiagnosticsControl_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::applanix_msgs::IntegrationDiagnosticsControl_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::applanix_msgs::IntegrationDiagnosticsControl_<ContainerAllocator>& v)
  {
    s << indent << "transaction: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.transaction);
    s << indent << "output_data: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.output_data);
    s << indent << "user_roll: ";
    Printer<float>::stream(s, indent + "  ", v.user_roll);
    s << indent << "user_pitch: ";
    Printer<float>::stream(s, indent + "  ", v.user_pitch);
    s << indent << "user_heading: ";
    Printer<float>::stream(s, indent + "  ", v.user_heading);
    s << indent << "reserved[]" << std::endl;
    for (size_t i = 0; i < v.reserved.size(); ++i)
    {
      s << indent << "  reserved[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.reserved[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // APPLANIX_MSGS_MESSAGE_INTEGRATIONDIAGNOSTICSCONTROL_H
