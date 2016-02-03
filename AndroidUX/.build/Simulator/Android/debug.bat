@echo off
pushd "%~dp0"

REM Setup variables
set SDK_DIR=c:\users\kuro\appdata\local\android\sdk
set NDK_DIR=C:\Users\Kuro\AppData\Local\VirtualStore\Windows\SysWOW64\android-ndk-r10e

set ADB=%SDK_DIR%\platform-tools\adb.exe

if exist %NDK_DIR%\prebuilt\windows\bin\awk.exe (
    set AWK=%NDK_DIR%\prebuilt\windows\bin\awk.exe
) else (
    set AWK=%NDK_DIR%\prebuilt\windows-x86_64\bin\awk.exe
)

echo.
echo ## Waiting for activity before connection gdb
%ADB% shell sleep 2

set AWK_SCRIPTS=%NDK_DIR%\build\awk
set DATA_DIR=/data/data/com.Android_UX
set DEVICE_GDBSERVER=%DATA_DIR%/lib/gdbserver

set cmd="%ADB% shell ps | %AWK% -f %AWK_SCRIPTS%\extract-pid.awk -v PACKAGE=""com.Android_UX"""
FOR /F "delims=" %%i IN (' %cmd% ') DO SET PID=%%i

echo.
echo ## Starting gdbserver

start /b cmd /c %ADB% shell run-as com.Android_UX %DEVICE_GDBSERVER% +debug-socket --attach %PID%
timeout /t 1 > nul

echo.
echo ## Forwarding GDB to localhost port:1234
%ADB% forward tcp:1234 localfilesystem:%DATA_DIR%/debug-socket
