// Generated by gencpp from file pr2_precise_trajectory/MoveSequenceResult.msg
// DO NOT EDIT!


#ifndef PR2_PRECISE_TRAJECTORY_MESSAGE_MOVESEQUENCERESULT_H
#define PR2_PRECISE_TRAJECTORY_MESSAGE_MOVESEQUENCERESULT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace pr2_precise_trajectory
{
template <class ContainerAllocator>
struct MoveSequenceResult_
{
  typedef MoveSequenceResult_<ContainerAllocator> Type;

  MoveSequenceResult_()
    {
    }
  MoveSequenceResult_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::pr2_precise_trajectory::MoveSequenceResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pr2_precise_trajectory::MoveSequenceResult_<ContainerAllocator> const> ConstPtr;

}; // struct MoveSequenceResult_

typedef ::pr2_precise_trajectory::MoveSequenceResult_<std::allocator<void> > MoveSequenceResult;

typedef boost::shared_ptr< ::pr2_precise_trajectory::MoveSequenceResult > MoveSequenceResultPtr;
typedef boost::shared_ptr< ::pr2_precise_trajectory::MoveSequenceResult const> MoveSequenceResultConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pr2_precise_trajectory::MoveSequenceResult_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pr2_precise_trajectory::MoveSequenceResult_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace pr2_precise_trajectory

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'pr2_precise_trajectory': ['/local-ssd1/All_Custom_Msgs/PendingActionPackagesPart2/matlab_msg_gen_ros1/glnxa64/devel/share/pr2_precise_trajectory/msg'], 'geometry_msgs': ['/mathworks/devel/sbs/31/hakakarl.Brobot.j1347395/matlab/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg'], 'actionlib': ['/mathworks/devel/sbs/31/hakakarl.Brobot.j1347395/matlab/sys/ros1/glnxa64/ros1/share/actionlib/cmake/../msg'], 'std_msgs': ['/mathworks/devel/sbs/31/hakakarl.Brobot.j1347395/matlab/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg', '/mathworks/devel/sbs/31/hakakarl.Brobot.j1347395/matlab/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/mathworks/devel/sbs/31/hakakarl.Brobot.j1347395/matlab/sys/ros1/glnxa64/ros1/share/actionlib_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::pr2_precise_trajectory::MoveSequenceResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pr2_precise_trajectory::MoveSequenceResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pr2_precise_trajectory::MoveSequenceResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pr2_precise_trajectory::MoveSequenceResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pr2_precise_trajectory::MoveSequenceResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pr2_precise_trajectory::MoveSequenceResult_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pr2_precise_trajectory::MoveSequenceResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::pr2_precise_trajectory::MoveSequenceResult_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::pr2_precise_trajectory::MoveSequenceResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pr2_precise_trajectory/MoveSequenceResult";
  }

  static const char* value(const ::pr2_precise_trajectory::MoveSequenceResult_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pr2_precise_trajectory::MoveSequenceResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
;
  }

  static const char* value(const ::pr2_precise_trajectory::MoveSequenceResult_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pr2_precise_trajectory::MoveSequenceResult_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MoveSequenceResult_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pr2_precise_trajectory::MoveSequenceResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::pr2_precise_trajectory::MoveSequenceResult_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // PR2_PRECISE_TRAJECTORY_MESSAGE_MOVESEQUENCERESULT_H
