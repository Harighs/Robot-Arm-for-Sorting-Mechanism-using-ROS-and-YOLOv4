# generated from catkin/cmake/template/pkg.context.pc.in
CATKIN_PACKAGE_PREFIX = ""
PROJECT_PKG_CONFIG_INCLUDE_DIRS = "${prefix}/include;/usr/include/eigen3".split(';') if "${prefix}/include;/usr/include/eigen3" != "" else []
PROJECT_CATKIN_DEPENDS = "image_transport;moveit_core;moveit_msgs;moveit_ros_occupancy_map_monitor;moveit_ros_planning;nodelet;object_recognition_msgs;roscpp;sensor_msgs;tf2_geometry_msgs".replace(';', ' ')
PKG_CONFIG_LIBRARIES_WITH_PREFIX = "-lmoveit_lazy_free_space_updater;-lmoveit_point_containment_filter;-lmoveit_pointcloud_octomap_updater_core;-lmoveit_semantic_world;-lmoveit_mesh_filter;-lmoveit_depth_self_filter;-lmoveit_depth_image_octomap_updater".split(';') if "-lmoveit_lazy_free_space_updater;-lmoveit_point_containment_filter;-lmoveit_pointcloud_octomap_updater_core;-lmoveit_semantic_world;-lmoveit_mesh_filter;-lmoveit_depth_self_filter;-lmoveit_depth_image_octomap_updater" != "" else []
PROJECT_NAME = "moveit_ros_perception"
PROJECT_SPACE_DIR = "/home/ros/ws_moveit/install"
PROJECT_VERSION = "1.1.9"
