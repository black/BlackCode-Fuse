// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Vibration\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_VIBRATION_VIBRATE_H__
#define __APP_FUSE_VIBRATION_VIBRATE_H__

#include <app/Fuse.Triggers.Actions.TriggerAction.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Vibration {

struct Vibrate;

struct Vibrate__uType : ::app::Fuse::Triggers::Actions::TriggerAction__uType
{
};

Vibrate__uType* Vibrate__typeof();

void Vibrate___ObjInit_1(Vibrate* __this);
double Vibrate__get_Duration(Vibrate* __this);
Vibrate* Vibrate__New_1(::uStatic* __this);
void Vibrate__Perform(Vibrate* __this, ::app::Fuse::Node* target);
void Vibrate__set_Duration(Vibrate* __this, double value);

struct Vibrate : ::app::Fuse::Triggers::Actions::TriggerAction
{
    double _Duration;

    void _ObjInit_1() { Vibrate___ObjInit_1(this); }
    double Duration() { return Vibrate__get_Duration(this); }
    void Duration(double value) { Vibrate__set_Duration(this, value); }
};

}}}


#endif
