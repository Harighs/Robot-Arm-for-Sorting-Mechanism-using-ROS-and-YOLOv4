# CMake generated Testfile for 
# Source directory: /home/ros/ws_moveit/src/rviz_visual_tools
# Build directory: /home/ros/ws_moveit/build/rviz_visual_tools
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_rviz_visual_tools_rostest_launch_rvt_test.launch "/home/ros/ws_moveit/build/rviz_visual_tools/catkin_generated/env_cached.sh" "/usr/bin/python3" "/opt/ros/noetic/share/catkin/cmake/test/run_tests.py" "/home/ros/ws_moveit/build/rviz_visual_tools/test_results/rviz_visual_tools/rostest-launch_rvt_test.xml" "--return-code" "/usr/bin/python3 /opt/ros/noetic/share/rostest/cmake/../../../bin/rostest --pkgdir=/home/ros/ws_moveit/src/rviz_visual_tools --package=rviz_visual_tools --results-filename launch_rvt_test.xml --results-base-dir \"/home/ros/ws_moveit/build/rviz_visual_tools/test_results\" /home/ros/ws_moveit/src/rviz_visual_tools/launch/rvt_test.launch ")
set_tests_properties(_ctest_rviz_visual_tools_rostest_launch_rvt_test.launch PROPERTIES  _BACKTRACE_TRIPLES "/opt/ros/noetic/share/catkin/cmake/test/tests.cmake;160;add_test;/opt/ros/noetic/share/rostest/cmake/rostest-extras.cmake;52;catkin_run_tests_target;/opt/ros/noetic/share/rostest/cmake/rostest-extras.cmake;80;add_rostest;/opt/ros/noetic/share/rostest/cmake/rostest-extras.cmake;100;_add_rostest_google_test;/home/ros/ws_moveit/src/rviz_visual_tools/CMakeLists.txt;156;add_rostest_gtest;/home/ros/ws_moveit/src/rviz_visual_tools/CMakeLists.txt;0;")
subdirs("gtest")
