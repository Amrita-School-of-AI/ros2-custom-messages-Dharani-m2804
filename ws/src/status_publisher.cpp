RCLCPP_INFO(this->get_logger(),
  "Publishing: robot=%s, battery=%.1f, active=%s, missions=%d",
  message.robot_name.c_str(),
  message.battery_level,
  message.is_active ? "true" : "false",
  message.mission_count);
