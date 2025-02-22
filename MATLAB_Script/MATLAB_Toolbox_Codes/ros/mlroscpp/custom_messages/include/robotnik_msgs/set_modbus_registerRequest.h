// Generated by gencpp from file robotnik_msgs/set_modbus_registerRequest.msg
// DO NOT EDIT!


#ifndef ROBOTNIK_MSGS_MESSAGE_SET_MODBUS_REGISTERREQUEST_H
#define ROBOTNIK_MSGS_MESSAGE_SET_MODBUS_REGISTERREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace robotnik_msgs
{
template <class ContainerAllocator>
struct set_modbus_registerRequest_
{
  typedef set_modbus_registerRequest_<ContainerAllocator> Type;

  set_modbus_registerRequest_()
    : address(0)
    , value(0)  {
    }
  set_modbus_registerRequest_(const ContainerAllocator& _alloc)
    : address(0)
    , value(0)  {
  (void)_alloc;
    }



   typedef int32_t _address_type;
  _address_type address;

   typedef uint16_t _value_type;
  _value_type value;





  typedef boost::shared_ptr< ::robotnik_msgs::set_modbus_registerRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robotnik_msgs::set_modbus_registerRequest_<ContainerAllocator> const> ConstPtr;

}; // struct set_modbus_registerRequest_

typedef ::robotnik_msgs::set_modbus_registerRequest_<std::allocator<void> > set_modbus_registerRequest;

typedef boost::shared_ptr< ::robotnik_msgs::set_modbus_registerRequest > set_modbus_registerRequestPtr;
typedef boost::shared_ptr< ::robotnik_msgs::set_modbus_registerRequest const> set_modbus_registerRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::robotnik_msgs::set_modbus_registerRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::robotnik_msgs::set_modbus_registerRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::robotnik_msgs::set_modbus_registerRequest_<ContainerAllocator1> & lhs, const ::robotnik_msgs::set_modbus_registerRequest_<ContainerAllocator2> & rhs)
{
  return lhs.address == rhs.address &&
    lhs.value == rhs.value;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::robotnik_msgs::set_modbus_registerRequest_<ContainerAllocator1> & lhs, const ::robotnik_msgs::set_modbus_registerRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace robotnik_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::robotnik_msgs::set_modbus_registerRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robotnik_msgs::set_modbus_registerRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robotnik_msgs::set_modbus_registerRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robotnik_msgs::set_modbus_registerRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robotnik_msgs::set_modbus_registerRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robotnik_msgs::set_modbus_registerRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::robotnik_msgs::set_modbus_registerRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f6a5f26f6d6b4cf2de96262413c766f1";
  }

  static const char* value(const ::robotnik_msgs::set_modbus_registerRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf6a5f26f6d6b4cf2ULL;
  static const uint64_t static_value2 = 0xde96262413c766f1ULL;
};

template<class ContainerAllocator>
struct DataType< ::robotnik_msgs::set_modbus_registerRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "robotnik_msgs/set_modbus_registerRequest";
  }

  static const char* value(const ::robotnik_msgs::set_modbus_registerRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::robotnik_msgs::set_modbus_registerRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 address\n"
"uint16 value\n"
;
  }

  static const char* value(const ::robotnik_msgs::set_modbus_registerRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::robotnik_msgs::set_modbus_registerRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.address);
      stream.next(m.value);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct set_modbus_registerRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robotnik_msgs::set_modbus_registerRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::robotnik_msgs::set_modbus_registerRequest_<ContainerAllocator>& v)
  {
    s << indent << "address: ";
    Printer<int32_t>::stream(s, indent + "  ", v.address);
    s << indent << "value: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.value);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOTNIK_MSGS_MESSAGE_SET_MODBUS_REGISTERREQUEST_H
