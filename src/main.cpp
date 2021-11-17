#include <rclcpp/rclcpp.hpp>  //ROS2 C++ library
#include "move.hpp"


int main(int argc, char* argv[])
{
  rclcpp::init(argc, argv);                        //初期化
  rclcpp::executors::SingleThreadedExecutor exec;  // multi thread initialize
  auto node1 = std::make_shared<Move>();  // main
  exec.add_node(node1);

  RCLCPP_INFO(node1->get_logger(), "Move Start");  //画面表示

  exec.spin();         // spin
  rclcpp::shutdown();  // shutdown

  return 0;
}
