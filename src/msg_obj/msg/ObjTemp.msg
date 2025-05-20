float64 x #单位m
float64 y #单位m
float64 z #单位m
float32 vx #单位m/s
float32 vy #单位m/s
float32 vz #单位m/s
float32 width #宽度，单位m
float32 length #长度，单位m
float32 height #高度，单位m
#float64 yaw_angle #横摆脚，角度信息，单位为度
uint8 track_state #跟踪状态,0：删除或无效；1：新的；2：测量的；3：预测的；4：待删除；5：待跟踪
uint8 predict_length #预测时长， 单位s
int32 type #障碍物类型, 根据长宽高由小到大排列。0:未分类；1：小石块/小土块；2：行人；3：小车；4：矿卡/平路机/推土机/洒水车；5土挡；51车辙；100：卸载完成前进时后向挡墙
int32 dust_type #灰尘类型 0:无灰尘1:轻度灰尘2:重度灰尘
uint32 type_age #障碍物类型时间长度，单位0.1s
float32 orientation #障碍物形状方位角，单位度，
float32 ax #x轴加速度，单位m/s^2
float32 ay #y轴加速度，单位m/s^2
float32 az #z轴加速度，单位m/s^2
msg_common/Covariance cov     #协方差
uint8 type_certainty #障碍物类型确信度,0~100
uint8 obj_certainty #障碍物存在确信度, 0:无效；1：小于0.25；2：小于0.5;3：小于0.75;4：小于0.9;5：小于0.99;6：小于0.999
int8 source #数据来源编号，预设的传感器编号
msg_common/GridPointTemp[] contour_point #obj对象包含的点信息
msg_common/GridPointTemp max_contour_p #轮廓点的最大值，包括max_x max_y max_z
msg_common/GridPointTemp min_contour_p #轮廓点的最小值，包括min_x min_y min_z
uint32 id #跟踪之后给出的最终obj的id
uint8 absolute_motion #绝对的运动状态，0：未知; 1：静止；2：运动
uint8 relative_motion #相对车辆的运动状态，0：静止；1:迎面而来；2：远去；3：横越；4:未知
float32 orientation_rate #方向角速度
float32 min_dis_ground #最低点离地高度
float32 max_dis_ground #最高点离地高度
float32 aver_grad #平均梯度
float32 aver_inten #平均强度
float32 max_dis_grad #最高点离地高度变化率
float32 history_max_height #历史最大高度
uint32 vehicle_type_age #当前id的目标中，有多少帧是被检测为了车辆，car/truck 
uint32 errspeed_type_age #当前id的目标中，有多少帧是被检测为了速度异常目标
uint32 chezhe_type_age #当前id的目标中，有多少帧是被检测为了车辙
uint32 dust_age#当前id的目标中，有多少帧是被检测为了水雾、灰尘
float32 dis_h_min_max #当前障碍物最高点和最低点的水平距离
int32 include_point_num #当前障碍物所包含的点数
msg_common/GridPointTemp nearest_point
msg_common/GridPointTemp left_point
msg_common/GridPointTemp right_point
uint8 is_split #当前障碍物是否是被拆分出的障碍物 1:沿x轴拆分，2：沿y轴拆分
float32 history_max_length #历史最大长度
float32 history_max_width #历史最大宽度
float32[] history_orientation #最近几帧的航向角
float32[] history_length #最近几帧的长度
float32[] history_width #最近几帧的宽度
float32 euclideandistance #障碍物法向量距离判断
float32 icp  
float32 average_cur
float32 area_diff
float32 length_diff
float32 width_diff
float32 height_diff
float32 speed_diff
float32 dust_ratio
float32 density
