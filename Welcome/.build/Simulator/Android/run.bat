@echo off
pushd "%~dp0"

REM Setup variables
set SDK_DIR=c:\users\kuro\appdata\local\android\sdk
set ADB=%SDK_DIR%\platform-tools\adb.exe

REM %ADB% kill-server || goto ERROR

echo ## Trying to uninstall existing version of APK
"%ADB%" uninstall com.WelcomeAnimation || goto ERROR

echo.
echo ## Installing new version of APK
"%ADB%" install -r bin/WelcomeAnimation-debug.apk || goto ERROR

echo.
echo ## Starting APK on device
"%ADB%" shell am start -a android.intent.action.MAIN -c [android.intent.category.LAUNCHER] -f 0x10200000 -n com.WelcomeAnimation/com.WelcomeAnimation.WelcomeAnimation || goto ERROR

popd && exit /b 0

:ERROR
popd && exit /b 1
