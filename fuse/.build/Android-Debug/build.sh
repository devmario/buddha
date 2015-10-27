#!/bin/sh
set -e
cd "`dirname "$0"`"


export JAVA_HOME="/Library/Java/JavaVirtualMachines/jdk1.7.0_79.jdk/Contents/Home"



PATH="/usr/local/share/uno/SDKs/Ant/bin:$PATH"


for cmd in ant make; do
    if ! which $cmd > /dev/null 2>&1; then
        echo "ERROR: \`$cmd\` was not found." >&2
        exit 1
    fi
done

NDK_DIR="/usr/local/share/uno/SDKs/AndroidNDK"
SDK_DIR="/usr/local/share/uno/SDKs/AndroidSDK"
PREBUILT_DIR="$NDK_DIR/toolchains/arm-linux-androideabi-4.6/prebuilt"

export CC=`find "$PREBUILT_DIR" -name arm-linux-androideabi-gcc`
export CXX=`find "$PREBUILT_DIR" -name arm-linux-androideabi-g++`
export STRIP=`find "$PREBUILT_DIR" -name arm-linux-androideabi-strip`

if [ -z "$CXX" ]; then
    echo "ERROR: C/C++ compilers was not found in '$PREBUILT_DIR'." >&2
    exit 1
fi

echo "# Building SO"

if [ -f /proc/cpuinfo ]; then
    JOB_COUNT=`grep processor /proc/cpuinfo | wc -l`
else
    JOB_COUNT=`sysctl hw.ncpu | cut -d " " -f 2`
fi

# piping to null but errors still go to stderr
make -j $JOB_COUNT > /dev/null

echo ""
echo "# Pre-Build Tasks"


echo ""
echo "# Building APK"

ant debug

echo ""
echo "# Done!"
echo "APK: `pwd -P`/bin/buddha-debug.apk"
