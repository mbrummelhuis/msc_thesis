#!/bin/bash


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

DONT_RUN=1 make px4_sitl_default gazebo # Make px4 gazebo
source ~/catkin_ws/devel/setup.bash    # (optional)
source Tools/setup_gazebo.bash $(pwd) $(pwd)/build/px4_sitl_default # For some reason this sets the GAZEBO_PLUGIN_PATH to PX4-autopilot/build/px4_sitl_default/build_gazebo and GAZEBO_MODEL_PATH to Tools/sitl_gazebo/models
export ROS_PACKAGE_PATH=$ROS_PACKAGE_PATH:$(pwd)
export ROS_PACKAGE_PATH=$ROS_PACKAGE_PATH:$(pwd)/Tools/sitl_gazebo

# Launch QGroundControl
if pgrep -x QGroundControl >/dev/null
then
  echo "QGroundControl already running"
else  
  ./QGroundControl.AppImage &
  echo "Startin QGroundControl"
fi

# Roslaunch for launch file from gazebo_ros
#roslaunch gazebo_ros empty_world.launch world_name:=$(pwd)/Tools/sitl_gazebo/worlds/iris.world

# Roslaunch for launch file from px4 
roslaunch px4 mbr_sitl_v2.launch vehicle:=iris #arg:=value

