// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_ANDROID_H__
#define __APP_FUSE_TRIGGERS_ANDROID_H__

#include <app/Fuse.Triggers.Trigger.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Triggers {

struct Android;

struct Android__uType : ::app::Fuse::Triggers::Trigger__uType
{
};

Android__uType* Android__typeof();

void Android___ObjInit_2(Android* __this);
Android* Android__New_1(::uStatic* __this);
void Android__OnRooted(Android* __this, ::app::Fuse::Node* n);
void Android__OnUnrooted(Android* __this, ::app::Fuse::Node* n);

struct Android : ::app::Fuse::Triggers::Trigger
{
    void _ObjInit_2() { Android___ObjInit_2(this); }
};

}}}


#endif
