cmake_minimum_required(VERSION 3.8)
project(lidar_monitor_msg)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/LidarMonitor.msg"
  DEPENDENCIES  builtin_interfaces 
  DEPENDENCIES	std_msgs 
)

ament_package()
