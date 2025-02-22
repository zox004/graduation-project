// Generated by gencpp from file nao_msgs/GetTruepose.msg
// DO NOT EDIT!


#ifndef NAO_MSGS_MESSAGE_GETTRUEPOSE_H
#define NAO_MSGS_MESSAGE_GETTRUEPOSE_H

#include <ros/service_traits.h>


#include <nao_msgs/GetTrueposeRequest.h>
#include <nao_msgs/GetTrueposeResponse.h>


namespace nao_msgs
{

struct GetTruepose
{

typedef GetTrueposeRequest Request;
typedef GetTrueposeResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetTruepose
} // namespace nao_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::nao_msgs::GetTruepose > {
  static const char* value()
  {
    return "4f3e0bbe7a24e1f929488cd1970222d3";
  }

  static const char* value(const ::nao_msgs::GetTruepose&) { return value(); }
};

template<>
struct DataType< ::nao_msgs::GetTruepose > {
  static const char* value()
  {
    return "nao_msgs/GetTruepose";
  }

  static const char* value(const ::nao_msgs::GetTruepose&) { return value(); }
};


// service_traits::MD5Sum< ::nao_msgs::GetTrueposeRequest> should match 
// service_traits::MD5Sum< ::nao_msgs::GetTruepose > 
template<>
struct MD5Sum< ::nao_msgs::GetTrueposeRequest>
{
  static const char* value()
  {
    return MD5Sum< ::nao_msgs::GetTruepose >::value();
  }
  static const char* value(const ::nao_msgs::GetTrueposeRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::nao_msgs::GetTrueposeRequest> should match 
// service_traits::DataType< ::nao_msgs::GetTruepose > 
template<>
struct DataType< ::nao_msgs::GetTrueposeRequest>
{
  static const char* value()
  {
    return DataType< ::nao_msgs::GetTruepose >::value();
  }
  static const char* value(const ::nao_msgs::GetTrueposeRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::nao_msgs::GetTrueposeResponse> should match 
// service_traits::MD5Sum< ::nao_msgs::GetTruepose > 
template<>
struct MD5Sum< ::nao_msgs::GetTrueposeResponse>
{
  static const char* value()
  {
    return MD5Sum< ::nao_msgs::GetTruepose >::value();
  }
  static const char* value(const ::nao_msgs::GetTrueposeResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::nao_msgs::GetTrueposeResponse> should match 
// service_traits::DataType< ::nao_msgs::GetTruepose > 
template<>
struct DataType< ::nao_msgs::GetTrueposeResponse>
{
  static const char* value()
  {
    return DataType< ::nao_msgs::GetTruepose >::value();
  }
  static const char* value(const ::nao_msgs::GetTrueposeResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // NAO_MSGS_MESSAGE_GETTRUEPOSE_H
