// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Diagnostics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_DIAGNOSTICS_ALLOCATE_EVENT_H__
#define __APP_UNO_DIAGNOSTICS_ALLOCATE_EVENT_H__

#include <app/Uno.Diagnostics.ProfileEvent.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Diagnostics {

struct AllocateEvent;

struct AllocateEvent__uType : ::app::Uno::Diagnostics::ProfileEvent__uType
{
};

AllocateEvent__uType* AllocateEvent__typeof();

void AllocateEvent___ObjInit_1(AllocateEvent* __this, int cls, int id, int weight);
int AllocateEvent__get_Type(AllocateEvent* __this);
AllocateEvent* AllocateEvent__New_1(::uStatic* __this, int cls, int id, int weight);

struct AllocateEvent : ::app::Uno::Diagnostics::ProfileEvent
{
    int Class;
    int Id;
    int Weight;

    void _ObjInit_1(int cls, int id, int weight) { AllocateEvent___ObjInit_1(this, cls, id, weight); }
};

}}}


#endif
