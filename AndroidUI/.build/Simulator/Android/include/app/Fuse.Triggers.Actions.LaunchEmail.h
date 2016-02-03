// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Launcher\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_ACTIONS_LAUNCH_EMAIL_H__
#define __APP_FUSE_TRIGGERS_ACTIONS_LAUNCH_EMAIL_H__

#include <app/Fuse.Triggers.Actions.TriggerAction.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Triggers {
namespace Actions {

struct LaunchEmail;

struct LaunchEmail__uType : ::app::Fuse::Triggers::Actions::TriggerAction__uType
{
};

LaunchEmail__uType* LaunchEmail__typeof();

void LaunchEmail___ObjInit_1(LaunchEmail* __this);
::uString* LaunchEmail__get_BlindCarbonCopy(LaunchEmail* __this);
::uString* LaunchEmail__get_CarbonCopy(LaunchEmail* __this);
::uString* LaunchEmail__get_Message(LaunchEmail* __this);
::uString* LaunchEmail__get_Subject(LaunchEmail* __this);
::uString* LaunchEmail__get_To(LaunchEmail* __this);
LaunchEmail* LaunchEmail__New_1(::uStatic* __this);
void LaunchEmail__Perform(LaunchEmail* __this, ::app::Fuse::Node* target);
void LaunchEmail__set_BlindCarbonCopy(LaunchEmail* __this, ::uString* value);
void LaunchEmail__set_CarbonCopy(LaunchEmail* __this, ::uString* value);
void LaunchEmail__set_Message(LaunchEmail* __this, ::uString* value);
void LaunchEmail__set_Subject(LaunchEmail* __this, ::uString* value);
void LaunchEmail__set_To(LaunchEmail* __this, ::uString* value);

struct LaunchEmail : ::app::Fuse::Triggers::Actions::TriggerAction
{
    ::uStrong< ::uString*> _To;
    ::uStrong< ::uString*> _CarbonCopy;
    ::uStrong< ::uString*> _BlindCarbonCopy;
    ::uStrong< ::uString*> _Subject;
    ::uStrong< ::uString*> _Message;

    void _ObjInit_1() { LaunchEmail___ObjInit_1(this); }
    ::uString* BlindCarbonCopy() { return LaunchEmail__get_BlindCarbonCopy(this); }
    ::uString* CarbonCopy() { return LaunchEmail__get_CarbonCopy(this); }
    ::uString* Message() { return LaunchEmail__get_Message(this); }
    ::uString* Subject() { return LaunchEmail__get_Subject(this); }
    ::uString* To() { return LaunchEmail__get_To(this); }
    void BlindCarbonCopy(::uString* value) { LaunchEmail__set_BlindCarbonCopy(this, value); }
    void CarbonCopy(::uString* value) { LaunchEmail__set_CarbonCopy(this, value); }
    void Message(::uString* value) { LaunchEmail__set_Message(this, value); }
    void Subject(::uString* value) { LaunchEmail__set_Subject(this, value); }
    void To(::uString* value) { LaunchEmail__set_To(this, value); }
};

}}}}


#endif
