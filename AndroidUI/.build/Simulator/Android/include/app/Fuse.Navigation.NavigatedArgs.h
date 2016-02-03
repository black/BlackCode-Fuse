// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_NAVIGATION_NAVIGATED_ARGS_H__
#define __APP_FUSE_NAVIGATION_NAVIGATED_ARGS_H__

#include <app/Fuse.Scripting.IScriptEvent.h>
#include <app/Uno.EventArgs.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Navigation {

struct NavigatedArgs;

struct NavigatedArgs__uType : ::app::Uno::EventArgs__uType
{
    ::app::Fuse::Scripting::IScriptEvent __interface_0;
};

NavigatedArgs__uType* NavigatedArgs__typeof();

void NavigatedArgs___ObjInit_1(NavigatedArgs* __this, ::app::Fuse::Node* newNode);
void NavigatedArgs__Fuse_Scripting_IScriptEvent_Serialize(NavigatedArgs* __this, ::uObject* s);
::app::Fuse::Node* NavigatedArgs__get_NewNode(NavigatedArgs* __this);
NavigatedArgs* NavigatedArgs__New_2(::uStatic* __this, ::app::Fuse::Node* newNode);
void NavigatedArgs__set_NewNode(NavigatedArgs* __this, ::app::Fuse::Node* value);

struct NavigatedArgs : ::app::Uno::EventArgs
{
    ::uStrong< ::app::Fuse::Node*> _NewNode;

    void _ObjInit_1(::app::Fuse::Node* newNode) { NavigatedArgs___ObjInit_1(this, newNode); }
    ::app::Fuse::Node* NewNode() { return NavigatedArgs__get_NewNode(this); }
    void NewNode(::app::Fuse::Node* value) { NavigatedArgs__set_NewNode(this, value); }
};

}}}


#endif
