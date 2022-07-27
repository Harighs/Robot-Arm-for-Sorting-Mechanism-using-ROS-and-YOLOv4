# generated from catkin/cmake/template/pkg.context.pc.in
CATKIN_PACKAGE_PREFIX = ""
PROJECT_PKG_CONFIG_INCLUDE_DIRS = "${prefix}/include;/usr/include/eigen3;/opt/ros/noetic/include;/usr/include".split(';') if "${prefix}/include;/usr/include/eigen3;/opt/ros/noetic/include;/usr/include" != "" else []
PROJECT_CATKIN_DEPENDS = "eigen_stl_containers;random_numbers;shape_msgs;visualization_msgs".replace(';', ' ')
PKG_CONFIG_LIBRARIES_WITH_PREFIX = "-lgeometric_shapes;/opt/ros/noetic/lib/liboctomap.so;/opt/ros/noetic/lib/liboctomath.so;/usr/lib/x86_64-linux-gnu/libconsole_bridge.so.0.4".split(';') if "-lgeometric_shapes;/opt/ros/noetic/lib/liboctomap.so;/opt/ros/noetic/lib/liboctomath.so;/usr/lib/x86_64-linux-gnu/libconsole_bridge.so.0.4" != "" else []
PROJECT_NAME = "geometric_shapes"
PROJECT_SPACE_DIR = "/home/ros/ws_moveit/install"
PROJECT_VERSION = "0.7.3"
