// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Diagnostics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_DIAGNOSTICS_FREE_EVENT_H__
#define __APP_UNO_DIAGNOSTICS_FREE_EVENT_H__

#include <app/Uno.Diagnostics.ProfileEvent.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Diagnostics {

struct FreeEvent;

struct FreeEvent__uType : ::app::Uno::Diagnostics::ProfileEvent__uType
{
};

FreeEvent__uType* FreeEvent__typeof();

void FreeEvent___ObjInit_1(FreeEvent* __this, int cls, int id);
int FreeEvent__get_Type(FreeEvent* __this);
FreeEvent* FreeEvent__New_1(::uStatic* __this, int cls, int id);

struct FreeEvent : ::app::Uno::Diagnostics::ProfileEvent
{
    int Class;
    int Id;

    void _ObjInit_1(int cls, int id) { FreeEvent___ObjInit_1(this, cls, id); }
};

}}}


#endif
