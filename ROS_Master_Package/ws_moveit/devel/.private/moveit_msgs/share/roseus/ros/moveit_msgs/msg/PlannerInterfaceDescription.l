;; Auto-generated. Do not edit!


(when (boundp 'moveit_msgs::PlannerInterfaceDescription)
  (if (not (find-package "MOVEIT_MSGS"))
    (make-package "MOVEIT_MSGS"))
  (shadow 'PlannerInterfaceDescription (find-package "MOVEIT_MSGS")))
(unless (find-package "MOVEIT_MSGS::PLANNERINTERFACEDESCRIPTION")
  (make-package "MOVEIT_MSGS::PLANNERINTERFACEDESCRIPTION"))

(in-package "ROS")
;;//! \htmlinclude PlannerInterfaceDescription.msg.html


(defclass moveit_msgs::PlannerInterfaceDescription
  :super ros::object
  :slots (_name _pipeline_id _planner_ids ))

(defmethod moveit_msgs::PlannerInterfaceDescription
  (:init
   (&key
    ((:name __name) "")
    ((:pipeline_id __pipeline_id) "")
    ((:planner_ids __planner_ids) (let (r) (dotimes (i 0) (push "" r)) r))
    )
   (send-super :init)
   (setq _name (string __name))
   (setq _pipeline_id (string __pipeline_id))
   (setq _planner_ids __planner_ids)
   self)
  (:name
   (&optional __name)
   (if __name (setq _name __name)) _name)
  (:pipeline_id
   (&optional __pipeline_id)
   (if __pipeline_id (setq _pipeline_id __pipeline_id)) _pipeline_id)
  (:planner_ids
   (&optional __planner_ids)
   (if __planner_ids (setq _planner_ids __planner_ids)) _planner_ids)
  (:serialization-length
   ()
   (+
    ;; string _name
    4 (length _name)
    ;; string _pipeline_id
    4 (length _pipeline_id)
    ;; string[] _planner_ids
    (apply #'+ (mapcar #'(lambda (x) (+ 4 (length x))) _planner_ids)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _name
       (write-long (length _name) s) (princ _name s)
     ;; string _pipeline_id
       (write-long (length _pipeline_id) s) (princ _pipeline_id s)
     ;; string[] _planner_ids
     (write-long (length _planner_ids) s)
     (dolist (elem _planner_ids)
       (write-long (length elem) s) (princ elem s)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _name
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _name (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; string _pipeline_id
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _pipeline_id (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; string[] _planner_ids
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _planner_ids (make-list n))
     (dotimes (i n)
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setf (elt _planner_ids i) (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
     ))
   ;;
   self)
  )

(setf (get moveit_msgs::PlannerInterfaceDescription :md5sum-) "3b93afb00ba165a83730c4eb03cd1ab7")
(setf (get moveit_msgs::PlannerInterfaceDescription :datatype-) "moveit_msgs/PlannerInterfaceDescription")
(setf (get moveit_msgs::PlannerInterfaceDescription :definition-)
      "# The name of the planner interface
string name

# The name of the planning pipeline
string pipeline_id

# The names of the planner ids within the interface
string[] planner_ids

")



(provide :moveit_msgs/PlannerInterfaceDescription "3b93afb00ba165a83730c4eb03cd1ab7")


