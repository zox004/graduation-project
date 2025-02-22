// Generated by gencpp from file cob_light/StopLightMode.msg
// DO NOT EDIT!


#ifndef COB_LIGHT_MESSAGE_STOPLIGHTMODE_H
#define COB_LIGHT_MESSAGE_STOPLIGHTMODE_H

#include <ros/service_traits.h>


#include <cob_light/StopLightModeRequest.h>
#include <cob_light/StopLightModeResponse.h>


namespace cob_light
{

struct StopLightMode
{

typedef StopLightModeRequest Request;
typedef StopLightModeResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct StopLightMode
} // namespace cob_light


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::cob_light::StopLightMode > {
  static const char* value()
  {
    return "ff63610bc77a2ca5f01313df1d115bd4";
  }

  static const char* value(const ::cob_light::StopLightMode&) { return value(); }
};

template<>
struct DataType< ::cob_light::StopLightMode > {
  static const char* value()
  {
    return "cob_light/StopLightMode";
  }

  static const char* value(const ::cob_light::StopLightMode&) { return value(); }
};


// service_traits::MD5Sum< ::cob_light::StopLightModeRequest> should match
// service_traits::MD5Sum< ::cob_light::StopLightMode >
template<>
struct MD5Sum< ::cob_light::StopLightModeRequest>
{
  static const char* value()
  {
    return MD5Sum< ::cob_light::StopLightMode >::value();
  }
  static const char* value(const ::cob_light::StopLightModeRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::cob_light::StopLightModeRequest> should match
// service_traits::DataType< ::cob_light::StopLightMode >
template<>
struct DataType< ::cob_light::StopLightModeRequest>
{
  static const char* value()
  {
    return DataType< ::cob_light::StopLightMode >::value();
  }
  static const char* value(const ::cob_light::StopLightModeRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::cob_light::StopLightModeResponse> should match
// service_traits::MD5Sum< ::cob_light::StopLightMode >
template<>
struct MD5Sum< ::cob_light::StopLightModeResponse>
{
  static const char* value()
  {
    return MD5Sum< ::cob_light::StopLightMode >::value();
  }
  static const char* value(const ::cob_light::StopLightModeResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::cob_light::StopLightModeResponse> should match
// service_traits::DataType< ::cob_light::StopLightMode >
template<>
struct DataType< ::cob_light::StopLightModeResponse>
{
  static const char* value()
  {
    return DataType< ::cob_light::StopLightMode >::value();
  }
  static const char* value(const ::cob_light::StopLightModeResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // COB_LIGHT_MESSAGE_STOPLIGHTMODE_H
