// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.EventArgs.h>
namespace g{namespace Fuse{namespace Controls{struct ScrollPropertyChangedArgs;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public sealed class ScrollPropertyChangedArgs :3065
// {
uType* ScrollPropertyChangedArgs_typeof();
void ScrollPropertyChangedArgs__ctor_1_fn(ScrollPropertyChangedArgs* __this, uObject* origin);
void ScrollPropertyChangedArgs__New2_fn(uObject* origin, ScrollPropertyChangedArgs** __retval);
void ScrollPropertyChangedArgs__get_Origin_fn(ScrollPropertyChangedArgs* __this, uObject** __retval);
void ScrollPropertyChangedArgs__set_Origin_fn(ScrollPropertyChangedArgs* __this, uObject* value);

struct ScrollPropertyChangedArgs : ::g::Uno::EventArgs
{
    uStrong<uObject*> _Origin;

    void ctor_1(uObject* origin);
    uObject* Origin();
    void Origin(uObject* value);
    static ScrollPropertyChangedArgs* New2(uObject* origin);
};
// }

}}} // ::g::Fuse::Controls
