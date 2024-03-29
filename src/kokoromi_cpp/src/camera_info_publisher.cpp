// Copyright 2016 Open Source Robotics Foundation, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include <chrono>
#include <functional>
#include <memory>
#include <string>
#include <nlohmann/json.hpp>
#include <fstream>
#include <iostream>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "sensor_msgs/msg/camera_info.hpp"

#include "ninshiki_interfaces/msg/detected_objects.hpp"
#include <rclcpp/executors/multi_threaded_executor.hpp>

using DetectedObjects = ninshiki_interfaces::msg::DetectedObjects;
using namespace std::chrono_literals;
using json = nlohmann::json;

std::shared_ptr<DetectedObjects> detected_objects;

/* This example creates a subclass of Node and uses std::bind() to register a
 * member function as a callback from the timer. */

class MinimalPublisher : public rclcpp::Node
{
public:
  MinimalPublisher()
  : Node("minimal_publisher"), count_(0)
  {
    loadCameraMatrices("/home/nuna/ipm-ws/src/kokoromi_cpp/data/ConversionResult.json");
    publisher_ = this->create_publisher<sensor_msgs::msg::CameraInfo>("camera_info", 10);
    timer_ = this->create_wall_timer(
      500ms, std::bind(&MinimalPublisher::timer_callback, this));
  }

private:
  void timer_callback()
  {
    auto camera_info_msg = std::make_shared<sensor_msgs::msg::CameraInfo>();
    camera_info_msg->header.frame_id = "base_footprint";
    camera_info_msg->height = 480;
    camera_info_msg->width = 640;
    camera_info_msg->distortion_model = "plumb_bob";

    int left = 0;
    int right = 0;
    int top = 0;
    int bottom = 0;

    for (const auto& detected_object : detected_objects->detected_objects)
    {
      if (detected_object.label == "ball") {
        std::cout << detected_object.label << std::endl;
        std::cout << detected_object.score << std::endl;
        std::cout << detected_object.left << std::endl;
        std::cout << detected_object.top << std::endl;
        std::cout << detected_object.right << std::endl;
        std::cout << detected_object.bottom << std::endl;

        left = int(detected_object.left * camera_info_msg->width);
        right = int(detected_object.right * camera_info_msg->width);
        top = int(detected_object.top * camera_info_msg->height);
        bottom = int(detected_object.bottom * camera_info_msg->height);
      }

      std::cout << "Left: " << left << std::endl;
      std::cout << "Right: " << right << std::endl;
      std::cout << "width: " << right - left << std::endl;
      std::cout << "height: " << bottom - top << std::endl;

      break;
    }

    // Placeholder values for distortion coefficients
    // camera_info_msg->d = {distortion_coefficients_[0], distortion_coefficients_[1], distortion_coefficients_[2], distortion_coefficients_[3], distortion_coefficients_[4]};

    // Placeholder values for intrinsic matrix (3x3)
    camera_info_msg->k = {camera_matrix_[0], 0.0, camera_matrix_[2], 0.0, camera_matrix_[4], camera_matrix_[5], 0.0, 0.0, 1.0};

    // Placeholder values for rotation matrix (3x3)
    // camera_info_msg->r = {rotation_matrix_[0], rotation_matrix_[1], rotation_matrix_[2], rotation_matrix_[3], rotation_matrix_[4], rotation_matrix_[5], rotation_matrix_[6], rotation_matrix_[7], rotation_matrix_[8]};

    // // Placeholder values for projection matrix (3x4)
    // camera_info_msg->p = {projection_matrix_[0], projection_matrix_[1], projection_matrix_[2], projection_matrix_[3], projection_matrix_[4], projection_matrix_[5], projection_matrix_[6], projection_matrix_[7], projection_matrix_[8], projection_matrix_[9], projection_matrix_[10], projection_matrix_[11]};

    // Set ROI values
    // camera_info_msg->roi.x_offset = left;
    // camera_info_msg->roi.y_offset = top;
    // camera_info_msg->roi.height = bottom - top;
    // camera_info_msg->roi.width = right - left;
    // camera_info_msg->roi.do_rectify = false;

    RCLCPP_INFO(this->get_logger(), "Publishing: '%s'", camera_info_msg->header.frame_id.c_str());

    // Publish the CameraInfo message
    publisher_->publish(*camera_info_msg);
  }

  void loadCameraMatrices(const std::string& file_path)
  {
      std::ifstream file(file_path);
      if (!file.is_open())
      {
          RCLCPP_ERROR(this->get_logger(), "Failed to open JSON file: %s", file_path.c_str());
          return;
      }

      json callibration_data;
      file >> callibration_data;

      try
      {
          // Extract Camera Matrix and Distortion Coefficients
          camera_matrix_ = callibration_data["Camera_Matrix"]["data"].get<std::vector<double>>();
          distortion_coefficients_ = callibration_data["Distortion_Coefficients"]["data"].get<std::vector<double>>();
          rotation_matrix_ = callibration_data["Rotation_Matrix"]["data"].get<std::vector<double>>();
          projection_matrix_ = callibration_data["Projection_Matrix"]["data"].get<std::vector<double>>();

          RCLCPP_INFO(this->get_logger(), "Loaded Camera Matrices");
      }
      catch (const std::exception& e)
      {
          RCLCPP_ERROR(this->get_logger(), "Failed to parse camera data: %s", e.what());
      }
  }

  json camera_matrix_;
  json distortion_coefficients_;
  json rotation_matrix_;
  json projection_matrix_;
  rclcpp::TimerBase::SharedPtr timer_;
  rclcpp::Publisher<sensor_msgs::msg::CameraInfo>::SharedPtr publisher_;
  size_t count_;
};

class DetectionSubscriber : public rclcpp::Node
{
public:
  DetectionSubscriber()
  : Node("detection_subscriber")
  {
    detection_subscriber = this->create_subscription<DetectedObjects>(
      "ninshiki_cpp/dnn_detection", 10, [this](const DetectedObjects::SharedPtr msg) {
        this->topic_callback(msg);
      });
  }

private:
  void topic_callback(const DetectedObjects::SharedPtr & msg) const
  {
      detected_objects = msg;

      // Assuming DetectedObjects has an array of DetectedObject
      // for (const auto& detected_object : detected_objects->detected_objects)
      // {
      //     if (detected_object.label == "ball") {
      //       std::cout << detected_object.label << std::endl;
      //       std::cout << detected_object.score << std::endl;
      //       std::cout << detected_object.left << std::endl;
      //       std::cout << detected_object.top << std::endl;
      //       std::cout << detected_object.right << std::endl;
      //       std::cout << detected_object.bottom << std::endl;
      //     }
      // }

      RCLCPP_INFO(this->get_logger(), "Received");
  }
  rclcpp::Subscription<DetectedObjects>::SharedPtr detection_subscriber;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);

  // Create instances of both MinimalPublisher and DetectionSubscriber
  auto minimal_publisher = std::make_shared<MinimalPublisher>();
  auto detection_subscriber = std::make_shared<DetectionSubscriber>();

  // Create a multi-threaded executor
  auto executor = std::make_shared<rclcpp::executors::MultiThreadedExecutor>();

  // Add both nodes to the executor
  executor->add_node(minimal_publisher);
  executor->add_node(detection_subscriber);

  // Spin all nodes using the executor
  executor->spin();

  rclcpp::shutdown();
  return 0;
}
