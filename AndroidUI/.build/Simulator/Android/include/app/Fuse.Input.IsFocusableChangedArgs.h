// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INPUT_IS_FOCUSABLE_CHANGED_ARGS_H__
#define __APP_FUSE_INPUT_IS_FOCUSABLE_CHANGED_ARGS_H__

#include <app/Fuse.NodeEventArgs.h>
#include <app/Fuse.Scripting.IScriptEvent.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Input {

struct IsFocusableChangedArgs;

struct IsFocusableChangedArgs__uType : ::app::Fuse::NodeEventArgs__uType
{
};

IsFocusableChangedArgs__uType* IsFocusableChangedArgs__typeof();

void IsFocusableChangedArgs___ObjInit_2(IsFocusableChangedArgs* __this, ::app::Fuse::Node* node);
IsFocusableChangedArgs* IsFocusableChangedArgs__New_3(::uStatic* __this, ::app::Fuse::Node* node);

struct IsFocusableChangedArgs : ::app::Fuse::NodeEventArgs
{
    void _ObjInit_2(::app::Fuse::Node* node) { IsFocusableChangedArgs___ObjInit_2(this, node); }
};

}}}


#endif
