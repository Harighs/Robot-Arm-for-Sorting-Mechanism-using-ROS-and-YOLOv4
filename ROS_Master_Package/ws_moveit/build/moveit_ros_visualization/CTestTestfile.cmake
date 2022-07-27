# CMake generated Testfile for 
# Source directory: /home/ros/ws_moveit/src/moveit/moveit_ros/visualization
# Build directory: /home/ros/ws_moveit/build/moveit_ros_visualization
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_moveit_ros_visualization_rostest_test_moveit_joy.test "/home/ros/ws_moveit/build/moveit_ros_visualization/catkin_generated/env_cached.sh" "/usr/bin/python3" "/opt/ros/noetic/share/catkin/cmake/test/run_tests.py" "/home/ros/ws_moveit/build/moveit_ros_visualization/test_results/moveit_ros_visualization/rostest-test_moveit_joy.xml" "--return-code" "/usr/bin/python3 /opt/ros/noetic/share/rostest/cmake/../../../bin/rostest --pkgdir=/home/ros/ws_moveit/src/moveit/moveit_ros/visualization --package=moveit_ros_visualization --results-filename test_moveit_joy.xml --results-base-dir \"/home/ros/ws_moveit/build/moveit_ros_visualization/test_results\" /home/ros/ws_moveit/src/moveit/moveit_ros/visualization/test/moveit_joy.test ")
set_tests_properties(_ctest_moveit_ros_visualization_rostest_test_moveit_joy.test PROPERTIES  _BACKTRACE_TRIPLES "/opt/ros/noetic/share/catkin/cmake/test/tests.cmake;160;add_test;/opt/ros/noetic/share/rostest/cmake/rostest-extras.cmake;52;catkin_run_tests_target;/home/ros/ws_moveit/src/moveit/moveit_ros/visualization/CMakeLists.txt;111;add_rostest;/home/ros/ws_moveit/src/moveit/moveit_ros/visualization/CMakeLists.txt;0;")
subdirs("gtest")
subdirs("rviz_plugin_render_tools")
subdirs("robot_state_rviz_plugin")
subdirs("planning_scene_rviz_plugin")
subdirs("motion_planning_rviz_plugin")
subdirs("trajectory_rviz_plugin")
