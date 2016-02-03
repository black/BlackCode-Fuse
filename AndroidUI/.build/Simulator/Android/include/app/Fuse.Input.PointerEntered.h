// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INPUT_POINTER_ENTERED_H__
#define __APP_FUSE_INPUT_POINTER_ENTERED_H__

#include <app/Fuse.NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_Po-cd4446ec.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Input { struct PointerEnteredArgs; } } }

namespace app {
namespace Fuse {
namespace Input {

struct PointerEntered;

struct PointerEntered__uType : ::app::Fuse::NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs__uType
{
};

PointerEntered__uType* PointerEntered__typeof();

void PointerEntered___ObjInit_1(PointerEntered* __this);
void PointerEntered__Invoke(PointerEntered* __this, ::uDelegate* handler, ::uObject* sender, ::app::Fuse::Input::PointerEnteredArgs* args);
PointerEntered* PointerEntered__New_1(::uStatic* __this);

struct PointerEntered : ::app::Fuse::NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs
{
    void _ObjInit_1() { PointerEntered___ObjInit_1(this); }
};

}}}


#endif
