#include "move.hpp"

Move::Move() : Node("Move")
{
  	subscriber_position = this->create_subscription<geometry_msgs::msg::PointStamped>(
      "clicked_point", rclcpp::QoS(10), std::bind(&Move::callback_position, this, std::placeholders::_1));
}

void Move::main()
{

}

void Move::callback_position(const geometry_msgs::msg::PointStamped::SharedPtr position)
{
	target_position = position->point;
	float degree = atan2(target_position.y, target_position.x);
      cout<<degree*180/3.14<<endl;
}