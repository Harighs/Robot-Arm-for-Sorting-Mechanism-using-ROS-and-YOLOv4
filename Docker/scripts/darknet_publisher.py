#!/usr/bin/env python3

from numpy import ndarray
import numpy
import rospy
from std_msgs.msg import Int32
import cv2
import time





CONFIDENCE_THRESHOLD = 0.05
NMS_THRESHOLD = 0.2
COLORS = [(0, 255, 255), (255, 255, 0), (0, 255, 0), (255, 0, 0)]

class_names = []
with open("/home/hari/darknet/Robot/obj.names", "r") as f:
    class_names = [cname.strip() for cname in f.readlines()]


def inference():
    net = cv2.dnn.readNet("/home/hari/darknet/Robot/backup/yolov4_last.weights", "/home/hari/darknet/Robot/yolov4.cfg")
    net.setPreferableBackend(cv2.dnn.DNN_BACKEND_CUDA)
    net.setPreferableTarget(cv2.dnn.DNN_TARGET_CUDA_FP16)

    model = cv2.dnn_DetectionModel(net)
    model.setInputParams(size=(416, 416), scale=1/255, swapRB=True)

    cap = cv2.VideoCapture(0)
    while cv2.waitKey(1) < 1:
        (grabbed, frame) = cap.read()
        if not grabbed:
            exit()
        if cv2.waitKey(1) & 0xFF == ord('q'):
            break

        start = time.time()
        classes, scores, boxes = model.detect(frame, CONFIDENCE_THRESHOLD, NMS_THRESHOLD)
        end = time.time()

        for (classid, score, box) in zip(classes, scores, boxes):
            color = COLORS[int(classid) % len(COLORS)]
            label='{}'.format(class_names[int(classid)])
            cv2.rectangle(frame, box, color, 2)
            cv2.putText(frame, label, (box[0], box[1]-5), cv2.FONT_HERSHEY_SIMPLEX, 0.5, color, 2)
        fps = "FPS: %.2f " % (1 / (end - start))
        cv2.putText(frame, fps, (0, 25), cv2.FONT_HERSHEY_SIMPLEX, 1, (255, 0, 255), 2)
        cv2.imshow("output", frame)
        print(type(classes), classes, 'predicityon')
        if len(classes) != 0:
            if classes[0].astype(int)==0:
                pub.publish(0)
                rospy.loginfo(0)
            elif classes[0].astype(int) == 1:
                pub.publish(1)
                rospy.loginfo(1)
        else:
            pub.publish(2)
            rospy.loginfo(2)

        # rate.sleep()
        # time.sleep()
            


    # After the loop release the cap object
    cap.release()
    cv2.destroyAllWindows()
    

if __name__ == '__main__':
    
    rospy.init_node('rospy_publisher') # Node intiliazation
    pub = rospy.Publisher('counter', Int32, queue_size=1) # Topic initialization
    rate = rospy.Rate(1)
    
    inference()
