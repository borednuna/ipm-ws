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
#include <opencv2/opencv.hpp>  // Include the OpenCV library

#include "cv_bridge/cv_bridge.hpp"  // Include the cv_bridge header
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "sensor_msgs/msg/image.hpp"

using namespace std::chrono_literals;

/* This example creates a subclass of Node and uses std::bind() to register a
 * member function as a callback from the timer. */

class ImagePublisher : public rclcpp::Node
{
public:
  ImagePublisher()
  : Node("image_publisher"), count_(0)
  {
    publisher_ = this->create_publisher<sensor_msgs::msg::Image>("image", 10);
    timer_ = this->create_wall_timer(
      2000ms, std::bind(&ImagePublisher::timer_callback, this));
  }

private:
  void timer_callback()
  {
    // Capture an image from your camera using OpenCV
    cv::Mat frame;
    // Replace "0" with the appropriate camera index if you have multiple cameras
    cv::VideoCapture cap(0);
    // std::this_thread::sleep_for(std::chrono::seconds(2));

    if (!cap.isOpened()) {
      RCLCPP_ERROR(this->get_logger(), "Error opening camera");
      return;
    }

    cap >> frame;
    if (frame.empty()) {
      RCLCPP_ERROR(this->get_logger(), "Error capturing frame");
      return;
    }

    // Create a sensor_msgs::msg::Image from the OpenCV image
    auto image_msg = cv_bridge::CvImage(std_msgs::msg::Header(), "bgr8", frame).toImageMsg();
    
    // Set the frame_id, width, height, and encoding
    image_msg->header.frame_id = "camera";
    image_msg->width = frame.cols;
    image_msg->height = frame.rows;
    
    // Log information about the captured image
    RCLCPP_INFO(this->get_logger(), "Captured image from camera. Publishing image #%zd", count_);
    
    // Publish the image
    publisher_->publish(*image_msg);
    cap.release();  // Release the camera resource
  }
  rclcpp::TimerBase::SharedPtr timer_;
  rclcpp::Publisher<sensor_msgs::msg::Image>::SharedPtr publisher_;
  size_t count_;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<ImagePublisher>());
  rclcpp::shutdown();
  return 0;
}
