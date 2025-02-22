// Generated by gencpp from file jsk_footstep_controller/RequireLogResponse.msg
// DO NOT EDIT!


#ifndef JSK_FOOTSTEP_CONTROLLER_MESSAGE_REQUIRELOGRESPONSE_H
#define JSK_FOOTSTEP_CONTROLLER_MESSAGE_REQUIRELOGRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace jsk_footstep_controller
{
template <class ContainerAllocator>
struct RequireLogResponse_
{
  typedef RequireLogResponse_<ContainerAllocator> Type;

  RequireLogResponse_()
    : sexp()  {
    }
  RequireLogResponse_(const ContainerAllocator& _alloc)
    : sexp(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _sexp_type;
  _sexp_type sexp;





  typedef boost::shared_ptr< ::jsk_footstep_controller::RequireLogResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::jsk_footstep_controller::RequireLogResponse_<ContainerAllocator> const> ConstPtr;

}; // struct RequireLogResponse_

typedef ::jsk_footstep_controller::RequireLogResponse_<std::allocator<void> > RequireLogResponse;

typedef boost::shared_ptr< ::jsk_footstep_controller::RequireLogResponse > RequireLogResponsePtr;
typedef boost::shared_ptr< ::jsk_footstep_controller::RequireLogResponse const> RequireLogResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::jsk_footstep_controller::RequireLogResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::jsk_footstep_controller::RequireLogResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::jsk_footstep_controller::RequireLogResponse_<ContainerAllocator1> & lhs, const ::jsk_footstep_controller::RequireLogResponse_<ContainerAllocator2> & rhs)
{
  return lhs.sexp == rhs.sexp;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::jsk_footstep_controller::RequireLogResponse_<ContainerAllocator1> & lhs, const ::jsk_footstep_controller::RequireLogResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace jsk_footstep_controller

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::jsk_footstep_controller::RequireLogResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::jsk_footstep_controller::RequireLogResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::jsk_footstep_controller::RequireLogResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::jsk_footstep_controller::RequireLogResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::jsk_footstep_controller::RequireLogResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::jsk_footstep_controller::RequireLogResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::jsk_footstep_controller::RequireLogResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "29db591ef5f8291f316c2b168fcbe017";
  }

  static const char* value(const ::jsk_footstep_controller::RequireLogResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x29db591ef5f8291fULL;
  static const uint64_t static_value2 = 0x316c2b168fcbe017ULL;
};

template<class ContainerAllocator>
struct DataType< ::jsk_footstep_controller::RequireLogResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "jsk_footstep_controller/RequireLogResponse";
  }

  static const char* value(const ::jsk_footstep_controller::RequireLogResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::jsk_footstep_controller::RequireLogResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string sexp\n"
"\n"
;
  }

  static const char* value(const ::jsk_footstep_controller::RequireLogResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::jsk_footstep_controller::RequireLogResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.sexp);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RequireLogResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::jsk_footstep_controller::RequireLogResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::jsk_footstep_controller::RequireLogResponse_<ContainerAllocator>& v)
  {
    s << indent << "sexp: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.sexp);
  }
};

} // namespace message_operations
} // namespace ros

#endif // JSK_FOOTSTEP_CONTROLLER_MESSAGE_REQUIRELOGRESPONSE_H
