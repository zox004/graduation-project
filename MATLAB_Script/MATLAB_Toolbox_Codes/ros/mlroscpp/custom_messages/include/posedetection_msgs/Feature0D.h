// Generated by gencpp from file posedetection_msgs/Feature0D.msg
// DO NOT EDIT!


#ifndef POSEDETECTION_MSGS_MESSAGE_FEATURE0D_H
#define POSEDETECTION_MSGS_MESSAGE_FEATURE0D_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace posedetection_msgs
{
template <class ContainerAllocator>
struct Feature0D_
{
  typedef Feature0D_<ContainerAllocator> Type;

  Feature0D_()
    : header()
    , positions()
    , scales()
    , orientations()
    , confidences()
    , descriptors()
    , descriptor_dim(0)
    , type()  {
    }
  Feature0D_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , positions(_alloc)
    , scales(_alloc)
    , orientations(_alloc)
    , confidences(_alloc)
    , descriptors(_alloc)
    , descriptor_dim(0)
    , type(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _positions_type;
  _positions_type positions;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _scales_type;
  _scales_type scales;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _orientations_type;
  _orientations_type orientations;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _confidences_type;
  _confidences_type confidences;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _descriptors_type;
  _descriptors_type descriptors;

   typedef int32_t _descriptor_dim_type;
  _descriptor_dim_type descriptor_dim;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _type_type;
  _type_type type;





  typedef boost::shared_ptr< ::posedetection_msgs::Feature0D_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::posedetection_msgs::Feature0D_<ContainerAllocator> const> ConstPtr;

}; // struct Feature0D_

typedef ::posedetection_msgs::Feature0D_<std::allocator<void> > Feature0D;

typedef boost::shared_ptr< ::posedetection_msgs::Feature0D > Feature0DPtr;
typedef boost::shared_ptr< ::posedetection_msgs::Feature0D const> Feature0DConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::posedetection_msgs::Feature0D_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::posedetection_msgs::Feature0D_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::posedetection_msgs::Feature0D_<ContainerAllocator1> & lhs, const ::posedetection_msgs::Feature0D_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.positions == rhs.positions &&
    lhs.scales == rhs.scales &&
    lhs.orientations == rhs.orientations &&
    lhs.confidences == rhs.confidences &&
    lhs.descriptors == rhs.descriptors &&
    lhs.descriptor_dim == rhs.descriptor_dim &&
    lhs.type == rhs.type;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::posedetection_msgs::Feature0D_<ContainerAllocator1> & lhs, const ::posedetection_msgs::Feature0D_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace posedetection_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::posedetection_msgs::Feature0D_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::posedetection_msgs::Feature0D_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::posedetection_msgs::Feature0D_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::posedetection_msgs::Feature0D_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::posedetection_msgs::Feature0D_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::posedetection_msgs::Feature0D_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::posedetection_msgs::Feature0D_<ContainerAllocator> >
{
  static const char* value()
  {
    return "fcb3ba42a42cf972f3838cdb171f5e04";
  }

  static const char* value(const ::posedetection_msgs::Feature0D_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xfcb3ba42a42cf972ULL;
  static const uint64_t static_value2 = 0xf3838cdb171f5e04ULL;
};

template<class ContainerAllocator>
struct DataType< ::posedetection_msgs::Feature0D_<ContainerAllocator> >
{
  static const char* value()
  {
    return "posedetection_msgs/Feature0D";
  }

  static const char* value(const ::posedetection_msgs::Feature0D_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::posedetection_msgs::Feature0D_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"float32[] positions # 2*N, 0-indexed\n"
"float32[] scales # N, optional\n"
"float32[] orientations # N, optional, along +X is 0\n"
"float32[] confidences\n"
"float32[] descriptors # N*descriptor_dim\n"
"int32 descriptor_dim\n"
"string type # type of feature\n"
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
;
  }

  static const char* value(const ::posedetection_msgs::Feature0D_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::posedetection_msgs::Feature0D_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.positions);
      stream.next(m.scales);
      stream.next(m.orientations);
      stream.next(m.confidences);
      stream.next(m.descriptors);
      stream.next(m.descriptor_dim);
      stream.next(m.type);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Feature0D_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::posedetection_msgs::Feature0D_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::posedetection_msgs::Feature0D_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "positions[]" << std::endl;
    for (size_t i = 0; i < v.positions.size(); ++i)
    {
      s << indent << "  positions[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.positions[i]);
    }
    s << indent << "scales[]" << std::endl;
    for (size_t i = 0; i < v.scales.size(); ++i)
    {
      s << indent << "  scales[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.scales[i]);
    }
    s << indent << "orientations[]" << std::endl;
    for (size_t i = 0; i < v.orientations.size(); ++i)
    {
      s << indent << "  orientations[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.orientations[i]);
    }
    s << indent << "confidences[]" << std::endl;
    for (size_t i = 0; i < v.confidences.size(); ++i)
    {
      s << indent << "  confidences[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.confidences[i]);
    }
    s << indent << "descriptors[]" << std::endl;
    for (size_t i = 0; i < v.descriptors.size(); ++i)
    {
      s << indent << "  descriptors[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.descriptors[i]);
    }
    s << indent << "descriptor_dim: ";
    Printer<int32_t>::stream(s, indent + "  ", v.descriptor_dim);
    s << indent << "type: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.type);
  }
};

} // namespace message_operations
} // namespace ros

#endif // POSEDETECTION_MSGS_MESSAGE_FEATURE0D_H
