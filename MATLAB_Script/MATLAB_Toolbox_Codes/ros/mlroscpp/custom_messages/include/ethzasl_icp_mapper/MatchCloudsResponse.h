// Generated by gencpp from file ethzasl_icp_mapper/MatchCloudsResponse.msg
// DO NOT EDIT!


#ifndef ETHZASL_ICP_MAPPER_MESSAGE_MATCHCLOUDSRESPONSE_H
#define ETHZASL_ICP_MAPPER_MESSAGE_MATCHCLOUDSRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Transform.h>

namespace ethzasl_icp_mapper
{
template <class ContainerAllocator>
struct MatchCloudsResponse_
{
  typedef MatchCloudsResponse_<ContainerAllocator> Type;

  MatchCloudsResponse_()
    : transform()  {
    }
  MatchCloudsResponse_(const ContainerAllocator& _alloc)
    : transform(_alloc)  {
  (void)_alloc;
    }



   typedef  ::geometry_msgs::Transform_<ContainerAllocator>  _transform_type;
  _transform_type transform;





  typedef boost::shared_ptr< ::ethzasl_icp_mapper::MatchCloudsResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ethzasl_icp_mapper::MatchCloudsResponse_<ContainerAllocator> const> ConstPtr;

}; // struct MatchCloudsResponse_

typedef ::ethzasl_icp_mapper::MatchCloudsResponse_<std::allocator<void> > MatchCloudsResponse;

typedef boost::shared_ptr< ::ethzasl_icp_mapper::MatchCloudsResponse > MatchCloudsResponsePtr;
typedef boost::shared_ptr< ::ethzasl_icp_mapper::MatchCloudsResponse const> MatchCloudsResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ethzasl_icp_mapper::MatchCloudsResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ethzasl_icp_mapper::MatchCloudsResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace ethzasl_icp_mapper

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'nav_msgs': ['/mathworks/devel/sbs/31/pmurali.Brobot.j1339814/matlab/sys/ros1/glnxa64/ros1/share/nav_msgs/cmake/../msg'], 'geometry_msgs': ['/mathworks/devel/sbs/31/pmurali.Brobot.j1339814/matlab/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/mathworks/devel/sbs/31/pmurali.Brobot.j1339814/matlab/sys/ros1/glnxa64/ros1/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/mathworks/devel/sbs/31/pmurali.Brobot.j1339814/matlab/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg', '/mathworks/devel/sbs/31/pmurali.Brobot.j1339814/matlab/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg'], 'sensor_msgs': ['/mathworks/devel/sbs/31/pmurali.Brobot.j1339814/matlab/sys/ros1/glnxa64/ros1/share/sensor_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::ethzasl_icp_mapper::MatchCloudsResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ethzasl_icp_mapper::MatchCloudsResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ethzasl_icp_mapper::MatchCloudsResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ethzasl_icp_mapper::MatchCloudsResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ethzasl_icp_mapper::MatchCloudsResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ethzasl_icp_mapper::MatchCloudsResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ethzasl_icp_mapper::MatchCloudsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c2d1de03cf5b052350d875b7cfbc84a5";
  }

  static const char* value(const ::ethzasl_icp_mapper::MatchCloudsResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc2d1de03cf5b0523ULL;
  static const uint64_t static_value2 = 0x50d875b7cfbc84a5ULL;
};

template<class ContainerAllocator>
struct DataType< ::ethzasl_icp_mapper::MatchCloudsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ethzasl_icp_mapper/MatchCloudsResponse";
  }

  static const char* value(const ::ethzasl_icp_mapper::MatchCloudsResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ethzasl_icp_mapper::MatchCloudsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "geometry_msgs/Transform transform\n"
"\n"
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

  static const char* value(const ::ethzasl_icp_mapper::MatchCloudsResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ethzasl_icp_mapper::MatchCloudsResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.transform);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MatchCloudsResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ethzasl_icp_mapper::MatchCloudsResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ethzasl_icp_mapper::MatchCloudsResponse_<ContainerAllocator>& v)
  {
    s << indent << "transform: ";
    s << std::endl;
    Printer< ::geometry_msgs::Transform_<ContainerAllocator> >::stream(s, indent + "  ", v.transform);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ETHZASL_ICP_MAPPER_MESSAGE_MATCHCLOUDSRESPONSE_H
