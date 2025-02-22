// Generated by gencpp from file gateway_msgs/SetWatcherPeriodResponse.msg
// DO NOT EDIT!


#ifndef GATEWAY_MSGS_MESSAGE_SETWATCHERPERIODRESPONSE_H
#define GATEWAY_MSGS_MESSAGE_SETWATCHERPERIODRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace gateway_msgs
{
template <class ContainerAllocator>
struct SetWatcherPeriodResponse_
{
  typedef SetWatcherPeriodResponse_<ContainerAllocator> Type;

  SetWatcherPeriodResponse_()
    : last_period(0.0)  {
    }
  SetWatcherPeriodResponse_(const ContainerAllocator& _alloc)
    : last_period(0.0)  {
  (void)_alloc;
    }



   typedef float _last_period_type;
  _last_period_type last_period;





  typedef boost::shared_ptr< ::gateway_msgs::SetWatcherPeriodResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::gateway_msgs::SetWatcherPeriodResponse_<ContainerAllocator> const> ConstPtr;

}; // struct SetWatcherPeriodResponse_

typedef ::gateway_msgs::SetWatcherPeriodResponse_<std::allocator<void> > SetWatcherPeriodResponse;

typedef boost::shared_ptr< ::gateway_msgs::SetWatcherPeriodResponse > SetWatcherPeriodResponsePtr;
typedef boost::shared_ptr< ::gateway_msgs::SetWatcherPeriodResponse const> SetWatcherPeriodResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::gateway_msgs::SetWatcherPeriodResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::gateway_msgs::SetWatcherPeriodResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::gateway_msgs::SetWatcherPeriodResponse_<ContainerAllocator1> & lhs, const ::gateway_msgs::SetWatcherPeriodResponse_<ContainerAllocator2> & rhs)
{
  return lhs.last_period == rhs.last_period;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::gateway_msgs::SetWatcherPeriodResponse_<ContainerAllocator1> & lhs, const ::gateway_msgs::SetWatcherPeriodResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace gateway_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::gateway_msgs::SetWatcherPeriodResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::gateway_msgs::SetWatcherPeriodResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::gateway_msgs::SetWatcherPeriodResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::gateway_msgs::SetWatcherPeriodResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gateway_msgs::SetWatcherPeriodResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gateway_msgs::SetWatcherPeriodResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::gateway_msgs::SetWatcherPeriodResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dbc70bcb9b617c59da49b8be04454dd5";
  }

  static const char* value(const ::gateway_msgs::SetWatcherPeriodResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xdbc70bcb9b617c59ULL;
  static const uint64_t static_value2 = 0xda49b8be04454dd5ULL;
};

template<class ContainerAllocator>
struct DataType< ::gateway_msgs::SetWatcherPeriodResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "gateway_msgs/SetWatcherPeriodResponse";
  }

  static const char* value(const ::gateway_msgs::SetWatcherPeriodResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::gateway_msgs::SetWatcherPeriodResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# return the previous setting used for this variable\n"
"float32 last_period\n"
;
  }

  static const char* value(const ::gateway_msgs::SetWatcherPeriodResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::gateway_msgs::SetWatcherPeriodResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.last_period);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetWatcherPeriodResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::gateway_msgs::SetWatcherPeriodResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::gateway_msgs::SetWatcherPeriodResponse_<ContainerAllocator>& v)
  {
    s << indent << "last_period: ";
    Printer<float>::stream(s, indent + "  ", v.last_period);
  }
};

} // namespace message_operations
} // namespace ros

#endif // GATEWAY_MSGS_MESSAGE_SETWATCHERPERIODRESPONSE_H
