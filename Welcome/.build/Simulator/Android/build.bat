@echo off
pushd "%~dp0"

REM Setup variables
set ANT_DIR=C:\ant
set JAVA_HOME=C:\Program Files\Java\jdk1.7.0_79
set NDK_DIR=C:\Users\Kuro\AppData\Local\VirtualStore\Windows\SysWOW64\android-ndk-r10e
set SDK_DIR=c:\users\kuro\appdata\local\android\sdk

if exist "%ANT_DIR%\bin\ant.bat" (
    set ANT=%ANT_DIR%\bin\ant.bat
) else (
    echo ERROR: ant.bat was not found in '%ANT_DIR%\bin'
    goto ERROR
)

if exist "%NDK_DIR%\prebuilt\windows\bin\make.exe" (
    set MAKE=%NDK_DIR%\prebuilt\windows\bin\make.exe
) else if exist "%NDK_DIR%\prebuilt\windows-x86_32\bin\make.exe" (
    set MAKE=%NDK_DIR%\prebuilt\windows-x86_32\bin\make.exe
) else if exist "%NDK_DIR%\prebuilt\windows-x86_64\bin\make.exe" (
    set MAKE=%NDK_DIR%\prebuilt\windows-x86_64\bin\make.exe
) else (
    echo ERROR: make.exe was not found in '%NDK_DIR%\prebuilt'
    goto ERROR
)

if exist "%NDK_DIR%\toolchains\arm-linux-androideabi-4.8\prebuilt\windows" (
    set TOOLCHAIN_DIR=%NDK_DIR%\toolchains\arm-linux-androideabi-4.8\prebuilt\windows
) else if exist "%NDK_DIR%\toolchains\arm-linux-androideabi-4.8\prebuilt\windows-x86_32" (
    set TOOLCHAIN_DIR=%NDK_DIR%\toolchains\arm-linux-androideabi-4.8\prebuilt\windows-x86_32
) else if exist "%NDK_DIR%\toolchains\arm-linux-androideabi-4.8\prebuilt\windows-x86_64" (
    set TOOLCHAIN_DIR=%NDK_DIR%\toolchains\arm-linux-androideabi-4.8\prebuilt\windows-x86_64
) else if exist "%NDK_DIR%\toolchains\arm-linux-androideabi-4.6\prebuilt\windows" (
    set TOOLCHAIN_DIR=%NDK_DIR%\toolchains\arm-linux-androideabi-4.6\prebuilt\windows
) else if exist "%NDK_DIR%\toolchains\arm-linux-androideabi-4.6\prebuilt\windows-x86_32" (
    set TOOLCHAIN_DIR=%NDK_DIR%\toolchains\arm-linux-androideabi-4.6\prebuilt\windows-x86_32
) else if exist "%NDK_DIR%\toolchains\arm-linux-androideabi-4.6\prebuilt\windows-x86_64" (
    set TOOLCHAIN_DIR=%NDK_DIR%\toolchains\arm-linux-androideabi-4.6\prebuilt\windows-x86_64
) else (
    echo ERROR: arm-linux-androideabi-4.8/4.6 compilers were not found in '%NDK_DIR%\toolchains'
    goto ERROR
)

set CC=%TOOLCHAIN_DIR%\bin\arm-linux-androideabi-gcc.exe
set CXX=%TOOLCHAIN_DIR%\bin\arm-linux-androideabi-g++.exe
set STRIP=%TOOLCHAIN_DIR%\bin\arm-linux-androideabi-strip.exe

echo.
echo ## 1/2: libWelcomeAnimation.so
"%MAKE%" -s -j %NUMBER_OF_PROCESSORS% %* || goto ERROR

echo.
echo ## 2/2: WelcomeAnimation-debug.apk

call "%ANT%" debug || goto ERROR
popd && exit /b 0

:ERROR
popd && exit /b 1
