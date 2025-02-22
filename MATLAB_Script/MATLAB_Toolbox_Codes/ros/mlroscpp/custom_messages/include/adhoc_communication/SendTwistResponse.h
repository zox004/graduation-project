// Generated by gencpp from file adhoc_communication/SendTwistResponse.msg
// DO NOT EDIT!


#ifndef ADHOC_COMMUNICATION_MESSAGE_SENDTWISTRESPONSE_H
#define ADHOC_COMMUNICATION_MESSAGE_SENDTWISTRESPONSE_H


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
struct SendTwistResponse_
{
  typedef SendTwistResponse_<ContainerAllocator> Type;

  SendTwistResponse_()
    : status(0)  {
    }
  SendTwistResponse_(const ContainerAllocator& _alloc)
    : status(0)  {
  (void)_alloc;
    }



   typedef uint8_t _status_type;
  _status_type status;





  typedef boost::shared_ptr< ::adhoc_communication::SendTwistResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::adhoc_communication::SendTwistResponse_<ContainerAllocator> const> ConstPtr;

}; // struct SendTwistResponse_

typedef ::adhoc_communication::SendTwistResponse_<std::allocator<void> > SendTwistResponse;

typedef boost::shared_ptr< ::adhoc_communication::SendTwistResponse > SendTwistResponsePtr;
typedef boost::shared_ptr< ::adhoc_communication::SendTwistResponse const> SendTwistResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::adhoc_communication::SendTwistResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::adhoc_communication::SendTwistResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::adhoc_communication::SendTwistResponse_<ContainerAllocator1> & lhs, const ::adhoc_communication::SendTwistResponse_<ContainerAllocator2> & rhs)
{
  return lhs.status == rhs.status;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::adhoc_communication::SendTwistResponse_<ContainerAllocator1> & lhs, const ::adhoc_communication::SendTwistResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace adhoc_communication

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::adhoc_communication::SendTwistResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::adhoc_communication::SendTwistResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::adhoc_communication::SendTwistResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::adhoc_communication::SendTwistResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::adhoc_communication::SendTwistResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::adhoc_communication::SendTwistResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::adhoc_communication::SendTwistResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "284aa12dd9e9e760802ac9f38036ea5e";
  }

  static const char* value(const ::adhoc_communication::SendTwistResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x284aa12dd9e9e760ULL;
  static const uint64_t static_value2 = 0x802ac9f38036ea5eULL;
};

template<class ContainerAllocator>
struct DataType< ::adhoc_communication::SendTwistResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "adhoc_communication/SendTwistResponse";
  }

  static const char* value(const ::adhoc_communication::SendTwistResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::adhoc_communication::SendTwistResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 status\n"
"\n"
;
  }

  static const char* value(const ::adhoc_communication::SendTwistResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::adhoc_communication::SendTwistResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.status);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SendTwistResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::adhoc_communication::SendTwistResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::adhoc_communication::SendTwistResponse_<ContainerAllocator>& v)
  {
    s << indent << "status: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.status);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ADHOC_COMMUNICATION_MESSAGE_SENDTWISTRESPONSE_H
