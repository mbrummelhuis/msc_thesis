#include "ros/ros.h"
#include "geometry_msgs/Twist.h"

/*
This ROS node publishes wrench updates for the impedance solver to listen to and process. Used as simulation tool to simulate real sensor input.
*/

void simulateWrenchData();


int main(int argc, char **argv) 
{
   // Initialise node
  ros::init(argc, argv, "wrench_publisher_sim"); 
  ros::NodeHandle n;
  
  ros::Publisher pub = n.advertise<geometry_msgs::Twist>("impedance_wrench", 1);
  ros::Rate loop_rate(10);
  
  int count = 0;
  while(ros::ok())
  {
    geometry_msgs::Twist msg;
    msg.linear.x = 1.0;
    msg.linear.y = 2.0;
    msg.linear.z = 3.0;
    msg.angular.x = 4.0;
    msg.angular.y = 5.0;
    msg.angular.z = 6.0;
    
    ROS_INFO("%f \t %f \t %f \t %f \t %f \t %f", msg.linear.x, msg.linear.y, msg.linear.z, msg.angular.x, msg.angular.y, msg.angular.z);
    // Some function to simulate and fill the message
    
    pub.publish(msg);
    
    ros::spinOnce();
    loop_rate.sleep();
    
    count++;
  }
  
  return 0;
}

void simulateWrenchData()
{
  // Code for simulating the wrench data
  return;
}
