// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_REMOVING_ANIMATION_H__
#define __APP_FUSE_TRIGGERS_REMOVING_ANIMATION_H__

#include <app/Fuse.Triggers.Trigger.h>
#include <Uno.h>
namespace app { namespace Fuse { struct BeginRemoveArgs; } }
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Triggers {

struct RemovingAnimation;

struct RemovingAnimation__uType : ::app::Fuse::Triggers::Trigger__uType
{
};

RemovingAnimation__uType* RemovingAnimation__typeof();

void RemovingAnimation___ObjInit_2(RemovingAnimation* __this);
RemovingAnimation* RemovingAnimation__New_1(::uStatic* __this);
void RemovingAnimation__OnBeginRemove(RemovingAnimation* __this, ::uObject* sender, ::app::Fuse::BeginRemoveArgs* args);
void RemovingAnimation__OnDone(RemovingAnimation* __this);
void RemovingAnimation__OnRooted(RemovingAnimation* __this, ::app::Fuse::Node* elm);
void RemovingAnimation__OnUnrooted(RemovingAnimation* __this, ::app::Fuse::Node* elm);

struct RemovingAnimation : ::app::Fuse::Triggers::Trigger
{
    ::uStrong< ::app::Fuse::BeginRemoveArgs*> _args;

    void _ObjInit_2() { RemovingAnimation___ObjInit_2(this); }
    void OnBeginRemove(::uObject* sender, ::app::Fuse::BeginRemoveArgs* args) { RemovingAnimation__OnBeginRemove(this, sender, args); }
    void OnDone() { RemovingAnimation__OnDone(this); }
};

}}}


#endif
