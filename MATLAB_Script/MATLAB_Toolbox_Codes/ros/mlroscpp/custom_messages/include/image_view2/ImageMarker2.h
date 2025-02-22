// Generated by gencpp from file image_view2/ImageMarker2.msg
// DO NOT EDIT!


#ifndef IMAGE_VIEW2_MESSAGE_IMAGEMARKER2_H
#define IMAGE_VIEW2_MESSAGE_IMAGEMARKER2_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/Point.h>
#include <geometry_msgs/PointStamped.h>
#include <geometry_msgs/PoseStamped.h>
#include <std_msgs/ColorRGBA.h>
#include <std_msgs/ColorRGBA.h>
#include <geometry_msgs/Point.h>
#include <image_view2/PointArrayStamped.h>
#include <std_msgs/ColorRGBA.h>

namespace image_view2
{
template <class ContainerAllocator>
struct ImageMarker2_
{
  typedef ImageMarker2_<ContainerAllocator> Type;

  ImageMarker2_()
    : header()
    , ns()
    , id(0)
    , type(0)
    , action(0)
    , position()
    , position3D()
    , pose()
    , scale(0.0)
    , width(0.0)
    , outline_color()
    , filled(0)
    , fill_color()
    , lifetime()
    , arc(0)
    , angle(0.0)
    , points()
    , points3D()
    , outline_colors()
    , frames()
    , text()
    , left_up_origin(false)
    , ratio_scale(false)  {
    }
  ImageMarker2_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , ns(_alloc)
    , id(0)
    , type(0)
    , action(0)
    , position(_alloc)
    , position3D(_alloc)
    , pose(_alloc)
    , scale(0.0)
    , width(0.0)
    , outline_color(_alloc)
    , filled(0)
    , fill_color(_alloc)
    , lifetime()
    , arc(0)
    , angle(0.0)
    , points(_alloc)
    , points3D(_alloc)
    , outline_colors(_alloc)
    , frames(_alloc)
    , text(_alloc)
    , left_up_origin(false)
    , ratio_scale(false)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _ns_type;
  _ns_type ns;

   typedef int32_t _id_type;
  _id_type id;

   typedef int32_t _type_type;
  _type_type type;

   typedef int32_t _action_type;
  _action_type action;

   typedef  ::geometry_msgs::Point_<ContainerAllocator>  _position_type;
  _position_type position;

   typedef  ::geometry_msgs::PointStamped_<ContainerAllocator>  _position3D_type;
  _position3D_type position3D;

   typedef  ::geometry_msgs::PoseStamped_<ContainerAllocator>  _pose_type;
  _pose_type pose;

   typedef float _scale_type;
  _scale_type scale;

   typedef float _width_type;
  _width_type width;

   typedef  ::std_msgs::ColorRGBA_<ContainerAllocator>  _outline_color_type;
  _outline_color_type outline_color;

   typedef int8_t _filled_type;
  _filled_type filled;

   typedef  ::std_msgs::ColorRGBA_<ContainerAllocator>  _fill_color_type;
  _fill_color_type fill_color;

   typedef ros::Duration _lifetime_type;
  _lifetime_type lifetime;

   typedef int8_t _arc_type;
  _arc_type arc;

   typedef float _angle_type;
  _angle_type angle;

   typedef std::vector< ::geometry_msgs::Point_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::geometry_msgs::Point_<ContainerAllocator> >::other >  _points_type;
  _points_type points;

   typedef  ::image_view2::PointArrayStamped_<ContainerAllocator>  _points3D_type;
  _points3D_type points3D;

   typedef std::vector< ::std_msgs::ColorRGBA_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::std_msgs::ColorRGBA_<ContainerAllocator> >::other >  _outline_colors_type;
  _outline_colors_type outline_colors;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _frames_type;
  _frames_type frames;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _text_type;
  _text_type text;

   typedef uint8_t _left_up_origin_type;
  _left_up_origin_type left_up_origin;

   typedef uint8_t _ratio_scale_type;
  _ratio_scale_type ratio_scale;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(CIRCLE)
  #undef CIRCLE
#endif
#if defined(_WIN32) && defined(LINE_STRIP)
  #undef LINE_STRIP
#endif
#if defined(_WIN32) && defined(LINE_LIST)
  #undef LINE_LIST
#endif
#if defined(_WIN32) && defined(POLYGON)
  #undef POLYGON
#endif
#if defined(_WIN32) && defined(POINTS)
  #undef POINTS
#endif
#if defined(_WIN32) && defined(FRAMES)
  #undef FRAMES
#endif
#if defined(_WIN32) && defined(TEXT)
  #undef TEXT
#endif
#if defined(_WIN32) && defined(LINE_STRIP3D)
  #undef LINE_STRIP3D
#endif
#if defined(_WIN32) && defined(LINE_LIST3D)
  #undef LINE_LIST3D
#endif
#if defined(_WIN32) && defined(POLYGON3D)
  #undef POLYGON3D
#endif
#if defined(_WIN32) && defined(POINTS3D)
  #undef POINTS3D
#endif
#if defined(_WIN32) && defined(TEXT3D)
  #undef TEXT3D
#endif
#if defined(_WIN32) && defined(CIRCLE3D)
  #undef CIRCLE3D
#endif
#if defined(_WIN32) && defined(ADD)
  #undef ADD
#endif
#if defined(_WIN32) && defined(REMOVE)
  #undef REMOVE
#endif

  enum {
    CIRCLE = 0,
    LINE_STRIP = 1,
    LINE_LIST = 2,
    POLYGON = 3,
    POINTS = 4,
    FRAMES = 5,
    TEXT = 6,
    LINE_STRIP3D = 7,
    LINE_LIST3D = 8,
    POLYGON3D = 9,
    POINTS3D = 10,
    TEXT3D = 11,
    CIRCLE3D = 12,
    ADD = 0,
    REMOVE = 1,
  };


  typedef boost::shared_ptr< ::image_view2::ImageMarker2_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::image_view2::ImageMarker2_<ContainerAllocator> const> ConstPtr;

}; // struct ImageMarker2_

typedef ::image_view2::ImageMarker2_<std::allocator<void> > ImageMarker2;

typedef boost::shared_ptr< ::image_view2::ImageMarker2 > ImageMarker2Ptr;
typedef boost::shared_ptr< ::image_view2::ImageMarker2 const> ImageMarker2ConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::image_view2::ImageMarker2_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::image_view2::ImageMarker2_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::image_view2::ImageMarker2_<ContainerAllocator1> & lhs, const ::image_view2::ImageMarker2_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.ns == rhs.ns &&
    lhs.id == rhs.id &&
    lhs.type == rhs.type &&
    lhs.action == rhs.action &&
    lhs.position == rhs.position &&
    lhs.position3D == rhs.position3D &&
    lhs.pose == rhs.pose &&
    lhs.scale == rhs.scale &&
    lhs.width == rhs.width &&
    lhs.outline_color == rhs.outline_color &&
    lhs.filled == rhs.filled &&
    lhs.fill_color == rhs.fill_color &&
    lhs.lifetime == rhs.lifetime &&
    lhs.arc == rhs.arc &&
    lhs.angle == rhs.angle &&
    lhs.points == rhs.points &&
    lhs.points3D == rhs.points3D &&
    lhs.outline_colors == rhs.outline_colors &&
    lhs.frames == rhs.frames &&
    lhs.text == rhs.text &&
    lhs.left_up_origin == rhs.left_up_origin &&
    lhs.ratio_scale == rhs.ratio_scale;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::image_view2::ImageMarker2_<ContainerAllocator1> & lhs, const ::image_view2::ImageMarker2_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace image_view2

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::image_view2::ImageMarker2_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::image_view2::ImageMarker2_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::image_view2::ImageMarker2_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::image_view2::ImageMarker2_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::image_view2::ImageMarker2_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::image_view2::ImageMarker2_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::image_view2::ImageMarker2_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8efc23e411f94f2c04288719c078c291";
  }

  static const char* value(const ::image_view2::ImageMarker2_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8efc23e411f94f2cULL;
  static const uint64_t static_value2 = 0x04288719c078c291ULL;
};

template<class ContainerAllocator>
struct DataType< ::image_view2::ImageMarker2_<ContainerAllocator> >
{
  static const char* value()
  {
    return "image_view2/ImageMarker2";
  }

  static const char* value(const ::image_view2::ImageMarker2_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::image_view2::ImageMarker2_<ContainerAllocator> >
{
  static const char* value()
  {
    return "byte CIRCLE=0\n"
"byte LINE_STRIP=1\n"
"byte LINE_LIST=2\n"
"byte POLYGON=3\n"
"byte POINTS=4\n"
"byte FRAMES=5\n"
"byte TEXT=6\n"
"\n"
"byte LINE_STRIP3D=7\n"
"byte LINE_LIST3D=8\n"
"byte POLYGON3D=9\n"
"byte POINTS3D=10\n"
"byte TEXT3D=11\n"
"byte CIRCLE3D=12\n"
"\n"
"byte ADD=0\n"
"byte REMOVE=1\n"
"\n"
"Header header\n"
"string ns		# namespace, used with id to form a unique id\n"
"int32 id          	# unique id within the namespace\n"
"int32 type        	# CIRCLE/LINE_STRIP/etc.\n"
"int32 action      	# ADD/REMOVE\n"
"geometry_msgs/Point position # used for CIRCLE/TEXT, 2D in pixel-coords\n"
"geometry_msgs/PointStamped position3D # used for 3DTEXT\n"
"geometry_msgs/PoseStamped pose # used for CIRCLE3D\n"
"float32 scale	 	# the diameter for a circle, etc.\n"
"float32 width	 	# the width for a line, etc.\n"
"std_msgs/ColorRGBA outline_color\n"
"byte filled		# whether to fill in the shape with color\n"
"std_msgs/ColorRGBA fill_color # color [0.0-1.0]\n"
"duration lifetime       # How long the object should last before being automatically deleted.  0 means forever\n"
"byte arc # used for CIRCLE3D\n"
"float32 angle # used for CIRCLE3D\n"
"\n"
"\n"
"geometry_msgs/Point[] points # used for LINE_STRIP/LINE_LIST/POLYGON/POINTS., 2D in pixel coords\n"
"PointArrayStamped points3D # used for 3DLINE_STRIP/3DLINE_LIST/3DPOLYGON/3DPOINTS\n"
"std_msgs/ColorRGBA[] outline_colors # a color for each line, point, etc.\n"
"\n"
"string[] frames # used for FRAMES, tf names\n"
"string text             # used for TEXT, draw size of text is scale\n"
"bool left_up_origin     # draw text from left up origin\n"
"bool ratio_scale        #Use ratio respected to original image to specify scale and position\n"
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
"MSG: geometry_msgs/PointStamped\n"
"# This represents a Point with reference coordinate frame and timestamp\n"
"Header header\n"
"Point point\n"
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
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/ColorRGBA\n"
"float32 r\n"
"float32 g\n"
"float32 b\n"
"float32 a\n"
"\n"
"================================================================================\n"
"MSG: image_view2/PointArrayStamped\n"
"Header header\n"
"\n"
"geometry_msgs/Point[] points\n"
"\n"
;
  }

  static const char* value(const ::image_view2::ImageMarker2_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::image_view2::ImageMarker2_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.ns);
      stream.next(m.id);
      stream.next(m.type);
      stream.next(m.action);
      stream.next(m.position);
      stream.next(m.position3D);
      stream.next(m.pose);
      stream.next(m.scale);
      stream.next(m.width);
      stream.next(m.outline_color);
      stream.next(m.filled);
      stream.next(m.fill_color);
      stream.next(m.lifetime);
      stream.next(m.arc);
      stream.next(m.angle);
      stream.next(m.points);
      stream.next(m.points3D);
      stream.next(m.outline_colors);
      stream.next(m.frames);
      stream.next(m.text);
      stream.next(m.left_up_origin);
      stream.next(m.ratio_scale);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ImageMarker2_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::image_view2::ImageMarker2_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::image_view2::ImageMarker2_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "ns: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.ns);
    s << indent << "id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.id);
    s << indent << "type: ";
    Printer<int32_t>::stream(s, indent + "  ", v.type);
    s << indent << "action: ";
    Printer<int32_t>::stream(s, indent + "  ", v.action);
    s << indent << "position: ";
    s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.position);
    s << indent << "position3D: ";
    s << std::endl;
    Printer< ::geometry_msgs::PointStamped_<ContainerAllocator> >::stream(s, indent + "  ", v.position3D);
    s << indent << "pose: ";
    s << std::endl;
    Printer< ::geometry_msgs::PoseStamped_<ContainerAllocator> >::stream(s, indent + "  ", v.pose);
    s << indent << "scale: ";
    Printer<float>::stream(s, indent + "  ", v.scale);
    s << indent << "width: ";
    Printer<float>::stream(s, indent + "  ", v.width);
    s << indent << "outline_color: ";
    s << std::endl;
    Printer< ::std_msgs::ColorRGBA_<ContainerAllocator> >::stream(s, indent + "  ", v.outline_color);
    s << indent << "filled: ";
    Printer<int8_t>::stream(s, indent + "  ", v.filled);
    s << indent << "fill_color: ";
    s << std::endl;
    Printer< ::std_msgs::ColorRGBA_<ContainerAllocator> >::stream(s, indent + "  ", v.fill_color);
    s << indent << "lifetime: ";
    Printer<ros::Duration>::stream(s, indent + "  ", v.lifetime);
    s << indent << "arc: ";
    Printer<int8_t>::stream(s, indent + "  ", v.arc);
    s << indent << "angle: ";
    Printer<float>::stream(s, indent + "  ", v.angle);
    s << indent << "points[]" << std::endl;
    for (size_t i = 0; i < v.points.size(); ++i)
    {
      s << indent << "  points[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "    ", v.points[i]);
    }
    s << indent << "points3D: ";
    s << std::endl;
    Printer< ::image_view2::PointArrayStamped_<ContainerAllocator> >::stream(s, indent + "  ", v.points3D);
    s << indent << "outline_colors[]" << std::endl;
    for (size_t i = 0; i < v.outline_colors.size(); ++i)
    {
      s << indent << "  outline_colors[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::std_msgs::ColorRGBA_<ContainerAllocator> >::stream(s, indent + "    ", v.outline_colors[i]);
    }
    s << indent << "frames[]" << std::endl;
    for (size_t i = 0; i < v.frames.size(); ++i)
    {
      s << indent << "  frames[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.frames[i]);
    }
    s << indent << "text: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.text);
    s << indent << "left_up_origin: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.left_up_origin);
    s << indent << "ratio_scale: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.ratio_scale);
  }
};

} // namespace message_operations
} // namespace ros

#endif // IMAGE_VIEW2_MESSAGE_IMAGEMARKER2_H
