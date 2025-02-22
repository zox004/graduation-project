// Generated by gencpp from file wifi_ddwrt/SiteSurvey.msg
// DO NOT EDIT!


#ifndef WIFI_DDWRT_MESSAGE_SITESURVEY_H
#define WIFI_DDWRT_MESSAGE_SITESURVEY_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <wifi_ddwrt/Network.h>

namespace wifi_ddwrt
{
template <class ContainerAllocator>
struct SiteSurvey_
{
  typedef SiteSurvey_<ContainerAllocator> Type;

  SiteSurvey_()
    : header()
    , networks()  {
    }
  SiteSurvey_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , networks(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::wifi_ddwrt::Network_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::wifi_ddwrt::Network_<ContainerAllocator> >::other >  _networks_type;
  _networks_type networks;





  typedef boost::shared_ptr< ::wifi_ddwrt::SiteSurvey_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::wifi_ddwrt::SiteSurvey_<ContainerAllocator> const> ConstPtr;

}; // struct SiteSurvey_

typedef ::wifi_ddwrt::SiteSurvey_<std::allocator<void> > SiteSurvey;

typedef boost::shared_ptr< ::wifi_ddwrt::SiteSurvey > SiteSurveyPtr;
typedef boost::shared_ptr< ::wifi_ddwrt::SiteSurvey const> SiteSurveyConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::wifi_ddwrt::SiteSurvey_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::wifi_ddwrt::SiteSurvey_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace wifi_ddwrt

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/mathworks/devel/sbs/31/pmurali.Brobot.j1329247.2/matlab/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg', '/mathworks/devel/sbs/31/pmurali.Brobot.j1329247.2/matlab/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg'], 'wifi_ddwrt': ['/mathworks/home/pmurali/Documents/Working/matlab_msg_gen_ros1/glnxa64/src/wifi_ddwrt/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::wifi_ddwrt::SiteSurvey_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::wifi_ddwrt::SiteSurvey_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::wifi_ddwrt::SiteSurvey_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::wifi_ddwrt::SiteSurvey_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::wifi_ddwrt::SiteSurvey_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::wifi_ddwrt::SiteSurvey_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::wifi_ddwrt::SiteSurvey_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f1063b16bb121ef190ae5edfe09d94ec";
  }

  static const char* value(const ::wifi_ddwrt::SiteSurvey_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf1063b16bb121ef1ULL;
  static const uint64_t static_value2 = 0x90ae5edfe09d94ecULL;
};

template<class ContainerAllocator>
struct DataType< ::wifi_ddwrt::SiteSurvey_<ContainerAllocator> >
{
  static const char* value()
  {
    return "wifi_ddwrt/SiteSurvey";
  }

  static const char* value(const ::wifi_ddwrt::SiteSurvey_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::wifi_ddwrt::SiteSurvey_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"Network[] networks\n"
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
"MSG: wifi_ddwrt/Network\n"
"string macattr\n"
"string essid\n"
"int32 channel\n"
"int32 rssi\n"
"int32 noise\n"
"int32 beacon\n"
;
  }

  static const char* value(const ::wifi_ddwrt::SiteSurvey_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::wifi_ddwrt::SiteSurvey_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.networks);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SiteSurvey_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::wifi_ddwrt::SiteSurvey_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::wifi_ddwrt::SiteSurvey_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "networks[]" << std::endl;
    for (size_t i = 0; i < v.networks.size(); ++i)
    {
      s << indent << "  networks[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::wifi_ddwrt::Network_<ContainerAllocator> >::stream(s, indent + "    ", v.networks[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // WIFI_DDWRT_MESSAGE_SITESURVEY_H
