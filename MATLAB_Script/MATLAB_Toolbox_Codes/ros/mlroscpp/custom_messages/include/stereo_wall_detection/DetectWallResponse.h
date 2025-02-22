// Generated by gencpp from file stereo_wall_detection/DetectWallResponse.msg
// DO NOT EDIT!


#ifndef STEREO_WALL_DETECTION_MESSAGE_DETECTWALLRESPONSE_H
#define STEREO_WALL_DETECTION_MESSAGE_DETECTWALLRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/PointStamped.h>
#include <geometry_msgs/Vector3Stamped.h>

namespace stereo_wall_detection
{
template <class ContainerAllocator>
struct DetectWallResponse_
{
  typedef DetectWallResponse_<ContainerAllocator> Type;

  DetectWallResponse_()
    : wall_point()
    , wall_norm()  {
    }
  DetectWallResponse_(const ContainerAllocator& _alloc)
    : wall_point(_alloc)
    , wall_norm(_alloc)  {
  (void)_alloc;
    }



   typedef  ::geometry_msgs::PointStamped_<ContainerAllocator>  _wall_point_type;
  _wall_point_type wall_point;

   typedef  ::geometry_msgs::Vector3Stamped_<ContainerAllocator>  _wall_norm_type;
  _wall_norm_type wall_norm;





  typedef boost::shared_ptr< ::stereo_wall_detection::DetectWallResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::stereo_wall_detection::DetectWallResponse_<ContainerAllocator> const> ConstPtr;

}; // struct DetectWallResponse_

typedef ::stereo_wall_detection::DetectWallResponse_<std::allocator<void> > DetectWallResponse;

typedef boost::shared_ptr< ::stereo_wall_detection::DetectWallResponse > DetectWallResponsePtr;
typedef boost::shared_ptr< ::stereo_wall_detection::DetectWallResponse const> DetectWallResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::stereo_wall_detection::DetectWallResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::stereo_wall_detection::DetectWallResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace stereo_wall_detection

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/mathworks/devel/sbs/31/jkonakal.Brobot.j1364265/matlab/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/mathworks/devel/sbs/31/jkonakal.Brobot.j1364265/matlab/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::stereo_wall_detection::DetectWallResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::stereo_wall_detection::DetectWallResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::stereo_wall_detection::DetectWallResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::stereo_wall_detection::DetectWallResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::stereo_wall_detection::DetectWallResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::stereo_wall_detection::DetectWallResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::stereo_wall_detection::DetectWallResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a6870b3c0e483b78cb98aac96d566717";
  }

  static const char* value(const ::stereo_wall_detection::DetectWallResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa6870b3c0e483b78ULL;
  static const uint64_t static_value2 = 0xcb98aac96d566717ULL;
};

template<class ContainerAllocator>
struct DataType< ::stereo_wall_detection::DetectWallResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "stereo_wall_detection/DetectWallResponse";
  }

  static const char* value(const ::stereo_wall_detection::DetectWallResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::stereo_wall_detection::DetectWallResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "geometry_msgs/PointStamped wall_point\n"
"geometry_msgs/Vector3Stamped wall_norm\n"
"\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/PointStamped\n"
"# This represents a Point with reference coordinate frame and timestamp\n"
"Header header\n"
"Point point\n"
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
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Vector3Stamped\n"
"# This represents a Vector3 with reference coordinate frame and timestamp\n"
"Header header\n"
"Vector3 vector\n"
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
;
  }

  static const char* value(const ::stereo_wall_detection::DetectWallResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::stereo_wall_detection::DetectWallResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.wall_point);
      stream.next(m.wall_norm);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DetectWallResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::stereo_wall_detection::DetectWallResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::stereo_wall_detection::DetectWallResponse_<ContainerAllocator>& v)
  {
    s << indent << "wall_point: ";
    s << std::endl;
    Printer< ::geometry_msgs::PointStamped_<ContainerAllocator> >::stream(s, indent + "  ", v.wall_point);
    s << indent << "wall_norm: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3Stamped_<ContainerAllocator> >::stream(s, indent + "  ", v.wall_norm);
  }
};

} // namespace message_operations
} // namespace ros

#endif // STEREO_WALL_DETECTION_MESSAGE_DETECTWALLRESPONSE_H
