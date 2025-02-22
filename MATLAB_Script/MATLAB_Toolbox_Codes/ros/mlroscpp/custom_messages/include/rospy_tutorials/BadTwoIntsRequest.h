// Generated by gencpp from file rospy_tutorials/BadTwoIntsRequest.msg
// DO NOT EDIT!


#ifndef ROSPY_TUTORIALS_MESSAGE_BADTWOINTSREQUEST_H
#define ROSPY_TUTORIALS_MESSAGE_BADTWOINTSREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace rospy_tutorials
{
template <class ContainerAllocator>
struct BadTwoIntsRequest_
{
  typedef BadTwoIntsRequest_<ContainerAllocator> Type;

  BadTwoIntsRequest_()
    : a(0)
    , b(0)  {
    }
  BadTwoIntsRequest_(const ContainerAllocator& _alloc)
    : a(0)
    , b(0)  {
  (void)_alloc;
    }



   typedef int64_t _a_type;
  _a_type a;

   typedef int32_t _b_type;
  _b_type b;





  typedef boost::shared_ptr< ::rospy_tutorials::BadTwoIntsRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rospy_tutorials::BadTwoIntsRequest_<ContainerAllocator> const> ConstPtr;

}; // struct BadTwoIntsRequest_

typedef ::rospy_tutorials::BadTwoIntsRequest_<std::allocator<void> > BadTwoIntsRequest;

typedef boost::shared_ptr< ::rospy_tutorials::BadTwoIntsRequest > BadTwoIntsRequestPtr;
typedef boost::shared_ptr< ::rospy_tutorials::BadTwoIntsRequest const> BadTwoIntsRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rospy_tutorials::BadTwoIntsRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rospy_tutorials::BadTwoIntsRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace rospy_tutorials

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'rospy_tutorials': ['/mathworks/home/pmurali/Documents/R/matlab_msg_gen_ros1/glnxa64/src/rospy_tutorials/msg'], 'std_msgs': ['/mathworks/devel/sbs/31/pmurali.Brobot.j1339814/matlab/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg', '/mathworks/devel/sbs/31/pmurali.Brobot.j1339814/matlab/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::rospy_tutorials::BadTwoIntsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rospy_tutorials::BadTwoIntsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rospy_tutorials::BadTwoIntsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rospy_tutorials::BadTwoIntsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rospy_tutorials::BadTwoIntsRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rospy_tutorials::BadTwoIntsRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rospy_tutorials::BadTwoIntsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "29bb5c7dea8bf822f53e94b0ee5a3a56";
  }

  static const char* value(const ::rospy_tutorials::BadTwoIntsRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x29bb5c7dea8bf822ULL;
  static const uint64_t static_value2 = 0xf53e94b0ee5a3a56ULL;
};

template<class ContainerAllocator>
struct DataType< ::rospy_tutorials::BadTwoIntsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rospy_tutorials/BadTwoIntsRequest";
  }

  static const char* value(const ::rospy_tutorials::BadTwoIntsRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rospy_tutorials::BadTwoIntsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"int64 a\n"
"int32 b\n"
;
  }

  static const char* value(const ::rospy_tutorials::BadTwoIntsRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rospy_tutorials::BadTwoIntsRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.a);
      stream.next(m.b);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct BadTwoIntsRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rospy_tutorials::BadTwoIntsRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rospy_tutorials::BadTwoIntsRequest_<ContainerAllocator>& v)
  {
    s << indent << "a: ";
    Printer<int64_t>::stream(s, indent + "  ", v.a);
    s << indent << "b: ";
    Printer<int32_t>::stream(s, indent + "  ", v.b);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROSPY_TUTORIALS_MESSAGE_BADTWOINTSREQUEST_H
