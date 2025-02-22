// Generated by gencpp from file cob_perception_msgs/DetectionArray.msg
// DO NOT EDIT!


#ifndef COB_PERCEPTION_MSGS_MESSAGE_DETECTIONARRAY_H
#define COB_PERCEPTION_MSGS_MESSAGE_DETECTIONARRAY_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <cob_perception_msgs/Detection.h>

namespace cob_perception_msgs
{
template <class ContainerAllocator>
struct DetectionArray_
{
  typedef DetectionArray_<ContainerAllocator> Type;

  DetectionArray_()
    : header()
    , detections()  {
    }
  DetectionArray_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , detections(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::cob_perception_msgs::Detection_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::cob_perception_msgs::Detection_<ContainerAllocator> >::other >  _detections_type;
  _detections_type detections;





  typedef boost::shared_ptr< ::cob_perception_msgs::DetectionArray_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::cob_perception_msgs::DetectionArray_<ContainerAllocator> const> ConstPtr;

}; // struct DetectionArray_

typedef ::cob_perception_msgs::DetectionArray_<std::allocator<void> > DetectionArray;

typedef boost::shared_ptr< ::cob_perception_msgs::DetectionArray > DetectionArrayPtr;
typedef boost::shared_ptr< ::cob_perception_msgs::DetectionArray const> DetectionArrayConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::cob_perception_msgs::DetectionArray_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::cob_perception_msgs::DetectionArray_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::cob_perception_msgs::DetectionArray_<ContainerAllocator1> & lhs, const ::cob_perception_msgs::DetectionArray_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.detections == rhs.detections;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::cob_perception_msgs::DetectionArray_<ContainerAllocator1> & lhs, const ::cob_perception_msgs::DetectionArray_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace cob_perception_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::cob_perception_msgs::DetectionArray_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cob_perception_msgs::DetectionArray_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::cob_perception_msgs::DetectionArray_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::cob_perception_msgs::DetectionArray_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cob_perception_msgs::DetectionArray_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cob_perception_msgs::DetectionArray_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::cob_perception_msgs::DetectionArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dded0419353379cce5ec01a67569f42d";
  }

  static const char* value(const ::cob_perception_msgs::DetectionArray_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xdded0419353379ccULL;
  static const uint64_t static_value2 = 0xe5ec01a67569f42dULL;
};

template<class ContainerAllocator>
struct DataType< ::cob_perception_msgs::DetectionArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cob_perception_msgs/DetectionArray";
  }

  static const char* value(const ::cob_perception_msgs::DetectionArray_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::cob_perception_msgs::DetectionArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"Detection[] detections\n"
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
"MSG: cob_perception_msgs/Detection\n"
"Header header\n"
"string label\n"
"int32 id\n"
"string detector\n"
"float32 score\n"
"Mask mask\n"
"geometry_msgs/PoseStamped pose\n"
"geometry_msgs/Point bounding_box_lwh\n"
"\n"
"================================================================================\n"
"MSG: cob_perception_msgs/Mask\n"
"# this message is used to mark where an object is present in an image\n"
"# this can be done either by a roi region on the image (less precise) or a mask (more precise)\n"
"\n"
"Rect roi\n"
"\n"
"# in the case when mask is used, 'roi' specifies the image region and 'mask'\n"
"# (which should be of the same size) a binary mask in that region\n"
"sensor_msgs/Image mask\n"
"\n"
"# in the case there is 3D data available, 'indices' are used to index the \n"
"# part of the point cloud representing the object\n"
"#pcl/PointIndices indices\n"
"\n"
"================================================================================\n"
"MSG: cob_perception_msgs/Rect\n"
"int32 x\n"
"int32 y\n"
"int32 width\n"
"int32 height\n"
"\n"
"================================================================================\n"
"MSG: sensor_msgs/Image\n"
"# This message contains an uncompressed image\n"
"# (0, 0) is at top-left corner of image\n"
"#\n"
"\n"
"Header header        # Header timestamp should be acquisition time of image\n"
"                     # Header frame_id should be optical frame of camera\n"
"                     # origin of frame should be optical center of camera\n"
"                     # +x should point to the right in the image\n"
"                     # +y should point down in the image\n"
"                     # +z should point into to plane of the image\n"
"                     # If the frame_id here and the frame_id of the CameraInfo\n"
"                     # message associated with the image conflict\n"
"                     # the behavior is undefined\n"
"\n"
"uint32 height         # image height, that is, number of rows\n"
"uint32 width          # image width, that is, number of columns\n"
"\n"
"# The legal values for encoding are in file src/image_encodings.cpp\n"
"# If you want to standardize a new string format, join\n"
"# ros-users@lists.sourceforge.net and send an email proposing a new encoding.\n"
"\n"
"string encoding       # Encoding of pixels -- channel meaning, ordering, size\n"
"                      # taken from the list of strings in include/sensor_msgs/image_encodings.h\n"
"\n"
"uint8 is_bigendian    # is this data bigendian?\n"
"uint32 step           # Full row length in bytes\n"
"uint8[] data          # actual matrix data, size is (step * rows)\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/PoseStamped\n"
"# A Pose with reference coordinate frame and timestamp\n"
"Header header\n"
"Pose pose\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
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
;
  }

  static const char* value(const ::cob_perception_msgs::DetectionArray_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::cob_perception_msgs::DetectionArray_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.detections);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DetectionArray_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::cob_perception_msgs::DetectionArray_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::cob_perception_msgs::DetectionArray_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "detections[]" << std::endl;
    for (size_t i = 0; i < v.detections.size(); ++i)
    {
      s << indent << "  detections[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::cob_perception_msgs::Detection_<ContainerAllocator> >::stream(s, indent + "    ", v.detections[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // COB_PERCEPTION_MSGS_MESSAGE_DETECTIONARRAY_H
