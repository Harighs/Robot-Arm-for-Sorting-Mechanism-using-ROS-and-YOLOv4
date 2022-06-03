#!/usr/bin/env python


import rospy
from std_msgs.msg import Int32

def callback(msg):
    print('I heard it the message is :',msg.data)

rospy.init_node('topic_subscriber', anonymous=True)

rospy.Subscriber('counter', Int32, callback)
rospy.spin()
