#include "ros/ros.h"
#include "geometry_msgs/Twist.h"
#include <vector>
/*
This ROS node is meant to listen to the impedance_wrench topic to hear updates of the input wrench, and will solve the impedance equation to find a reference pose trajectory.
Set M, D and K of impedance equation as parameters or source them in some semsible way that doesn't require hardcoding.
*/

// Some function declarations
void wrenchCallback (const geometry_msgs::Twist::ConstPtr& msg);

void poseCallback (const geometry_msgs::Twist::ConstPtr& msg);

int main(int argc, char **argv) 
{
   // Initialise node
  ros::init(argc, argv, "impedance_solver");
  ros::NodeHandle n;
  
  // Listen to impedance_wrench topic, with 1000 messages of buffer, redirecting to Callback
  ros::Subscriber sub_wrench = n.subscribe("impedance_wrench", 1000, wrenchCallback);
  
  ros::Subscriber sub_pose = n.subscribe("desired_pose", 1000, poseCallback);
  
  // Maybe subscribe to a topic that has a publisher node that finds somehow the EE configuration and combines it with the IMU fused data to get EE pose in world frame?????
  
  ros::spin();
  
  return 0;
}

// Function definitions

void wrenchCallback (const geometry_msgs::Twist::ConstPtr& msg)
{
  ROS_INFO("Received wrench update: %f, %f, %f, %f, %f, %f", msg->linear.x, msg->linear.y, msg->linear.z, msg->angular.x, msg->angular.y, msg->angular.z);
  
  // 
  // Calculate gamma = transformation matrix x wrench (in ee frame) (1)
  // Calculate delta x from impedance equation (2)
  
  
}

void poseCallback (const geometry_msgs::Twist::ConstPtr& msg)
{ 
  ROS_INFO("Received pose update: %f, %f, %f, %f, %f, %f", msg->linear.x, msg->linear.y, msg->linear.z, msg->angular.x, msg->angular.y, msg->angular.z);
  
  // Calculate x_e,r from delta x and desired x (x_e,d) (3)
  // Calculate the thrust and orientations from x_e,r and publish
  // Let offboard control node subscribe to the published data and publish it at high frequency  to the PX4
}

void solveImpedanceEquation()
{
  
}
