// Generated by gencpp from file concert_msgs/Invite.msg
// DO NOT EDIT!


#ifndef CONCERT_MSGS_MESSAGE_INVITE_H
#define CONCERT_MSGS_MESSAGE_INVITE_H

#include <ros/service_traits.h>


#include <concert_msgs/InviteRequest.h>
#include <concert_msgs/InviteResponse.h>


namespace concert_msgs
{

struct Invite
{

typedef InviteRequest Request;
typedef InviteResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct Invite
} // namespace concert_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::concert_msgs::Invite > {
  static const char* value()
  {
    return "e3e2a995bd586ad4fe15886d3ec6ece5";
  }

  static const char* value(const ::concert_msgs::Invite&) { return value(); }
};

template<>
struct DataType< ::concert_msgs::Invite > {
  static const char* value()
  {
    return "concert_msgs/Invite";
  }

  static const char* value(const ::concert_msgs::Invite&) { return value(); }
};


// service_traits::MD5Sum< ::concert_msgs::InviteRequest> should match 
// service_traits::MD5Sum< ::concert_msgs::Invite > 
template<>
struct MD5Sum< ::concert_msgs::InviteRequest>
{
  static const char* value()
  {
    return MD5Sum< ::concert_msgs::Invite >::value();
  }
  static const char* value(const ::concert_msgs::InviteRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::concert_msgs::InviteRequest> should match 
// service_traits::DataType< ::concert_msgs::Invite > 
template<>
struct DataType< ::concert_msgs::InviteRequest>
{
  static const char* value()
  {
    return DataType< ::concert_msgs::Invite >::value();
  }
  static const char* value(const ::concert_msgs::InviteRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::concert_msgs::InviteResponse> should match 
// service_traits::MD5Sum< ::concert_msgs::Invite > 
template<>
struct MD5Sum< ::concert_msgs::InviteResponse>
{
  static const char* value()
  {
    return MD5Sum< ::concert_msgs::Invite >::value();
  }
  static const char* value(const ::concert_msgs::InviteResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::concert_msgs::InviteResponse> should match 
// service_traits::DataType< ::concert_msgs::Invite > 
template<>
struct DataType< ::concert_msgs::InviteResponse>
{
  static const char* value()
  {
    return DataType< ::concert_msgs::Invite >::value();
  }
  static const char* value(const ::concert_msgs::InviteResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // CONCERT_MSGS_MESSAGE_INVITE_H
