// Generated by gencpp from file jsk_pcl_ros/BoundingBoxArray.msg
// DO NOT EDIT!


#ifndef JSK_PCL_ROS_MESSAGE_BOUNDINGBOXARRAY_H
#define JSK_PCL_ROS_MESSAGE_BOUNDINGBOXARRAY_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <jsk_pcl_ros/BoundingBox.h>

namespace jsk_pcl_ros
{
template <class ContainerAllocator>
struct BoundingBoxArray_
{
  typedef BoundingBoxArray_<ContainerAllocator> Type;

  BoundingBoxArray_()
    : header()
    , boxes()  {
    }
  BoundingBoxArray_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , boxes(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::jsk_pcl_ros::BoundingBox_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::jsk_pcl_ros::BoundingBox_<ContainerAllocator> >::other >  _boxes_type;
  _boxes_type boxes;





  typedef boost::shared_ptr< ::jsk_pcl_ros::BoundingBoxArray_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::jsk_pcl_ros::BoundingBoxArray_<ContainerAllocator> const> ConstPtr;

}; // struct BoundingBoxArray_

typedef ::jsk_pcl_ros::BoundingBoxArray_<std::allocator<void> > BoundingBoxArray;

typedef boost::shared_ptr< ::jsk_pcl_ros::BoundingBoxArray > BoundingBoxArrayPtr;
typedef boost::shared_ptr< ::jsk_pcl_ros::BoundingBoxArray const> BoundingBoxArrayConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::jsk_pcl_ros::BoundingBoxArray_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::jsk_pcl_ros::BoundingBoxArray_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace jsk_pcl_ros

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'sensor_msgs': ['/mathworks/home/pmurali/Documents/Working/matlab_msg_gen_ros1/glnxa64/src/sensor_msgs/msg'], 'geometry_msgs': ['/mathworks/home/pmurali/Documents/Working/matlab_msg_gen_ros1/glnxa64/src/geometry_msgs/msg'], 'jsk_pcl_ros': ['/mathworks/home/pmurali/Documents/Working/matlab_msg_gen_ros1/glnxa64/src/jsk_pcl_ros/msg'], 'std_msgs': ['/mathworks/devel/sbs/31/pmurali.Brobot.j1329247.2/matlab/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg', '/mathworks/devel/sbs/31/pmurali.Brobot.j1329247.2/matlab/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg'], 'pcl_msgs': ['/mathworks/home/pmurali/Documents/Working/matlab_msg_gen_ros1/glnxa64/src/pcl_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::jsk_pcl_ros::BoundingBoxArray_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::jsk_pcl_ros::BoundingBoxArray_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::jsk_pcl_ros::BoundingBoxArray_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::jsk_pcl_ros::BoundingBoxArray_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::jsk_pcl_ros::BoundingBoxArray_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::jsk_pcl_ros::BoundingBoxArray_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::jsk_pcl_ros::BoundingBoxArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "19cc943fcedfafbf4787a46810f9356a";
  }

  static const char* value(const ::jsk_pcl_ros::BoundingBoxArray_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x19cc943fcedfafbfULL;
  static const uint64_t static_value2 = 0x4787a46810f9356aULL;
};

template<class ContainerAllocator>
struct DataType< ::jsk_pcl_ros::BoundingBoxArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "jsk_pcl_ros/BoundingBoxArray";
  }

  static const char* value(const ::jsk_pcl_ros::BoundingBoxArray_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::jsk_pcl_ros::BoundingBoxArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"BoundingBox[] boxes\n"
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
"MSG: jsk_pcl_ros/BoundingBox\n"
"Header header\n"
"geometry_msgs/Pose pose\n"
"geometry_msgs/Vector3 dimensions #x, y and z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of postion and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Vector3\n"
"# This represents a vector in free space. \n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::jsk_pcl_ros::BoundingBoxArray_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::jsk_pcl_ros::BoundingBoxArray_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.boxes);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct BoundingBoxArray_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::jsk_pcl_ros::BoundingBoxArray_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::jsk_pcl_ros::BoundingBoxArray_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "boxes[]" << std::endl;
    for (size_t i = 0; i < v.boxes.size(); ++i)
    {
      s << indent << "  boxes[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::jsk_pcl_ros::BoundingBox_<ContainerAllocator> >::stream(s, indent + "    ", v.boxes[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // JSK_PCL_ROS_MESSAGE_BOUNDINGBOXARRAY_H
