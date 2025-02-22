// Generated by gencpp from file scanning_table_msgs/scanning_tableFeedback.msg
// DO NOT EDIT!


#ifndef SCANNING_TABLE_MSGS_MESSAGE_SCANNING_TABLEFEEDBACK_H
#define SCANNING_TABLE_MSGS_MESSAGE_SCANNING_TABLEFEEDBACK_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace scanning_table_msgs
{
template <class ContainerAllocator>
struct scanning_tableFeedback_
{
  typedef scanning_tableFeedback_<ContainerAllocator> Type;

  scanning_tableFeedback_()
    : status()
    , angle(0.0)  {
    }
  scanning_tableFeedback_(const ContainerAllocator& _alloc)
    : status(_alloc)
    , angle(0.0)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _status_type;
  _status_type status;

   typedef double _angle_type;
  _angle_type angle;





  typedef boost::shared_ptr< ::scanning_table_msgs::scanning_tableFeedback_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::scanning_table_msgs::scanning_tableFeedback_<ContainerAllocator> const> ConstPtr;

}; // struct scanning_tableFeedback_

typedef ::scanning_table_msgs::scanning_tableFeedback_<std::allocator<void> > scanning_tableFeedback;

typedef boost::shared_ptr< ::scanning_table_msgs::scanning_tableFeedback > scanning_tableFeedbackPtr;
typedef boost::shared_ptr< ::scanning_table_msgs::scanning_tableFeedback const> scanning_tableFeedbackConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::scanning_table_msgs::scanning_tableFeedback_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::scanning_table_msgs::scanning_tableFeedback_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace scanning_table_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'scanning_table_msgs': ['/local-ssd1/All_Custom_Msgs/PendingActionPackagesPart2/matlab_msg_gen_ros1/glnxa64/devel/share/scanning_table_msgs/msg'], 'std_msgs': ['/mathworks/devel/sbs/31/hakakarl.Brobot.j1347395/matlab/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg'], 'actionlib': ['/mathworks/devel/sbs/31/hakakarl.Brobot.j1347395/matlab/sys/ros1/glnxa64/ros1/share/actionlib/cmake/../msg'], 'actionlib_msgs': ['/mathworks/devel/sbs/31/hakakarl.Brobot.j1347395/matlab/sys/ros1/glnxa64/ros1/share/actionlib_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::scanning_table_msgs::scanning_tableFeedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::scanning_table_msgs::scanning_tableFeedback_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::scanning_table_msgs::scanning_tableFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::scanning_table_msgs::scanning_tableFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::scanning_table_msgs::scanning_tableFeedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::scanning_table_msgs::scanning_tableFeedback_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::scanning_table_msgs::scanning_tableFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4a681ad3008eccb572ca6f41372f1cd8";
  }

  static const char* value(const ::scanning_table_msgs::scanning_tableFeedback_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4a681ad3008eccb5ULL;
  static const uint64_t static_value2 = 0x72ca6f41372f1cd8ULL;
};

template<class ContainerAllocator>
struct DataType< ::scanning_table_msgs::scanning_tableFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "scanning_table_msgs/scanning_tableFeedback";
  }

  static const char* value(const ::scanning_table_msgs::scanning_tableFeedback_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::scanning_table_msgs::scanning_tableFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"#feedback\n"
"string status\n"
"float64 angle\n"
"\n"
"\n"
;
  }

  static const char* value(const ::scanning_table_msgs::scanning_tableFeedback_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::scanning_table_msgs::scanning_tableFeedback_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.status);
      stream.next(m.angle);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct scanning_tableFeedback_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::scanning_table_msgs::scanning_tableFeedback_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::scanning_table_msgs::scanning_tableFeedback_<ContainerAllocator>& v)
  {
    s << indent << "status: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.status);
    s << indent << "angle: ";
    Printer<double>::stream(s, indent + "  ", v.angle);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SCANNING_TABLE_MSGS_MESSAGE_SCANNING_TABLEFEEDBACK_H
