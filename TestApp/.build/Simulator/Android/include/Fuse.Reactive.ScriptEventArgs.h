// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.EventArgs.h>
namespace g{namespace Fuse{namespace Reactive{struct ScriptEventArgs;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class ScriptEventArgs :2635
// {
uType* ScriptEventArgs_typeof();
void ScriptEventArgs__ctor_1_fn(ScriptEventArgs* __this, ::g::Fuse::Node* sender, uString* name, uObject* args);
void ScriptEventArgs__get_Args_fn(ScriptEventArgs* __this, uObject** __retval);
void ScriptEventArgs__set_Args_fn(ScriptEventArgs* __this, uObject* value);
void ScriptEventArgs__get_IsHandled_fn(ScriptEventArgs* __this, bool* __retval);
void ScriptEventArgs__set_IsHandled_fn(ScriptEventArgs* __this, bool* value);
void ScriptEventArgs__get_Name_fn(ScriptEventArgs* __this, uString** __retval);
void ScriptEventArgs__set_Name_fn(ScriptEventArgs* __this, uString* value);
void ScriptEventArgs__New2_fn(::g::Fuse::Node* sender, uString* name, uObject* args, ScriptEventArgs** __retval);
void ScriptEventArgs__get_Sender_fn(ScriptEventArgs* __this, ::g::Fuse::Node** __retval);
void ScriptEventArgs__set_Sender_fn(ScriptEventArgs* __this, ::g::Fuse::Node* value);

struct ScriptEventArgs : ::g::Uno::EventArgs
{
    uStrong<uObject*> _Args;
    bool _IsHandled;
    uStrong<uString*> _Name;
    uStrong< ::g::Fuse::Node*> _Sender;

    void ctor_1(::g::Fuse::Node* sender, uString* name, uObject* args);
    uObject* Args();
    void Args(uObject* value);
    bool IsHandled();
    void IsHandled(bool value);
    uString* Name();
    void Name(uString* value);
    ::g::Fuse::Node* Sender();
    void Sender(::g::Fuse::Node* value);
    static ScriptEventArgs* New2(::g::Fuse::Node* sender, uString* name, uObject* args);
};
// }

}}} // ::g::Fuse::Reactive
