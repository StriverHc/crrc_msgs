# constants for mode
uint8 UNKNOWN = 0
uint8 STOP = 1
uint8 AUTONOMOUS = 2
uint8 LOCAL = 3
uint8 REMOTE = 4

# variables
builtin_interfaces/Time stamp
uint8 mode
bool is_crrcpilot_control_enabled
bool is_in_transition
bool is_stop_mode_available
bool is_autonomous_mode_available
bool is_local_mode_available
bool is_remote_mode_available
