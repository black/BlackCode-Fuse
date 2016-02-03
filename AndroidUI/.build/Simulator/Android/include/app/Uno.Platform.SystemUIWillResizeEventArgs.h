// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Platform\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_PLATFORM_SYSTEM_U_I_WILL_RESIZE_EVENT_ARGS_H__
#define __APP_UNO_PLATFORM_SYSTEM_U_I_WILL_RESIZE_EVENT_ARGS_H__

#include <app/Uno.EventArgs.h>
#include <app/Uno.Rect.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Platform {

struct SystemUIWillResizeEventArgs;

struct SystemUIWillResizeEventArgs__uType : ::app::Uno::EventArgs__uType
{
};

SystemUIWillResizeEventArgs__uType* SystemUIWillResizeEventArgs__typeof();

void SystemUIWillResizeEventArgs___ObjInit_1(SystemUIWillResizeEventArgs* __this, int id, int resizeReason, ::app::Uno::Rect endFrame, ::app::Uno::Rect startFrame, double animationDuration, int animationCurve);
int SystemUIWillResizeEventArgs__get_AnimationCurve(SystemUIWillResizeEventArgs* __this);
double SystemUIWillResizeEventArgs__get_AnimationDuration(SystemUIWillResizeEventArgs* __this);
::app::Uno::Rect SystemUIWillResizeEventArgs__get_EndFrame(SystemUIWillResizeEventArgs* __this);
int SystemUIWillResizeEventArgs__get_ID(SystemUIWillResizeEventArgs* __this);
bool SystemUIWillResizeEventArgs__get_IsAnimated(SystemUIWillResizeEventArgs* __this);
int SystemUIWillResizeEventArgs__get_ResizeReason(SystemUIWillResizeEventArgs* __this);
::app::Uno::Rect SystemUIWillResizeEventArgs__get_StartFrame(SystemUIWillResizeEventArgs* __this);
SystemUIWillResizeEventArgs* SystemUIWillResizeEventArgs__New_2(::uStatic* __this, int id, int resizeReason, ::app::Uno::Rect endFrame, ::app::Uno::Rect startFrame, double animationDuration, int animationCurve);
void SystemUIWillResizeEventArgs__set_AnimationCurve(SystemUIWillResizeEventArgs* __this, int value);
void SystemUIWillResizeEventArgs__set_AnimationDuration(SystemUIWillResizeEventArgs* __this, double value);
void SystemUIWillResizeEventArgs__set_EndFrame(SystemUIWillResizeEventArgs* __this, ::app::Uno::Rect value);
void SystemUIWillResizeEventArgs__set_ID(SystemUIWillResizeEventArgs* __this, int value);
void SystemUIWillResizeEventArgs__set_IsAnimated(SystemUIWillResizeEventArgs* __this, bool value);
void SystemUIWillResizeEventArgs__set_ResizeReason(SystemUIWillResizeEventArgs* __this, int value);
void SystemUIWillResizeEventArgs__set_StartFrame(SystemUIWillResizeEventArgs* __this, ::app::Uno::Rect value);

struct SystemUIWillResizeEventArgs : ::app::Uno::EventArgs
{
    int _ID;
    int _ResizeReason;
    ::app::Uno::Rect _StartFrame;
    ::app::Uno::Rect _EndFrame;
    bool _IsAnimated;
    double _AnimationDuration;
    int _AnimationCurve;

    void _ObjInit_1(int id, int resizeReason, ::app::Uno::Rect endFrame, ::app::Uno::Rect startFrame, double animationDuration, int animationCurve) { SystemUIWillResizeEventArgs___ObjInit_1(this, id, resizeReason, endFrame, startFrame, animationDuration, animationCurve); }
    int AnimationCurve() { return SystemUIWillResizeEventArgs__get_AnimationCurve(this); }
    double AnimationDuration() { return SystemUIWillResizeEventArgs__get_AnimationDuration(this); }
    ::app::Uno::Rect EndFrame() { return SystemUIWillResizeEventArgs__get_EndFrame(this); }
    int ID() { return SystemUIWillResizeEventArgs__get_ID(this); }
    bool IsAnimated() { return SystemUIWillResizeEventArgs__get_IsAnimated(this); }
    int ResizeReason() { return SystemUIWillResizeEventArgs__get_ResizeReason(this); }
    ::app::Uno::Rect StartFrame() { return SystemUIWillResizeEventArgs__get_StartFrame(this); }
    void AnimationCurve(int value) { SystemUIWillResizeEventArgs__set_AnimationCurve(this, value); }
    void AnimationDuration(double value) { SystemUIWillResizeEventArgs__set_AnimationDuration(this, value); }
    void EndFrame(::app::Uno::Rect value) { SystemUIWillResizeEventArgs__set_EndFrame(this, value); }
    void ID(int value) { SystemUIWillResizeEventArgs__set_ID(this, value); }
    void IsAnimated(bool value) { SystemUIWillResizeEventArgs__set_IsAnimated(this, value); }
    void ResizeReason(int value) { SystemUIWillResizeEventArgs__set_ResizeReason(this, value); }
    void StartFrame(::app::Uno::Rect value) { SystemUIWillResizeEventArgs__set_StartFrame(this, value); }
};

}}}


#endif
