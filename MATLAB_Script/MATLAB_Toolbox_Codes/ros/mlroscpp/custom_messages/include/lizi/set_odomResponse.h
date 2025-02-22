// Generated by gencpp from file lizi/set_odomResponse.msg
// DO NOT EDIT!


#ifndef LIZI_MESSAGE_SET_ODOMRESPONSE_H
#define LIZI_MESSAGE_SET_ODOMRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace lizi
{
template <class ContainerAllocator>
struct set_odomResponse_
{
  typedef set_odomResponse_<ContainerAllocator> Type;

  set_odomResponse_()
    {
    }
  set_odomResponse_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::lizi::set_odomResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::lizi::set_odomResponse_<ContainerAllocator> const> ConstPtr;

}; // struct set_odomResponse_

typedef ::lizi::set_odomResponse_<std::allocator<void> > set_odomResponse;

typedef boost::shared_ptr< ::lizi::set_odomResponse > set_odomResponsePtr;
typedef boost::shared_ptr< ::lizi::set_odomResponse const> set_odomResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::lizi::set_odomResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::lizi::set_odomResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace lizi

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'lizi': ['/mathworks/home/pmurali/Documents/JKL/matlab_msg_gen_ros1/glnxa64/src/lizi/msg'], 'std_msgs': ['/mathworks/devel/sbs/31/pmurali.Brobot.j1339814/matlab/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::lizi::set_odomResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::lizi::set_odomResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::lizi::set_odomResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::lizi::set_odomResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::lizi::set_odomResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::lizi::set_odomResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::lizi::set_odomResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::lizi::set_odomResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::lizi::set_odomResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "lizi/set_odomResponse";
  }

  static const char* value(const ::lizi::set_odomResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::lizi::set_odomResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
;
  }

  static const char* value(const ::lizi::set_odomResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::lizi::set_odomResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct set_odomResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::lizi::set_odomResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::lizi::set_odomResponse_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // LIZI_MESSAGE_SET_ODOMRESPONSE_H
