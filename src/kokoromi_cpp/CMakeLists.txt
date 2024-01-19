cmake_minimum_required(VERSION 3.8)
project(kokoromi_cpp)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED COMPONENTS rclcpp)
find_package(std_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(OpenCV REQUIRED)
find_package(cv_bridge REQUIRED)
find_package(yaml-cpp REQUIRED)
find_package(message_filters REQUIRED)
find_package(PCL REQUIRED COMPONENTS common filters)
find_package(pcl_msgs REQUIRED)
find_package(ninshiki_interfaces REQUIRED)

include_directories(${pcl_msgs_INCLUDE_DIRS})

add_executable(talker src/camera_info_publisher.cpp)
ament_target_dependencies(talker ninshiki_interfaces rclcpp std_msgs sensor_msgs)

add_executable(listener src/camera_info_subscriber.cpp)
ament_target_dependencies(listener rclcpp std_msgs sensor_msgs)

add_executable(image_publisher src/image_publisher.cpp)
ament_target_dependencies(image_publisher rclcpp std_msgs sensor_msgs cv_bridge)

add_executable(image_subscriber src/image_subscriber.cpp)
ament_target_dependencies(image_subscriber rclcpp std_msgs sensor_msgs cv_bridge)

add_executable(pointcloud_subscriber src/projected_pointcloud_subscriber.cpp)
ament_target_dependencies(pointcloud_subscriber rclcpp std_msgs sensor_msgs cv_bridge yaml-cpp message_filters PCL)

target_link_libraries(image_publisher ${OpenCV_LIBRARIES})
target_link_libraries(image_subscriber ${OpenCV_LIBRARIES})

install(TARGETS
  talker
  listener
  image_publisher
  image_subscriber
  pointcloud_subscriber
  DESTINATION lib/${PROJECT_NAME})

ament_package()