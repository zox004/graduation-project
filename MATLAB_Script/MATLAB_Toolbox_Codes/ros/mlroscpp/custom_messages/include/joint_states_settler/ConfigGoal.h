// Generated by gencpp from file joint_states_settler/ConfigGoal.msg
// DO NOT EDIT!


#ifndef JOINT_STATES_SETTLER_MESSAGE_CONFIGGOAL_H
#define JOINT_STATES_SETTLER_MESSAGE_CONFIGGOAL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace joint_states_settler
{
template <class ContainerAllocator>
struct ConfigGoal_
{
  typedef ConfigGoal_<ContainerAllocator> Type;

  ConfigGoal_()
    : joint_names()
    , tolerances()
    , max_step()
    , cache_size(0)  {
    }
  ConfigGoal_(const ContainerAllocator& _alloc)
    : joint_names(_alloc)
    , tolerances(_alloc)
    , max_step()
    , cache_size(0)  {
  (void)_alloc;
    }



   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _joint_names_type;
  _joint_names_type joint_names;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _tolerances_type;
  _tolerances_type tolerances;

   typedef ros::Duration _max_step_type;
  _max_step_type max_step;

   typedef uint32_t _cache_size_type;
  _cache_size_type cache_size;





  typedef boost::shared_ptr< ::joint_states_settler::ConfigGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::joint_states_settler::ConfigGoal_<ContainerAllocator> const> ConstPtr;

}; // struct ConfigGoal_

typedef ::joint_states_settler::ConfigGoal_<std::allocator<void> > ConfigGoal;

typedef boost::shared_ptr< ::joint_states_settler::ConfigGoal > ConfigGoalPtr;
typedef boost::shared_ptr< ::joint_states_settler::ConfigGoal const> ConfigGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::joint_states_settler::ConfigGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::joint_states_settler::ConfigGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace joint_states_settler

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'actionlib': ['/mathworks/devel/sbs/31/hakakarl.Brobot.j1347395/matlab/sys/ros1/glnxa64/ros1/share/actionlib/cmake/../msg'], 'std_msgs': ['/mathworks/devel/sbs/31/hakakarl.Brobot.j1347395/matlab/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg'], 'joint_states_settler': ['/local-ssd1/All_Custom_Msgs/PendingPackagesInitial/matlab_msg_gen_ros1/glnxa64/devel/share/joint_states_settler/msg'], 'actionlib_msgs': ['/mathworks/devel/sbs/31/hakakarl.Brobot.j1347395/matlab/sys/ros1/glnxa64/ros1/share/actionlib_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::joint_states_settler::ConfigGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::joint_states_settler::ConfigGoal_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::joint_states_settler::ConfigGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::joint_states_settler::ConfigGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::joint_states_settler::ConfigGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::joint_states_settler::ConfigGoal_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::joint_states_settler::ConfigGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "863b25359077f9aa231257b3d1612b63";
  }

  static const char* value(const ::joint_states_settler::ConfigGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x863b25359077f9aaULL;
  static const uint64_t static_value2 = 0x231257b3d1612b63ULL;
};

template<class ContainerAllocator>
struct DataType< ::joint_states_settler::ConfigGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "joint_states_settler/ConfigGoal";
  }

  static const char* value(const ::joint_states_settler::ConfigGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::joint_states_settler::ConfigGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"string[] joint_names   # Names of the joints we're waiting to settle\n"
"float64[] tolerances   # Tolerance on each of the specified joints\n"
"duration max_step      # The maximum timestep between two elements in an interval\n"
"uint32 cache_size      # The size of our cache when searching for an interval\n"
;
  }

  static const char* value(const ::joint_states_settler::ConfigGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::joint_states_settler::ConfigGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.joint_names);
      stream.next(m.tolerances);
      stream.next(m.max_step);
      stream.next(m.cache_size);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ConfigGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::joint_states_settler::ConfigGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::joint_states_settler::ConfigGoal_<ContainerAllocator>& v)
  {
    s << indent << "joint_names[]" << std::endl;
    for (size_t i = 0; i < v.joint_names.size(); ++i)
    {
      s << indent << "  joint_names[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.joint_names[i]);
    }
    s << indent << "tolerances[]" << std::endl;
    for (size_t i = 0; i < v.tolerances.size(); ++i)
    {
      s << indent << "  tolerances[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.tolerances[i]);
    }
    s << indent << "max_step: ";
    Printer<ros::Duration>::stream(s, indent + "  ", v.max_step);
    s << indent << "cache_size: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.cache_size);
  }
};

} // namespace message_operations
} // namespace ros

#endif // JOINT_STATES_SETTLER_MESSAGE_CONFIGGOAL_H
