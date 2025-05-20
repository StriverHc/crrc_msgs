shm_msgs/Header header

uint8 number
uint32 height                # image height, that is, number of rows
uint32 width                 # image width, that is, number of columns

shm_msgs/String encoding     # Encoding of pixels -- channel meaning, ordering, size
                             # taken from the list of char[256]s in include/sensor_msgs/image_encodings.hpp

uint8 is_bigendian           # is this data bigendian?
uint32 step                  # Full row length in bytes
uint8[6220800] data          # actual matrix data, size is (step * rows), step = 1920 * 3, rows = 1080

uint32 DATA_MAX_SIZE=6220800