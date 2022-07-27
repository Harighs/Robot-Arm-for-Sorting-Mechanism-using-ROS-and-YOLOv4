# generated from catkin/cmake/template/pkg.context.pc.in
CATKIN_PACKAGE_PREFIX = ""
PROJECT_PKG_CONFIG_INCLUDE_DIRS = "${prefix}/include;/usr/include/eigen3".split(';') if "${prefix}/include;/usr/include/eigen3" != "" else []
PROJECT_CATKIN_DEPENDS = "actionlib;dynamic_reconfigure;moveit_core;moveit_msgs;moveit_ros_planning;roscpp".replace(';', ' ')
PKG_CONFIG_LIBRARIES_WITH_PREFIX = "-lmoveit_pick_place_planner".split(';') if "-lmoveit_pick_place_planner" != "" else []
PROJECT_NAME = "moveit_ros_manipulation"
PROJECT_SPACE_DIR = "/home/ros/ws_moveit/install"
PROJECT_VERSION = "1.1.9"
