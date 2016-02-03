// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_EVENT_ARGS_H__
#define __APP_UNO_EVENT_ARGS_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {

struct EventArgs;

extern ::uStaticStrong< EventArgs*> EventArgs__Empty;

struct EventArgs__uType : ::uClassType
{
};

EventArgs__uType* EventArgs__typeof();

void EventArgs___ObjInit(EventArgs* __this);
void EventArgs___TypeInit(::uStatic* __this);
EventArgs* EventArgs__New_1(::uStatic* __this);

struct EventArgs : ::uObject
{
    void _ObjInit() { EventArgs___ObjInit(this); }
};

}}


#endif
