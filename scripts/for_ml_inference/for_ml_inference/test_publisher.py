#!/usr/bin/env python3

import rospy
from std_msgs.msg import Int32


rospy.init_node('rospy_publisher') # Node intiliazation

pub = rospy.Publisher('counter', Int32, queue_size=1) # Topic initialization
rate = rospy.Rate(0.1)



while True:
	count  = int(input('enter the value: '))
	pub.publish(count)
	rospy.loginfo(count)
	rate.sleep()
