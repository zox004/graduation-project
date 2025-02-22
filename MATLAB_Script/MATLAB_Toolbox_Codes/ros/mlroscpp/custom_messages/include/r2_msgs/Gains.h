// Generated by gencpp from file r2_msgs/Gains.msg
// DO NOT EDIT!


#ifndef R2_MSGS_MESSAGE_GAINS_H
#define R2_MSGS_MESSAGE_GAINS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace r2_msgs
{
template <class ContainerAllocator>
struct Gains_
{
  typedef Gains_<ContainerAllocator> Type;

  Gains_()
    : joint_names()
    , K()
    , D()  {
    }
  Gains_(const ContainerAllocator& _alloc)
    : joint_names(_alloc)
    , K(_alloc)
    , D(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _joint_names_type;
  _joint_names_type joint_names;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _K_type;
  _K_type K;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _D_type;
  _D_type D;





  typedef boost::shared_ptr< ::r2_msgs::Gains_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::r2_msgs::Gains_<ContainerAllocator> const> ConstPtr;

}; // struct Gains_

typedef ::r2_msgs::Gains_<std::allocator<void> > Gains;

typedef boost::shared_ptr< ::r2_msgs::Gains > GainsPtr;
typedef boost::shared_ptr< ::r2_msgs::Gains const> GainsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::r2_msgs::Gains_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::r2_msgs::Gains_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace r2_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/mathworks/home/pmurali/Documents/Working/matlab_msg_gen_ros1/glnxa64/src/geometry_msgs/msg'], 'r2_msgs': ['/mathworks/home/pmurali/Documents/Working/matlab_msg_gen_ros1/glnxa64/src/r2_msgs/msg'], 'std_msgs': ['/mathworks/devel/sbs/31/pmurali.Brobot.j1329247.2/matlab/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg', '/mathworks/devel/sbs/31/pmurali.Brobot.j1329247.2/matlab/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::r2_msgs::Gains_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::r2_msgs::Gains_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::r2_msgs::Gains_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::r2_msgs::Gains_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::r2_msgs::Gains_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::r2_msgs::Gains_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::r2_msgs::Gains_<ContainerAllocator> >
{
  static const char* value()
  {
    return "689bcaebe3b1d4a08d9dd0ca1971d522";
  }

  static const char* value(const ::r2_msgs::Gains_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x689bcaebe3b1d4a0ULL;
  static const uint64_t static_value2 = 0x8d9dd0ca1971d522ULL;
};

template<class ContainerAllocator>
struct DataType< ::r2_msgs::Gains_<ContainerAllocator> >
{
  static const char* value()
  {
    return "r2_msgs/Gains";
  }

  static const char* value(const ::r2_msgs::Gains_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::r2_msgs::Gains_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string[] joint_names\n"
"float64[] K\n"
"float64[] D\n"
;
  }

  static const char* value(const ::r2_msgs::Gains_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::r2_msgs::Gains_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.joint_names);
      stream.next(m.K);
      stream.next(m.D);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Gains_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::r2_msgs::Gains_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::r2_msgs::Gains_<ContainerAllocator>& v)
  {
    s << indent << "joint_names[]" << std::endl;
    for (size_t i = 0; i < v.joint_names.size(); ++i)
    {
      s << indent << "  joint_names[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.joint_names[i]);
    }
    s << indent << "K[]" << std::endl;
    for (size_t i = 0; i < v.K.size(); ++i)
    {
      s << indent << "  K[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.K[i]);
    }
    s << indent << "D[]" << std::endl;
    for (size_t i = 0; i < v.D.size(); ++i)
    {
      s << indent << "  D[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.D[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // R2_MSGS_MESSAGE_GAINS_H
