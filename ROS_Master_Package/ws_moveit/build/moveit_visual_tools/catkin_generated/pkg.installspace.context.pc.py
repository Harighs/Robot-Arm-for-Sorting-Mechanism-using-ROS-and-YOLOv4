# generated from catkin/cmake/template/pkg.context.pc.in
CATKIN_PACKAGE_PREFIX = ""
PROJECT_PKG_CONFIG_INCLUDE_DIRS = "${prefix}/include".split(';') if "${prefix}/include" != "" else []
PROJECT_CATKIN_DEPENDS = "roscpp;rviz_visual_tools;moveit_ros_planning;moveit_core;geometry_msgs;visualization_msgs;graph_msgs;std_msgs;trajectory_msgs".replace(';', ' ')
PKG_CONFIG_LIBRARIES_WITH_PREFIX = "-lmoveit_visual_tools".split(';') if "-lmoveit_visual_tools" != "" else []
PROJECT_NAME = "moveit_visual_tools"
PROJECT_SPACE_DIR = "/home/ros/ws_moveit/install"
PROJECT_VERSION = "3.6.0"
