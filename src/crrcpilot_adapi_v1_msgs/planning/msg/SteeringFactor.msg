# constants for common use
uint16 UNKNOWN = 0

# constants for direction
uint16 LEFT = 1
uint16 RIGHT = 2
uint16 STRAIGHT = 3

# constants for status
uint16 APPROACHING = 1
uint16 TURNING = 3

# variables
geometry_msgs/Pose[2] pose
float32[2] distance
uint16 direction
uint16 status
string behavior
string sequence
string detail
crrcpilot_adapi_v1_msgs/CooperationStatus[<=1] cooperation

#deprecated constants for status
uint16 TRYING = 2
