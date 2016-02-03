// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INPUT_FOCUS_GAINED_H__
#define __APP_FUSE_INPUT_FOCUS_GAINED_H__

#include <app/Fuse.NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_Focus-e88b1a1.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Input { struct FocusGainedArgs; } } }

namespace app {
namespace Fuse {
namespace Input {

struct FocusGained;

struct FocusGained__uType : ::app::Fuse::NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs__uType
{
};

FocusGained__uType* FocusGained__typeof();

void FocusGained___ObjInit_1(FocusGained* __this);
void FocusGained__Invoke(FocusGained* __this, ::uDelegate* handler, ::uObject* sender, ::app::Fuse::Input::FocusGainedArgs* args);
FocusGained* FocusGained__New_1(::uStatic* __this);

struct FocusGained : ::app::Fuse::NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs
{
    void _ObjInit_1() { FocusGained___ObjInit_1(this); }
};

}}}


#endif
