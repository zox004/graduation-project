// Generated by gencpp from file gateway_msgs/RemoteAll.msg
// DO NOT EDIT!


#ifndef GATEWAY_MSGS_MESSAGE_REMOTEALL_H
#define GATEWAY_MSGS_MESSAGE_REMOTEALL_H

#include <ros/service_traits.h>


#include <gateway_msgs/RemoteAllRequest.h>
#include <gateway_msgs/RemoteAllResponse.h>


namespace gateway_msgs
{

struct RemoteAll
{

typedef RemoteAllRequest Request;
typedef RemoteAllResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct RemoteAll
} // namespace gateway_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::gateway_msgs::RemoteAll > {
  static const char* value()
  {
    return "dae39b2540424f9672db2c4f37b6394a";
  }

  static const char* value(const ::gateway_msgs::RemoteAll&) { return value(); }
};

template<>
struct DataType< ::gateway_msgs::RemoteAll > {
  static const char* value()
  {
    return "gateway_msgs/RemoteAll";
  }

  static const char* value(const ::gateway_msgs::RemoteAll&) { return value(); }
};


// service_traits::MD5Sum< ::gateway_msgs::RemoteAllRequest> should match
// service_traits::MD5Sum< ::gateway_msgs::RemoteAll >
template<>
struct MD5Sum< ::gateway_msgs::RemoteAllRequest>
{
  static const char* value()
  {
    return MD5Sum< ::gateway_msgs::RemoteAll >::value();
  }
  static const char* value(const ::gateway_msgs::RemoteAllRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::gateway_msgs::RemoteAllRequest> should match
// service_traits::DataType< ::gateway_msgs::RemoteAll >
template<>
struct DataType< ::gateway_msgs::RemoteAllRequest>
{
  static const char* value()
  {
    return DataType< ::gateway_msgs::RemoteAll >::value();
  }
  static const char* value(const ::gateway_msgs::RemoteAllRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::gateway_msgs::RemoteAllResponse> should match
// service_traits::MD5Sum< ::gateway_msgs::RemoteAll >
template<>
struct MD5Sum< ::gateway_msgs::RemoteAllResponse>
{
  static const char* value()
  {
    return MD5Sum< ::gateway_msgs::RemoteAll >::value();
  }
  static const char* value(const ::gateway_msgs::RemoteAllResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::gateway_msgs::RemoteAllResponse> should match
// service_traits::DataType< ::gateway_msgs::RemoteAll >
template<>
struct DataType< ::gateway_msgs::RemoteAllResponse>
{
  static const char* value()
  {
    return DataType< ::gateway_msgs::RemoteAll >::value();
  }
  static const char* value(const ::gateway_msgs::RemoteAllResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // GATEWAY_MSGS_MESSAGE_REMOTEALL_H
