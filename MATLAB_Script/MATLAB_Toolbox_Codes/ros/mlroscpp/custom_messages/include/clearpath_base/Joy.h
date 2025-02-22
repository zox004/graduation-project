// Generated by gencpp from file clearpath_base/Joy.msg
// DO NOT EDIT!


#ifndef CLEARPATH_BASE_MESSAGE_JOY_H
#define CLEARPATH_BASE_MESSAGE_JOY_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace clearpath_base
{
template <class ContainerAllocator>
struct Joy_
{
  typedef Joy_<ContainerAllocator> Type;

  Joy_()
    : axes()
    , buttons()  {
    }
  Joy_(const ContainerAllocator& _alloc)
    : axes(_alloc)
    , buttons(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _axes_type;
  _axes_type axes;

   typedef std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  _buttons_type;
  _buttons_type buttons;





  typedef boost::shared_ptr< ::clearpath_base::Joy_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::clearpath_base::Joy_<ContainerAllocator> const> ConstPtr;

}; // struct Joy_

typedef ::clearpath_base::Joy_<std::allocator<void> > Joy;

typedef boost::shared_ptr< ::clearpath_base::Joy > JoyPtr;
typedef boost::shared_ptr< ::clearpath_base::Joy const> JoyConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::clearpath_base::Joy_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::clearpath_base::Joy_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::clearpath_base::Joy_<ContainerAllocator1> & lhs, const ::clearpath_base::Joy_<ContainerAllocator2> & rhs)
{
  return lhs.axes == rhs.axes &&
    lhs.buttons == rhs.buttons;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::clearpath_base::Joy_<ContainerAllocator1> & lhs, const ::clearpath_base::Joy_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace clearpath_base

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::clearpath_base::Joy_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::clearpath_base::Joy_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::clearpath_base::Joy_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::clearpath_base::Joy_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::clearpath_base::Joy_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::clearpath_base::Joy_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::clearpath_base::Joy_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e3ef016fcdf22397038b36036c66f7c8";
  }

  static const char* value(const ::clearpath_base::Joy_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe3ef016fcdf22397ULL;
  static const uint64_t static_value2 = 0x038b36036c66f7c8ULL;
};

template<class ContainerAllocator>
struct DataType< ::clearpath_base::Joy_<ContainerAllocator> >
{
  static const char* value()
  {
    return "clearpath_base/Joy";
  }

  static const char* value(const ::clearpath_base::Joy_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::clearpath_base::Joy_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32[] axes\n"
"int32[] buttons\n"
;
  }

  static const char* value(const ::clearpath_base::Joy_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::clearpath_base::Joy_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.axes);
      stream.next(m.buttons);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Joy_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::clearpath_base::Joy_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::clearpath_base::Joy_<ContainerAllocator>& v)
  {
    s << indent << "axes[]" << std::endl;
    for (size_t i = 0; i < v.axes.size(); ++i)
    {
      s << indent << "  axes[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.axes[i]);
    }
    s << indent << "buttons[]" << std::endl;
    for (size_t i = 0; i < v.buttons.size(); ++i)
    {
      s << indent << "  buttons[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.buttons[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // CLEARPATH_BASE_MESSAGE_JOY_H
