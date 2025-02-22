// Generated by gencpp from file fkie_multimaster_msgs/ROSMaster.msg
// DO NOT EDIT!


#ifndef FKIE_MULTIMASTER_MSGS_MESSAGE_ROSMASTER_H
#define FKIE_MULTIMASTER_MSGS_MESSAGE_ROSMASTER_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace fkie_multimaster_msgs
{
template <class ContainerAllocator>
struct ROSMaster_
{
  typedef ROSMaster_<ContainerAllocator> Type;

  ROSMaster_()
    : name()
    , uri()
    , last_change()
    , last_change_local()
    , online(false)
    , discoverer_name()
    , monitoruri()  {
    }
  ROSMaster_(const ContainerAllocator& _alloc)
    : name(_alloc)
    , uri(_alloc)
    , last_change()
    , last_change_local()
    , online(false)
    , discoverer_name(_alloc)
    , monitoruri(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _name_type;
  _name_type name;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _uri_type;
  _uri_type uri;

   typedef ros::Time _last_change_type;
  _last_change_type last_change;

   typedef ros::Time _last_change_local_type;
  _last_change_local_type last_change_local;

   typedef uint8_t _online_type;
  _online_type online;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _discoverer_name_type;
  _discoverer_name_type discoverer_name;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _monitoruri_type;
  _monitoruri_type monitoruri;





  typedef boost::shared_ptr< ::fkie_multimaster_msgs::ROSMaster_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::fkie_multimaster_msgs::ROSMaster_<ContainerAllocator> const> ConstPtr;

}; // struct ROSMaster_

typedef ::fkie_multimaster_msgs::ROSMaster_<std::allocator<void> > ROSMaster;

typedef boost::shared_ptr< ::fkie_multimaster_msgs::ROSMaster > ROSMasterPtr;
typedef boost::shared_ptr< ::fkie_multimaster_msgs::ROSMaster const> ROSMasterConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::fkie_multimaster_msgs::ROSMaster_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::fkie_multimaster_msgs::ROSMaster_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::fkie_multimaster_msgs::ROSMaster_<ContainerAllocator1> & lhs, const ::fkie_multimaster_msgs::ROSMaster_<ContainerAllocator2> & rhs)
{
  return lhs.name == rhs.name &&
    lhs.uri == rhs.uri &&
    lhs.last_change == rhs.last_change &&
    lhs.last_change_local == rhs.last_change_local &&
    lhs.online == rhs.online &&
    lhs.discoverer_name == rhs.discoverer_name &&
    lhs.monitoruri == rhs.monitoruri;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::fkie_multimaster_msgs::ROSMaster_<ContainerAllocator1> & lhs, const ::fkie_multimaster_msgs::ROSMaster_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace fkie_multimaster_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::fkie_multimaster_msgs::ROSMaster_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::fkie_multimaster_msgs::ROSMaster_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::fkie_multimaster_msgs::ROSMaster_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::fkie_multimaster_msgs::ROSMaster_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::fkie_multimaster_msgs::ROSMaster_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::fkie_multimaster_msgs::ROSMaster_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::fkie_multimaster_msgs::ROSMaster_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0789d85e02ce55a78b1df2459150a275";
  }

  static const char* value(const ::fkie_multimaster_msgs::ROSMaster_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0789d85e02ce55a7ULL;
  static const uint64_t static_value2 = 0x8b1df2459150a275ULL;
};

template<class ContainerAllocator>
struct DataType< ::fkie_multimaster_msgs::ROSMaster_<ContainerAllocator> >
{
  static const char* value()
  {
    return "fkie_multimaster_msgs/ROSMaster";
  }

  static const char* value(const ::fkie_multimaster_msgs::ROSMaster_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::fkie_multimaster_msgs::ROSMaster_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string name\n"
"# ROS Master URI\n"
"string uri\n"
"# The timestamp of the state of the remoter ROS master\n"
"time last_change\n"
"# The timestamp of the state of the remoter ROS master, without the changes maked while a synchronization.\n"
"time last_change_local\n"
"bool online\n"
"string discoverer_name\n"
"string monitoruri\n"
;
  }

  static const char* value(const ::fkie_multimaster_msgs::ROSMaster_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::fkie_multimaster_msgs::ROSMaster_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.name);
      stream.next(m.uri);
      stream.next(m.last_change);
      stream.next(m.last_change_local);
      stream.next(m.online);
      stream.next(m.discoverer_name);
      stream.next(m.monitoruri);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ROSMaster_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::fkie_multimaster_msgs::ROSMaster_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::fkie_multimaster_msgs::ROSMaster_<ContainerAllocator>& v)
  {
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name);
    s << indent << "uri: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.uri);
    s << indent << "last_change: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.last_change);
    s << indent << "last_change_local: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.last_change_local);
    s << indent << "online: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.online);
    s << indent << "discoverer_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.discoverer_name);
    s << indent << "monitoruri: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.monitoruri);
  }
};

} // namespace message_operations
} // namespace ros

#endif // FKIE_MULTIMASTER_MSGS_MESSAGE_ROSMASTER_H
