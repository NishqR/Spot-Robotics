// Generated by gencpp from file spot_msgs/ListGraphRequest.msg
// DO NOT EDIT!


#ifndef SPOT_MSGS_MESSAGE_LISTGRAPHREQUEST_H
#define SPOT_MSGS_MESSAGE_LISTGRAPHREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace spot_msgs
{
template <class ContainerAllocator>
struct ListGraphRequest_
{
  typedef ListGraphRequest_<ContainerAllocator> Type;

  ListGraphRequest_()
    : upload_filepath()  {
    }
  ListGraphRequest_(const ContainerAllocator& _alloc)
    : upload_filepath(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _upload_filepath_type;
  _upload_filepath_type upload_filepath;





  typedef boost::shared_ptr< ::spot_msgs::ListGraphRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::spot_msgs::ListGraphRequest_<ContainerAllocator> const> ConstPtr;

}; // struct ListGraphRequest_

typedef ::spot_msgs::ListGraphRequest_<std::allocator<void> > ListGraphRequest;

typedef boost::shared_ptr< ::spot_msgs::ListGraphRequest > ListGraphRequestPtr;
typedef boost::shared_ptr< ::spot_msgs::ListGraphRequest const> ListGraphRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::spot_msgs::ListGraphRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::spot_msgs::ListGraphRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::spot_msgs::ListGraphRequest_<ContainerAllocator1> & lhs, const ::spot_msgs::ListGraphRequest_<ContainerAllocator2> & rhs)
{
  return lhs.upload_filepath == rhs.upload_filepath;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::spot_msgs::ListGraphRequest_<ContainerAllocator1> & lhs, const ::spot_msgs::ListGraphRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace spot_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::spot_msgs::ListGraphRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::spot_msgs::ListGraphRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::spot_msgs::ListGraphRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::spot_msgs::ListGraphRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::spot_msgs::ListGraphRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::spot_msgs::ListGraphRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::spot_msgs::ListGraphRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "01555024216a394c0adb22a6e9118fe3";
  }

  static const char* value(const ::spot_msgs::ListGraphRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x01555024216a394cULL;
  static const uint64_t static_value2 = 0x0adb22a6e9118fe3ULL;
};

template<class ContainerAllocator>
struct DataType< ::spot_msgs::ListGraphRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "spot_msgs/ListGraphRequest";
  }

  static const char* value(const ::spot_msgs::ListGraphRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::spot_msgs::ListGraphRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string upload_filepath\n"
;
  }

  static const char* value(const ::spot_msgs::ListGraphRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::spot_msgs::ListGraphRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.upload_filepath);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ListGraphRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::spot_msgs::ListGraphRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::spot_msgs::ListGraphRequest_<ContainerAllocator>& v)
  {
    s << indent << "upload_filepath: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.upload_filepath);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SPOT_MSGS_MESSAGE_LISTGRAPHREQUEST_H
