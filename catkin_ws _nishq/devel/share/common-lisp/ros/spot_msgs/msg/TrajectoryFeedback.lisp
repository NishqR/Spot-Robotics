; Auto-generated. Do not edit!


(cl:in-package spot_msgs-msg)


;//! \htmlinclude TrajectoryFeedback.msg.html

(cl:defclass <TrajectoryFeedback> (roslisp-msg-protocol:ros-message)
  ((feedback
    :reader feedback
    :initarg :feedback
    :type cl:string
    :initform ""))
)

(cl:defclass TrajectoryFeedback (<TrajectoryFeedback>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <TrajectoryFeedback>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'TrajectoryFeedback)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name spot_msgs-msg:<TrajectoryFeedback> is deprecated: use spot_msgs-msg:TrajectoryFeedback instead.")))

(cl:ensure-generic-function 'feedback-val :lambda-list '(m))
(cl:defmethod feedback-val ((m <TrajectoryFeedback>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader spot_msgs-msg:feedback-val is deprecated.  Use spot_msgs-msg:feedback instead.")
  (feedback m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <TrajectoryFeedback>) ostream)
  "Serializes a message object of type '<TrajectoryFeedback>"
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'feedback))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'feedback))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <TrajectoryFeedback>) istream)
  "Deserializes a message object of type '<TrajectoryFeedback>"
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'feedback) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'feedback) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<TrajectoryFeedback>)))
  "Returns string type for a message object of type '<TrajectoryFeedback>"
  "spot_msgs/TrajectoryFeedback")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'TrajectoryFeedback)))
  "Returns string type for a message object of type 'TrajectoryFeedback"
  "spot_msgs/TrajectoryFeedback")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<TrajectoryFeedback>)))
  "Returns md5sum for a message object of type '<TrajectoryFeedback>"
  "c14cdf907e5c7c7fd47292add15660f0")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'TrajectoryFeedback)))
  "Returns md5sum for a message object of type 'TrajectoryFeedback"
  "c14cdf907e5c7c7fd47292add15660f0")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<TrajectoryFeedback>)))
  "Returns full string definition for message of type '<TrajectoryFeedback>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%string feedback~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'TrajectoryFeedback)))
  "Returns full string definition for message of type 'TrajectoryFeedback"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%string feedback~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <TrajectoryFeedback>))
  (cl:+ 0
     4 (cl:length (cl:slot-value msg 'feedback))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <TrajectoryFeedback>))
  "Converts a ROS message object to a list"
  (cl:list 'TrajectoryFeedback
    (cl:cons ':feedback (feedback msg))
))