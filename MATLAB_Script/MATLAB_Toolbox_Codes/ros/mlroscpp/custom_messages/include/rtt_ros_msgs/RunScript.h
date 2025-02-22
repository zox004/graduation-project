// Generated by gencpp from file rtt_ros_msgs/RunScript.msg
// DO NOT EDIT!


#ifndef RTT_ROS_MSGS_MESSAGE_RUNSCRIPT_H
#define RTT_ROS_MSGS_MESSAGE_RUNSCRIPT_H

#include <ros/service_traits.h>


#include <rtt_ros_msgs/RunScriptRequest.h>
#include <rtt_ros_msgs/RunScriptResponse.h>


namespace rtt_ros_msgs
{

struct RunScript
{

typedef RunScriptRequest Request;
typedef RunScriptResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct RunScript
} // namespace rtt_ros_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::rtt_ros_msgs::RunScript > {
  static const char* value()
  {
    return "f939225dec656cc6ed2ee79ff18d999f";
  }

  static const char* value(const ::rtt_ros_msgs::RunScript&) { return value(); }
};

template<>
struct DataType< ::rtt_ros_msgs::RunScript > {
  static const char* value()
  {
    return "rtt_ros_msgs/RunScript";
  }

  static const char* value(const ::rtt_ros_msgs::RunScript&) { return value(); }
};


// service_traits::MD5Sum< ::rtt_ros_msgs::RunScriptRequest> should match
// service_traits::MD5Sum< ::rtt_ros_msgs::RunScript >
template<>
struct MD5Sum< ::rtt_ros_msgs::RunScriptRequest>
{
  static const char* value()
  {
    return MD5Sum< ::rtt_ros_msgs::RunScript >::value();
  }
  static const char* value(const ::rtt_ros_msgs::RunScriptRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::rtt_ros_msgs::RunScriptRequest> should match
// service_traits::DataType< ::rtt_ros_msgs::RunScript >
template<>
struct DataType< ::rtt_ros_msgs::RunScriptRequest>
{
  static const char* value()
  {
    return DataType< ::rtt_ros_msgs::RunScript >::value();
  }
  static const char* value(const ::rtt_ros_msgs::RunScriptRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::rtt_ros_msgs::RunScriptResponse> should match
// service_traits::MD5Sum< ::rtt_ros_msgs::RunScript >
template<>
struct MD5Sum< ::rtt_ros_msgs::RunScriptResponse>
{
  static const char* value()
  {
    return MD5Sum< ::rtt_ros_msgs::RunScript >::value();
  }
  static const char* value(const ::rtt_ros_msgs::RunScriptResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::rtt_ros_msgs::RunScriptResponse> should match
// service_traits::DataType< ::rtt_ros_msgs::RunScript >
template<>
struct DataType< ::rtt_ros_msgs::RunScriptResponse>
{
  static const char* value()
  {
    return DataType< ::rtt_ros_msgs::RunScript >::value();
  }
  static const char* value(const ::rtt_ros_msgs::RunScriptResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // RTT_ROS_MSGS_MESSAGE_RUNSCRIPT_H
