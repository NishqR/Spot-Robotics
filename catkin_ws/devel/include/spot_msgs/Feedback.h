// Generated by gencpp from file spot_msgs/Feedback.msg
// DO NOT EDIT!


#ifndef SPOT_MSGS_MESSAGE_FEEDBACK_H
#define SPOT_MSGS_MESSAGE_FEEDBACK_H


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
struct Feedback_
{
  typedef Feedback_<ContainerAllocator> Type;

  Feedback_()
    : standing(false)
    , sitting(false)
    , moving(false)
    , serial_number()
    , species()
    , version()
    , nickname()
    , computer_serial_number()  {
    }
  Feedback_(const ContainerAllocator& _alloc)
    : standing(false)
    , sitting(false)
    , moving(false)
    , serial_number(_alloc)
    , species(_alloc)
    , version(_alloc)
    , nickname(_alloc)
    , computer_serial_number(_alloc)  {
  (void)_alloc;
    }



   typedef uint8_t _standing_type;
  _standing_type standing;

   typedef uint8_t _sitting_type;
  _sitting_type sitting;

   typedef uint8_t _moving_type;
  _moving_type moving;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _serial_number_type;
  _serial_number_type serial_number;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _species_type;
  _species_type species;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _version_type;
  _version_type version;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _nickname_type;
  _nickname_type nickname;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _computer_serial_number_type;
  _computer_serial_number_type computer_serial_number;





  typedef boost::shared_ptr< ::spot_msgs::Feedback_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::spot_msgs::Feedback_<ContainerAllocator> const> ConstPtr;

}; // struct Feedback_

typedef ::spot_msgs::Feedback_<std::allocator<void> > Feedback;

typedef boost::shared_ptr< ::spot_msgs::Feedback > FeedbackPtr;
typedef boost::shared_ptr< ::spot_msgs::Feedback const> FeedbackConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::spot_msgs::Feedback_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::spot_msgs::Feedback_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::spot_msgs::Feedback_<ContainerAllocator1> & lhs, const ::spot_msgs::Feedback_<ContainerAllocator2> & rhs)
{
  return lhs.standing == rhs.standing &&
    lhs.sitting == rhs.sitting &&
    lhs.moving == rhs.moving &&
    lhs.serial_number == rhs.serial_number &&
    lhs.species == rhs.species &&
    lhs.version == rhs.version &&
    lhs.nickname == rhs.nickname &&
    lhs.computer_serial_number == rhs.computer_serial_number;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::spot_msgs::Feedback_<ContainerAllocator1> & lhs, const ::spot_msgs::Feedback_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace spot_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::spot_msgs::Feedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::spot_msgs::Feedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::spot_msgs::Feedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::spot_msgs::Feedback_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::spot_msgs::Feedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::spot_msgs::Feedback_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::spot_msgs::Feedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "16779e4df8e3f77c9ee8c1811559bd21";
  }

  static const char* value(const ::spot_msgs::Feedback_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x16779e4df8e3f77cULL;
  static const uint64_t static_value2 = 0x9ee8c1811559bd21ULL;
};

template<class ContainerAllocator>
struct DataType< ::spot_msgs::Feedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "spot_msgs/Feedback";
  }

  static const char* value(const ::spot_msgs::Feedback_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::spot_msgs::Feedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool standing\n"
"bool sitting\n"
"bool moving\n"
"\n"
"string serial_number\n"
"string species\n"
"string version\n"
"string nickname\n"
"string computer_serial_number\n"
;
  }

  static const char* value(const ::spot_msgs::Feedback_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::spot_msgs::Feedback_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.standing);
      stream.next(m.sitting);
      stream.next(m.moving);
      stream.next(m.serial_number);
      stream.next(m.species);
      stream.next(m.version);
      stream.next(m.nickname);
      stream.next(m.computer_serial_number);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Feedback_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::spot_msgs::Feedback_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::spot_msgs::Feedback_<ContainerAllocator>& v)
  {
    s << indent << "standing: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.standing);
    s << indent << "sitting: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.sitting);
    s << indent << "moving: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.moving);
    s << indent << "serial_number: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.serial_number);
    s << indent << "species: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.species);
    s << indent << "version: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.version);
    s << indent << "nickname: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.nickname);
    s << indent << "computer_serial_number: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.computer_serial_number);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SPOT_MSGS_MESSAGE_FEEDBACK_H
