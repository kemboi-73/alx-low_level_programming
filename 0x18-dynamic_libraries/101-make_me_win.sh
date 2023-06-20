#!/bin/bash
wget -P /tmp/putshark.so https://github.com/Lilwm/alx-low_level_programming/raw/master/0x18-dynamic_libraries/putshark.so
export LD_PRELOAD=/tmp/putshark.so
