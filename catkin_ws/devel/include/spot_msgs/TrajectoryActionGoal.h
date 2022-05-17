// Generated by gencpp from file spot_msgs/TrajectoryActionGoal.msg
// DO NOT EDIT!


#ifndef SPOT_MSGS_MESSAGE_TRAJECTORYACTIONGOAL_H
#define SPOT_MSGS_MESSAGE_TRAJECTORYACTIONGOAL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <actionlib_msgs/GoalID.h>
#include <spot_msgs/TrajectoryGoal.h>

namespace spot_msgs
{
template <class ContainerAllocator>
struct TrajectoryActionGoal_
{
  typedef TrajectoryActionGoal_<ContainerAllocator> Type;

  TrajectoryActionGoal_()
    : header()
    , goal_id()
    , goal()  {
    }
  TrajectoryActionGoal_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , goal_id(_alloc)
    , goal(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::actionlib_msgs::GoalID_<ContainerAllocator>  _goal_id_type;
  _goal_id_type goal_id;

   typedef  ::spot_msgs::TrajectoryGoal_<ContainerAllocator>  _goal_type;
  _goal_type goal;





  typedef boost::shared_ptr< ::spot_msgs::TrajectoryActionGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::spot_msgs::TrajectoryActionGoal_<ContainerAllocator> const> ConstPtr;

}; // struct TrajectoryActionGoal_

typedef ::spot_msgs::TrajectoryActionGoal_<std::allocator<void> > TrajectoryActionGoal;

typedef boost::shared_ptr< ::spot_msgs::TrajectoryActionGoal > TrajectoryActionGoalPtr;
typedef boost::shared_ptr< ::spot_msgs::TrajectoryActionGoal const> TrajectoryActionGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::spot_msgs::TrajectoryActionGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::spot_msgs::TrajectoryActionGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::spot_msgs::TrajectoryActionGoal_<ContainerAllocator1> & lhs, const ::spot_msgs::TrajectoryActionGoal_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.goal_id == rhs.goal_id &&
    lhs.goal == rhs.goal;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::spot_msgs::TrajectoryActionGoal_<ContainerAllocator1> & lhs, const ::spot_msgs::TrajectoryActionGoal_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace spot_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::spot_msgs::TrajectoryActionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::spot_msgs::TrajectoryActionGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::spot_msgs::TrajectoryActionGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::spot_msgs::TrajectoryActionGoal_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::spot_msgs::TrajectoryActionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::spot_msgs::TrajectoryActionGoal_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::spot_msgs::TrajectoryActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6a8331f7d10a65ec221ecacfd44669ef";
  }

  static const char* value(const ::spot_msgs::TrajectoryActionGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6a8331f7d10a65ecULL;
  static const uint64_t static_value2 = 0x221ecacfd44669efULL;
};

template<class ContainerAllocator>
struct DataType< ::spot_msgs::TrajectoryActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "spot_msgs/TrajectoryActionGoal";
  }

  static const char* value(const ::spot_msgs::TrajectoryActionGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::spot_msgs::TrajectoryActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"\n"
"Header header\n"
"actionlib_msgs/GoalID goal_id\n"
"TrajectoryGoal goal\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: actionlib_msgs/GoalID\n"
"# The stamp should store the time at which this goal was requested.\n"
"# It is used by an action server when it tries to preempt all\n"
"# goals that were requested before a certain time\n"
"time stamp\n"
"\n"
"# The id provides a way to associate feedback and\n"
"# result message with specific goal requests. The id\n"
"# specified must be unique.\n"
"string id\n"
"\n"
"\n"
"================================================================================\n"
"MSG: spot_msgs/TrajectoryGoal\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"geometry_msgs/PoseStamped target_pose\n"
"# After this duration, the command will time out and the robot will stop. Must be non-zero\n"
"std_msgs/Duration duration\n"
"# If true, the feedback from the trajectory command must indicate that the robot is\n"
"# at the goal position. If set to false, the robot being near the goal is equivalent to\n"
"# it being at the goal. This is based on the feedback received from the boston dynamics\n"
"# API call at\n"
"# https://dev.bostondynamics.com/protos/bosdyn/api/proto_reference.html?highlight=status_near_goal#se2trajectorycommand-feedback-status\n"
"bool precise_positioning\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/PoseStamped\n"
"# A Pose with reference coordinate frame and timestamp\n"
"Header header\n"
"Pose pose\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Duration\n"
"duration data\n"
;
  }

  static const char* value(const ::spot_msgs::TrajectoryActionGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::spot_msgs::TrajectoryActionGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.goal_id);
      stream.next(m.goal);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TrajectoryActionGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::spot_msgs::TrajectoryActionGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::spot_msgs::TrajectoryActionGoal_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "goal_id: ";
    s << std::endl;
    Printer< ::actionlib_msgs::GoalID_<ContainerAllocator> >::stream(s, indent + "  ", v.goal_id);
    s << indent << "goal: ";
    s << std::endl;
    Printer< ::spot_msgs::TrajectoryGoal_<ContainerAllocator> >::stream(s, indent + "  ", v.goal);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SPOT_MSGS_MESSAGE_TRAJECTORYACTIONGOAL_H
