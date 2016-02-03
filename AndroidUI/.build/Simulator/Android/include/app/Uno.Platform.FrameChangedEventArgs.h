// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Platform\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_PLATFORM_FRAME_CHANGED_EVENT_ARGS_H__
#define __APP_UNO_PLATFORM_FRAME_CHANGED_EVENT_ARGS_H__

#include <app/Uno.EventArgs.h>
#include <app/Uno.Rect.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Platform {

struct FrameChangedEventArgs;

struct FrameChangedEventArgs__uType : ::app::Uno::EventArgs__uType
{
};

FrameChangedEventArgs__uType* FrameChangedEventArgs__typeof();

void FrameChangedEventArgs___ObjInit_1(FrameChangedEventArgs* __this, ::app::Uno::Rect newFrame);
::app::Uno::Rect FrameChangedEventArgs__get_NewFrame(FrameChangedEventArgs* __this);
FrameChangedEventArgs* FrameChangedEventArgs__New_2(::uStatic* __this, ::app::Uno::Rect newFrame);
void FrameChangedEventArgs__set_NewFrame(FrameChangedEventArgs* __this, ::app::Uno::Rect value);

struct FrameChangedEventArgs : ::app::Uno::EventArgs
{
    ::app::Uno::Rect _NewFrame;

    void _ObjInit_1(::app::Uno::Rect newFrame) { FrameChangedEventArgs___ObjInit_1(this, newFrame); }
    ::app::Uno::Rect NewFrame() { return FrameChangedEventArgs__get_NewFrame(this); }
    void NewFrame(::app::Uno::Rect value) { FrameChangedEventArgs__set_NewFrame(this, value); }
};

}}}


#endif
