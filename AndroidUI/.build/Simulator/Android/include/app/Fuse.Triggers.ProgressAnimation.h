// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_PROGRESS_ANIMATION_H__
#define __APP_FUSE_TRIGGERS_PROGRESS_ANIMATION_H__

#include <app/Fuse.Triggers.Trigger.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Triggers {

struct ProgressAnimation;

struct ProgressAnimation__uType : ::app::Fuse::Triggers::Trigger__uType
{
};

ProgressAnimation__uType* ProgressAnimation__typeof();

void ProgressAnimation___ObjInit_2(ProgressAnimation* __this);
ProgressAnimation* ProgressAnimation__New_1(::uStatic* __this);
void ProgressAnimation__OnChanged(ProgressAnimation* __this, ::uObject* s, ::uObject* a);
void ProgressAnimation__OnRooted(ProgressAnimation* __this, ::app::Fuse::Node* elm);
void ProgressAnimation__OnUnrooted(ProgressAnimation* __this, ::app::Fuse::Node* elm);

struct ProgressAnimation : ::app::Fuse::Triggers::Trigger
{
    ::uStrong< ::uObject*> _progress;
    double _prevValue;

    void _ObjInit_2() { ProgressAnimation___ObjInit_2(this); }
    void OnChanged(::uObject* s, ::uObject* a) { ProgressAnimation__OnChanged(this, s, a); }
};

}}}


#endif
