// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INPUT_IS_FOCUSABLE_CHANGED_EVENT_H__
#define __APP_FUSE_INPUT_IS_FOCUSABLE_CHANGED_EVENT_H__

#include <app/Fuse.NodeEvent__Fuse_Input_IsFocusableChangedHandler__Fuse_Inpu-15da236c.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Input { struct IsFocusableChangedArgs; } } }

namespace app {
namespace Fuse {
namespace Input {

struct IsFocusableChangedEvent;

struct IsFocusableChangedEvent__uType : ::app::Fuse::NodeEvent__Fuse_Input_IsFocusableChangedHandler__Fuse_Input_IsFocusableChangedArgs__uType
{
};

IsFocusableChangedEvent__uType* IsFocusableChangedEvent__typeof();

void IsFocusableChangedEvent___ObjInit_1(IsFocusableChangedEvent* __this);
void IsFocusableChangedEvent__Invoke(IsFocusableChangedEvent* __this, ::uDelegate* handler, ::uObject* sender, ::app::Fuse::Input::IsFocusableChangedArgs* args);
IsFocusableChangedEvent* IsFocusableChangedEvent__New_1(::uStatic* __this);

struct IsFocusableChangedEvent : ::app::Fuse::NodeEvent__Fuse_Input_IsFocusableChangedHandler__Fuse_Input_IsFocusableChangedArgs
{
    void _ObjInit_1() { IsFocusableChangedEvent___ObjInit_1(this); }
};

}}}


#endif
