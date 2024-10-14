cmake_minimum_required(VERSION 3.8)
project(msg_lidar_shape)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake_auto REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(visualization_msgs REQUIRED)
ament_auto_find_build_dependencies()
rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/DetectedObject.msg"
  "msg/Lane.msg"
  "msg/LaneArray.msg"
  "msg/DtLane.msg"
  "msg/Waypoint.msg"
  "msg/WaypointState.msg"
  DEPENDENCIES  builtin_interfaces 
  DEPENDENCIES	std_msgs
  DEPENDENCIES	geometry_msgs
  DEPENDENCIES	sensor_msgs
  DEPENDENCIES	visualization_msgs
)

ament_auto_package()


