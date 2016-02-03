// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Platform\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_PLATFORM_CLOSING_EVENT_ARGS_H__
#define __APP_UNO_PLATFORM_CLOSING_EVENT_ARGS_H__

#include <app/Uno.EventArgs.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Platform {

struct ClosingEventArgs;

struct ClosingEventArgs__uType : ::app::Uno::EventArgs__uType
{
};

ClosingEventArgs__uType* ClosingEventArgs__typeof();

void ClosingEventArgs___ObjInit_1(ClosingEventArgs* __this);
bool ClosingEventArgs__get_Cancel(ClosingEventArgs* __this);
ClosingEventArgs* ClosingEventArgs__New_2(::uStatic* __this);
void ClosingEventArgs__set_Cancel(ClosingEventArgs* __this, bool value);

struct ClosingEventArgs : ::app::Uno::EventArgs
{
    bool _Cancel;

    void _ObjInit_1() { ClosingEventArgs___ObjInit_1(this); }
    bool Cancel() { return ClosingEventArgs__get_Cancel(this); }
    void Cancel(bool value) { ClosingEventArgs__set_Cancel(this, value); }
};

}}}


#endif
