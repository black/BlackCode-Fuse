// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Diagnostics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_DIAGNOSTICS_ENTER_EVENT_H__
#define __APP_UNO_DIAGNOSTICS_ENTER_EVENT_H__

#include <app/Uno.Diagnostics.ProfileEvent.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Diagnostics {

struct EnterEvent;

struct EnterEvent__uType : ::app::Uno::Diagnostics::ProfileEvent__uType
{
};

EnterEvent__uType* EnterEvent__typeof();

void EnterEvent___ObjInit_1(EnterEvent* __this, int id);
int EnterEvent__get_Type(EnterEvent* __this);
EnterEvent* EnterEvent__New_1(::uStatic* __this, int id);

struct EnterEvent : ::app::Uno::Diagnostics::ProfileEvent
{
    int Id;

    void _ObjInit_1(int id) { EnterEvent___ObjInit_1(this, id); }
};

}}}


#endif
