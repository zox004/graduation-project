// Generated by gencpp from file image_view2/ChangeModeRequest.msg
// DO NOT EDIT!


#ifndef IMAGE_VIEW2_MESSAGE_CHANGEMODEREQUEST_H
#define IMAGE_VIEW2_MESSAGE_CHANGEMODEREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace image_view2
{
template <class ContainerAllocator>
struct ChangeModeRequest_
{
  typedef ChangeModeRequest_<ContainerAllocator> Type;

  ChangeModeRequest_()
    : mode()  {
    }
  ChangeModeRequest_(const ContainerAllocator& _alloc)
    : mode(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _mode_type;
  _mode_type mode;





  typedef boost::shared_ptr< ::image_view2::ChangeModeRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::image_view2::ChangeModeRequest_<ContainerAllocator> const> ConstPtr;

}; // struct ChangeModeRequest_

typedef ::image_view2::ChangeModeRequest_<std::allocator<void> > ChangeModeRequest;

typedef boost::shared_ptr< ::image_view2::ChangeModeRequest > ChangeModeRequestPtr;
typedef boost::shared_ptr< ::image_view2::ChangeModeRequest const> ChangeModeRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::image_view2::ChangeModeRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::image_view2::ChangeModeRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::image_view2::ChangeModeRequest_<ContainerAllocator1> & lhs, const ::image_view2::ChangeModeRequest_<ContainerAllocator2> & rhs)
{
  return lhs.mode == rhs.mode;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::image_view2::ChangeModeRequest_<ContainerAllocator1> & lhs, const ::image_view2::ChangeModeRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace image_view2

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::image_view2::ChangeModeRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::image_view2::ChangeModeRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::image_view2::ChangeModeRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::image_view2::ChangeModeRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::image_view2::ChangeModeRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::image_view2::ChangeModeRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::image_view2::ChangeModeRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e84dc3ad5dc323bb64f0aca01c2d1eef";
  }

  static const char* value(const ::image_view2::ChangeModeRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe84dc3ad5dc323bbULL;
  static const uint64_t static_value2 = 0x64f0aca01c2d1eefULL;
};

template<class ContainerAllocator>
struct DataType< ::image_view2::ChangeModeRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "image_view2/ChangeModeRequest";
  }

  static const char* value(const ::image_view2::ChangeModeRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::image_view2::ChangeModeRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string mode\n"
;
  }

  static const char* value(const ::image_view2::ChangeModeRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::image_view2::ChangeModeRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.mode);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ChangeModeRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::image_view2::ChangeModeRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::image_view2::ChangeModeRequest_<ContainerAllocator>& v)
  {
    s << indent << "mode: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.mode);
  }
};

} // namespace message_operations
} // namespace ros

#endif // IMAGE_VIEW2_MESSAGE_CHANGEMODEREQUEST_H
