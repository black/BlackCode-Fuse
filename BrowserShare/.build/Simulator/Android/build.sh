#!/bin/sh
set -e
cd "`dirname "$0"`"

##if #(JDK.Directory:IsSet)
export JAVA_HOME="C:/Program Files/Java/jdk1.7.0_79"
##endif

##if #(Ant.Directory:IsSet)
PATH="C:/ant/bin:$PATH"
##endif

for cmd in ant make; do
    if ! which $cmd > /dev/null 2>&1; then
        echo "ERROR: '$cmd' was not found." >&2
        exit 1
    fi
done

NDK_DIR="C:/Users/Kuro/AppData/Local/VirtualStore/Windows/SysWOW64/android-ndk-r10e"
SDK_DIR="c:/users/kuro/appdata/local/android/sdk"
PREBUILT_DIR="$NDK_DIR/toolchains/arm-linux-androideabi-4.8/prebuilt"

export CC=`find "$PREBUILT_DIR" -name arm-linux-androideabi-gcc`
export CXX=`find "$PREBUILT_DIR" -name arm-linux-androideabi-g++`
export STRIP=`find "$PREBUILT_DIR" -name arm-linux-androideabi-strip`

if [ -z "$CXX" ]; then
    PREBUILT_DIR="$NDK_DIR/toolchains/arm-linux-androideabi-4.6/prebuilt"

    export CC=`find "$PREBUILT_DIR" -name arm-linux-androideabi-gcc`
    export CXX=`find "$PREBUILT_DIR" -name arm-linux-androideabi-g++`
    export STRIP=`find "$PREBUILT_DIR" -name arm-linux-androideabi-strip`

    if [ -z "$CXX" ]; then
        echo "ERROR: C/C++ compilers was not found in '$PREBUILT_DIR'." >&2
        exit 1
    fi
fi

echo "## 1/2: libBrowserShare.so"

if [ -f /proc/cpuinfo ]; then
    JOB_COUNT=`grep processor /proc/cpuinfo | wc -l`
else
    JOB_COUNT=`sysctl hw.ncpu | cut -d " " -f 2`
fi

make -s -j $JOB_COUNT $*

echo ""
echo "## 2/2: BrowserShare-debug.apk"


ant debug
