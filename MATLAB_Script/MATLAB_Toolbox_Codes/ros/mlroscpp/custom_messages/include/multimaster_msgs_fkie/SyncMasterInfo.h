// Generated by gencpp from file multimaster_msgs_fkie/SyncMasterInfo.msg
// DO NOT EDIT!


#ifndef MULTIMASTER_MSGS_FKIE_MESSAGE_SYNCMASTERINFO_H
#define MULTIMASTER_MSGS_FKIE_MESSAGE_SYNCMASTERINFO_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <multimaster_msgs_fkie/SyncTopicInfo.h>
#include <multimaster_msgs_fkie/SyncTopicInfo.h>
#include <multimaster_msgs_fkie/SyncServiceInfo.h>

namespace multimaster_msgs_fkie
{
template <class ContainerAllocator>
struct SyncMasterInfo_
{
  typedef SyncMasterInfo_<ContainerAllocator> Type;

  SyncMasterInfo_()
    : masteruri()
    , nodes()
    , publisher()
    , subscriber()
    , services()  {
    }
  SyncMasterInfo_(const ContainerAllocator& _alloc)
    : masteruri(_alloc)
    , nodes(_alloc)
    , publisher(_alloc)
    , subscriber(_alloc)
    , services(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _masteruri_type;
  _masteruri_type masteruri;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _nodes_type;
  _nodes_type nodes;

   typedef std::vector< ::multimaster_msgs_fkie::SyncTopicInfo_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::multimaster_msgs_fkie::SyncTopicInfo_<ContainerAllocator> >::other >  _publisher_type;
  _publisher_type publisher;

   typedef std::vector< ::multimaster_msgs_fkie::SyncTopicInfo_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::multimaster_msgs_fkie::SyncTopicInfo_<ContainerAllocator> >::other >  _subscriber_type;
  _subscriber_type subscriber;

   typedef std::vector< ::multimaster_msgs_fkie::SyncServiceInfo_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::multimaster_msgs_fkie::SyncServiceInfo_<ContainerAllocator> >::other >  _services_type;
  _services_type services;





  typedef boost::shared_ptr< ::multimaster_msgs_fkie::SyncMasterInfo_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::multimaster_msgs_fkie::SyncMasterInfo_<ContainerAllocator> const> ConstPtr;

}; // struct SyncMasterInfo_

typedef ::multimaster_msgs_fkie::SyncMasterInfo_<std::allocator<void> > SyncMasterInfo;

typedef boost::shared_ptr< ::multimaster_msgs_fkie::SyncMasterInfo > SyncMasterInfoPtr;
typedef boost::shared_ptr< ::multimaster_msgs_fkie::SyncMasterInfo const> SyncMasterInfoConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::multimaster_msgs_fkie::SyncMasterInfo_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::multimaster_msgs_fkie::SyncMasterInfo_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace multimaster_msgs_fkie

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'multimaster_msgs_fkie': ['/mathworks/home/pmurali/Documents/rosjava_messages/GEN-4-6/11/matlab_msg_gen_ros1/glnxa64/src/multimaster_msgs_fkie/msg'], 'std_msgs': ['/mathworks/devel/sbs/31/pmurali.Brobot.j1352567/matlab/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg', '/mathworks/devel/sbs/31/pmurali.Brobot.j1352567/matlab/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::multimaster_msgs_fkie::SyncMasterInfo_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::multimaster_msgs_fkie::SyncMasterInfo_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::multimaster_msgs_fkie::SyncMasterInfo_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::multimaster_msgs_fkie::SyncMasterInfo_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::multimaster_msgs_fkie::SyncMasterInfo_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::multimaster_msgs_fkie::SyncMasterInfo_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::multimaster_msgs_fkie::SyncMasterInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ba4b02792114bcc4bae507c60dd14d66";
  }

  static const char* value(const ::multimaster_msgs_fkie::SyncMasterInfo_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xba4b02792114bcc4ULL;
  static const uint64_t static_value2 = 0xbae507c60dd14d66ULL;
};

template<class ContainerAllocator>
struct DataType< ::multimaster_msgs_fkie::SyncMasterInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "multimaster_msgs_fkie/SyncMasterInfo";
  }

  static const char* value(const ::multimaster_msgs_fkie::SyncMasterInfo_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::multimaster_msgs_fkie::SyncMasterInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string masteruri\n"
"string[] nodes\n"
"multimaster_msgs_fkie/SyncTopicInfo[] publisher\n"
"multimaster_msgs_fkie/SyncTopicInfo[] subscriber\n"
"multimaster_msgs_fkie/SyncServiceInfo[] services\n"
"================================================================================\n"
"MSG: multimaster_msgs_fkie/SyncTopicInfo\n"
"string topic\n"
"string node\n"
"string nodeuri\n"
"================================================================================\n"
"MSG: multimaster_msgs_fkie/SyncServiceInfo\n"
"string service\n"
"string serviceuri\n"
"string node\n"
"string nodeuri\n"
;
  }

  static const char* value(const ::multimaster_msgs_fkie::SyncMasterInfo_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::multimaster_msgs_fkie::SyncMasterInfo_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.masteruri);
      stream.next(m.nodes);
      stream.next(m.publisher);
      stream.next(m.subscriber);
      stream.next(m.services);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SyncMasterInfo_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::multimaster_msgs_fkie::SyncMasterInfo_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::multimaster_msgs_fkie::SyncMasterInfo_<ContainerAllocator>& v)
  {
    s << indent << "masteruri: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.masteruri);
    s << indent << "nodes[]" << std::endl;
    for (size_t i = 0; i < v.nodes.size(); ++i)
    {
      s << indent << "  nodes[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.nodes[i]);
    }
    s << indent << "publisher[]" << std::endl;
    for (size_t i = 0; i < v.publisher.size(); ++i)
    {
      s << indent << "  publisher[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::multimaster_msgs_fkie::SyncTopicInfo_<ContainerAllocator> >::stream(s, indent + "    ", v.publisher[i]);
    }
    s << indent << "subscriber[]" << std::endl;
    for (size_t i = 0; i < v.subscriber.size(); ++i)
    {
      s << indent << "  subscriber[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::multimaster_msgs_fkie::SyncTopicInfo_<ContainerAllocator> >::stream(s, indent + "    ", v.subscriber[i]);
    }
    s << indent << "services[]" << std::endl;
    for (size_t i = 0; i < v.services.size(); ++i)
    {
      s << indent << "  services[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::multimaster_msgs_fkie::SyncServiceInfo_<ContainerAllocator> >::stream(s, indent + "    ", v.services[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // MULTIMASTER_MSGS_FKIE_MESSAGE_SYNCMASTERINFO_H
