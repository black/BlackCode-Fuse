// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_SCROLL_PROPERTY_CHANGED_ARGS_H__
#define __APP_FUSE_CONTROLS_SCROLL_PROPERTY_CHANGED_ARGS_H__

#include <app/Uno.EventArgs.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Controls {

struct ScrollPropertyChangedArgs;

struct ScrollPropertyChangedArgs__uType : ::app::Uno::EventArgs__uType
{
};

ScrollPropertyChangedArgs__uType* ScrollPropertyChangedArgs__typeof();

void ScrollPropertyChangedArgs___ObjInit_1(ScrollPropertyChangedArgs* __this, ::uObject* origin);
::uObject* ScrollPropertyChangedArgs__get_Origin(ScrollPropertyChangedArgs* __this);
ScrollPropertyChangedArgs* ScrollPropertyChangedArgs__New_2(::uStatic* __this, ::uObject* origin);
void ScrollPropertyChangedArgs__set_Origin(ScrollPropertyChangedArgs* __this, ::uObject* value);

struct ScrollPropertyChangedArgs : ::app::Uno::EventArgs
{
    ::uStrong< ::uObject*> _Origin;

    void _ObjInit_1(::uObject* origin) { ScrollPropertyChangedArgs___ObjInit_1(this, origin); }
    ::uObject* Origin() { return ScrollPropertyChangedArgs__get_Origin(this); }
    void Origin(::uObject* value) { ScrollPropertyChangedArgs__set_Origin(this, value); }
};

}}}


#endif
