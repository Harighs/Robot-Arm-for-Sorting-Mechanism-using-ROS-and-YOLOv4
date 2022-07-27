#!/usr/bin/python3
import sys
import copy
import rospy
import moveit_commander
import moveit_msgs.msg
import geometry_msgs.msg
from std_msgs.msg import Int32


moveit_commander.roscpp_initialize(sys.argv)
rospy.init_node('move_group_python_interface_tutorial', anonymous=True)

robot = moveit_commander.RobotCommander()
scene = moveit_commander.PlanningSceneInterface()
group = moveit_commander.MoveGroupCommander('arm')
# display_trajectory_publisher = rospy.Publisher('/move_group/display_palnned_path', moveit_msg.DisplayTrajectory)

group_variable_values = group.get_current_joint_values()



def home():
    group_variable_values[0] = 0*(3.14/180)
    group_variable_values[1] = 0*(3.14/180)
    group_variable_values[2] = 0*(3.14/180)
    group_variable_values[3] = 0*(3.14/180)
    group_variable_values[4] = 0*(3.14/180)
    group_variable_values[6] = 0*(3.14/180)
    group.set_joint_value_target(group_variable_values)
    plan2 = group.plan()
    group.go(wait=True)

def ready_to_pickup():
    group_variable_values[0] = 0*(3.14/180)
    group_variable_values[1] = -40*(3.14/180)
    group_variable_values[2] = -57*(3.14/180)
    group_variable_values[3] = 18*(3.14/180)
    group_variable_values[4] = 0*(3.14/180)
    group_variable_values[6] = 30*(3.14/180)
    group.set_joint_value_target(group_variable_values)
    plan2 = group.plan()
    group.go(wait=True)

def gripper_grab():
    group_variable_values[6] = -19*(3.14/180)
    group.set_joint_value_target(group_variable_values)
    plan2 = group.plan()
    group.go(wait=True)

def position_grabed_up():
    group_variable_values[0] = 0*(3.14/180)
    group_variable_values[1] = 20*(3.14/180)
    group_variable_values[2] = -70*(3.14/180)
    group_variable_values[3] = 45*(3.14/180)
    group_variable_values[4] = 0*(3.14/180)
    group.set_joint_value_target(group_variable_values)
    plan2 = group.plan()
    group.go(wait=True)
    
def rotate():
    group_variable_values[0] = 80*(3.14/180)
    group.set_joint_value_target(group_variable_values)
    plan2 = group.plan()
    group.go(wait=True)

    
def drop():
    group_variable_values[3] = 20*(3.14/180)
    group_variable_values[6] = 30*(3.14/180)
    group.set_joint_value_target(group_variable_values)
    plan2 = group.plan()
    group.go(wait=True)



while True:
    home()
    ready_to_pickup()
    gripper_grab() 
    position_grabed_up()
    rotate()
    drop()

moveit_commander.roscpp_shutdown()


