// Generated by gencpp from file bwi_planning_common/PlannerInterfaceResponse.msg
// DO NOT EDIT!


#ifndef BWI_PLANNING_COMMON_MESSAGE_PLANNERINTERFACERESPONSE_H
#define BWI_PLANNING_COMMON_MESSAGE_PLANNERINTERFACERESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <bwi_planning_common/PlannerAtom.h>

namespace bwi_planning_common
{
template <class ContainerAllocator>
struct PlannerInterfaceResponse_
{
  typedef PlannerInterfaceResponse_<ContainerAllocator> Type;

  PlannerInterfaceResponse_()
    : success(false)
    , status()
    , observations()  {
    }
  PlannerInterfaceResponse_(const ContainerAllocator& _alloc)
    : success(false)
    , status(_alloc)
    , observations(_alloc)  {
  (void)_alloc;
    }



   typedef uint8_t _success_type;
  _success_type success;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _status_type;
  _status_type status;

   typedef std::vector< ::bwi_planning_common::PlannerAtom_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::bwi_planning_common::PlannerAtom_<ContainerAllocator> >::other >  _observations_type;
  _observations_type observations;





  typedef boost::shared_ptr< ::bwi_planning_common::PlannerInterfaceResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::bwi_planning_common::PlannerInterfaceResponse_<ContainerAllocator> const> ConstPtr;

}; // struct PlannerInterfaceResponse_

typedef ::bwi_planning_common::PlannerInterfaceResponse_<std::allocator<void> > PlannerInterfaceResponse;

typedef boost::shared_ptr< ::bwi_planning_common::PlannerInterfaceResponse > PlannerInterfaceResponsePtr;
typedef boost::shared_ptr< ::bwi_planning_common::PlannerInterfaceResponse const> PlannerInterfaceResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::bwi_planning_common::PlannerInterfaceResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::bwi_planning_common::PlannerInterfaceResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace bwi_planning_common

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'bwi_planning_common': ['/mathworks/home/pmurali/Documents/Test 3/matlab_msg_gen_ros1/glnxa64/src/bwi_planning_common/msg'], 'std_msgs': ['/mathworks/devel/sbs/31/pmurali.Brobot.j1339814/matlab/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::bwi_planning_common::PlannerInterfaceResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::bwi_planning_common::PlannerInterfaceResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::bwi_planning_common::PlannerInterfaceResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::bwi_planning_common::PlannerInterfaceResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bwi_planning_common::PlannerInterfaceResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bwi_planning_common::PlannerInterfaceResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::bwi_planning_common::PlannerInterfaceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4b369ca08113322eccf2b5371446d8fc";
  }

  static const char* value(const ::bwi_planning_common::PlannerInterfaceResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4b369ca08113322eULL;
  static const uint64_t static_value2 = 0xccf2b5371446d8fcULL;
};

template<class ContainerAllocator>
struct DataType< ::bwi_planning_common::PlannerInterfaceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bwi_planning_common/PlannerInterfaceResponse";
  }

  static const char* value(const ::bwi_planning_common::PlannerInterfaceResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::bwi_planning_common::PlannerInterfaceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool success\n"
"string status\n"
"PlannerAtom[] observations\n"
"\n"
"\n"
"================================================================================\n"
"MSG: bwi_planning_common/PlannerAtom\n"
"string name\n"
"string[] value\n"
;
  }

  static const char* value(const ::bwi_planning_common::PlannerInterfaceResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::bwi_planning_common::PlannerInterfaceResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.success);
      stream.next(m.status);
      stream.next(m.observations);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PlannerInterfaceResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::bwi_planning_common::PlannerInterfaceResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::bwi_planning_common::PlannerInterfaceResponse_<ContainerAllocator>& v)
  {
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
    s << indent << "status: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.status);
    s << indent << "observations[]" << std::endl;
    for (size_t i = 0; i < v.observations.size(); ++i)
    {
      s << indent << "  observations[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::bwi_planning_common::PlannerAtom_<ContainerAllocator> >::stream(s, indent + "    ", v.observations[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // BWI_PLANNING_COMMON_MESSAGE_PLANNERINTERFACERESPONSE_H
