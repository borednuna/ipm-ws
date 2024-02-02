#include <functional>
#include <memory>
#include <fstream>
#include <sensor_msgs/point_cloud2_iterator.hpp>
#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/point_cloud2.hpp"
#include "nlohmann/json.hpp"

using std::placeholders::_1;

class PointcloudSubscriber : public rclcpp::Node
{
public:
  PointcloudSubscriber()
  : Node("pointcloud_subscriber")
  {
    subscription_ = this->create_subscription<sensor_msgs::msg::PointCloud2>(
      "projected_point_cloud", 10, std::bind(&PointcloudSubscriber::topic_callback, this, _1));
  }

private:
  // Convert sensor_msgs::msg::PointField to JSON
  nlohmann::json pointFieldToJson(const sensor_msgs::msg::PointField &point_field) const
  {
    nlohmann::json json_point_field;
    json_point_field["name"] = point_field.name;
    json_point_field["offset"] = point_field.offset;
    json_point_field["datatype"] = point_field.datatype;
    json_point_field["count"] = point_field.count;
    return json_point_field;
  }

  // Convert std::vector<sensor_msgs::msg::PointField> to JSON
  nlohmann::json fieldsToJson(const std::vector<sensor_msgs::msg::PointField> &fields) const
  {
    nlohmann::json json_fields;
    for (const auto &field : fields)
    {
      json_fields.push_back(pointFieldToJson(field));
    }
    return json_fields;
  }

  // Convert std_msgs::msg::Header to JSON
  nlohmann::json headerToJson(const std_msgs::msg::Header &header) const
  {
    nlohmann::json json_header;
    json_header["frame_id"] = header.frame_id;
    // json_header["seq"] = header.seq;
    // json_header["stamp"] = header.stamp;
    return json_header;
  }

  void topic_callback(const sensor_msgs::msg::PointCloud2 & msg) const
  {
    sensor_msgs::msg::PointCloud2 pointcloud_msg = msg;

    std::cout << "Frame id: " << pointcloud_msg.header.frame_id << std::endl;
    std::cout << "Height: " << pointcloud_msg.height << std::endl;
    std::cout << "Width: " << pointcloud_msg.width << std::endl;
    std::cout << "Is dense: " << pointcloud_msg.is_dense << std::endl;
    std::cout << "Point step: " << pointcloud_msg.point_step << std::endl;
    std::cout << "Row step: " << pointcloud_msg.row_step << std::endl;

    const auto& data = pointcloud_msg.data;
    const size_t point_step = pointcloud_msg.point_step;

    size_t index = 0; // Assuming the first point is at the beginning of the data field

    // Assuming points are of type float (4 bytes each)
    float x = *reinterpret_cast<const float*>(&data[index]);
    float y = *reinterpret_cast<const float*>(&data[index + 4]);
    float z = *reinterpret_cast<const float*>(&data[index + 8]);

    // Print the information of the first point
    std::cout << "First Point: (" << x << ", " << y << ", " << z << ")" << std::endl;
    std::cout << std::endl;
    // // Convert PointCloud2 message to JSON
    // nlohmann::json json_data;
    // json_data["header"] = headerToJson(msg.header);
    // json_data["height"] = msg.height;
    // json_data["width"] = msg.width;
    // json_data["fields"] = fieldsToJson(msg.fields);
    // // Add more fields as needed

    // // Save JSON to a file
    // std::ofstream json_file("/home/hanun/ipm-ws/src/kokoromi_cpp/data/PointCloudData.json");
    // json_file << std::setw(4) << json_data << std::endl;

    // // Save binary data to a file
    // std::ofstream binary_file("/home/hanun/ipm-ws/src/kokoromi_cpp/data/PointCloudData.bin", std::ios::binary);
    // binary_file.write(reinterpret_cast<const char*>(msg.data.data()), msg.data.size());

    // RCLCPP_INFO(this->get_logger(), "Point cloud data saved to PointCloudData.json and PointCloudData.bin");
  }

  rclcpp::Subscription<sensor_msgs::msg::PointCloud2>::SharedPtr subscription_;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<PointcloudSubscriber>());
  rclcpp::shutdown();
  return 0;
}
