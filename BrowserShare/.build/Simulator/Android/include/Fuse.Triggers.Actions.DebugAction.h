// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.19.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Actions.TriggerAction.h>
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct DebugAction;}}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public sealed class DebugAction :34
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* DebugAction_typeof();
void DebugAction__ctor_1_fn(DebugAction* __this);
void DebugAction__get_Message_fn(DebugAction* __this, uString** __retval);
void DebugAction__set_Message_fn(DebugAction* __this, uString* value);
void DebugAction__New1_fn(DebugAction** __retval);
void DebugAction__Perform_fn(DebugAction* __this, ::g::Fuse::Node* target);
void DebugAction__get_Properties_fn(DebugAction* __this, uObject** __retval);

struct DebugAction : ::g::Fuse::Triggers::Actions::TriggerAction
{
    uStrong< ::g::Uno::Collections::List*> _props;
    uStrong<uString*> _Message;

    void ctor_1();
    uString* Message();
    void Message(uString* value);
    uObject* Properties();
    static DebugAction* New1();
};
// }

}}}} // ::g::Fuse::Triggers::Actions
