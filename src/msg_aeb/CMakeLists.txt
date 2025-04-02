cmake_minimum_required(VERSION 3.5)
project(msg_aeb)

find_package(ament_cmake_auto REQUIRED)
ament_auto_find_build_dependencies()

rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/AebPathPoint.msg"
  "msg/RoadPointInfo.msg"

  DEPENDENCIES
    std_msgs
    builtin_interfaces
)



ament_auto_package()

