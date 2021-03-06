// Generated by gencpp from file mavros_msgs/CommandAck.msg
// DO NOT EDIT!


#ifndef MAVROS_MSGS_MESSAGE_COMMANDACK_H
#define MAVROS_MSGS_MESSAGE_COMMANDACK_H

#include <ros/service_traits.h>


#include <mavros_msgs/CommandAckRequest.h>
#include <mavros_msgs/CommandAckResponse.h>


namespace mavros_msgs
{

struct CommandAck
{

typedef CommandAckRequest Request;
typedef CommandAckResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct CommandAck
} // namespace mavros_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::mavros_msgs::CommandAck > {
  static const char* value()
  {
    return "a3d0814a86c597ac57373d872df6d1d3";
  }

  static const char* value(const ::mavros_msgs::CommandAck&) { return value(); }
};

template<>
struct DataType< ::mavros_msgs::CommandAck > {
  static const char* value()
  {
    return "mavros_msgs/CommandAck";
  }

  static const char* value(const ::mavros_msgs::CommandAck&) { return value(); }
};


// service_traits::MD5Sum< ::mavros_msgs::CommandAckRequest> should match
// service_traits::MD5Sum< ::mavros_msgs::CommandAck >
template<>
struct MD5Sum< ::mavros_msgs::CommandAckRequest>
{
  static const char* value()
  {
    return MD5Sum< ::mavros_msgs::CommandAck >::value();
  }
  static const char* value(const ::mavros_msgs::CommandAckRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::mavros_msgs::CommandAckRequest> should match
// service_traits::DataType< ::mavros_msgs::CommandAck >
template<>
struct DataType< ::mavros_msgs::CommandAckRequest>
{
  static const char* value()
  {
    return DataType< ::mavros_msgs::CommandAck >::value();
  }
  static const char* value(const ::mavros_msgs::CommandAckRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::mavros_msgs::CommandAckResponse> should match
// service_traits::MD5Sum< ::mavros_msgs::CommandAck >
template<>
struct MD5Sum< ::mavros_msgs::CommandAckResponse>
{
  static const char* value()
  {
    return MD5Sum< ::mavros_msgs::CommandAck >::value();
  }
  static const char* value(const ::mavros_msgs::CommandAckResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::mavros_msgs::CommandAckResponse> should match
// service_traits::DataType< ::mavros_msgs::CommandAck >
template<>
struct DataType< ::mavros_msgs::CommandAckResponse>
{
  static const char* value()
  {
    return DataType< ::mavros_msgs::CommandAck >::value();
  }
  static const char* value(const ::mavros_msgs::CommandAckResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // MAVROS_MSGS_MESSAGE_COMMANDACK_H
