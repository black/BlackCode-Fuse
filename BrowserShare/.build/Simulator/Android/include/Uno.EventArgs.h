// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{struct EventArgs;}}

namespace g{
namespace Uno{

// public class EventArgs :1768
// {
uType* EventArgs_typeof();
void EventArgs__ctor__fn(EventArgs* __this);
void EventArgs__New1_fn(EventArgs** __retval);

struct EventArgs : uObject
{
    static uSStrong<EventArgs*> Empty_;
    static uSStrong<EventArgs*>& Empty() { return EventArgs_typeof()->Init(), Empty_; }

    void ctor_();
    static EventArgs* New1();
};
// }

}} // ::g::Uno
