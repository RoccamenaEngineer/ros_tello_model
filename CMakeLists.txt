cmake_minimum_required(VERSION 3.0.2)
project(ros_tello_model)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  rospy
  std_msgs
  geometry_msgs
  message_generation
  message_filters
  tf
  dynamic_reconfigure
)

# Messages, services and actions

# Dynamic reconfigure parameters

# Catkin specific configuration

catkin_package( CATKIN_DEPENDS
  roscpp rospy
  std_msgs
  geometry_msgs
  message_runtime
  message_filters
)

# Build

include_directories(
  ${catkin_INCLUDE_DIRS}
)

add_executable(passive_tello_node src/passive_tello_node.cpp)
target_link_libraries(passive_tello_node ${catkin_LIBRARIES})