// Generated by gencpp from file gateway_msgs/ConnectionType.msg
// DO NOT EDIT!


#ifndef GATEWAY_MSGS_MESSAGE_CONNECTIONTYPE_H
#define GATEWAY_MSGS_MESSAGE_CONNECTIONTYPE_H


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
struct ConnectionType_
{
  typedef ConnectionType_<ContainerAllocator> Type;

  ConnectionType_()
    {
    }
  ConnectionType_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }





// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(PUBLISHER)
  #undef PUBLISHER
#endif
#if defined(_WIN32) && defined(SUBSCRIBER)
  #undef SUBSCRIBER
#endif
#if defined(_WIN32) && defined(SERVICE)
  #undef SERVICE
#endif
#if defined(_WIN32) && defined(ACTION_CLIENT)
  #undef ACTION_CLIENT
#endif
#if defined(_WIN32) && defined(ACTION_SERVER)
  #undef ACTION_SERVER
#endif
#if defined(_WIN32) && defined(INVALID)
  #undef INVALID
#endif


  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  PUBLISHER;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  SUBSCRIBER;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  SERVICE;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  ACTION_CLIENT;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  ACTION_SERVER;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  INVALID;

  typedef boost::shared_ptr< ::gateway_msgs::ConnectionType_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::gateway_msgs::ConnectionType_<ContainerAllocator> const> ConstPtr;

}; // struct ConnectionType_

typedef ::gateway_msgs::ConnectionType_<std::allocator<void> > ConnectionType;

typedef boost::shared_ptr< ::gateway_msgs::ConnectionType > ConnectionTypePtr;
typedef boost::shared_ptr< ::gateway_msgs::ConnectionType const> ConnectionTypeConstPtr;

// constants requiring out of line definition

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      ConnectionType_<ContainerAllocator>::PUBLISHER =
        
          "publisher"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      ConnectionType_<ContainerAllocator>::SUBSCRIBER =
        
          "subscriber"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      ConnectionType_<ContainerAllocator>::SERVICE =
        
          "service"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      ConnectionType_<ContainerAllocator>::ACTION_CLIENT =
        
          "action_client"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      ConnectionType_<ContainerAllocator>::ACTION_SERVER =
        
          "action_server"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      ConnectionType_<ContainerAllocator>::INVALID =
        
          "invalid"
        
        ;
   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::gateway_msgs::ConnectionType_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::gateway_msgs::ConnectionType_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace gateway_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::gateway_msgs::ConnectionType_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::gateway_msgs::ConnectionType_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::gateway_msgs::ConnectionType_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::gateway_msgs::ConnectionType_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gateway_msgs::ConnectionType_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gateway_msgs::ConnectionType_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::gateway_msgs::ConnectionType_<ContainerAllocator> >
{
  static const char* value()
  {
    return "65d75f1bb32566bfec48966db2073c81";
  }

  static const char* value(const ::gateway_msgs::ConnectionType_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x65d75f1bb32566bfULL;
  static const uint64_t static_value2 = 0xec48966db2073c81ULL;
};

template<class ContainerAllocator>
struct DataType< ::gateway_msgs::ConnectionType_<ContainerAllocator> >
{
  static const char* value()
  {
    return "gateway_msgs/ConnectionType";
  }

  static const char* value(const ::gateway_msgs::ConnectionType_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::gateway_msgs::ConnectionType_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# A connection can be 1 of 5 types\n"
"string PUBLISHER = publisher\n"
"string SUBSCRIBER = subscriber\n"
"string SERVICE = service\n"
"string ACTION_CLIENT = action_client\n"
"string ACTION_SERVER = action_server\n"
"string INVALID = invalid\n"
;
  }

  static const char* value(const ::gateway_msgs::ConnectionType_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::gateway_msgs::ConnectionType_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ConnectionType_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::gateway_msgs::ConnectionType_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::gateway_msgs::ConnectionType_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // GATEWAY_MSGS_MESSAGE_CONNECTIONTYPE_H
