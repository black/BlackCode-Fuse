// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Outracks.UnoCore\Utilities\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_UNO_CORE_UTILITIES_VERY_SIMPLE_EVENT_QUEUE_H__
#define __APP_OUTRACKS_UNO_CORE_UTILITIES_VERY_SIMPLE_EVENT_QUEUE_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Outracks {
namespace UnoCore {
namespace Utilities {

struct VerySimpleEventQueue;

struct VerySimpleEventQueue__uType : ::uClassType
{
};

VerySimpleEventQueue__uType* VerySimpleEventQueue__typeof();

void VerySimpleEventQueue___ObjInit(VerySimpleEventQueue* __this);
void VerySimpleEventQueue__Enqueue(VerySimpleEventQueue* __this, ::uDelegate* action);
VerySimpleEventQueue* VerySimpleEventQueue__New_1(::uStatic* __this);
bool VerySimpleEventQueue__TryDequeue(VerySimpleEventQueue* __this, ::uDelegate** result);

struct VerySimpleEventQueue : ::uObject
{
    ::uStrong< ::uDelegate*> _queue;

    void _ObjInit() { VerySimpleEventQueue___ObjInit(this); }
    void Enqueue(::uDelegate* action) { VerySimpleEventQueue__Enqueue(this, action); }
    bool TryDequeue(::uDelegate** result) { return VerySimpleEventQueue__TryDequeue(this, result); }
};

}}}}


#endif
