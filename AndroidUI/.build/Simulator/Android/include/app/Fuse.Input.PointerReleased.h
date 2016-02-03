// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INPUT_POINTER_RELEASED_H__
#define __APP_FUSE_INPUT_POINTER_RELEASED_H__

#include <app/Fuse.NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_P-dde60e76.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Input { struct PointerReleasedArgs; } } }

namespace app {
namespace Fuse {
namespace Input {

struct PointerReleased;

struct PointerReleased__uType : ::app::Fuse::NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs__uType
{
};

PointerReleased__uType* PointerReleased__typeof();

void PointerReleased___ObjInit_1(PointerReleased* __this);
void PointerReleased__Invoke(PointerReleased* __this, ::uDelegate* handler, ::uObject* sender, ::app::Fuse::Input::PointerReleasedArgs* args);
PointerReleased* PointerReleased__New_1(::uStatic* __this);

struct PointerReleased : ::app::Fuse::NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs
{
    void _ObjInit_1() { PointerReleased___ObjInit_1(this); }
};

}}}


#endif
