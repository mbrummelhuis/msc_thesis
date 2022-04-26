#include "ros/ros.h"
#include "geometry_msgs/Twist.h"

int main(int argc, int **argv)
{
  // Initialise node
  ros::init(argc, argv, "high_level_planner");
  ros::NodeHandle n;
  
  ros::Publisher pub = n.advertise<geometry_msgs::Twist>("desired_trajectory", 1);
  ros::Rate loop_rate(1);
  
  while(ros::ok())
  {
    geometry_msgs::Twist msg;
    msg.linear.x = 5.0;
    msg.linear.y = 0.0;
    msg.linear.z = 2.0;
    msg.angular.x = 0.0;
    msg.angular.y = 0.0;
    msg.angular.z = 0.0;
    
    ROS_INFO("%f \t %f \t %f \t %f \t %f \t %f", msg.linear.x, msg.linear.y, msg.linear.z, msg.angular.x, msg.angular.y, msg.angular.z);
    // Some function to simulate and fill the message
    
    pub.publish(msg);
    
    ros::spinOnce();
    loop_rate.sleep();
  }
  
  return 0;
}
