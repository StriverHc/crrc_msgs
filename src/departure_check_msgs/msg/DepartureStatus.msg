float64 lateral_error_art # 横向误差 行驶在中心线左侧为负数，行驶在中心线右侧为正数
uint8 art_deviation_alarm # 偏离预警功能使用 （0：正常，1：向左偏离，2：向右偏离）供蜂鸣器使用
bool will_leave_lane # 偏离预警功能使用 智轨偏离报警信号(True: 是，False：否)供蜂鸣器使用
bool is_out_of_lane # 偏离预警功能使用 横向误差是否超过阈值 (True: 是，False：否) 供 system 使用
uint8 art_deviation_alarm_manual # 人工驾驶下偏离报警信号（0：正常，1：向左偏离，2：向右偏离）
bool lateral_error_over_threshold # 横向偏差超阈值功能使用 横向误差超阈值判断（自动驾驶状态下） (True: 是，False：否)