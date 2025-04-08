float64 lateral_error_art # 横向误差
bool will_leave_lane_art # 智轨偏离预警
bool is_out_of_lane_art # 智轨已经偏离信号
uint8 art_deviation_alarm # 智轨偏离报警信号（0：正常，1：向左偏离，2：向右偏离）
bool lateral_error_over_threshold # 横向误差是否超过阈值 (True: 是，False：否)
uint8 art_deviation_alarm_manual # 人工驾驶下偏离报警信号（0：正常，1：向左偏离，2：向右偏离）
bool lateral_error_over_threshold_manual # 人工驾驶下横向误差是否超过阈值 (True: 是，False：否)