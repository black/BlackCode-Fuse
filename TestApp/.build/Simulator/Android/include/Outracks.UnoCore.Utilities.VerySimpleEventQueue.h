// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Outracks.UnoCore\Utilities\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace UnoCore{namespace Utilities{struct VerySimpleEventQueue;}}}}

namespace g{
namespace Outracks{
namespace UnoCore{
namespace Utilities{

// public sealed class VerySimpleEventQueue :44
// {
uType* VerySimpleEventQueue_typeof();
void VerySimpleEventQueue__ctor__fn(VerySimpleEventQueue* __this);
void VerySimpleEventQueue__Enqueue_fn(VerySimpleEventQueue* __this, uDelegate* action);
void VerySimpleEventQueue__New1_fn(VerySimpleEventQueue** __retval);
void VerySimpleEventQueue__TryDequeue_fn(VerySimpleEventQueue* __this, uDelegate** result, bool* __retval);

struct VerySimpleEventQueue : uObject
{
    uStrong<uDelegate*> _queue;

    void ctor_();
    void Enqueue(uDelegate* action);
    bool TryDequeue(uDelegate** result);
    static VerySimpleEventQueue* New1();
};
// }

}}}} // ::g::Outracks::UnoCore::Utilities
