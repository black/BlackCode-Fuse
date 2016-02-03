// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Triggers\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_WHILE_INTERACTING_H__
#define __APP_FUSE_TRIGGERS_WHILE_INTERACTING_H__

#include <app/Fuse.Triggers.WhileTrigger.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { struct Control; } } }
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Triggers {

struct WhileInteracting;

struct WhileInteracting__uType : ::app::Fuse::Triggers::WhileTrigger__uType
{
};

WhileInteracting__uType* WhileInteracting__typeof();

void WhileInteracting___ObjInit_3(WhileInteracting* __this);
WhileInteracting* WhileInteracting__New_1(::uStatic* __this);
void WhileInteracting__OnInteractingChanged(WhileInteracting* __this, ::uObject* s, ::uObject* a);
void WhileInteracting__OnRooted(WhileInteracting* __this, ::app::Fuse::Node* n);
void WhileInteracting__OnUnrooted(WhileInteracting* __this, ::app::Fuse::Node* elm);

struct WhileInteracting : ::app::Fuse::Triggers::WhileTrigger
{
    ::uStrong< ::app::Fuse::Controls::Control*> _control;

    void _ObjInit_3() { WhileInteracting___ObjInit_3(this); }
    void OnInteractingChanged(::uObject* s, ::uObject* a) { WhileInteracting__OnInteractingChanged(this, s, a); }
};

}}}


#endif
