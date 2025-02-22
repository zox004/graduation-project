// Generated by gencpp from file handle_detector/CylinderMsg.msg
// DO NOT EDIT!


#ifndef HANDLE_DETECTOR_MESSAGE_CYLINDERMSG_H
#define HANDLE_DETECTOR_MESSAGE_CYLINDERMSG_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Pose.h>
#include <geometry_msgs/Vector3.h>
#include <geometry_msgs/Vector3.h>

namespace handle_detector
{
template <class ContainerAllocator>
struct CylinderMsg_
{
  typedef CylinderMsg_<ContainerAllocator> Type;

  CylinderMsg_()
    : pose()
    , radius(0.0)
    , extent(0.0)
    , axis()
    , normal()  {
    }
  CylinderMsg_(const ContainerAllocator& _alloc)
    : pose(_alloc)
    , radius(0.0)
    , extent(0.0)
    , axis(_alloc)
    , normal(_alloc)  {
  (void)_alloc;
    }



   typedef  ::geometry_msgs::Pose_<ContainerAllocator>  _pose_type;
  _pose_type pose;

   typedef float _radius_type;
  _radius_type radius;

   typedef float _extent_type;
  _extent_type extent;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _axis_type;
  _axis_type axis;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _normal_type;
  _normal_type normal;





  typedef boost::shared_ptr< ::handle_detector::CylinderMsg_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::handle_detector::CylinderMsg_<ContainerAllocator> const> ConstPtr;

}; // struct CylinderMsg_

typedef ::handle_detector::CylinderMsg_<std::allocator<void> > CylinderMsg;

typedef boost::shared_ptr< ::handle_detector::CylinderMsg > CylinderMsgPtr;
typedef boost::shared_ptr< ::handle_detector::CylinderMsg const> CylinderMsgConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::handle_detector::CylinderMsg_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::handle_detector::CylinderMsg_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace handle_detector

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/mathworks/devel/sbs/31/pmurali.Brobot.j1329247.2/matlab/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg', '/mathworks/devel/sbs/31/pmurali.Brobot.j1329247.2/matlab/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg'], 'handle_detector': ['/mathworks/home/pmurali/Documents/Working/matlab_msg_gen_ros1/glnxa64/src/handle_detector/msg'], 'geometry_msgs': ['/mathworks/home/pmurali/Documents/Working/matlab_msg_gen_ros1/glnxa64/src/geometry_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::handle_detector::CylinderMsg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::handle_detector::CylinderMsg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::handle_detector::CylinderMsg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::handle_detector::CylinderMsg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::handle_detector::CylinderMsg_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::handle_detector::CylinderMsg_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::handle_detector::CylinderMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d942b1ab5090fe359833c2797e326219";
  }

  static const char* value(const ::handle_detector::CylinderMsg_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd942b1ab5090fe35ULL;
  static const uint64_t static_value2 = 0x9833c2797e326219ULL;
};

template<class ContainerAllocator>
struct DataType< ::handle_detector::CylinderMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "handle_detector/CylinderMsg";
  }

  static const char* value(const ::handle_detector::CylinderMsg_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::handle_detector::CylinderMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# A cylinder with its pose, radius, and extent.\n"
"\n"
"geometry_msgs/Pose pose\n"
"\n"
"float32 radius\n"
"\n"
"float32 extent\n"
"\n"
"# curvature axis (direction vector)\n"
"geometry_msgs/Vector3 axis\n"
" \n"
"# normal axis (direction vector)\n"
"geometry_msgs/Vector3 normal\n"
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

  static const char* value(const ::handle_detector::CylinderMsg_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::handle_detector::CylinderMsg_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.pose);
      stream.next(m.radius);
      stream.next(m.extent);
      stream.next(m.axis);
      stream.next(m.normal);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CylinderMsg_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::handle_detector::CylinderMsg_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::handle_detector::CylinderMsg_<ContainerAllocator>& v)
  {
    s << indent << "pose: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "  ", v.pose);
    s << indent << "radius: ";
    Printer<float>::stream(s, indent + "  ", v.radius);
    s << indent << "extent: ";
    Printer<float>::stream(s, indent + "  ", v.extent);
    s << indent << "axis: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.axis);
    s << indent << "normal: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.normal);
  }
};

} // namespace message_operations
} // namespace ros

#endif // HANDLE_DETECTOR_MESSAGE_CYLINDERMSG_H
