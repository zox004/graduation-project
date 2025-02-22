// Generated by gencpp from file capabilities/GetCapabilitySpecs.msg
// DO NOT EDIT!


#ifndef CAPABILITIES_MESSAGE_GETCAPABILITYSPECS_H
#define CAPABILITIES_MESSAGE_GETCAPABILITYSPECS_H

#include <ros/service_traits.h>


#include <capabilities/GetCapabilitySpecsRequest.h>
#include <capabilities/GetCapabilitySpecsResponse.h>


namespace capabilities
{

struct GetCapabilitySpecs
{

typedef GetCapabilitySpecsRequest Request;
typedef GetCapabilitySpecsResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetCapabilitySpecs
} // namespace capabilities


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::capabilities::GetCapabilitySpecs > {
  static const char* value()
  {
    return "70274a8d27cd41f8e0754661d97168f8";
  }

  static const char* value(const ::capabilities::GetCapabilitySpecs&) { return value(); }
};

template<>
struct DataType< ::capabilities::GetCapabilitySpecs > {
  static const char* value()
  {
    return "capabilities/GetCapabilitySpecs";
  }

  static const char* value(const ::capabilities::GetCapabilitySpecs&) { return value(); }
};


// service_traits::MD5Sum< ::capabilities::GetCapabilitySpecsRequest> should match
// service_traits::MD5Sum< ::capabilities::GetCapabilitySpecs >
template<>
struct MD5Sum< ::capabilities::GetCapabilitySpecsRequest>
{
  static const char* value()
  {
    return MD5Sum< ::capabilities::GetCapabilitySpecs >::value();
  }
  static const char* value(const ::capabilities::GetCapabilitySpecsRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::capabilities::GetCapabilitySpecsRequest> should match
// service_traits::DataType< ::capabilities::GetCapabilitySpecs >
template<>
struct DataType< ::capabilities::GetCapabilitySpecsRequest>
{
  static const char* value()
  {
    return DataType< ::capabilities::GetCapabilitySpecs >::value();
  }
  static const char* value(const ::capabilities::GetCapabilitySpecsRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::capabilities::GetCapabilitySpecsResponse> should match
// service_traits::MD5Sum< ::capabilities::GetCapabilitySpecs >
template<>
struct MD5Sum< ::capabilities::GetCapabilitySpecsResponse>
{
  static const char* value()
  {
    return MD5Sum< ::capabilities::GetCapabilitySpecs >::value();
  }
  static const char* value(const ::capabilities::GetCapabilitySpecsResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::capabilities::GetCapabilitySpecsResponse> should match
// service_traits::DataType< ::capabilities::GetCapabilitySpecs >
template<>
struct DataType< ::capabilities::GetCapabilitySpecsResponse>
{
  static const char* value()
  {
    return DataType< ::capabilities::GetCapabilitySpecs >::value();
  }
  static const char* value(const ::capabilities::GetCapabilitySpecsResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // CAPABILITIES_MESSAGE_GETCAPABILITYSPECS_H
