// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Launcher\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_ACTIONS_LAUNCH_URI_H__
#define __APP_FUSE_TRIGGERS_ACTIONS_LAUNCH_URI_H__

#include <app/Fuse.Triggers.Actions.TriggerAction.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Triggers {
namespace Actions {

struct LaunchUri;

struct LaunchUri__uType : ::app::Fuse::Triggers::Actions::TriggerAction__uType
{
};

LaunchUri__uType* LaunchUri__typeof();

void LaunchUri___ObjInit_1(LaunchUri* __this);
::uString* LaunchUri__get_Uri(LaunchUri* __this);
LaunchUri* LaunchUri__New_1(::uStatic* __this);
void LaunchUri__Perform(LaunchUri* __this, ::app::Fuse::Node* target);
void LaunchUri__set_Uri(LaunchUri* __this, ::uString* value);

struct LaunchUri : ::app::Fuse::Triggers::Actions::TriggerAction
{
    ::uStrong< ::uString*> _Uri;

    void _ObjInit_1() { LaunchUri___ObjInit_1(this); }
    ::uString* Uri() { return LaunchUri__get_Uri(this); }
    void Uri(::uString* value) { LaunchUri__set_Uri(this, value); }
};

}}}}


#endif
