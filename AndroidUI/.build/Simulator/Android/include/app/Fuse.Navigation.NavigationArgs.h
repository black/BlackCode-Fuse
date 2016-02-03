// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_NAVIGATION_NAVIGATION_ARGS_H__
#define __APP_FUSE_NAVIGATION_NAVIGATION_ARGS_H__

#include <app/Uno.EventArgs.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Navigation {

struct NavigationArgs;

struct NavigationArgs__uType : ::app::Uno::EventArgs__uType
{
};

NavigationArgs__uType* NavigationArgs__typeof();

void NavigationArgs___ObjInit_1(NavigationArgs* __this, double progress, double prevProgress, int mode);
int NavigationArgs__get_Mode(NavigationArgs* __this);
double NavigationArgs__get_PreviousProgress(NavigationArgs* __this);
double NavigationArgs__get_Progress(NavigationArgs* __this);
NavigationArgs* NavigationArgs__New_2(::uStatic* __this, double progress, double prevProgress, int mode);
void NavigationArgs__set_Mode(NavigationArgs* __this, int value);
void NavigationArgs__set_PreviousProgress(NavigationArgs* __this, double value);
void NavigationArgs__set_Progress(NavigationArgs* __this, double value);

struct NavigationArgs : ::app::Uno::EventArgs
{
    int _Mode;
    double _Progress;
    double _PreviousProgress;

    void _ObjInit_1(double progress, double prevProgress, int mode) { NavigationArgs___ObjInit_1(this, progress, prevProgress, mode); }
    int Mode() { return NavigationArgs__get_Mode(this); }
    double PreviousProgress() { return NavigationArgs__get_PreviousProgress(this); }
    double Progress() { return NavigationArgs__get_Progress(this); }
    void Mode(int value) { NavigationArgs__set_Mode(this, value); }
    void PreviousProgress(double value) { NavigationArgs__set_PreviousProgress(this, value); }
    void Progress(double value) { NavigationArgs__set_Progress(this, value); }
};

}}}


#endif
