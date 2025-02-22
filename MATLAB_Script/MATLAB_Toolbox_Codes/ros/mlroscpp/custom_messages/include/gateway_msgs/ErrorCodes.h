// Generated by gencpp from file gateway_msgs/ErrorCodes.msg
// DO NOT EDIT!


#ifndef GATEWAY_MSGS_MESSAGE_ERRORCODES_H
#define GATEWAY_MSGS_MESSAGE_ERRORCODES_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace gateway_msgs
{
template <class ContainerAllocator>
struct ErrorCodes_
{
  typedef ErrorCodes_<ContainerAllocator> Type;

  ErrorCodes_()
    {
    }
  ErrorCodes_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }





// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(SUCCESS)
  #undef SUCCESS
#endif
#if defined(_WIN32) && defined(NO_HUB_CONNECTION)
  #undef NO_HUB_CONNECTION
#endif
#if defined(_WIN32) && defined(HUB_CONNECTION_ALREADY_EXISTS)
  #undef HUB_CONNECTION_ALREADY_EXISTS
#endif
#if defined(_WIN32) && defined(HUB_CONNECTION_UNRESOLVABLE)
  #undef HUB_CONNECTION_UNRESOLVABLE
#endif
#if defined(_WIN32) && defined(HUB_CONNECTION_BLACKLISTED)
  #undef HUB_CONNECTION_BLACKLISTED
#endif
#if defined(_WIN32) && defined(HUB_CONNECTION_FAILED)
  #undef HUB_CONNECTION_FAILED
#endif
#if defined(_WIN32) && defined(HUB_CONNECTION_NOT_IN_NONEMPTY_WHITELIST)
  #undef HUB_CONNECTION_NOT_IN_NONEMPTY_WHITELIST
#endif
#if defined(_WIN32) && defined(HUB_NAME_NOT_FOUND)
  #undef HUB_NAME_NOT_FOUND
#endif
#if defined(_WIN32) && defined(HUB_CONNECTION_LOST)
  #undef HUB_CONNECTION_LOST
#endif
#if defined(_WIN32) && defined(HUB_UNKNOWN_ERROR)
  #undef HUB_UNKNOWN_ERROR
#endif
#if defined(_WIN32) && defined(FLIP_RULE_ALREADY_EXISTS)
  #undef FLIP_RULE_ALREADY_EXISTS
#endif
#if defined(_WIN32) && defined(FLIP_PATTERN_ALREDY_EXISTS)
  #undef FLIP_PATTERN_ALREDY_EXISTS
#endif
#if defined(_WIN32) && defined(FLIP_REMOTE_GATEWAY_FIREWALLING)
  #undef FLIP_REMOTE_GATEWAY_FIREWALLING
#endif
#if defined(_WIN32) && defined(ADVERTISEMENT_EXISTS)
  #undef ADVERTISEMENT_EXISTS
#endif
#if defined(_WIN32) && defined(ADVERTISEMENT_NOT_FOUND)
  #undef ADVERTISEMENT_NOT_FOUND
#endif
#if defined(_WIN32) && defined(UNKNOWN_ADVERTISEMENT_ERROR)
  #undef UNKNOWN_ADVERTISEMENT_ERROR
#endif
#if defined(_WIN32) && defined(PULL_RULE_ALREADY_EXISTS)
  #undef PULL_RULE_ALREADY_EXISTS
#endif
#if defined(_WIN32) && defined(REMOTE_GATEWAY_NOT_VISIBLE)
  #undef REMOTE_GATEWAY_NOT_VISIBLE
#endif
#if defined(_WIN32) && defined(REMOTE_GATEWAY_SELF_IS_NOT)
  #undef REMOTE_GATEWAY_SELF_IS_NOT
#endif
#if defined(_WIN32) && defined(REMOTE_GATEWAY_TARGET_HAS_MULTIPLE_MATCHES)
  #undef REMOTE_GATEWAY_TARGET_HAS_MULTIPLE_MATCHES
#endif

  enum {
    SUCCESS = 0,
    NO_HUB_CONNECTION = 1,
    HUB_CONNECTION_ALREADY_EXISTS = 11,
    HUB_CONNECTION_UNRESOLVABLE = 12,
    HUB_CONNECTION_BLACKLISTED = 13,
    HUB_CONNECTION_FAILED = 14,
    HUB_CONNECTION_NOT_IN_NONEMPTY_WHITELIST = 15,
    HUB_NAME_NOT_FOUND = 16,
    HUB_CONNECTION_LOST = 17,
    HUB_UNKNOWN_ERROR = 19,
    FLIP_RULE_ALREADY_EXISTS = 22,
    FLIP_PATTERN_ALREDY_EXISTS = 23,
    FLIP_REMOTE_GATEWAY_FIREWALLING = 24,
    ADVERTISEMENT_EXISTS = 31,
    ADVERTISEMENT_NOT_FOUND = 32,
    UNKNOWN_ADVERTISEMENT_ERROR = 39,
    PULL_RULE_ALREADY_EXISTS = 41,
    REMOTE_GATEWAY_NOT_VISIBLE = 51,
    REMOTE_GATEWAY_SELF_IS_NOT = 52,
    REMOTE_GATEWAY_TARGET_HAS_MULTIPLE_MATCHES = 53,
  };


  typedef boost::shared_ptr< ::gateway_msgs::ErrorCodes_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::gateway_msgs::ErrorCodes_<ContainerAllocator> const> ConstPtr;

}; // struct ErrorCodes_

typedef ::gateway_msgs::ErrorCodes_<std::allocator<void> > ErrorCodes;

typedef boost::shared_ptr< ::gateway_msgs::ErrorCodes > ErrorCodesPtr;
typedef boost::shared_ptr< ::gateway_msgs::ErrorCodes const> ErrorCodesConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::gateway_msgs::ErrorCodes_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::gateway_msgs::ErrorCodes_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace gateway_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::gateway_msgs::ErrorCodes_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::gateway_msgs::ErrorCodes_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::gateway_msgs::ErrorCodes_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::gateway_msgs::ErrorCodes_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gateway_msgs::ErrorCodes_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gateway_msgs::ErrorCodes_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::gateway_msgs::ErrorCodes_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cc2f69c68d11f625f99f07d82c572d47";
  }

  static const char* value(const ::gateway_msgs::ErrorCodes_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xcc2f69c68d11f625ULL;
  static const uint64_t static_value2 = 0xf99f07d82c572d47ULL;
};

template<class ContainerAllocator>
struct DataType< ::gateway_msgs::ErrorCodes_<ContainerAllocator> >
{
  static const char* value()
  {
    return "gateway_msgs/ErrorCodes";
  }

  static const char* value(const ::gateway_msgs::ErrorCodes_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::gateway_msgs::ErrorCodes_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Error types for the gateway ros api\n"
"\n"
"# General\n"
"int8 SUCCESS = 0\n"
"int8 NO_HUB_CONNECTION = 1\n"
"\n"
"# Hub\n"
"int8 HUB_CONNECTION_ALREADY_EXISTS = 11\n"
"int8 HUB_CONNECTION_UNRESOLVABLE = 12\n"
"int8 HUB_CONNECTION_BLACKLISTED = 13\n"
"int8 HUB_CONNECTION_FAILED = 14\n"
"int8 HUB_CONNECTION_NOT_IN_NONEMPTY_WHITELIST = 15\n"
"int8 HUB_NAME_NOT_FOUND = 16\n"
"int8 HUB_CONNECTION_LOST = 17\n"
"int8 HUB_UNKNOWN_ERROR = 19\n"
"\n"
"# Flipping\n"
"int8 FLIP_RULE_ALREADY_EXISTS = 22\n"
"int8 FLIP_PATTERN_ALREDY_EXISTS = 23\n"
"int8 FLIP_REMOTE_GATEWAY_FIREWALLING = 24\n"
"\n"
"# Advertise\n"
"int8 ADVERTISEMENT_EXISTS = 31\n"
"int8 ADVERTISEMENT_NOT_FOUND = 32\n"
"int8 UNKNOWN_ADVERTISEMENT_ERROR = 39\n"
"\n"
"# Pulling\n"
"int8 PULL_RULE_ALREADY_EXISTS = 41\n"
"\n"
"# Remotes\n"
"int8 REMOTE_GATEWAY_NOT_VISIBLE = 51\n"
"int8 REMOTE_GATEWAY_SELF_IS_NOT = 52\n"
"int8 REMOTE_GATEWAY_TARGET_HAS_MULTIPLE_MATCHES = 53\n"
;
  }

  static const char* value(const ::gateway_msgs::ErrorCodes_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::gateway_msgs::ErrorCodes_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ErrorCodes_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::gateway_msgs::ErrorCodes_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::gateway_msgs::ErrorCodes_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // GATEWAY_MSGS_MESSAGE_ERRORCODES_H
