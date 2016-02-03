// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INPUT_FOCUS_GAINED_ARGS_H__
#define __APP_FUSE_INPUT_FOCUS_GAINED_ARGS_H__

#include <app/Fuse.NodeEventArgs.h>
#include <app/Fuse.Scripting.IScriptEvent.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Input {

struct FocusGainedArgs;

struct FocusGainedArgs__uType : ::app::Fuse::NodeEventArgs__uType
{
};

FocusGainedArgs__uType* FocusGainedArgs__typeof();

void FocusGainedArgs___ObjInit_2(FocusGainedArgs* __this, ::app::Fuse::Node* node);
FocusGainedArgs* FocusGainedArgs__New_3(::uStatic* __this, ::app::Fuse::Node* node);

struct FocusGainedArgs : ::app::Fuse::NodeEventArgs
{
    void _ObjInit_2(::app::Fuse::Node* node) { FocusGainedArgs___ObjInit_2(this, node); }
};

}}}


#endif
