// Generated by gencpp from file jsk_pcl_ros/CallSnapItRequest.msg
// DO NOT EDIT!


#ifndef JSK_PCL_ROS_MESSAGE_CALLSNAPITREQUEST_H
#define JSK_PCL_ROS_MESSAGE_CALLSNAPITREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <jsk_pcl_ros/SnapItRequest.h>

namespace jsk_pcl_ros
{
template <class ContainerAllocator>
struct CallSnapItRequest_
{
  typedef CallSnapItRequest_<ContainerAllocator> Type;

  CallSnapItRequest_()
    : request()  {
    }
  CallSnapItRequest_(const ContainerAllocator& _alloc)
    : request(_alloc)  {
  (void)_alloc;
    }



   typedef  ::jsk_pcl_ros::SnapItRequest_<ContainerAllocator>  _request_type;
  _request_type request;





  typedef boost::shared_ptr< ::jsk_pcl_ros::CallSnapItRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::jsk_pcl_ros::CallSnapItRequest_<ContainerAllocator> const> ConstPtr;

}; // struct CallSnapItRequest_

typedef ::jsk_pcl_ros::CallSnapItRequest_<std::allocator<void> > CallSnapItRequest;

typedef boost::shared_ptr< ::jsk_pcl_ros::CallSnapItRequest > CallSnapItRequestPtr;
typedef boost::shared_ptr< ::jsk_pcl_ros::CallSnapItRequest const> CallSnapItRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::jsk_pcl_ros::CallSnapItRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::jsk_pcl_ros::CallSnapItRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace jsk_pcl_ros

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/mathworks/devel/sbs/31/pmurali.Brobot.j1339814/matlab/sys/ros1/glnxa64/ros1/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/mathworks/devel/sbs/31/pmurali.Brobot.j1339814/matlab/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg'], 'jsk_pcl_ros': ['/mathworks/home/pmurali/Documents/JKL/matlab_msg_gen_ros1/glnxa64/src/jsk_pcl_ros/msg'], 'std_msgs': ['/mathworks/devel/sbs/31/pmurali.Brobot.j1339814/matlab/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg', '/mathworks/devel/sbs/31/pmurali.Brobot.j1339814/matlab/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg'], 'pcl_msgs': ['/mathworks/home/pmurali/Documents/JKL/matlab_msg_gen_ros1/glnxa64/src/pcl_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::jsk_pcl_ros::CallSnapItRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::jsk_pcl_ros::CallSnapItRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::jsk_pcl_ros::CallSnapItRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::jsk_pcl_ros::CallSnapItRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::jsk_pcl_ros::CallSnapItRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::jsk_pcl_ros::CallSnapItRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::jsk_pcl_ros::CallSnapItRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5bf1ef2f060949ff03f39c08eb7bc6de";
  }

  static const char* value(const ::jsk_pcl_ros::CallSnapItRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5bf1ef2f060949ffULL;
  static const uint64_t static_value2 = 0x03f39c08eb7bc6deULL;
};

template<class ContainerAllocator>
struct DataType< ::jsk_pcl_ros::CallSnapItRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "jsk_pcl_ros/CallSnapItRequest";
  }

  static const char* value(const ::jsk_pcl_ros::CallSnapItRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::jsk_pcl_ros::CallSnapItRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "SnapItRequest request\n"
"\n"
"================================================================================\n"
"MSG: jsk_pcl_ros/SnapItRequest\n"
"Header header\n"
"uint8 MODEL_PLANE=0\n"
"uint8 MODEL_CYLINDER=1\n"
"uint8 model_type\n"
"\n"
"geometry_msgs/PolygonStamped target_plane\n"
"\n"
"geometry_msgs/PointStamped center\n"
"geometry_msgs/Vector3Stamped direction\n"
"float64 radius\n"
"float64 height\n"
"# parameters, 0 means \n"
"float64 max_distance\n"
"float64 eps_angle\n"
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
"MSG: geometry_msgs/PolygonStamped\n"
"# This represents a Polygon with reference coordinate frame and timestamp\n"
"Header header\n"
"Polygon polygon\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Polygon\n"
"#A specification of a polygon where the first and last points are assumed to be connected\n"
"Point32[] points\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point32\n"
"# This contains the position of a point in free space(with 32 bits of precision).\n"
"# It is recommeded to use Point wherever possible instead of Point32.  \n"
"# \n"
"# This recommendation is to promote interoperability.  \n"
"#\n"
"# This message is designed to take up less space when sending\n"
"# lots of points at once, as in the case of a PointCloud.  \n"
"\n"
"float32 x\n"
"float32 y\n"
"float32 z\n"
"================================================================================\n"
"MSG: geometry_msgs/PointStamped\n"
"# This represents a Point with reference coordinate frame and timestamp\n"
"Header header\n"
"Point point\n"
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

  static const char* value(const ::jsk_pcl_ros::CallSnapItRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::jsk_pcl_ros::CallSnapItRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.request);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CallSnapItRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::jsk_pcl_ros::CallSnapItRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::jsk_pcl_ros::CallSnapItRequest_<ContainerAllocator>& v)
  {
    s << indent << "request: ";
    s << std::endl;
    Printer< ::jsk_pcl_ros::SnapItRequest_<ContainerAllocator> >::stream(s, indent + "  ", v.request);
  }
};

} // namespace message_operations
} // namespace ros

#endif // JSK_PCL_ROS_MESSAGE_CALLSNAPITREQUEST_H
