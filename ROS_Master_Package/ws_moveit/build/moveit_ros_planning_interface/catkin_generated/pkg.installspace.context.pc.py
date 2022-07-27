# generated from catkin/cmake/template/pkg.context.pc.in
CATKIN_PACKAGE_PREFIX = ""
PROJECT_PKG_CONFIG_INCLUDE_DIRS = "${prefix}/include;/usr/include/eigen3".split(';') if "${prefix}/include;/usr/include/eigen3" != "" else []
PROJECT_CATKIN_DEPENDS = "actionlib;geometry_msgs;moveit_msgs;moveit_ros_planning;moveit_ros_warehouse;moveit_ros_manipulation;moveit_ros_move_group;roscpp;tf2_geometry_msgs".replace(';', ' ')
PKG_CONFIG_LIBRARIES_WITH_PREFIX = "-lmoveit_common_planning_interface_objects;-lmoveit_planning_scene_interface;-lmoveit_move_group_interface;-lmoveit_py_bindings_tools".split(';') if "-lmoveit_common_planning_interface_objects;-lmoveit_planning_scene_interface;-lmoveit_move_group_interface;-lmoveit_py_bindings_tools" != "" else []
PROJECT_NAME = "moveit_ros_planning_interface"
PROJECT_SPACE_DIR = "/home/ros/ws_moveit/install"
PROJECT_VERSION = "1.1.9"
