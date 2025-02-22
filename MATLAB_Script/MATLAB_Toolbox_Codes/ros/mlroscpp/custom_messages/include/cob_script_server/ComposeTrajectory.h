// Generated by gencpp from file cob_script_server/ComposeTrajectory.msg
// DO NOT EDIT!


#ifndef COB_SCRIPT_SERVER_MESSAGE_COMPOSETRAJECTORY_H
#define COB_SCRIPT_SERVER_MESSAGE_COMPOSETRAJECTORY_H

#include <ros/service_traits.h>


#include <cob_script_server/ComposeTrajectoryRequest.h>
#include <cob_script_server/ComposeTrajectoryResponse.h>


namespace cob_script_server
{

struct ComposeTrajectory
{

typedef ComposeTrajectoryRequest Request;
typedef ComposeTrajectoryResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct ComposeTrajectory
} // namespace cob_script_server


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::cob_script_server::ComposeTrajectory > {
  static const char* value()
  {
    return "c320ebb295f4a80333624b0ea716b1c1";
  }

  static const char* value(const ::cob_script_server::ComposeTrajectory&) { return value(); }
};

template<>
struct DataType< ::cob_script_server::ComposeTrajectory > {
  static const char* value()
  {
    return "cob_script_server/ComposeTrajectory";
  }

  static const char* value(const ::cob_script_server::ComposeTrajectory&) { return value(); }
};


// service_traits::MD5Sum< ::cob_script_server::ComposeTrajectoryRequest> should match
// service_traits::MD5Sum< ::cob_script_server::ComposeTrajectory >
template<>
struct MD5Sum< ::cob_script_server::ComposeTrajectoryRequest>
{
  static const char* value()
  {
    return MD5Sum< ::cob_script_server::ComposeTrajectory >::value();
  }
  static const char* value(const ::cob_script_server::ComposeTrajectoryRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::cob_script_server::ComposeTrajectoryRequest> should match
// service_traits::DataType< ::cob_script_server::ComposeTrajectory >
template<>
struct DataType< ::cob_script_server::ComposeTrajectoryRequest>
{
  static const char* value()
  {
    return DataType< ::cob_script_server::ComposeTrajectory >::value();
  }
  static const char* value(const ::cob_script_server::ComposeTrajectoryRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::cob_script_server::ComposeTrajectoryResponse> should match
// service_traits::MD5Sum< ::cob_script_server::ComposeTrajectory >
template<>
struct MD5Sum< ::cob_script_server::ComposeTrajectoryResponse>
{
  static const char* value()
  {
    return MD5Sum< ::cob_script_server::ComposeTrajectory >::value();
  }
  static const char* value(const ::cob_script_server::ComposeTrajectoryResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::cob_script_server::ComposeTrajectoryResponse> should match
// service_traits::DataType< ::cob_script_server::ComposeTrajectory >
template<>
struct DataType< ::cob_script_server::ComposeTrajectoryResponse>
{
  static const char* value()
  {
    return DataType< ::cob_script_server::ComposeTrajectory >::value();
  }
  static const char* value(const ::cob_script_server::ComposeTrajectoryResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // COB_SCRIPT_SERVER_MESSAGE_COMPOSETRAJECTORY_H
