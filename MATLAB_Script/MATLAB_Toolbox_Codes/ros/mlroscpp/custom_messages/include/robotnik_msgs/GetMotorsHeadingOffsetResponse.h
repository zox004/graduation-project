// Generated by gencpp from file robotnik_msgs/GetMotorsHeadingOffsetResponse.msg
// DO NOT EDIT!


#ifndef ROBOTNIK_MSGS_MESSAGE_GETMOTORSHEADINGOFFSETRESPONSE_H
#define ROBOTNIK_MSGS_MESSAGE_GETMOTORSHEADINGOFFSETRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <robotnik_msgs/MotorHeadingOffset.h>

namespace robotnik_msgs
{
template <class ContainerAllocator>
struct GetMotorsHeadingOffsetResponse_
{
  typedef GetMotorsHeadingOffsetResponse_<ContainerAllocator> Type;

  GetMotorsHeadingOffsetResponse_()
    : offsets()  {
    }
  GetMotorsHeadingOffsetResponse_(const ContainerAllocator& _alloc)
    : offsets(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::robotnik_msgs::MotorHeadingOffset_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::robotnik_msgs::MotorHeadingOffset_<ContainerAllocator> >::other >  _offsets_type;
  _offsets_type offsets;





  typedef boost::shared_ptr< ::robotnik_msgs::GetMotorsHeadingOffsetResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robotnik_msgs::GetMotorsHeadingOffsetResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetMotorsHeadingOffsetResponse_

typedef ::robotnik_msgs::GetMotorsHeadingOffsetResponse_<std::allocator<void> > GetMotorsHeadingOffsetResponse;

typedef boost::shared_ptr< ::robotnik_msgs::GetMotorsHeadingOffsetResponse > GetMotorsHeadingOffsetResponsePtr;
typedef boost::shared_ptr< ::robotnik_msgs::GetMotorsHeadingOffsetResponse const> GetMotorsHeadingOffsetResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::robotnik_msgs::GetMotorsHeadingOffsetResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::robotnik_msgs::GetMotorsHeadingOffsetResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::robotnik_msgs::GetMotorsHeadingOffsetResponse_<ContainerAllocator1> & lhs, const ::robotnik_msgs::GetMotorsHeadingOffsetResponse_<ContainerAllocator2> & rhs)
{
  return lhs.offsets == rhs.offsets;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::robotnik_msgs::GetMotorsHeadingOffsetResponse_<ContainerAllocator1> & lhs, const ::robotnik_msgs::GetMotorsHeadingOffsetResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace robotnik_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::robotnik_msgs::GetMotorsHeadingOffsetResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robotnik_msgs::GetMotorsHeadingOffsetResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robotnik_msgs::GetMotorsHeadingOffsetResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robotnik_msgs::GetMotorsHeadingOffsetResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robotnik_msgs::GetMotorsHeadingOffsetResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robotnik_msgs::GetMotorsHeadingOffsetResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::robotnik_msgs::GetMotorsHeadingOffsetResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5893bfa41a37a6679598a2513e065848";
  }

  static const char* value(const ::robotnik_msgs::GetMotorsHeadingOffsetResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5893bfa41a37a667ULL;
  static const uint64_t static_value2 = 0x9598a2513e065848ULL;
};

template<class ContainerAllocator>
struct DataType< ::robotnik_msgs::GetMotorsHeadingOffsetResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "robotnik_msgs/GetMotorsHeadingOffsetResponse";
  }

  static const char* value(const ::robotnik_msgs::GetMotorsHeadingOffsetResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::robotnik_msgs::GetMotorsHeadingOffsetResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "robotnik_msgs/MotorHeadingOffset[] offsets\n"
"\n"
"\n"
"================================================================================\n"
"MSG: robotnik_msgs/MotorHeadingOffset\n"
"int32 motor\n"
"float64 value\n"
;
  }

  static const char* value(const ::robotnik_msgs::GetMotorsHeadingOffsetResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::robotnik_msgs::GetMotorsHeadingOffsetResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.offsets);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetMotorsHeadingOffsetResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robotnik_msgs::GetMotorsHeadingOffsetResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::robotnik_msgs::GetMotorsHeadingOffsetResponse_<ContainerAllocator>& v)
  {
    s << indent << "offsets[]" << std::endl;
    for (size_t i = 0; i < v.offsets.size(); ++i)
    {
      s << indent << "  offsets[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::robotnik_msgs::MotorHeadingOffset_<ContainerAllocator> >::stream(s, indent + "    ", v.offsets[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOTNIK_MSGS_MESSAGE_GETMOTORSHEADINGOFFSETRESPONSE_H
