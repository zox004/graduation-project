// Generated by gencpp from file play_motion_msgs/ListMotionsResponse.msg
// DO NOT EDIT!


#ifndef PLAY_MOTION_MSGS_MESSAGE_LISTMOTIONSRESPONSE_H
#define PLAY_MOTION_MSGS_MESSAGE_LISTMOTIONSRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <play_motion_msgs/MotionInfo.h>

namespace play_motion_msgs
{
template <class ContainerAllocator>
struct ListMotionsResponse_
{
  typedef ListMotionsResponse_<ContainerAllocator> Type;

  ListMotionsResponse_()
    : motions()  {
    }
  ListMotionsResponse_(const ContainerAllocator& _alloc)
    : motions(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::play_motion_msgs::MotionInfo_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::play_motion_msgs::MotionInfo_<ContainerAllocator> >::other >  _motions_type;
  _motions_type motions;





  typedef boost::shared_ptr< ::play_motion_msgs::ListMotionsResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::play_motion_msgs::ListMotionsResponse_<ContainerAllocator> const> ConstPtr;

}; // struct ListMotionsResponse_

typedef ::play_motion_msgs::ListMotionsResponse_<std::allocator<void> > ListMotionsResponse;

typedef boost::shared_ptr< ::play_motion_msgs::ListMotionsResponse > ListMotionsResponsePtr;
typedef boost::shared_ptr< ::play_motion_msgs::ListMotionsResponse const> ListMotionsResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::play_motion_msgs::ListMotionsResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::play_motion_msgs::ListMotionsResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace play_motion_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'play_motion_msgs': ['/local-ssd1/All_Custom_Msgs/PendingActionPackages/matlab_msg_gen_ros1/glnxa64/src/play_motion_msgs/msg', '/local-ssd1/All_Custom_Msgs/PendingActionPackages/matlab_msg_gen_ros1/glnxa64/devel/share/play_motion_msgs/msg'], 'actionlib': ['/mathworks/devel/sbs/31/hakakarl.Brobot.j1347395/matlab/sys/ros1/glnxa64/ros1/share/actionlib/cmake/../msg'], 'std_msgs': ['/mathworks/devel/sbs/31/hakakarl.Brobot.j1347395/matlab/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/mathworks/devel/sbs/31/hakakarl.Brobot.j1347395/matlab/sys/ros1/glnxa64/ros1/share/actionlib_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::play_motion_msgs::ListMotionsResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::play_motion_msgs::ListMotionsResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::play_motion_msgs::ListMotionsResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::play_motion_msgs::ListMotionsResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::play_motion_msgs::ListMotionsResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::play_motion_msgs::ListMotionsResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::play_motion_msgs::ListMotionsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "151d88e888f918ab21ebda2cef4dd23c";
  }

  static const char* value(const ::play_motion_msgs::ListMotionsResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x151d88e888f918abULL;
  static const uint64_t static_value2 = 0x21ebda2cef4dd23cULL;
};

template<class ContainerAllocator>
struct DataType< ::play_motion_msgs::ListMotionsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "play_motion_msgs/ListMotionsResponse";
  }

  static const char* value(const ::play_motion_msgs::ListMotionsResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::play_motion_msgs::ListMotionsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "MotionInfo[] motions\n"
"\n"
"================================================================================\n"
"MSG: play_motion_msgs/MotionInfo\n"
"string name\n"
"string[] joints\n"
"duration duration\n"
;
  }

  static const char* value(const ::play_motion_msgs::ListMotionsResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::play_motion_msgs::ListMotionsResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.motions);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ListMotionsResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::play_motion_msgs::ListMotionsResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::play_motion_msgs::ListMotionsResponse_<ContainerAllocator>& v)
  {
    s << indent << "motions[]" << std::endl;
    for (size_t i = 0; i < v.motions.size(); ++i)
    {
      s << indent << "  motions[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::play_motion_msgs::MotionInfo_<ContainerAllocator> >::stream(s, indent + "    ", v.motions[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // PLAY_MOTION_MSGS_MESSAGE_LISTMOTIONSRESPONSE_H
