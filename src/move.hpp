#pragma once
#include <rclcpp/rclcpp.hpp>  //ROS2 C++ library
#include <geometry_msgs/msg/point_stamped.hpp>
#include <geometry_msgs/msg/point.hpp>

using namespace std;
class Move : public rclcpp::Node
{
public:
	Move();
	void main();
	void callback_position(const geometry_msgs::msg::PointStamped::SharedPtr position);

private:
	rclcpp::Subscription<geometry_msgs::msg::PointStamped>::SharedPtr subscriber_position;
	//geometry_msgs::PointStamped target_position;
	 geometry_msgs::msg::Point target_position;
};