// Generated by gencpp from file spot_msgs/ListGraph.msg
// DO NOT EDIT!


#ifndef SPOT_MSGS_MESSAGE_LISTGRAPH_H
#define SPOT_MSGS_MESSAGE_LISTGRAPH_H

#include <ros/service_traits.h>


#include <spot_msgs/ListGraphRequest.h>
#include <spot_msgs/ListGraphResponse.h>


namespace spot_msgs
{

struct ListGraph
{

typedef ListGraphRequest Request;
typedef ListGraphResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct ListGraph
} // namespace spot_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::spot_msgs::ListGraph > {
  static const char* value()
  {
    return "f5a4b6eebf7b4418f61ce9162832e5bf";
  }

  static const char* value(const ::spot_msgs::ListGraph&) { return value(); }
};

template<>
struct DataType< ::spot_msgs::ListGraph > {
  static const char* value()
  {
    return "spot_msgs/ListGraph";
  }

  static const char* value(const ::spot_msgs::ListGraph&) { return value(); }
};


// service_traits::MD5Sum< ::spot_msgs::ListGraphRequest> should match
// service_traits::MD5Sum< ::spot_msgs::ListGraph >
template<>
struct MD5Sum< ::spot_msgs::ListGraphRequest>
{
  static const char* value()
  {
    return MD5Sum< ::spot_msgs::ListGraph >::value();
  }
  static const char* value(const ::spot_msgs::ListGraphRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::spot_msgs::ListGraphRequest> should match
// service_traits::DataType< ::spot_msgs::ListGraph >
template<>
struct DataType< ::spot_msgs::ListGraphRequest>
{
  static const char* value()
  {
    return DataType< ::spot_msgs::ListGraph >::value();
  }
  static const char* value(const ::spot_msgs::ListGraphRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::spot_msgs::ListGraphResponse> should match
// service_traits::MD5Sum< ::spot_msgs::ListGraph >
template<>
struct MD5Sum< ::spot_msgs::ListGraphResponse>
{
  static const char* value()
  {
    return MD5Sum< ::spot_msgs::ListGraph >::value();
  }
  static const char* value(const ::spot_msgs::ListGraphResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::spot_msgs::ListGraphResponse> should match
// service_traits::DataType< ::spot_msgs::ListGraph >
template<>
struct DataType< ::spot_msgs::ListGraphResponse>
{
  static const char* value()
  {
    return DataType< ::spot_msgs::ListGraph >::value();
  }
  static const char* value(const ::spot_msgs::ListGraphResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // SPOT_MSGS_MESSAGE_LISTGRAPH_H
