// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.18.8\FuseJS\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{struct RaiseEvent;}}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}

namespace g{
namespace Fuse{
namespace Reactive{
namespace FuseJS{

// internal sealed class RaiseEvent :811
// {
uType* RaiseEvent_typeof();
void RaiseEvent__ctor__fn(RaiseEvent* __this);
void RaiseEvent__New1_fn(RaiseEvent** __retval);
void RaiseEvent__Raise_fn(RaiseEvent* __this);

struct RaiseEvent : uObject
{
    uStrong< ::g::Uno::Collections::Dictionary*> Args;
    uStrong<uString*> Name;
    uStrong< ::g::Fuse::Node*> Source;

    void ctor_();
    void Raise();
    static RaiseEvent* New1();
};
// }

}}}} // ::g::Fuse::Reactive::FuseJS
