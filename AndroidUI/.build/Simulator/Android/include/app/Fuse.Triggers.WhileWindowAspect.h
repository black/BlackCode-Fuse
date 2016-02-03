// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_WHILE_WINDOW_ASPECT_H__
#define __APP_FUSE_TRIGGERS_WHILE_WINDOW_ASPECT_H__

#include <app/Fuse.Triggers.WhileTrigger.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { struct EventArgs; } }

namespace app {
namespace Fuse {
namespace Triggers {

struct WhileWindowAspect;

struct WhileWindowAspect__uType : ::app::Fuse::Triggers::WhileTrigger__uType
{
    bool(*__fp_get_IsActive)(WhileWindowAspect*);
};

WhileWindowAspect__uType* WhileWindowAspect__typeof();

void WhileWindowAspect___ObjInit_3(WhileWindowAspect* __this);
float WhileWindowAspect__get_Aspect(WhileWindowAspect* __this);
void WhileWindowAspect__OnResize(WhileWindowAspect* __this, ::uObject* sender, ::app::Uno::EventArgs* args);
void WhileWindowAspect__OnRooted(WhileWindowAspect* __this, ::app::Fuse::Node* elm);
void WhileWindowAspect__OnUnrooted(WhileWindowAspect* __this, ::app::Fuse::Node* elm);

struct WhileWindowAspect : ::app::Fuse::Triggers::WhileTrigger
{
    void _ObjInit_3() { WhileWindowAspect___ObjInit_3(this); }
    float Aspect() { return WhileWindowAspect__get_Aspect(this); }
    bool IsActive() { return (((WhileWindowAspect__uType*)this->__obj_type)->__fp_get_IsActive)(this); }
    void OnResize(::uObject* sender, ::app::Uno::EventArgs* args) { WhileWindowAspect__OnResize(this, sender, args); }
};

}}}


#endif
