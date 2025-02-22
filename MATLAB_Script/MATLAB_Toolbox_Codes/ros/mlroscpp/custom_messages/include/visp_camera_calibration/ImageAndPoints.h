// Generated by gencpp from file visp_camera_calibration/ImageAndPoints.msg
// DO NOT EDIT!


#ifndef VISP_CAMERA_CALIBRATION_MESSAGE_IMAGEANDPOINTS_H
#define VISP_CAMERA_CALIBRATION_MESSAGE_IMAGEANDPOINTS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <sensor_msgs/Image.h>
#include <visp_camera_calibration/ImagePoint.h>

namespace visp_camera_calibration
{
template <class ContainerAllocator>
struct ImageAndPoints_
{
  typedef ImageAndPoints_<ContainerAllocator> Type;

  ImageAndPoints_()
    : header()
    , image()
    , points()  {
    }
  ImageAndPoints_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , image(_alloc)
    , points(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::sensor_msgs::Image_<ContainerAllocator>  _image_type;
  _image_type image;

   typedef std::vector< ::visp_camera_calibration::ImagePoint_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::visp_camera_calibration::ImagePoint_<ContainerAllocator> >::other >  _points_type;
  _points_type points;





  typedef boost::shared_ptr< ::visp_camera_calibration::ImageAndPoints_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::visp_camera_calibration::ImageAndPoints_<ContainerAllocator> const> ConstPtr;

}; // struct ImageAndPoints_

typedef ::visp_camera_calibration::ImageAndPoints_<std::allocator<void> > ImageAndPoints;

typedef boost::shared_ptr< ::visp_camera_calibration::ImageAndPoints > ImageAndPointsPtr;
typedef boost::shared_ptr< ::visp_camera_calibration::ImageAndPoints const> ImageAndPointsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::visp_camera_calibration::ImageAndPoints_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::visp_camera_calibration::ImageAndPoints_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace visp_camera_calibration

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'sensor_msgs': ['/mathworks/home/pmurali/Documents/Working/matlab_msg_gen_ros1/glnxa64/src/sensor_msgs/msg'], 'visp_camera_calibration': ['/mathworks/home/pmurali/Documents/Working/matlab_msg_gen_ros1/glnxa64/src/visp_camera_calibration/msg'], 'std_msgs': ['/mathworks/devel/sbs/31/pmurali.Brobot.j1329247.2/matlab/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg', '/mathworks/devel/sbs/31/pmurali.Brobot.j1329247.2/matlab/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/mathworks/home/pmurali/Documents/Working/matlab_msg_gen_ros1/glnxa64/src/geometry_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::visp_camera_calibration::ImageAndPoints_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::visp_camera_calibration::ImageAndPoints_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::visp_camera_calibration::ImageAndPoints_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::visp_camera_calibration::ImageAndPoints_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::visp_camera_calibration::ImageAndPoints_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::visp_camera_calibration::ImageAndPoints_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::visp_camera_calibration::ImageAndPoints_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0fea5fc0844344ec4ec1adadebd18f75";
  }

  static const char* value(const ::visp_camera_calibration::ImageAndPoints_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0fea5fc0844344ecULL;
  static const uint64_t static_value2 = 0x4ec1adadebd18f75ULL;
};

template<class ContainerAllocator>
struct DataType< ::visp_camera_calibration::ImageAndPoints_<ContainerAllocator> >
{
  static const char* value()
  {
    return "visp_camera_calibration/ImageAndPoints";
  }

  static const char* value(const ::visp_camera_calibration::ImageAndPoints_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::visp_camera_calibration::ImageAndPoints_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# An image with an array of 2D points selected in the image\n"
"\n"
"Header header\n"
"\n"
"sensor_msgs/Image image\n"
"visp_camera_calibration/ImagePoint[] points\n"
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
"MSG: sensor_msgs/Image\n"
"# This message contains an uncompressed image\n"
"# (0, 0) is at top-left corner of image\n"
"#\n"
"\n"
"Header header        # Header timestamp should be acquisition time of image\n"
"                     # Header frame_id should be optical frame of camera\n"
"                     # origin of frame should be optical center of cameara\n"
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
"MSG: visp_camera_calibration/ImagePoint\n"
"# a point (pixel coordinates) selected in an image\n"
"\n"
"int32 x\n"
"int32 y\n"
;
  }

  static const char* value(const ::visp_camera_calibration::ImageAndPoints_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::visp_camera_calibration::ImageAndPoints_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.image);
      stream.next(m.points);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ImageAndPoints_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::visp_camera_calibration::ImageAndPoints_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::visp_camera_calibration::ImageAndPoints_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "image: ";
    s << std::endl;
    Printer< ::sensor_msgs::Image_<ContainerAllocator> >::stream(s, indent + "  ", v.image);
    s << indent << "points[]" << std::endl;
    for (size_t i = 0; i < v.points.size(); ++i)
    {
      s << indent << "  points[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::visp_camera_calibration::ImagePoint_<ContainerAllocator> >::stream(s, indent + "    ", v.points[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // VISP_CAMERA_CALIBRATION_MESSAGE_IMAGEANDPOINTS_H
