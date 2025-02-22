// Generated by gencpp from file cob_srvs/SetFloat.msg
// DO NOT EDIT!


#ifndef COB_SRVS_MESSAGE_SETFLOAT_H
#define COB_SRVS_MESSAGE_SETFLOAT_H

#include <ros/service_traits.h>


#include <cob_srvs/SetFloatRequest.h>
#include <cob_srvs/SetFloatResponse.h>


namespace cob_srvs
{

struct SetFloat
{

typedef SetFloatRequest Request;
typedef SetFloatResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetFloat
} // namespace cob_srvs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::cob_srvs::SetFloat > {
  static const char* value()
  {
    return "96fbe2a49585a736ad8b4a31afbaf099";
  }

  static const char* value(const ::cob_srvs::SetFloat&) { return value(); }
};

template<>
struct DataType< ::cob_srvs::SetFloat > {
  static const char* value()
  {
    return "cob_srvs/SetFloat";
  }

  static const char* value(const ::cob_srvs::SetFloat&) { return value(); }
};


// service_traits::MD5Sum< ::cob_srvs::SetFloatRequest> should match
// service_traits::MD5Sum< ::cob_srvs::SetFloat >
template<>
struct MD5Sum< ::cob_srvs::SetFloatRequest>
{
  static const char* value()
  {
    return MD5Sum< ::cob_srvs::SetFloat >::value();
  }
  static const char* value(const ::cob_srvs::SetFloatRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::cob_srvs::SetFloatRequest> should match
// service_traits::DataType< ::cob_srvs::SetFloat >
template<>
struct DataType< ::cob_srvs::SetFloatRequest>
{
  static const char* value()
  {
    return DataType< ::cob_srvs::SetFloat >::value();
  }
  static const char* value(const ::cob_srvs::SetFloatRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::cob_srvs::SetFloatResponse> should match
// service_traits::MD5Sum< ::cob_srvs::SetFloat >
template<>
struct MD5Sum< ::cob_srvs::SetFloatResponse>
{
  static const char* value()
  {
    return MD5Sum< ::cob_srvs::SetFloat >::value();
  }
  static const char* value(const ::cob_srvs::SetFloatResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::cob_srvs::SetFloatResponse> should match
// service_traits::DataType< ::cob_srvs::SetFloat >
template<>
struct DataType< ::cob_srvs::SetFloatResponse>
{
  static const char* value()
  {
    return DataType< ::cob_srvs::SetFloat >::value();
  }
  static const char* value(const ::cob_srvs::SetFloatResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // COB_SRVS_MESSAGE_SETFLOAT_H
