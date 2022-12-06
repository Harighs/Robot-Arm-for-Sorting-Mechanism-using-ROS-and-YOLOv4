#!/usr/bin/env python
import rospy
from std_msgs.msg import Int32
from pyniryo import *
import time

def pick_black_socks():
    # ned.move_joints(ready_to_pick)
    ned.move_joints(about_to_pick)
    ned.close_gripper()
    # ned.move_joints(about_to_pick)
    ned.move_joints(ready_to_drop_1)
    ned.open_gripper()
    ned.move_joints(stand_by)
    return None

def pick_white_socks():
    # ned.move_joints(ready_to_pick)
    ned.move_joints(about_to_pick)
    ned.close_gripper()
    # ned.move_joints(about_to_pick)
    ned.move_joints(ready_to_drop_2)
    ned.open_gripper()
    ned.move_joints(stand_by)
    return None    


def callback(msg):
    try:
        print('I heard it the message is :',msg.data)
        if (int(msg.data) == 0):
            # time.sleep(4)
            pick_black_socks()
        elif (int(msg.data) == 1):
            # rospy.unregister()
            pick_white_socks()
            # time.sleep(4)
    except KeyboardInterrupt:
        ned.close_connection()
stand_by = [0, 0.4, 0, 0, -1.5, 0]
ready_to_pick = [0.0166, -0.80, 0.75, 0.0031, -1.30, 0.0235]
#about_to_pick = [0.0166, -1, 0.75, 0.0031, -1.30, 0.0235]
about_to_pick = [0.0166, -1.28, 0.9, 0.0031, -1.30, 0.0235]
ready_to_drop_1 = [1.4, 0, 0, 0, -1.5, 0]
ready_to_drop_2 = [-1.4, 0, 0, 0, -1.5, 0]

ned = NiryoRobot("192.168.0.107")
ned.calibrate_auto()



rospy.init_node('topic_subscriber', anonymous=True)
try:
    rospy.Subscriber('counter', Int32, callback, queue_size=1)
except KeyboardInterrupt:
    ned.close_connection()
    
rospy.spin()


    
