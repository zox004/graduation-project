// Generated by gencpp from file jsk_rviz_plugins/ObjectFitCommand.msg
// DO NOT EDIT!


#ifndef JSK_RVIZ_PLUGINS_MESSAGE_OBJECTFITCOMMAND_H
#define JSK_RVIZ_PLUGINS_MESSAGE_OBJECTFITCOMMAND_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace jsk_rviz_plugins
{
template <class ContainerAllocator>
struct ObjectFitCommand_
{
  typedef ObjectFitCommand_<ContainerAllocator> Type;

  ObjectFitCommand_()
    : command(0)  {
    }
  ObjectFitCommand_(const ContainerAllocator& _alloc)
    : command(0)  {
  (void)_alloc;
    }



   typedef int8_t _command_type;
  _command_type command;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(FIT)
  #undef FIT
#endif
#if defined(_WIN32) && defined(NEAR)
  #undef NEAR
#endif
#if defined(_WIN32) && defined(OTHER)
  #undef OTHER
#endif
#if defined(_WIN32) && defined(REVERSE_FIT)
  #undef REVERSE_FIT
#endif
#if defined(_WIN32) && defined(REVERSE_NEAR)
  #undef REVERSE_NEAR
#endif
#if defined(_WIN32) && defined(REVERSE_OTHER)
  #undef REVERSE_OTHER
#endif

  enum {
    FIT = 0u,
    NEAR = 1u,
    OTHER = 2u,
    REVERSE_FIT = 3u,
    REVERSE_NEAR = 4u,
    REVERSE_OTHER = 5u,
  };


  typedef boost::shared_ptr< ::jsk_rviz_plugins::ObjectFitCommand_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::jsk_rviz_plugins::ObjectFitCommand_<ContainerAllocator> const> ConstPtr;

}; // struct ObjectFitCommand_

typedef ::jsk_rviz_plugins::ObjectFitCommand_<std::allocator<void> > ObjectFitCommand;

typedef boost::shared_ptr< ::jsk_rviz_plugins::ObjectFitCommand > ObjectFitCommandPtr;
typedef boost::shared_ptr< ::jsk_rviz_plugins::ObjectFitCommand const> ObjectFitCommandConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::jsk_rviz_plugins::ObjectFitCommand_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::jsk_rviz_plugins::ObjectFitCommand_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::jsk_rviz_plugins::ObjectFitCommand_<ContainerAllocator1> & lhs, const ::jsk_rviz_plugins::ObjectFitCommand_<ContainerAllocator2> & rhs)
{
  return lhs.command == rhs.command;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::jsk_rviz_plugins::ObjectFitCommand_<ContainerAllocator1> & lhs, const ::jsk_rviz_plugins::ObjectFitCommand_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace jsk_rviz_plugins

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::jsk_rviz_plugins::ObjectFitCommand_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::jsk_rviz_plugins::ObjectFitCommand_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::jsk_rviz_plugins::ObjectFitCommand_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::jsk_rviz_plugins::ObjectFitCommand_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::jsk_rviz_plugins::ObjectFitCommand_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::jsk_rviz_plugins::ObjectFitCommand_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::jsk_rviz_plugins::ObjectFitCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "aaf37eac6a6717d09d438978a4117776";
  }

  static const char* value(const ::jsk_rviz_plugins::ObjectFitCommand_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xaaf37eac6a6717d0ULL;
  static const uint64_t static_value2 = 0x9d438978a4117776ULL;
};

template<class ContainerAllocator>
struct DataType< ::jsk_rviz_plugins::ObjectFitCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "jsk_rviz_plugins/ObjectFitCommand";
  }

  static const char* value(const ::jsk_rviz_plugins::ObjectFitCommand_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::jsk_rviz_plugins::ObjectFitCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 FIT=0\n"
"uint8 NEAR=1\n"
"uint8 OTHER=2\n"
"uint8 REVERSE_FIT=3\n"
"uint8 REVERSE_NEAR=4\n"
"uint8 REVERSE_OTHER=5\n"
"\n"
"int8 command\n"
;
  }

  static const char* value(const ::jsk_rviz_plugins::ObjectFitCommand_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::jsk_rviz_plugins::ObjectFitCommand_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.command);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ObjectFitCommand_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::jsk_rviz_plugins::ObjectFitCommand_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::jsk_rviz_plugins::ObjectFitCommand_<ContainerAllocator>& v)
  {
    s << indent << "command: ";
    Printer<int8_t>::stream(s, indent + "  ", v.command);
  }
};

} // namespace message_operations
} // namespace ros

#endif // JSK_RVIZ_PLUGINS_MESSAGE_OBJECTFITCOMMAND_H
