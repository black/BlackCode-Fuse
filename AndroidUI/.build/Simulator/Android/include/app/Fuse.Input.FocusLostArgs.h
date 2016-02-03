// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INPUT_FOCUS_LOST_ARGS_H__
#define __APP_FUSE_INPUT_FOCUS_LOST_ARGS_H__

#include <app/Fuse.NodeEventArgs.h>
#include <app/Fuse.Scripting.IScriptEvent.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Input {

struct FocusLostArgs;

struct FocusLostArgs__uType : ::app::Fuse::NodeEventArgs__uType
{
};

FocusLostArgs__uType* FocusLostArgs__typeof();

void FocusLostArgs___ObjInit_2(FocusLostArgs* __this, ::app::Fuse::Node* node);
FocusLostArgs* FocusLostArgs__New_3(::uStatic* __this, ::app::Fuse::Node* node);

struct FocusLostArgs : ::app::Fuse::NodeEventArgs
{
    void _ObjInit_2(::app::Fuse::Node* node) { FocusLostArgs___ObjInit_2(this, node); }
};

}}}


#endif
