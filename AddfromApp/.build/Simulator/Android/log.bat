@echo off
pushd "%~dp0"

REM Setup variables
set SDK_DIR=c:\users\kuro\appdata\local\android\sdk
set ADB=%SDK_DIR%\platform-tools\adb.exe

%ADB% logcat -s "Debug","dalvik","error","Error","BufferQueue","XliApp","Xli","DEBUG","System.err","AndroidRuntime","LogSvc","Adreno-ES20","Adreno-EGL","libEGL","BDWGC","art","OpenGLRenderer","HardwareRenderer","Add_from_App"
