# generated from catkin/cmake/template/pkg.context.pc.in
CATKIN_PACKAGE_PREFIX = ""
PROJECT_PKG_CONFIG_INCLUDE_DIRS = "${prefix}/include;/usr/include/OGRE".split(';') if "${prefix}/include;/usr/include/OGRE" != "" else []
PROJECT_CATKIN_DEPENDS = "geometry_msgs;graph_msgs;interactive_markers;shape_msgs;roscpp;sensor_msgs;std_msgs;tf2_eigen;tf2_ros;trajectory_msgs;visualization_msgs".replace(';', ' ')
PKG_CONFIG_LIBRARIES_WITH_PREFIX = "-lrviz_visual_tools;-lrviz_visual_tools_gui;-lrviz_visual_tools_remote_control;-lrviz_visual_tools_imarker_simple".split(';') if "-lrviz_visual_tools;-lrviz_visual_tools_gui;-lrviz_visual_tools_remote_control;-lrviz_visual_tools_imarker_simple" != "" else []
PROJECT_NAME = "rviz_visual_tools"
PROJECT_SPACE_DIR = "/home/ros/ws_moveit/install"
PROJECT_VERSION = "3.9.1"
