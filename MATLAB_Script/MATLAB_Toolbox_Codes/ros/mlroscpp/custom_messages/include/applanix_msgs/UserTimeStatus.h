// Generated by gencpp from file applanix_msgs/UserTimeStatus.msg
// DO NOT EDIT!


#ifndef APPLANIX_MSGS_MESSAGE_USERTIMESTATUS_H
#define APPLANIX_MSGS_MESSAGE_USERTIMESTATUS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <applanix_msgs/TimeDistance.h>

namespace applanix_msgs
{
template <class ContainerAllocator>
struct UserTimeStatus_
{
  typedef UserTimeStatus_<ContainerAllocator> Type;

  UserTimeStatus_()
    : td()
    , time_synch_rejections(0)
    , user_time_resynchs(0)
    , user_time_valid(0)
    , time_synch_message_received(0)  {
    }
  UserTimeStatus_(const ContainerAllocator& _alloc)
    : td(_alloc)
    , time_synch_rejections(0)
    , user_time_resynchs(0)
    , user_time_valid(0)
    , time_synch_message_received(0)  {
  (void)_alloc;
    }



   typedef  ::applanix_msgs::TimeDistance_<ContainerAllocator>  _td_type;
  _td_type td;

   typedef uint32_t _time_synch_rejections_type;
  _time_synch_rejections_type time_synch_rejections;

   typedef uint32_t _user_time_resynchs_type;
  _user_time_resynchs_type user_time_resynchs;

   typedef uint8_t _user_time_valid_type;
  _user_time_valid_type user_time_valid;

   typedef uint8_t _time_synch_message_received_type;
  _time_synch_message_received_type time_synch_message_received;





  typedef boost::shared_ptr< ::applanix_msgs::UserTimeStatus_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::applanix_msgs::UserTimeStatus_<ContainerAllocator> const> ConstPtr;

}; // struct UserTimeStatus_

typedef ::applanix_msgs::UserTimeStatus_<std::allocator<void> > UserTimeStatus;

typedef boost::shared_ptr< ::applanix_msgs::UserTimeStatus > UserTimeStatusPtr;
typedef boost::shared_ptr< ::applanix_msgs::UserTimeStatus const> UserTimeStatusConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::applanix_msgs::UserTimeStatus_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::applanix_msgs::UserTimeStatus_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::applanix_msgs::UserTimeStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::applanix_msgs::UserTimeStatus_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::applanix_msgs::UserTimeStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::applanix_msgs::UserTimeStatus_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::applanix_msgs::UserTimeStatus_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::applanix_msgs::UserTimeStatus_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::applanix_msgs::UserTimeStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3d0128542d920da1a88ece6cf34151c4";
  }

  static const char* value(const ::applanix_msgs::UserTimeStatus_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3d0128542d920da1ULL;
  static const uint64_t static_value2 = 0xa88ece6cf34151c4ULL;
};

template<class ContainerAllocator>
struct DataType< ::applanix_msgs::UserTimeStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "applanix_msgs/UserTimeStatus";
  }

  static const char* value(const ::applanix_msgs::UserTimeStatus_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::applanix_msgs::UserTimeStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Group 17\n"
"TimeDistance td\n"
"\n"
"uint32 time_synch_rejections\n"
"uint32 user_time_resynchs\n"
"\n"
"uint8 user_time_valid\n"
"uint8 time_synch_message_received\n"
"\n"
"================================================================================\n"
"MSG: applanix_msgs/TimeDistance\n"
"float64 time1\n"
"float64 time2\n"
"float64 distance\n"
"uint8 time_types\n"
"uint8 distance_type\n"
;
  }

  static const char* value(const ::applanix_msgs::UserTimeStatus_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::applanix_msgs::UserTimeStatus_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.td);
      stream.next(m.time_synch_rejections);
      stream.next(m.user_time_resynchs);
      stream.next(m.user_time_valid);
      stream.next(m.time_synch_message_received);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct UserTimeStatus_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::applanix_msgs::UserTimeStatus_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::applanix_msgs::UserTimeStatus_<ContainerAllocator>& v)
  {
    s << indent << "td: ";
    s << std::endl;
    Printer< ::applanix_msgs::TimeDistance_<ContainerAllocator> >::stream(s, indent + "  ", v.td);
    s << indent << "time_synch_rejections: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.time_synch_rejections);
    s << indent << "user_time_resynchs: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.user_time_resynchs);
    s << indent << "user_time_valid: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.user_time_valid);
    s << indent << "time_synch_message_received: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.time_synch_message_received);
  }
};

} // namespace message_operations
} // namespace ros

#endif // APPLANIX_MSGS_MESSAGE_USERTIMESTATUS_H
