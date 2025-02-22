// Generated by gencpp from file adhoc_communication/ChangeMCMembershipRequest.msg
// DO NOT EDIT!


#ifndef ADHOC_COMMUNICATION_MESSAGE_CHANGEMCMEMBERSHIPREQUEST_H
#define ADHOC_COMMUNICATION_MESSAGE_CHANGEMCMEMBERSHIPREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace adhoc_communication
{
template <class ContainerAllocator>
struct ChangeMCMembershipRequest_
{
  typedef ChangeMCMembershipRequest_<ContainerAllocator> Type;

  ChangeMCMembershipRequest_()
    : group_name()
    , action(0)  {
    }
  ChangeMCMembershipRequest_(const ContainerAllocator& _alloc)
    : group_name(_alloc)
    , action(0)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _group_name_type;
  _group_name_type group_name;

   typedef uint8_t _action_type;
  _action_type action;





  typedef boost::shared_ptr< ::adhoc_communication::ChangeMCMembershipRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::adhoc_communication::ChangeMCMembershipRequest_<ContainerAllocator> const> ConstPtr;

}; // struct ChangeMCMembershipRequest_

typedef ::adhoc_communication::ChangeMCMembershipRequest_<std::allocator<void> > ChangeMCMembershipRequest;

typedef boost::shared_ptr< ::adhoc_communication::ChangeMCMembershipRequest > ChangeMCMembershipRequestPtr;
typedef boost::shared_ptr< ::adhoc_communication::ChangeMCMembershipRequest const> ChangeMCMembershipRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::adhoc_communication::ChangeMCMembershipRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::adhoc_communication::ChangeMCMembershipRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::adhoc_communication::ChangeMCMembershipRequest_<ContainerAllocator1> & lhs, const ::adhoc_communication::ChangeMCMembershipRequest_<ContainerAllocator2> & rhs)
{
  return lhs.group_name == rhs.group_name &&
    lhs.action == rhs.action;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::adhoc_communication::ChangeMCMembershipRequest_<ContainerAllocator1> & lhs, const ::adhoc_communication::ChangeMCMembershipRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace adhoc_communication

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::adhoc_communication::ChangeMCMembershipRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::adhoc_communication::ChangeMCMembershipRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::adhoc_communication::ChangeMCMembershipRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::adhoc_communication::ChangeMCMembershipRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::adhoc_communication::ChangeMCMembershipRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::adhoc_communication::ChangeMCMembershipRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::adhoc_communication::ChangeMCMembershipRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9bb5856b72fefbc5300bc83e541e5f62";
  }

  static const char* value(const ::adhoc_communication::ChangeMCMembershipRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9bb5856b72fefbc5ULL;
  static const uint64_t static_value2 = 0x300bc83e541e5f62ULL;
};

template<class ContainerAllocator>
struct DataType< ::adhoc_communication::ChangeMCMembershipRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "adhoc_communication/ChangeMCMembershipRequest";
  }

  static const char* value(const ::adhoc_communication::ChangeMCMembershipRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::adhoc_communication::ChangeMCMembershipRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string group_name\n"
"uint8 action\n"
;
  }

  static const char* value(const ::adhoc_communication::ChangeMCMembershipRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::adhoc_communication::ChangeMCMembershipRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.group_name);
      stream.next(m.action);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ChangeMCMembershipRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::adhoc_communication::ChangeMCMembershipRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::adhoc_communication::ChangeMCMembershipRequest_<ContainerAllocator>& v)
  {
    s << indent << "group_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.group_name);
    s << indent << "action: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.action);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ADHOC_COMMUNICATION_MESSAGE_CHANGEMCMEMBERSHIPREQUEST_H
