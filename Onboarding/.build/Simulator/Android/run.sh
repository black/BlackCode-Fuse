#!/bin/sh
set -e
cd "`dirname "$0"`"

PATH="c:/users/kuro/appdata/local/android/sdk/platform-tools:$PATH"

if ! which adb > /dev/null 2>&1; then
    echo "ERROR: 'adb' was not found." >&2
    exit 1
fi

echo "## Detecting Android device"

# Clear offline devices, if any
OFFLINE_COUNT=`adb devices | grep "offline$" | wc -l | sed 's/^ *//;s/ *$//'`
if [ "$OFFLINE_COUNT" != "0" ]; then
    echo "Restarting ADB..."
    adb kill-server
fi

for try in 5 4 3 2 1 0; do
    DEVICE_COUNT=`adb devices | grep "device$" | wc -l | sed 's/^ *//;s/ *$//'`

    case "$DEVICE_COUNT" in
    0)
        if [ "$try" != "0" ]; then
            echo "Waiting for devices ($try)..."
            sleep 1s
            continue
        fi

        echo "ERROR: No android devices found." >&2
        exit 1
        ;;
    *)
        break
        ;;
    esac
done

echo "Success"

echo ""
echo "## Trying to uninstall existing version of APK"
adb devices | tail -n +2 | cut -sf 1 | xargs -I {} adb -s {} uninstall com.Onboarding

echo ""
echo "## Installing new version of APK"
adb devices | tail -n +2 | cut -sf 1 | xargs -I {} adb -s {} install -r bin/Onboarding-debug.apk

echo ""
echo "## Starting APK on device"
adb devices | tail -n +2 | cut -sf 1 | xargs -I {} adb -s {} shell \
    am start -a android.intent.action.MAIN -c [android.intent.category.LAUNCHER] -f 0x10200000 -n \
    com.Onboarding/com.Onboarding.Onboarding
