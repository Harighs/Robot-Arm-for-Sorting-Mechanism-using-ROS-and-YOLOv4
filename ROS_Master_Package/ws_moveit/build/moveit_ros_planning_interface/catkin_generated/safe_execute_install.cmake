execute_process(COMMAND "/home/ros/ws_moveit/build/moveit_ros_planning_interface/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/home/ros/ws_moveit/build/moveit_ros_planning_interface/catkin_generated/python_distutils_install.sh) returned error code ")
endif()
