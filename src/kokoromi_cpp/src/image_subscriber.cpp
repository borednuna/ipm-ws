#include <chrono>
#include <functional>
#include <memory>
#include <cv_bridge/cv_bridge.h>
#include <opencv2/highgui/highgui.hpp>
#include <sensor_msgs/image_encodings.hpp>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "sensor_msgs/msg/image.hpp"

using std::placeholders::_1;

class ImageSubscriber : public rclcpp::Node
{
public:
  ImageSubscriber()
  : Node("image_subscriber")
  {
    subscription_ = this->create_subscription<sensor_msgs::msg::Image>(
      "image", 10, std::bind(&ImageSubscriber::topic_callback, this, _1));
  }

private:
  void topic_callback(const sensor_msgs::msg::Image::ConstSharedPtr msg) const
  {
    RCLCPP_INFO(this->get_logger(), "%s", msg->header.frame_id.c_str());
    RCLCPP_INFO(this->get_logger(), "%d", msg->height);
    RCLCPP_INFO(this->get_logger(), "%d", msg->width);
    RCLCPP_INFO(this->get_logger(), "%s", msg->encoding.c_str());
    RCLCPP_INFO(this->get_logger(), "%d", msg->is_bigendian);
    RCLCPP_INFO(this->get_logger(), "%d", msg->step);

    try
    {
      // Convert the ROS image message to an OpenCV image
      cv_bridge::CvImageConstPtr cv_ptr = cv_bridge::toCvShare(msg, sensor_msgs::image_encodings::BGR8);

      // Save the image to a file
      std::string filename = "received_image.jpg";
      cv::imwrite(filename, cv_ptr->image);
      
      RCLCPP_INFO(this->get_logger(), "Saved image to %s", filename.c_str());
    }
    catch (cv_bridge::Exception& e)
    {
      RCLCPP_ERROR(this->get_logger(), "cv_bridge exception: %s", e.what());
    }
  }
  rclcpp::Subscription<sensor_msgs::msg::Image>::SharedPtr subscription_;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<ImageSubscriber>());
  rclcpp::shutdown();
  return 0;
}
