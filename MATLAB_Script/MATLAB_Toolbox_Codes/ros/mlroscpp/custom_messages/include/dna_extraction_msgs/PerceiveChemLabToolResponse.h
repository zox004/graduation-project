// Generated by gencpp from file dna_extraction_msgs/PerceiveChemLabToolResponse.msg
// DO NOT EDIT!


#ifndef DNA_EXTRACTION_MSGS_MESSAGE_PERCEIVECHEMLABTOOLRESPONSE_H
#define DNA_EXTRACTION_MSGS_MESSAGE_PERCEIVECHEMLABTOOLRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/TransformStamped.h>

namespace dna_extraction_msgs
{
template <class ContainerAllocator>
struct PerceiveChemLabToolResponse_
{
  typedef PerceiveChemLabToolResponse_<ContainerAllocator> Type;

  PerceiveChemLabToolResponse_()
    : tool_pose()  {
    }
  PerceiveChemLabToolResponse_(const ContainerAllocator& _alloc)
    : tool_pose(_alloc)  {
  (void)_alloc;
    }



   typedef  ::geometry_msgs::TransformStamped_<ContainerAllocator>  _tool_pose_type;
  _tool_pose_type tool_pose;





  typedef boost::shared_ptr< ::dna_extraction_msgs::PerceiveChemLabToolResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dna_extraction_msgs::PerceiveChemLabToolResponse_<ContainerAllocator> const> ConstPtr;

}; // struct PerceiveChemLabToolResponse_

typedef ::dna_extraction_msgs::PerceiveChemLabToolResponse_<std::allocator<void> > PerceiveChemLabToolResponse;

typedef boost::shared_ptr< ::dna_extraction_msgs::PerceiveChemLabToolResponse > PerceiveChemLabToolResponsePtr;
typedef boost::shared_ptr< ::dna_extraction_msgs::PerceiveChemLabToolResponse const> PerceiveChemLabToolResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dna_extraction_msgs::PerceiveChemLabToolResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dna_extraction_msgs::PerceiveChemLabToolResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace dna_extraction_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/mathworks/devel/sbs/31/pmurali.Brobot.j1339814/matlab/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/mathworks/devel/sbs/31/pmurali.Brobot.j1339814/matlab/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::dna_extraction_msgs::PerceiveChemLabToolResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dna_extraction_msgs::PerceiveChemLabToolResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dna_extraction_msgs::PerceiveChemLabToolResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dna_extraction_msgs::PerceiveChemLabToolResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dna_extraction_msgs::PerceiveChemLabToolResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dna_extraction_msgs::PerceiveChemLabToolResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dna_extraction_msgs::PerceiveChemLabToolResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b7b88135fc740f90df1e91093d300196";
  }

  static const char* value(const ::dna_extraction_msgs::PerceiveChemLabToolResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb7b88135fc740f90ULL;
  static const uint64_t static_value2 = 0xdf1e91093d300196ULL;
};

template<class ContainerAllocator>
struct DataType< ::dna_extraction_msgs::PerceiveChemLabToolResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dna_extraction_msgs/PerceiveChemLabToolResponse";
  }

  static const char* value(const ::dna_extraction_msgs::PerceiveChemLabToolResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dna_extraction_msgs::PerceiveChemLabToolResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "geometry_msgs/TransformStamped tool_pose\n"
"\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/TransformStamped\n"
"# This expresses a transform from coordinate frame header.frame_id\n"
"# to the coordinate frame child_frame_id\n"
"#\n"
"# This message is mostly used by the \n"
"# <a href=\"http://wiki.ros.org/tf\">tf</a> package. \n"
"# See its documentation for more information.\n"
"\n"
"Header header\n"
"string child_frame_id # the frame id of the child frame\n"
"Transform transform\n"
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
"MSG: geometry_msgs/Transform\n"
"# This represents the transform between two coordinate frames in free space.\n"
"\n"
"Vector3 translation\n"
"Quaternion rotation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Vector3\n"
"# This represents a vector in free space. \n"
"# It is only meant to represent a direction. Therefore, it does not\n"
"# make sense to apply a translation to it (e.g., when applying a \n"
"# generic rigid transformation to a Vector3, tf2 will only apply the\n"
"# rotation). If you want your data to be translatable too, use the\n"
"# geometry_msgs/Point message instead.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
;
  }

  static const char* value(const ::dna_extraction_msgs::PerceiveChemLabToolResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dna_extraction_msgs::PerceiveChemLabToolResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.tool_pose);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PerceiveChemLabToolResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dna_extraction_msgs::PerceiveChemLabToolResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dna_extraction_msgs::PerceiveChemLabToolResponse_<ContainerAllocator>& v)
  {
    s << indent << "tool_pose: ";
    s << std::endl;
    Printer< ::geometry_msgs::TransformStamped_<ContainerAllocator> >::stream(s, indent + "  ", v.tool_pose);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DNA_EXTRACTION_MSGS_MESSAGE_PERCEIVECHEMLABTOOLRESPONSE_H
