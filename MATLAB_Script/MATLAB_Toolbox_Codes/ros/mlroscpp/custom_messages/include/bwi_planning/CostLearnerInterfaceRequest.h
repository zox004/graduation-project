// Generated by gencpp from file bwi_planning/CostLearnerInterfaceRequest.msg
// DO NOT EDIT!


#ifndef BWI_PLANNING_MESSAGE_COSTLEARNERINTERFACEREQUEST_H
#define BWI_PLANNING_MESSAGE_COSTLEARNERINTERFACEREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace bwi_planning
{
template <class ContainerAllocator>
struct CostLearnerInterfaceRequest_
{
  typedef CostLearnerInterfaceRequest_<ContainerAllocator> Type;

  CostLearnerInterfaceRequest_()
    : location()
    , door_from()
    , door_to()
    , cost(0.0)  {
    }
  CostLearnerInterfaceRequest_(const ContainerAllocator& _alloc)
    : location(_alloc)
    , door_from(_alloc)
    , door_to(_alloc)
    , cost(0.0)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _location_type;
  _location_type location;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _door_from_type;
  _door_from_type door_from;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _door_to_type;
  _door_to_type door_to;

   typedef float _cost_type;
  _cost_type cost;





  typedef boost::shared_ptr< ::bwi_planning::CostLearnerInterfaceRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::bwi_planning::CostLearnerInterfaceRequest_<ContainerAllocator> const> ConstPtr;

}; // struct CostLearnerInterfaceRequest_

typedef ::bwi_planning::CostLearnerInterfaceRequest_<std::allocator<void> > CostLearnerInterfaceRequest;

typedef boost::shared_ptr< ::bwi_planning::CostLearnerInterfaceRequest > CostLearnerInterfaceRequestPtr;
typedef boost::shared_ptr< ::bwi_planning::CostLearnerInterfaceRequest const> CostLearnerInterfaceRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::bwi_planning::CostLearnerInterfaceRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::bwi_planning::CostLearnerInterfaceRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace bwi_planning

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/mathworks/devel/sbs/31/jkonakal.Brobot.j1364265/matlab/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::bwi_planning::CostLearnerInterfaceRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::bwi_planning::CostLearnerInterfaceRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::bwi_planning::CostLearnerInterfaceRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::bwi_planning::CostLearnerInterfaceRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bwi_planning::CostLearnerInterfaceRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bwi_planning::CostLearnerInterfaceRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::bwi_planning::CostLearnerInterfaceRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "627a1a3de8dd9f91e561a53c602eba1d";
  }

  static const char* value(const ::bwi_planning::CostLearnerInterfaceRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x627a1a3de8dd9f91ULL;
  static const uint64_t static_value2 = 0xe561a53c602eba1dULL;
};

template<class ContainerAllocator>
struct DataType< ::bwi_planning::CostLearnerInterfaceRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bwi_planning/CostLearnerInterfaceRequest";
  }

  static const char* value(const ::bwi_planning::CostLearnerInterfaceRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::bwi_planning::CostLearnerInterfaceRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"string location\n"
"string door_from\n"
"string door_to\n"
"float32 cost\n"
;
  }

  static const char* value(const ::bwi_planning::CostLearnerInterfaceRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::bwi_planning::CostLearnerInterfaceRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.location);
      stream.next(m.door_from);
      stream.next(m.door_to);
      stream.next(m.cost);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CostLearnerInterfaceRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::bwi_planning::CostLearnerInterfaceRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::bwi_planning::CostLearnerInterfaceRequest_<ContainerAllocator>& v)
  {
    s << indent << "location: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.location);
    s << indent << "door_from: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.door_from);
    s << indent << "door_to: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.door_to);
    s << indent << "cost: ";
    Printer<float>::stream(s, indent + "  ", v.cost);
  }
};

} // namespace message_operations
} // namespace ros

#endif // BWI_PLANNING_MESSAGE_COSTLEARNERINTERFACEREQUEST_H
