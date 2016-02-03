// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{struct Marshal__VectorEnum;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// private sealed class Marshal.VectorEnum :1941
// {
uType* Marshal__VectorEnum_typeof();
void Marshal__VectorEnum__ctor__fn(Marshal__VectorEnum* __this, uDelegate* callback);
void Marshal__VectorEnum__Enum_fn(Marshal__VectorEnum* __this, uArray* values);
void Marshal__VectorEnum__New1_fn(uDelegate* callback, Marshal__VectorEnum** __retval);

struct Marshal__VectorEnum : uObject
{
    uStrong<uDelegate*> _callback;

    void ctor_(uDelegate* callback);
    void Enum(uArray* values);
    static Marshal__VectorEnum* New1(uDelegate* callback);
};
// }

}}} // ::g::Fuse::Reactive
