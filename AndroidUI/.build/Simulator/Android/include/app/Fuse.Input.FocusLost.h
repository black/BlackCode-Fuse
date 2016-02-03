// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INPUT_FOCUS_LOST_H__
#define __APP_FUSE_INPUT_FOCUS_LOST_H__

#include <app/Fuse.NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Input { struct FocusLostArgs; } } }

namespace app {
namespace Fuse {
namespace Input {

struct FocusLost;

struct FocusLost__uType : ::app::Fuse::NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs__uType
{
};

FocusLost__uType* FocusLost__typeof();

void FocusLost___ObjInit_1(FocusLost* __this);
void FocusLost__Invoke(FocusLost* __this, ::uDelegate* handler, ::uObject* sender, ::app::Fuse::Input::FocusLostArgs* args);
FocusLost* FocusLost__New_1(::uStatic* __this);

struct FocusLost : ::app::Fuse::NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs
{
    void _ObjInit_1() { FocusLost___ObjInit_1(this); }
};

}}}


#endif
