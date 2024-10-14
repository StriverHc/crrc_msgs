msg_v_state/Time time
uint8 gps_status
float64 x
float64 y
float64 z
float64 latitude
float64 longitude
float64 height
float32 spd_east
float32 spd_north
float32 spd_down
float32 heading_angle
float32 yaw_angle
float32 yaw_rate
float32 pitch_angle
float32 roll_angle
float32 speed
float32 spd_lon
float32 spd_lat
float32 acce
float32 acce_lon
float32 acce_lat
float64 steering_angle
float64 steering_speed
uint8 gear_num          #Gears
float32 thr_angle
float32 brk_pres
float32 brk_current
char engine_state
float64 engine_spd
char park_brk
char carrier_state                 # 0:error; 1: down; 2: free;  3:  up;
char turn_light
char dipped_light
char marker_light
char brake_light
char emer_light
char state_light                   # Off: 0; Red: 1; Yellow: 2; Blue: 4             
float32 wheel_angle
uint8 static_check               # 0:no commend; 1: checking; 2: pass check; 4: check failed
char load_brk
float64 left_spd
float64 right_spd
float64 rear_pres
float64 front_pres
int32 lube_temp
uint32 load_mass
float64 fuel_num
float64 brk_pedal
uint32 engine_hour
char left_ams_status
char right_ams_status
char auto_button
bool trumpet_status
float32 vehicle_speed                     #整车速度  km/h  20201021
bool ecu_with_mcu_comm_status  #0 通信中断 1 通信连接
bool ecu_mode                                #驾驶员模式-0 自动模式-1
char steering_mode                         #0 驾驶员模式； 1 自动模式
char steering_state                          #转向控制器可控状态： 0 不可控 1 可控
uint32 steer_diagnose                     #转向器诊断信息 
bool steering_takeover                    #0:未被接管 1：人工接管   20201019 add
float64 x_absolute_rear_axle #大地坐标系后轴中心x坐标
float64 y_absolute_rear_axle #大地坐标系后轴中心y坐标
float64 z_absolute_rear_axle #大地坐标系后轴中心z坐标
float64 x_absolute_front_axle #大地坐标系前轴中心x坐标
float64 y_absolute_front_axle #大地坐标系前轴中心y坐标
float64 z_absolute_front_axle #大地坐标系前轴中心z坐标
float64 rear_wheel_angle_ground  #基于大地坐标系的后轮角
float64 actual_front_wheel_angle #实际前轮转角
float64 actual_rear_wheel_angle  #实际后轮转角
bool  auto_driving_departure_button   #智驾发车按钮
float64 actual_tram_weight    #整车重量
uint16 tram_end_activation    #0x01:Mc1端激活占有；0x02:Mc2端激活占有
float64 tram_speed    #整车车速（电机转速转换）
uint16 tram_driving_mode    #智轨驾驶状态：0x01:手动驾驶状态；0x02:智能驾驶状态
uint16 tram_zero_speed   #智轨驻车状态：0x01:零速信号激活激活；0x02:零速信号非激活
float64 mc1_articulate_angle   #智轨mc1车铰接盘转角，精度0.1°
float64 mc2_articulate_angle   #智轨mc2车铰接盘转角，精度0.1°
uint16 lateral_control_mode    #横向控制模式（状态）Fault=3, Auto=2, Quit=1, Manual=0
uint16 longitudinal_control_mode  #纵向控制模式（状态）Fault=3, Auto=2, Quit=1, Manual=0
uint32 collision_id                           #碰撞障碍物ID
uint32 age                               #跟踪生命期
