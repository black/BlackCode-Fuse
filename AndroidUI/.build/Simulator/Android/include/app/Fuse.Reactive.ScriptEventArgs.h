// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_REACTIVE_SCRIPT_EVENT_ARGS_H__
#define __APP_FUSE_REACTIVE_SCRIPT_EVENT_ARGS_H__

#include <app/Uno.EventArgs.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Reactive {

struct ScriptEventArgs;

struct ScriptEventArgs__uType : ::app::Uno::EventArgs__uType
{
};

ScriptEventArgs__uType* ScriptEventArgs__typeof();

void ScriptEventArgs___ObjInit_1(ScriptEventArgs* __this, ::app::Fuse::Node* sender, ::uString* name, ::uObject* args);
::uObject* ScriptEventArgs__get_Args(ScriptEventArgs* __this);
bool ScriptEventArgs__get_IsHandled(ScriptEventArgs* __this);
::uString* ScriptEventArgs__get_Name(ScriptEventArgs* __this);
::app::Fuse::Node* ScriptEventArgs__get_Sender(ScriptEventArgs* __this);
ScriptEventArgs* ScriptEventArgs__New_2(::uStatic* __this, ::app::Fuse::Node* sender, ::uString* name, ::uObject* args);
void ScriptEventArgs__set_Args(ScriptEventArgs* __this, ::uObject* value);
void ScriptEventArgs__set_IsHandled(ScriptEventArgs* __this, bool value);
void ScriptEventArgs__set_Name(ScriptEventArgs* __this, ::uString* value);
void ScriptEventArgs__set_Sender(ScriptEventArgs* __this, ::app::Fuse::Node* value);

struct ScriptEventArgs : ::app::Uno::EventArgs
{
    bool _IsHandled;
    ::uStrong< ::app::Fuse::Node*> _Sender;
    ::uStrong< ::uString*> _Name;
    ::uStrong< ::uObject*> _Args;

    void _ObjInit_1(::app::Fuse::Node* sender, ::uString* name, ::uObject* args) { ScriptEventArgs___ObjInit_1(this, sender, name, args); }
    ::uObject* Args() { return ScriptEventArgs__get_Args(this); }
    bool IsHandled() { return ScriptEventArgs__get_IsHandled(this); }
    ::uString* Name() { return ScriptEventArgs__get_Name(this); }
    ::app::Fuse::Node* Sender() { return ScriptEventArgs__get_Sender(this); }
    void Args(::uObject* value) { ScriptEventArgs__set_Args(this, value); }
    void IsHandled(bool value) { ScriptEventArgs__set_IsHandled(this, value); }
    void Name(::uString* value) { ScriptEventArgs__set_Name(this, value); }
    void Sender(::app::Fuse::Node* value) { ScriptEventArgs__set_Sender(this, value); }
};

}}}


#endif
