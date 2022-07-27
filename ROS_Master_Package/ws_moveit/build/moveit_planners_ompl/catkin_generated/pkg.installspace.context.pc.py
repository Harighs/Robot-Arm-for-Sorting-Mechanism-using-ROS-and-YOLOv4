# generated from catkin/cmake/template/pkg.context.pc.in
CATKIN_PACKAGE_PREFIX = ""
PROJECT_PKG_CONFIG_INCLUDE_DIRS = "${prefix}/include;/opt/ros/noetic/include/ompl-1.5;/usr/include;/usr/include/eigen3".split(';') if "${prefix}/include;/opt/ros/noetic/include/ompl-1.5;/usr/include;/usr/include/eigen3" != "" else []
PROJECT_CATKIN_DEPENDS = "dynamic_reconfigure;moveit_core;roscpp".replace(';', ' ')
PKG_CONFIG_LIBRARIES_WITH_PREFIX = "-lmoveit_ompl_interface;/opt/ros/noetic/lib/x86_64-linux-gnu/libompl.so;/usr/lib/x86_64-linux-gnu/libboost_serialization.so;/usr/lib/x86_64-linux-gnu/libboost_filesystem.so;/usr/lib/x86_64-linux-gnu/libboost_system.so".split(';') if "-lmoveit_ompl_interface;/opt/ros/noetic/lib/x86_64-linux-gnu/libompl.so;/usr/lib/x86_64-linux-gnu/libboost_serialization.so;/usr/lib/x86_64-linux-gnu/libboost_filesystem.so;/usr/lib/x86_64-linux-gnu/libboost_system.so" != "" else []
PROJECT_NAME = "moveit_planners_ompl"
PROJECT_SPACE_DIR = "/home/ros/ws_moveit/install"
PROJECT_VERSION = "1.1.9"
