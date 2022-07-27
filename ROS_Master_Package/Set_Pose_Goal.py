#!/usr/bin/python3
import sys
import copy
import rospy
import moveit_commander
import moveit_msgs.msg
import geometry_msgs.msg


moveit_commander.roscpp_initialize(sys.argv)
rospy.init_node('Set_Pose_Goal', anonymous=True)

get_cur_pose = moveit_commander.move_group.MoveGroupCommander('arm')
print(get_cur_pose.get_current_pose('Gripper_link'))
# Randomo Target

for i in range(100):
	get_cur_pose.go(get_cur_pose.set_random_target(),wait=True)
	


# robot = moveit_commander.RobotCommander()
# scene = moveit_commander.PlanningSceneInterface()
# group = moveit_commander.MoveGroupCommander('arm')
# # display_trajectory_publisher = rospy.Publisher('/move_group/display_palnned_path', moveit_msg.DisplayTrajectory)

# group_variable_values = group.get_current_joint_values()


# def position1():
#     tpose = group.get_current_pose()
#     print(type(tpose))
#     print('current position:\n', tpose)

#     pose_target = geometry_msgs.msg.Pose()
#     pose_target.orientation.w = 5
#     pose_target.position.x = 50
#     pose_target.position.y = 20
#     pose_target.position.z = 10
#     pose_target.orientation.x = 5
#     pose_target.orientation.y = 5
#     pose_target.orientation.z = 5

#     group.set_pose_target(pose_target)

#     plan1 = group.plan(pose_target)
#     #modify pose
#     #plan and execute
#     group.execute(plan1)
#     group.clear_pose_targets()
# position1()
moveit_commander.roscpp_shutdown()

