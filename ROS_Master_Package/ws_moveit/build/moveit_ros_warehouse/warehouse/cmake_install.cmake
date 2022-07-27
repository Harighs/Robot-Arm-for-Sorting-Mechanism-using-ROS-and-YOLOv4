# Install script for directory: /home/ros/ws_moveit/src/moveit/moveit_ros/warehouse/warehouse

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
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_warehouse.so.1.1.9" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_warehouse.so.1.1.9")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_warehouse.so.1.1.9"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/ros/ws_moveit/devel/.private/moveit_ros_warehouse/lib/libmoveit_warehouse.so.1.1.9")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_warehouse.so.1.1.9" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_warehouse.so.1.1.9")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_warehouse.so.1.1.9"
         OLD_RPATH "/home/ros/ws_moveit/devel/.private/moveit_ros_planning/lib:/opt/ros/noetic/lib:/home/ros/ws_moveit/devel/.private/moveit_ros_occupancy_map_monitor/lib:/home/ros/ws_moveit/devel/.private/moveit_core/lib:/opt/ros/noetic/lib/x86_64-linux-gnu:/home/ros/ws_moveit/devel/.private/srdfdom/lib:/home/ros/ws_moveit/devel/.private/geometric_shapes/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_warehouse.so.1.1.9")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_warehouse.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_warehouse.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_warehouse.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/ros/ws_moveit/devel/.private/moveit_ros_warehouse/lib/libmoveit_warehouse.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_warehouse.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_warehouse.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_warehouse.so"
         OLD_RPATH "/home/ros/ws_moveit/devel/.private/moveit_ros_planning/lib:/opt/ros/noetic/lib:/home/ros/ws_moveit/devel/.private/moveit_ros_occupancy_map_monitor/lib:/home/ros/ws_moveit/devel/.private/moveit_core/lib:/opt/ros/noetic/lib/x86_64-linux-gnu:/home/ros/ws_moveit/devel/.private/srdfdom/lib:/home/ros/ws_moveit/devel/.private/geometric_shapes/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_warehouse.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_ros_warehouse/moveit_save_to_warehouse" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_ros_warehouse/moveit_save_to_warehouse")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_ros_warehouse/moveit_save_to_warehouse"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/moveit_ros_warehouse" TYPE EXECUTABLE FILES "/home/ros/ws_moveit/devel/.private/moveit_ros_warehouse/lib/moveit_ros_warehouse/moveit_save_to_warehouse")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_ros_warehouse/moveit_save_to_warehouse" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_ros_warehouse/moveit_save_to_warehouse")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_ros_warehouse/moveit_save_to_warehouse"
         OLD_RPATH "/home/ros/ws_moveit/devel/.private/moveit_ros_planning/lib:/opt/ros/noetic/lib:/home/ros/ws_moveit/devel/.private/moveit_ros_occupancy_map_monitor/lib:/home/ros/ws_moveit/devel/.private/moveit_core/lib:/opt/ros/noetic/lib/x86_64-linux-gnu:/home/ros/ws_moveit/devel/.private/srdfdom/lib:/home/ros/ws_moveit/devel/.private/geometric_shapes/lib:/home/ros/ws_moveit/devel/.private/moveit_ros_warehouse/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_ros_warehouse/moveit_save_to_warehouse")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_ros_warehouse/moveit_warehouse_broadcast" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_ros_warehouse/moveit_warehouse_broadcast")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_ros_warehouse/moveit_warehouse_broadcast"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/moveit_ros_warehouse" TYPE EXECUTABLE FILES "/home/ros/ws_moveit/devel/.private/moveit_ros_warehouse/lib/moveit_ros_warehouse/moveit_warehouse_broadcast")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_ros_warehouse/moveit_warehouse_broadcast" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_ros_warehouse/moveit_warehouse_broadcast")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_ros_warehouse/moveit_warehouse_broadcast"
         OLD_RPATH "/home/ros/ws_moveit/devel/.private/moveit_ros_planning/lib:/opt/ros/noetic/lib:/home/ros/ws_moveit/devel/.private/moveit_ros_occupancy_map_monitor/lib:/home/ros/ws_moveit/devel/.private/moveit_core/lib:/opt/ros/noetic/lib/x86_64-linux-gnu:/home/ros/ws_moveit/devel/.private/srdfdom/lib:/home/ros/ws_moveit/devel/.private/geometric_shapes/lib:/home/ros/ws_moveit/devel/.private/moveit_ros_warehouse/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_ros_warehouse/moveit_warehouse_broadcast")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_ros_warehouse/moveit_warehouse_import_from_text" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_ros_warehouse/moveit_warehouse_import_from_text")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_ros_warehouse/moveit_warehouse_import_from_text"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/moveit_ros_warehouse" TYPE EXECUTABLE FILES "/home/ros/ws_moveit/devel/.private/moveit_ros_warehouse/lib/moveit_ros_warehouse/moveit_warehouse_import_from_text")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_ros_warehouse/moveit_warehouse_import_from_text" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_ros_warehouse/moveit_warehouse_import_from_text")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_ros_warehouse/moveit_warehouse_import_from_text"
         OLD_RPATH "/home/ros/ws_moveit/devel/.private/moveit_ros_planning/lib:/opt/ros/noetic/lib:/home/ros/ws_moveit/devel/.private/moveit_ros_occupancy_map_monitor/lib:/home/ros/ws_moveit/devel/.private/moveit_core/lib:/opt/ros/noetic/lib/x86_64-linux-gnu:/home/ros/ws_moveit/devel/.private/srdfdom/lib:/home/ros/ws_moveit/devel/.private/geometric_shapes/lib:/home/ros/ws_moveit/devel/.private/moveit_ros_warehouse/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_ros_warehouse/moveit_warehouse_import_from_text")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_ros_warehouse/moveit_warehouse_save_as_text" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_ros_warehouse/moveit_warehouse_save_as_text")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_ros_warehouse/moveit_warehouse_save_as_text"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/moveit_ros_warehouse" TYPE EXECUTABLE FILES "/home/ros/ws_moveit/devel/.private/moveit_ros_warehouse/lib/moveit_ros_warehouse/moveit_warehouse_save_as_text")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_ros_warehouse/moveit_warehouse_save_as_text" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_ros_warehouse/moveit_warehouse_save_as_text")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_ros_warehouse/moveit_warehouse_save_as_text"
         OLD_RPATH "/home/ros/ws_moveit/devel/.private/moveit_ros_planning/lib:/opt/ros/noetic/lib:/home/ros/ws_moveit/devel/.private/moveit_ros_occupancy_map_monitor/lib:/home/ros/ws_moveit/devel/.private/moveit_core/lib:/opt/ros/noetic/lib/x86_64-linux-gnu:/home/ros/ws_moveit/devel/.private/srdfdom/lib:/home/ros/ws_moveit/devel/.private/geometric_shapes/lib:/home/ros/ws_moveit/devel/.private/moveit_ros_warehouse/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_ros_warehouse/moveit_warehouse_save_as_text")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_ros_warehouse/moveit_init_demo_warehouse" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_ros_warehouse/moveit_init_demo_warehouse")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_ros_warehouse/moveit_init_demo_warehouse"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/moveit_ros_warehouse" TYPE EXECUTABLE FILES "/home/ros/ws_moveit/devel/.private/moveit_ros_warehouse/lib/moveit_ros_warehouse/moveit_init_demo_warehouse")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_ros_warehouse/moveit_init_demo_warehouse" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_ros_warehouse/moveit_init_demo_warehouse")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_ros_warehouse/moveit_init_demo_warehouse"
         OLD_RPATH "/home/ros/ws_moveit/devel/.private/moveit_ros_planning/lib:/opt/ros/noetic/lib:/home/ros/ws_moveit/devel/.private/moveit_ros_occupancy_map_monitor/lib:/home/ros/ws_moveit/devel/.private/moveit_core/lib:/opt/ros/noetic/lib/x86_64-linux-gnu:/home/ros/ws_moveit/devel/.private/srdfdom/lib:/home/ros/ws_moveit/devel/.private/geometric_shapes/lib:/home/ros/ws_moveit/devel/.private/moveit_ros_warehouse/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_ros_warehouse/moveit_init_demo_warehouse")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_ros_warehouse/moveit_warehouse_services" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_ros_warehouse/moveit_warehouse_services")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_ros_warehouse/moveit_warehouse_services"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/moveit_ros_warehouse" TYPE EXECUTABLE FILES "/home/ros/ws_moveit/devel/.private/moveit_ros_warehouse/lib/moveit_ros_warehouse/moveit_warehouse_services")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_ros_warehouse/moveit_warehouse_services" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_ros_warehouse/moveit_warehouse_services")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_ros_warehouse/moveit_warehouse_services"
         OLD_RPATH "/home/ros/ws_moveit/devel/.private/moveit_ros_planning/lib:/opt/ros/noetic/lib:/home/ros/ws_moveit/devel/.private/moveit_ros_occupancy_map_monitor/lib:/home/ros/ws_moveit/devel/.private/moveit_core/lib:/opt/ros/noetic/lib/x86_64-linux-gnu:/home/ros/ws_moveit/devel/.private/srdfdom/lib:/home/ros/ws_moveit/devel/.private/geometric_shapes/lib:/home/ros/ws_moveit/devel/.private/moveit_ros_warehouse/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_ros_warehouse/moveit_warehouse_services")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/ros/ws_moveit/src/moveit/moveit_ros/warehouse/warehouse/include/")
endif()

