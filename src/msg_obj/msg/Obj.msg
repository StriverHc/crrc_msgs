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
uint32 type_age #障碍物类型时间长度，单位0.1s
float32 orientation #障碍物形状方位角，单位度，
float32 ax #x轴加速度，单位m/s^2
float32 ay #y轴加速度，单位m/s^2
float32 az #z轴加速度，单位m/s^2
msg_common/Covariance cov     #协方差
uint8 type_certainty #障碍物类型确信度,0~100
uint8 obj_certainty #障碍物存在确信度, 0:无效；1：小于0.25；2：小于0.5;3：小于0.75;4：小于0.9;5：小于0.99;6：小于0.999
int8 source #数据来源编号，预设的传感器编号
msg_common/GridPoint[] contour_point #obj对象包含的点信息
uint32 id #跟踪之后给出的最终obj的id
uint8 absolute_motion #绝对的运动状态，0：未知; 1：静止；2：运动
uint8 relative_motion #相对车辆的运动状态，0：静止；1:迎面而来；2：远去；3：横越；4:未知
float32 orientation_rate #方向角速度
