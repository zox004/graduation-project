// Generated by gencpp from file capabilities/StopCapabilityRequest.msg
// DO NOT EDIT!


#ifndef CAPABILITIES_MESSAGE_STOPCAPABILITYREQUEST_H
#define CAPABILITIES_MESSAGE_STOPCAPABILITYREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace capabilities
{
template <class ContainerAllocator>
struct StopCapabilityRequest_
{
  typedef StopCapabilityRequest_<ContainerAllocator> Type;

  StopCapabilityRequest_()
    : capability()  {
    }
  StopCapabilityRequest_(const ContainerAllocator& _alloc)
    : capability(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _capability_type;
  _capability_type capability;





  typedef boost::shared_ptr< ::capabilities::StopCapabilityRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::capabilities::StopCapabilityRequest_<ContainerAllocator> const> ConstPtr;

}; // struct StopCapabilityRequest_

typedef ::capabilities::StopCapabilityRequest_<std::allocator<void> > StopCapabilityRequest;

typedef boost::shared_ptr< ::capabilities::StopCapabilityRequest > StopCapabilityRequestPtr;
typedef boost::shared_ptr< ::capabilities::StopCapabilityRequest const> StopCapabilityRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::capabilities::StopCapabilityRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::capabilities::StopCapabilityRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::capabilities::StopCapabilityRequest_<ContainerAllocator1> & lhs, const ::capabilities::StopCapabilityRequest_<ContainerAllocator2> & rhs)
{
  return lhs.capability == rhs.capability;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::capabilities::StopCapabilityRequest_<ContainerAllocator1> & lhs, const ::capabilities::StopCapabilityRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace capabilities

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::capabilities::StopCapabilityRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::capabilities::StopCapabilityRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::capabilities::StopCapabilityRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::capabilities::StopCapabilityRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::capabilities::StopCapabilityRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::capabilities::StopCapabilityRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::capabilities::StopCapabilityRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e0d1dd20c6cc3fed63f3710228856be9";
  }

  static const char* value(const ::capabilities::StopCapabilityRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe0d1dd20c6cc3fedULL;
  static const uint64_t static_value2 = 0x63f3710228856be9ULL;
};

template<class ContainerAllocator>
struct DataType< ::capabilities::StopCapabilityRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "capabilities/StopCapabilityRequest";
  }

  static const char* value(const ::capabilities::StopCapabilityRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::capabilities::StopCapabilityRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string capability\n"
;
  }

  static const char* value(const ::capabilities::StopCapabilityRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::capabilities::StopCapabilityRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.capability);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct StopCapabilityRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::capabilities::StopCapabilityRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::capabilities::StopCapabilityRequest_<ContainerAllocator>& v)
  {
    s << indent << "capability: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.capability);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CAPABILITIES_MESSAGE_STOPCAPABILITYREQUEST_H
