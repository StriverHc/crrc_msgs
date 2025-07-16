std_msgs/Header header

# UTC
uint16 gnss_week
float64 gnss_time
uint16 leaps

# Pose
float32 yaw
float32 pitch
float32 roll
float32 speed_heading # vel
float32 gnss_heading

#  GNSS
float64 latitude
float64 longitude
float32 altitude
float32 undulation

# IMU
float32 gyro_x
float32 gyro_y
float32 gyro_z
float32 acc_x
float32 acc_y
float32 acc_z

# Velocity
float32 vel_e
float32 vel_n
float32 vel_u
float32 vel_car
float32 vel_x
float32 vel_y
float32 vel_z

# Car acc
float32 car_acc_x
float32 car_acc_y
float32 car_acc_z
float32 car_gyro_x
float32 car_gyro_y
float32 car_gyro_z

# State
string status
string warming_msg

# Sigame
float32 sigma_position_e 
float32 sigma_position_n  
float32 sigma_position_u  
float32 sigma_ve 
float32 sigma_vn 
float32 sigma_vu 
float32 sigma_v 
float32 sigma_heading
float32 sigma_pitch 
float32 sigma_roll 
float32 horizontal_dop 
float32 position_dop 
float32 velocity_dop
float32 time_dop 
float32 geometric_dop 

uint8 main_satellite
uint8 sub_satellite

float64 gps_age # differential delay

float32 ins2gnss_vector_x 
float32 ins2gnss_vector_y 
float32 ins2gnss_vector_z
float32 ins2body_angle_x 
float32 ins2body_angle_y 
float32 ins2body_angle_z 
float32 gnss2body_vector_x 
float32 gnss2body_vector_y
float32 gnss2body_vector_z 
float32 gnss2body_angle_z 