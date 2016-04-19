// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{struct Time;}}

namespace g{
namespace Fuse{

// public static class Time :6003
// {
uClassType* Time_typeof();
void Time__get_FrameInterval_fn(double* __retval);
void Time__get_FrameTime_fn(double* __retval);
void Time__Set_fn(double* elapsed, double* delta);

struct Time : uObject
{
    static double _delta_;
    static double& _delta() { return _delta_; }
    static double _elapsed_;
    static double& _elapsed() { return _elapsed_; }

    static void Set(double elapsed, double delta);
    static double FrameInterval();
    static double FrameTime();
};
// }

}} // ::g::Fuse
