std_msgs/Header                 header
uint32                          id
string                          label
float32                         score   #Score as defined by the detection, Optional
std_msgs/ColorRGBA              color   # Define this object specific color
bool                            valid   # Defines if this object is valid, or invalid as defined by the filtering
uint8                           absolute_motion # absolute motion of object;

string                          space_frame #3D Space coordinate frame of the object, required if pose and dimensions are defines
geometry_msgs/Pose              pose
geometry_msgs/Vector3           dimensions
geometry_msgs/Vector3           variance
geometry_msgs/Twist             velocity
geometry_msgs/Twist             acceleration

sensor_msgs/PointCloud2        pointcloud

visualization_msgs/Marker       line_list

geometry_msgs/PolygonStamped    convex_hull
msg_lidar_shape/LaneArray         candidate_trajectories

bool                            pose_reliable
bool                            velocity_reliable
bool                            acceleration_reliable

string                          image_frame # Image coordinate Frame,        Required if x,y,w,h defined
float32                           x           # X coord in image space(pixel) of the initial point of the Rect
float32                           y           # Y coord in image space(pixel) of the initial point of the Rect
float32 x_bottom_left
float32 y_bottom_left
float32 x_bottom_cent
float32 y_bottom_cent
float32 x_bottom_right
float32 y_bottom_right

float32                         width       # Width of the Rect in pixels
float32                         height      # Height of the Rect in pixels
float32                         angle       # Angle [0 to 2*PI), allow rotated rects

sensor_msgs/Image               roi_image
uint8                           indicator_state # INDICATOR_LEFT = 0, INDICATOR_RIGHT = 1, INDICATOR_BOTH = 2, INDICATOR_NONE = 3
uint8                           behavior_state # FORWARD_STATE = 0, STOPPING_STATE = 1, BRANCH_LEFT_STATE = 2, BRANCH_RIGHT_STATE 3, YIELDING_STATE = 4, ACCELERATING_STATE = 5, SLOWDOWN_STATE = 6
string[]                        user_defined_info
