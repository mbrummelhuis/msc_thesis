#!/bin/bash

# Bash file to launch the aerial manipulation sim from ROS

# Check if running and kill Gazebo because if you restart too many times it will not properly kill the gzserver
if pgrep -x gazebo >/dev/null
then
  killall -9 gazebo
  echo "Killed previous instance of gazebo"
fi
if pgrep -x gzserver >/dev/null
then
   killall -9 gzserver
   echo "Killed previous instance of gzserver"
fi 
if pgrep -x gzclient >/dev/null
then
  killall -11 gzclient
  echo "Killed previous instance of gzclient"
fi

# Build catkin ws and source
# Move to catkin ws directory
if [ ${1:-0} -ge 1 ] # If you provide any argument number greater or equal than 1, it will build the catkin workspace
then
  cd catkin_ws
  catkin build
fi
source ~/msc_thesis/catkin_ws/devel/setup.bash    # (optional)
export ROS_PACKAGE_PATH=$ROS_PACKAGE_PATH:$(pwd)/src/mbr_sim

cd ~/msc_thesis/PX4-Autopilot #move to autopilot working directory
DONT_RUN=1 make px4_sitl_default gazebo #Make px4 gazebo
source Tools/setup_gazebo.bash $(pwd) $(pwd)/build/px4_sitl_default # For some reason this sets the GAZEBO_PLUGIN_PATH to PX4-autopilot/build/px4_sitl_default/build_gazebo and GAZEBO_MODEL_PATH to Tools/sitl_gazebo/models
export ROS_PACKAGE_PATH=$ROS_PACKAGE_PATH:$(pwd)
export ROS_PACKAGE_PATH=$ROS_PACKAGE_PATH:$(pwd)/Tools/sitl_gazebo

# Launch QGroundControl
if pgrep -x QGroundControl >/dev/null
then
  echo "QGroundControl already running"
else  
  #~/QGroundControl.AppImage &
  echo "Starting QGroundControl"
fi

# Roslaunch for launch file from gazebo_ros
#roslaunch gazebo_ros empty_world.launch world_name:=$(pwd)/Tools/sitl_gazebo/worlds/iris.world

# Roslaunch for launch file
#roslaunch sim_mbr mbr_sim_v1.launch  #arg:=value

