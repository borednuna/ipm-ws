#include <chrono>
#include <functional>
#include <memory>
#include <string>
#include <opencv2/opencv.hpp>
#include "cv_bridge/cv_bridge.hpp"
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "sensor_msgs/msg/image.hpp"

using namespace std::chrono_literals;

class ImagePublisher : public rclcpp::Node
{
public:
  ImagePublisher()
  : Node("image_publisher"), count_(0)
  {
    // Open the camera in the constructor
    cap_.open(0);
    if (!cap_.isOpened()) {
      RCLCPP_ERROR(this->get_logger(), "Error opening camera");
      return;
    }

    publisher_ = this->create_publisher<sensor_msgs::msg::Image>("input", 10);
    timer_ = this->create_wall_timer(
      500ms, std::bind(&ImagePublisher::timer_callback, this));
  }

private:
  void timer_callback()
  {
    // Capture an image from the camera
    cv::Mat frame;
    cap_ >> frame;
    if (frame.empty()) {
      RCLCPP_ERROR(this->get_logger(), "Error capturing frame");
      return;
    }

    // Save the image to a file
    std::string filename = "/home/hanun/ipm-ws/src/kokoromi_cpp/data/captured_image.jpg";
    cv::imwrite(filename, frame);

    // Create a sensor_msgs::msg::Image from the OpenCV image
    auto image_msg = std::make_unique<sensor_msgs::msg::Image>();
    image_msg->header.stamp = this->get_clock()->now();
    image_msg->header.frame_id = "camera";
    image_msg->width = frame.cols;
    image_msg->height = frame.rows;
    image_msg->encoding = "bgr8";
    image_msg->data.assign(frame.data, frame.data + frame.total() * frame.elemSize());

    // Log information about the captured image
    RCLCPP_INFO(this->get_logger(), "Captured image from camera. Publishing image #%zd", count_);

    // Publish the image
    publisher_->publish(std::move(image_msg));
  }

  rclcpp::TimerBase::SharedPtr timer_;
  rclcpp::Publisher<sensor_msgs::msg::Image>::SharedPtr publisher_;
  cv::VideoCapture cap_;
  size_t count_;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<ImagePublisher>());
  rclcpp::shutdown();
  return 0;
}
