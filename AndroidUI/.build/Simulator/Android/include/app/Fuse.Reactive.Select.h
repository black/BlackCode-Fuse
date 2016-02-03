// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_REACTIVE_SELECT_H__
#define __APP_FUSE_REACTIVE_SELECT_H__

#include <app/Fuse.Triggers.Trigger.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Reactive {

struct Select;

struct Select__uType : ::app::Fuse::Triggers::Trigger__uType
{
};

Select__uType* Select__typeof();

void Select___ObjInit_2(Select* __this);
::uObject* Select__get_Data(Select* __this);
Select* Select__New_1(::uStatic* __this);
void Select__OnChanged(Select* __this);
void Select__OnNodeAdded(Select* __this, ::app::Fuse::Node* n);
void Select__OnRooted(Select* __this, ::app::Fuse::Node* elm);
void Select__OnUnrooted(Select* __this, ::app::Fuse::Node* elm);
void Select__set_Data(Select* __this, ::uObject* value);

struct Select : ::app::Fuse::Triggers::Trigger
{
    ::uStrong< ::uObject*> _data;

    void _ObjInit_2() { Select___ObjInit_2(this); }
    ::uObject* Data() { return Select__get_Data(this); }
    void OnChanged() { Select__OnChanged(this); }
    void Data(::uObject* value) { Select__set_Data(this, value); }
};

}}}


#endif
