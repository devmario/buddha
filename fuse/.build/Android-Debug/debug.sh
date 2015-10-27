#!/bin/sh
set -e
cd "`dirname "$0"`"

PATH="/usr/local/share/uno/SDKs/AndroidSDK/platform-tools:$PATH"


set -e
cd "`dirname "$0"`"
PATH="/usr/local/share/uno/SDKs/AndroidSDK/platform-tools:$PATH"

echo ""
echo "# Waiting for activity before connection gdb"
adb shell sleep 2

NDK_DIR="/usr/local/share/uno/SDKs/AndroidNDK"

AWK_SCRIPTS=$NDK_DIR/build/awk
PID=`adb shell ps | awk -f $NDK_DIR/build/awk/extract-pid.awk -v PACKAGE="com.buddha"`
DATA_DIR=/data/data/com.buddha #`adb shell run-as com.buddha /system/bin/sh -c pwd`
DEVICE_GDBSERVER=$DATA_DIR/lib/gdbserver

echo ""
echo "# Starting gdbserver at $DEVICE_GDBSERVER"
adb shell run-as com.buddha $DEVICE_GDBSERVER +debug-socket --attach $PID &

echo ""
echo "# Forwarding GDB to localhost port:1234"
adb forward tcp:1234 localfilesystem:$DATA_DIR/debug-socket &



wait
