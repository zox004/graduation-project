// Generated by gencpp from file grasp_stability_msgs/GraspStability.msg
// DO NOT EDIT!


#ifndef GRASP_STABILITY_MSGS_MESSAGE_GRASPSTABILITY_H
#define GRASP_STABILITY_MSGS_MESSAGE_GRASPSTABILITY_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace grasp_stability_msgs
{
template <class ContainerAllocator>
struct GraspStability_
{
  typedef GraspStability_<ContainerAllocator> Type;

  GraspStability_()
    : measurement_context_id()
    , grasp_quality(0.0)
    , estimation_confidence(0.0)
    , grasp_category(0)  {
    }
  GraspStability_(const ContainerAllocator& _alloc)
    : measurement_context_id(_alloc)
    , grasp_quality(0.0)
    , estimation_confidence(0.0)
    , grasp_category(0)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _measurement_context_id_type;
  _measurement_context_id_type measurement_context_id;

   typedef float _grasp_quality_type;
  _grasp_quality_type grasp_quality;

   typedef float _estimation_confidence_type;
  _estimation_confidence_type estimation_confidence;

   typedef int32_t _grasp_category_type;
  _grasp_category_type grasp_category;



  enum {
    GRASP_CAT_UNDEFINED = 0,
    GRASP_CAT_GOOD = 1,
    GRASP_CAT_MEDIUM = 2,
    GRASP_CAT_BAD = 3,
  };


  typedef boost::shared_ptr< ::grasp_stability_msgs::GraspStability_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::grasp_stability_msgs::GraspStability_<ContainerAllocator> const> ConstPtr;

}; // struct GraspStability_

typedef ::grasp_stability_msgs::GraspStability_<std::allocator<void> > GraspStability;

typedef boost::shared_ptr< ::grasp_stability_msgs::GraspStability > GraspStabilityPtr;
typedef boost::shared_ptr< ::grasp_stability_msgs::GraspStability const> GraspStabilityConstPtr;

// constants requiring out of line definition

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::grasp_stability_msgs::GraspStability_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::grasp_stability_msgs::GraspStability_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace grasp_stability_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'grasp_stability_msgs': ['/mathworks/home/pmurali/Documents/Working/matlab_msg_gen_ros1/glnxa64/src/grasp_stability_msgs/msg'], 'std_msgs': ['/mathworks/devel/sbs/31/pmurali.Brobot.j1329247.2/matlab/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::grasp_stability_msgs::GraspStability_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::grasp_stability_msgs::GraspStability_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::grasp_stability_msgs::GraspStability_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::grasp_stability_msgs::GraspStability_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::grasp_stability_msgs::GraspStability_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::grasp_stability_msgs::GraspStability_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::grasp_stability_msgs::GraspStability_<ContainerAllocator> >
{
  static const char* value()
  {
    return "27f85b330ae8a5e5c97d0bc8c3a83f4a";
  }

  static const char* value(const ::grasp_stability_msgs::GraspStability_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x27f85b330ae8a5e5ULL;
  static const uint64_t static_value2 = 0xc97d0bc8c3a83f4aULL;
};

template<class ContainerAllocator>
struct DataType< ::grasp_stability_msgs::GraspStability_<ContainerAllocator> >
{
  static const char* value()
  {
    return "grasp_stability_msgs/GraspStability";
  }

  static const char* value(const ::grasp_stability_msgs::GraspStability_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::grasp_stability_msgs::GraspStability_<ContainerAllocator> >
{
  static const char* value()
  {
    return "## All of these fields are subject to change as the discussion about\n"
"## integration of grasp stability estimation and CRAM progresses\n"
"\n"
"\n"
"# For telling different grasp stability estimations (i.e. multiple\n"
"# arms that are monitored simultaneously) apart.\n"
"string measurement_context_id\n"
"\n"
"# Functional data, describing the results of the estimation, and\n"
"# the confidence in the result.\n"
"float32 grasp_quality		# range: 0.0 - 1.0\n"
"float32 estimation_confidence	# range: 0.0 - 1.0\n"
"\n"
"# Grasp category, based on the above values\n"
"int32 GRASP_CAT_UNDEFINED=0\n"
"int32 GRASP_CAT_GOOD=1\n"
"int32 GRASP_CAT_MEDIUM=2\n"
"int32 GRASP_CAT_BAD=3\n"
"\n"
"int32 grasp_category		# the category of the grasp\n"
;
  }

  static const char* value(const ::grasp_stability_msgs::GraspStability_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::grasp_stability_msgs::GraspStability_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.measurement_context_id);
      stream.next(m.grasp_quality);
      stream.next(m.estimation_confidence);
      stream.next(m.grasp_category);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GraspStability_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::grasp_stability_msgs::GraspStability_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::grasp_stability_msgs::GraspStability_<ContainerAllocator>& v)
  {
    s << indent << "measurement_context_id: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.measurement_context_id);
    s << indent << "grasp_quality: ";
    Printer<float>::stream(s, indent + "  ", v.grasp_quality);
    s << indent << "estimation_confidence: ";
    Printer<float>::stream(s, indent + "  ", v.estimation_confidence);
    s << indent << "grasp_category: ";
    Printer<int32_t>::stream(s, indent + "  ", v.grasp_category);
  }
};

} // namespace message_operations
} // namespace ros

#endif // GRASP_STABILITY_MSGS_MESSAGE_GRASPSTABILITY_H
