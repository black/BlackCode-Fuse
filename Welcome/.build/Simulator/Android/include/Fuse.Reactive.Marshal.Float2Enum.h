// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float2.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{struct Marshal__Float2Enum;}}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Reactive{

// private sealed class Marshal.Float2Enum :1999
// {
uType* Marshal__Float2Enum_typeof();
void Marshal__Float2Enum__ctor__fn(Marshal__Float2Enum* __this, uObject* obj, uDelegate* callback);
void Marshal__Float2Enum__Convert_fn(Marshal__Float2Enum* __this, ::g::Uno::Float4* v);
void Marshal__Float2Enum__New1_fn(uObject* obj, uDelegate* callback, Marshal__Float2Enum** __retval);

struct Marshal__Float2Enum : uObject
{
    uStrong<uDelegate*> _callback;

    void ctor_(uObject* obj, uDelegate* callback);
    void Convert(::g::Uno::Float4 v);
    static Marshal__Float2Enum* New1(uObject* obj, uDelegate* callback);
};
// }

}}} // ::g::Fuse::Reactive
