# generated from catkin/cmake/template/pkg.context.pc.in
CATKIN_PACKAGE_PREFIX = ""
PROJECT_PKG_CONFIG_INCLUDE_DIRS = "${prefix}/include".split(';') if "${prefix}/include" != "" else []
PROJECT_CATKIN_DEPENDS = "actionlib;control_msgs;moveit_core;roscpp".replace(';', ' ')
PKG_CONFIG_LIBRARIES_WITH_PREFIX = "-lmoveit_simple_controller_manager".split(';') if "-lmoveit_simple_controller_manager" != "" else []
PROJECT_NAME = "moveit_simple_controller_manager"
PROJECT_SPACE_DIR = "/home/ros/ws_moveit/install"
PROJECT_VERSION = "1.1.9"
