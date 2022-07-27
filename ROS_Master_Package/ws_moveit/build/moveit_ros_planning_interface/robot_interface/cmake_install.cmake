# Install script for directory: /home/ros/ws_moveit/src/moveit/moveit_ros/planning_interface/robot_interface

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/ros/ws_moveit/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3/dist-packages/moveit_ros_planning_interface/_moveit_robot_interface.so.1.1.9" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3/dist-packages/moveit_ros_planning_interface/_moveit_robot_interface.so.1.1.9")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3/dist-packages/moveit_ros_planning_interface/_moveit_robot_interface.so.1.1.9"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3/dist-packages/moveit_ros_planning_interface" TYPE SHARED_LIBRARY FILES "/home/ros/ws_moveit/devel/.private/moveit_ros_planning_interface/lib/python3/dist-packages/moveit_ros_planning_interface/_moveit_robot_interface.so.1.1.9")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3/dist-packages/moveit_ros_planning_interface/_moveit_robot_interface.so.1.1.9" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3/dist-packages/moveit_ros_planning_interface/_moveit_robot_interface.so.1.1.9")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3/dist-packages/moveit_ros_planning_interface/_moveit_robot_interface.so.1.1.9"
         OLD_RPATH "/home/ros/ws_moveit/devel/.private/moveit_ros_warehouse/lib:/opt/ros/noetic/lib:/home/ros/ws_moveit/devel/.private/moveit_ros_manipulation/lib:/home/ros/ws_moveit/devel/.private/moveit_ros_move_group/lib:/home/ros/ws_moveit/devel/.private/moveit_ros_planning/lib:/home/ros/ws_moveit/devel/.private/moveit_ros_occupancy_map_monitor/lib:/home/ros/ws_moveit/devel/.private/moveit_core/lib:/opt/ros/noetic/lib/x86_64-linux-gnu:/home/ros/ws_moveit/devel/.private/srdfdom/lib:/home/ros/ws_moveit/devel/.private/geometric_shapes/lib:/home/ros/ws_moveit/devel/.private/moveit_ros_planning_interface/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3/dist-packages/moveit_ros_planning_interface/_moveit_robot_interface.so.1.1.9")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3/dist-packages/moveit_ros_planning_interface/_moveit_robot_interface.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3/dist-packages/moveit_ros_planning_interface/_moveit_robot_interface.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3/dist-packages/moveit_ros_planning_interface/_moveit_robot_interface.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3/dist-packages/moveit_ros_planning_interface" TYPE SHARED_LIBRARY FILES "/home/ros/ws_moveit/devel/.private/moveit_ros_planning_interface/lib/python3/dist-packages/moveit_ros_planning_interface/_moveit_robot_interface.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3/dist-packages/moveit_ros_planning_interface/_moveit_robot_interface.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3/dist-packages/moveit_ros_planning_interface/_moveit_robot_interface.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3/dist-packages/moveit_ros_planning_interface/_moveit_robot_interface.so"
         OLD_RPATH "/home/ros/ws_moveit/devel/.private/moveit_ros_warehouse/lib:/opt/ros/noetic/lib:/home/ros/ws_moveit/devel/.private/moveit_ros_manipulation/lib:/home/ros/ws_moveit/devel/.private/moveit_ros_move_group/lib:/home/ros/ws_moveit/devel/.private/moveit_ros_planning/lib:/home/ros/ws_moveit/devel/.private/moveit_ros_occupancy_map_monitor/lib:/home/ros/ws_moveit/devel/.private/moveit_core/lib:/opt/ros/noetic/lib/x86_64-linux-gnu:/home/ros/ws_moveit/devel/.private/srdfdom/lib:/home/ros/ws_moveit/devel/.private/geometric_shapes/lib:/home/ros/ws_moveit/devel/.private/moveit_ros_planning_interface/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3/dist-packages/moveit_ros_planning_interface/_moveit_robot_interface.so")
    endif()
  endif()
endif()

