// Generated by gencpp from file pr2_controllers_msgs/Pr2GripperCommand.msg
// DO NOT EDIT!


#ifndef PR2_CONTROLLERS_MSGS_MESSAGE_PR2GRIPPERCOMMAND_H
#define PR2_CONTROLLERS_MSGS_MESSAGE_PR2GRIPPERCOMMAND_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace pr2_controllers_msgs
{
template <class ContainerAllocator>
struct Pr2GripperCommand_
{
  typedef Pr2GripperCommand_<ContainerAllocator> Type;

  Pr2GripperCommand_()
    : position(0.0)
    , max_effort(0.0)  {
    }
  Pr2GripperCommand_(const ContainerAllocator& _alloc)
    : position(0.0)
    , max_effort(0.0)  {
  (void)_alloc;
    }



   typedef double _position_type;
  _position_type position;

   typedef double _max_effort_type;
  _max_effort_type max_effort;





  typedef boost::shared_ptr< ::pr2_controllers_msgs::Pr2GripperCommand_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pr2_controllers_msgs::Pr2GripperCommand_<ContainerAllocator> const> ConstPtr;

}; // struct Pr2GripperCommand_

typedef ::pr2_controllers_msgs::Pr2GripperCommand_<std::allocator<void> > Pr2GripperCommand;

typedef boost::shared_ptr< ::pr2_controllers_msgs::Pr2GripperCommand > Pr2GripperCommandPtr;
typedef boost::shared_ptr< ::pr2_controllers_msgs::Pr2GripperCommand const> Pr2GripperCommandConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pr2_controllers_msgs::Pr2GripperCommand_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pr2_controllers_msgs::Pr2GripperCommand_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::pr2_controllers_msgs::Pr2GripperCommand_<ContainerAllocator1> & lhs, const ::pr2_controllers_msgs::Pr2GripperCommand_<ContainerAllocator2> & rhs)
{
  return lhs.position == rhs.position &&
    lhs.max_effort == rhs.max_effort;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::pr2_controllers_msgs::Pr2GripperCommand_<ContainerAllocator1> & lhs, const ::pr2_controllers_msgs::Pr2GripperCommand_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace pr2_controllers_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::pr2_controllers_msgs::Pr2GripperCommand_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pr2_controllers_msgs::Pr2GripperCommand_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pr2_controllers_msgs::Pr2GripperCommand_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pr2_controllers_msgs::Pr2GripperCommand_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pr2_controllers_msgs::Pr2GripperCommand_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pr2_controllers_msgs::Pr2GripperCommand_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pr2_controllers_msgs::Pr2GripperCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "680acaff79486f017132a7f198d40f08";
  }

  static const char* value(const ::pr2_controllers_msgs::Pr2GripperCommand_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x680acaff79486f01ULL;
  static const uint64_t static_value2 = 0x7132a7f198d40f08ULL;
};

template<class ContainerAllocator>
struct DataType< ::pr2_controllers_msgs::Pr2GripperCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pr2_controllers_msgs/Pr2GripperCommand";
  }

  static const char* value(const ::pr2_controllers_msgs::Pr2GripperCommand_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pr2_controllers_msgs::Pr2GripperCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 position\n"
"float64 max_effort\n"
;
  }

  static const char* value(const ::pr2_controllers_msgs::Pr2GripperCommand_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pr2_controllers_msgs::Pr2GripperCommand_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.position);
      stream.next(m.max_effort);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Pr2GripperCommand_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pr2_controllers_msgs::Pr2GripperCommand_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pr2_controllers_msgs::Pr2GripperCommand_<ContainerAllocator>& v)
  {
    s << indent << "position: ";
    Printer<double>::stream(s, indent + "  ", v.position);
    s << indent << "max_effort: ";
    Printer<double>::stream(s, indent + "  ", v.max_effort);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PR2_CONTROLLERS_MSGS_MESSAGE_PR2GRIPPERCOMMAND_H
