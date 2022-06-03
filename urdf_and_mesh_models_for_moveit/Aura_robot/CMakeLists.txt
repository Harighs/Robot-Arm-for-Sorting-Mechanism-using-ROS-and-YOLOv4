<<<<<<< HEAD
cmake_minimum_required(VERSION 2.8.3)

project(Aura_robot)

find_package(catkin REQUIRED)

catkin_package()

find_package(roslaunch)

foreach(dir config launch meshes urdf)
	install(DIRECTORY ${dir}/
		DESTINATION ${CATKIN_PACKAGE_SHARE_DESTINATION}/${dir})
endforeach(dir)
=======
cmake_minimum_required(VERSION 2.8.3)

project(Aura_robot)

find_package(catkin REQUIRED)

catkin_package()

find_package(roslaunch)

foreach(dir config launch meshes urdf)
	install(DIRECTORY ${dir}/
		DESTINATION ${CATKIN_PACKAGE_SHARE_DESTINATION}/${dir})
endforeach(dir)
>>>>>>> 8eb6b2d0975f0746757bb3a666b8c3111cffaf8d
