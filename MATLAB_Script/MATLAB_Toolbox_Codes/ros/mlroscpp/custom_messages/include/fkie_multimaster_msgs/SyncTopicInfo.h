// Generated by gencpp from file fkie_multimaster_msgs/SyncTopicInfo.msg
// DO NOT EDIT!


#ifndef FKIE_MULTIMASTER_MSGS_MESSAGE_SYNCTOPICINFO_H
#define FKIE_MULTIMASTER_MSGS_MESSAGE_SYNCTOPICINFO_H


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
struct SyncTopicInfo_
{
  typedef SyncTopicInfo_<ContainerAllocator> Type;

  SyncTopicInfo_()
    : topic()
    , node()
    , nodeuri()  {
    }
  SyncTopicInfo_(const ContainerAllocator& _alloc)
    : topic(_alloc)
    , node(_alloc)
    , nodeuri(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _topic_type;
  _topic_type topic;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _node_type;
  _node_type node;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _nodeuri_type;
  _nodeuri_type nodeuri;





  typedef boost::shared_ptr< ::fkie_multimaster_msgs::SyncTopicInfo_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::fkie_multimaster_msgs::SyncTopicInfo_<ContainerAllocator> const> ConstPtr;

}; // struct SyncTopicInfo_

typedef ::fkie_multimaster_msgs::SyncTopicInfo_<std::allocator<void> > SyncTopicInfo;

typedef boost::shared_ptr< ::fkie_multimaster_msgs::SyncTopicInfo > SyncTopicInfoPtr;
typedef boost::shared_ptr< ::fkie_multimaster_msgs::SyncTopicInfo const> SyncTopicInfoConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::fkie_multimaster_msgs::SyncTopicInfo_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::fkie_multimaster_msgs::SyncTopicInfo_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::fkie_multimaster_msgs::SyncTopicInfo_<ContainerAllocator1> & lhs, const ::fkie_multimaster_msgs::SyncTopicInfo_<ContainerAllocator2> & rhs)
{
  return lhs.topic == rhs.topic &&
    lhs.node == rhs.node &&
    lhs.nodeuri == rhs.nodeuri;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::fkie_multimaster_msgs::SyncTopicInfo_<ContainerAllocator1> & lhs, const ::fkie_multimaster_msgs::SyncTopicInfo_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace fkie_multimaster_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::fkie_multimaster_msgs::SyncTopicInfo_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::fkie_multimaster_msgs::SyncTopicInfo_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::fkie_multimaster_msgs::SyncTopicInfo_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::fkie_multimaster_msgs::SyncTopicInfo_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::fkie_multimaster_msgs::SyncTopicInfo_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::fkie_multimaster_msgs::SyncTopicInfo_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::fkie_multimaster_msgs::SyncTopicInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1b296160d6f5a9d7f6550f6130da2ba4";
  }

  static const char* value(const ::fkie_multimaster_msgs::SyncTopicInfo_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1b296160d6f5a9d7ULL;
  static const uint64_t static_value2 = 0xf6550f6130da2ba4ULL;
};

template<class ContainerAllocator>
struct DataType< ::fkie_multimaster_msgs::SyncTopicInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "fkie_multimaster_msgs/SyncTopicInfo";
  }

  static const char* value(const ::fkie_multimaster_msgs::SyncTopicInfo_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::fkie_multimaster_msgs::SyncTopicInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string topic\n"
"string node\n"
"string nodeuri\n"
;
  }

  static const char* value(const ::fkie_multimaster_msgs::SyncTopicInfo_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::fkie_multimaster_msgs::SyncTopicInfo_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.topic);
      stream.next(m.node);
      stream.next(m.nodeuri);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SyncTopicInfo_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::fkie_multimaster_msgs::SyncTopicInfo_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::fkie_multimaster_msgs::SyncTopicInfo_<ContainerAllocator>& v)
  {
    s << indent << "topic: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.topic);
    s << indent << "node: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.node);
    s << indent << "nodeuri: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.nodeuri);
  }
};

} // namespace message_operations
} // namespace ros

#endif // FKIE_MULTIMASTER_MSGS_MESSAGE_SYNCTOPICINFO_H
