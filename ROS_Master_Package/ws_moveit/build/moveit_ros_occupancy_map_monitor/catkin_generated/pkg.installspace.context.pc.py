# generated from catkin/cmake/template/pkg.context.pc.in
CATKIN_PACKAGE_PREFIX = ""
PROJECT_PKG_CONFIG_INCLUDE_DIRS = "${prefix}/include;/usr/include/eigen3;/opt/ros/noetic/include".split(';') if "${prefix}/include;/usr/include/eigen3;/opt/ros/noetic/include" != "" else []
PROJECT_CATKIN_DEPENDS = "moveit_core;moveit_msgs;geometric_shapes;tf2_ros".replace(';', ' ')
PKG_CONFIG_LIBRARIES_WITH_PREFIX = "-lmoveit_ros_occupancy_map_monitor;/opt/ros/noetic/lib/liboctomap.so;/opt/ros/noetic/lib/liboctomath.so".split(';') if "-lmoveit_ros_occupancy_map_monitor;/opt/ros/noetic/lib/liboctomap.so;/opt/ros/noetic/lib/liboctomath.so" != "" else []
PROJECT_NAME = "moveit_ros_occupancy_map_monitor"
PROJECT_SPACE_DIR = "/home/ros/ws_moveit/install"
PROJECT_VERSION = "1.1.9"
