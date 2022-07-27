// Auto-generated. Do not edit!

// (in-package moveit_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class PlannerInterfaceDescription {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.name = null;
      this.pipeline_id = null;
      this.planner_ids = null;
    }
    else {
      if (initObj.hasOwnProperty('name')) {
        this.name = initObj.name
      }
      else {
        this.name = '';
      }
      if (initObj.hasOwnProperty('pipeline_id')) {
        this.pipeline_id = initObj.pipeline_id
      }
      else {
        this.pipeline_id = '';
      }
      if (initObj.hasOwnProperty('planner_ids')) {
        this.planner_ids = initObj.planner_ids
      }
      else {
        this.planner_ids = [];
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type PlannerInterfaceDescription
    // Serialize message field [name]
    bufferOffset = _serializer.string(obj.name, buffer, bufferOffset);
    // Serialize message field [pipeline_id]
    bufferOffset = _serializer.string(obj.pipeline_id, buffer, bufferOffset);
    // Serialize message field [planner_ids]
    bufferOffset = _arraySerializer.string(obj.planner_ids, buffer, bufferOffset, null);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type PlannerInterfaceDescription
    let len;
    let data = new PlannerInterfaceDescription(null);
    // Deserialize message field [name]
    data.name = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [pipeline_id]
    data.pipeline_id = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [planner_ids]
    data.planner_ids = _arrayDeserializer.string(buffer, bufferOffset, null)
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += _getByteLength(object.name);
    length += _getByteLength(object.pipeline_id);
    object.planner_ids.forEach((val) => {
      length += 4 + _getByteLength(val);
    });
    return length + 12;
  }

  static datatype() {
    // Returns string type for a message object
    return 'moveit_msgs/PlannerInterfaceDescription';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '3b93afb00ba165a83730c4eb03cd1ab7';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # The name of the planner interface
    string name
    
    # The name of the planning pipeline
    string pipeline_id
    
    # The names of the planner ids within the interface
    string[] planner_ids
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new PlannerInterfaceDescription(null);
    if (msg.name !== undefined) {
      resolved.name = msg.name;
    }
    else {
      resolved.name = ''
    }

    if (msg.pipeline_id !== undefined) {
      resolved.pipeline_id = msg.pipeline_id;
    }
    else {
      resolved.pipeline_id = ''
    }

    if (msg.planner_ids !== undefined) {
      resolved.planner_ids = msg.planner_ids;
    }
    else {
      resolved.planner_ids = []
    }

    return resolved;
    }
};

module.exports = PlannerInterfaceDescription;
