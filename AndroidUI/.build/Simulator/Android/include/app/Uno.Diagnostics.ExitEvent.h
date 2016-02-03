// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Diagnostics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_DIAGNOSTICS_EXIT_EVENT_H__
#define __APP_UNO_DIAGNOSTICS_EXIT_EVENT_H__

#include <app/Uno.Diagnostics.ProfileEvent.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Diagnostics {

struct ExitEvent;

struct ExitEvent__uType : ::app::Uno::Diagnostics::ProfileEvent__uType
{
};

ExitEvent__uType* ExitEvent__typeof();

void ExitEvent___ObjInit_1(ExitEvent* __this);
int ExitEvent__get_Type(ExitEvent* __this);
ExitEvent* ExitEvent__New_1(::uStatic* __this);

struct ExitEvent : ::app::Uno::Diagnostics::ProfileEvent
{
    void _ObjInit_1() { ExitEvent___ObjInit_1(this); }
};

}}}


#endif
