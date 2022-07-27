# CMake generated Testfile for 
# Source directory: /home/ros/ws_moveit/src/moveit/moveit_planners/chomp/chomp_interface
# Build directory: /home/ros/ws_moveit/build/moveit_planners_chomp
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_moveit_planners_chomp_rostest_test_chomp_moveit.test "/home/ros/ws_moveit/build/moveit_planners_chomp/catkin_generated/env_cached.sh" "/usr/bin/python3" "/opt/ros/noetic/share/catkin/cmake/test/run_tests.py" "/home/ros/ws_moveit/build/moveit_planners_chomp/test_results/moveit_planners_chomp/rostest-test_chomp_moveit.xml" "--return-code" "/usr/bin/python3 /opt/ros/noetic/share/rostest/cmake/../../../bin/rostest --pkgdir=/home/ros/ws_moveit/src/moveit/moveit_planners/chomp/chomp_interface --package=moveit_planners_chomp --results-filename test_chomp_moveit.xml --results-base-dir \"/home/ros/ws_moveit/build/moveit_planners_chomp/test_results\" /home/ros/ws_moveit/src/moveit/moveit_planners/chomp/chomp_interface/test/chomp_moveit.test ")
set_tests_properties(_ctest_moveit_planners_chomp_rostest_test_chomp_moveit.test PROPERTIES  _BACKTRACE_TRIPLES "/opt/ros/noetic/share/catkin/cmake/test/tests.cmake;160;add_test;/opt/ros/noetic/share/rostest/cmake/rostest-extras.cmake;52;catkin_run_tests_target;/opt/ros/noetic/share/rostest/cmake/rostest-extras.cmake;80;add_rostest;/opt/ros/noetic/share/rostest/cmake/rostest-extras.cmake;100;_add_rostest_google_test;/home/ros/ws_moveit/src/moveit/moveit_planners/chomp/chomp_interface/CMakeLists.txt;61;add_rostest_gtest;/home/ros/ws_moveit/src/moveit/moveit_planners/chomp/chomp_interface/CMakeLists.txt;0;")
subdirs("gtest")
