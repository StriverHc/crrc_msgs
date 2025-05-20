cmake_minimum_required(VERSION 3.8)
project(msg_obj)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake_auto REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(msg_common REQUIRED)
ament_auto_find_build_dependencies()
rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/Obj.msg"
  "msg/ObjTemp.msg"
  DEPENDENCIES  builtin_interfaces 
  DEPENDENCIES	std_msgs
  DEPENDENCIES	msg_common
)

ament_auto_package()
