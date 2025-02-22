// Generated by gencpp from file app_manager/InstallApp.msg
// DO NOT EDIT!


#ifndef APP_MANAGER_MESSAGE_INSTALLAPP_H
#define APP_MANAGER_MESSAGE_INSTALLAPP_H

#include <ros/service_traits.h>


#include <app_manager/InstallAppRequest.h>
#include <app_manager/InstallAppResponse.h>


namespace app_manager
{

struct InstallApp
{

typedef InstallAppRequest Request;
typedef InstallAppResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct InstallApp
} // namespace app_manager


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::app_manager::InstallApp > {
  static const char* value()
  {
    return "244a230f15ee33d3fe16b523058ae43f";
  }

  static const char* value(const ::app_manager::InstallApp&) { return value(); }
};

template<>
struct DataType< ::app_manager::InstallApp > {
  static const char* value()
  {
    return "app_manager/InstallApp";
  }

  static const char* value(const ::app_manager::InstallApp&) { return value(); }
};


// service_traits::MD5Sum< ::app_manager::InstallAppRequest> should match 
// service_traits::MD5Sum< ::app_manager::InstallApp > 
template<>
struct MD5Sum< ::app_manager::InstallAppRequest>
{
  static const char* value()
  {
    return MD5Sum< ::app_manager::InstallApp >::value();
  }
  static const char* value(const ::app_manager::InstallAppRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::app_manager::InstallAppRequest> should match 
// service_traits::DataType< ::app_manager::InstallApp > 
template<>
struct DataType< ::app_manager::InstallAppRequest>
{
  static const char* value()
  {
    return DataType< ::app_manager::InstallApp >::value();
  }
  static const char* value(const ::app_manager::InstallAppRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::app_manager::InstallAppResponse> should match 
// service_traits::MD5Sum< ::app_manager::InstallApp > 
template<>
struct MD5Sum< ::app_manager::InstallAppResponse>
{
  static const char* value()
  {
    return MD5Sum< ::app_manager::InstallApp >::value();
  }
  static const char* value(const ::app_manager::InstallAppResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::app_manager::InstallAppResponse> should match 
// service_traits::DataType< ::app_manager::InstallApp > 
template<>
struct DataType< ::app_manager::InstallAppResponse>
{
  static const char* value()
  {
    return DataType< ::app_manager::InstallApp >::value();
  }
  static const char* value(const ::app_manager::InstallAppResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // APP_MANAGER_MESSAGE_INSTALLAPP_H
