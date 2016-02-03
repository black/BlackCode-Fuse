// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_WHILE_FAILED_H__
#define __APP_FUSE_TRIGGERS_WHILE_FAILED_H__

#include <app/Fuse.Triggers.WhileTrigger.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct PropertyHandle; } }

namespace app {
namespace Fuse {
namespace Triggers {

struct WhileFailed;

extern ::uStaticStrong< ::app::Fuse::PropertyHandle*> WhileFailed___whileFailedProp;

struct WhileFailed__uType : ::app::Fuse::Triggers::WhileTrigger__uType
{
};

WhileFailed__uType* WhileFailed__typeof();

void WhileFailed___ObjInit_3(WhileFailed* __this);
void WhileFailed___TypeInit(::uStatic* __this);
bool WhileFailed__IsFailed(::uStatic* __this, ::app::Fuse::Node* n);
WhileFailed* WhileFailed__New_1(::uStatic* __this);
void WhileFailed__OnRooted(WhileFailed* __this, ::app::Fuse::Node* n);
void WhileFailed__SetState(::uStatic* __this, ::app::Fuse::Node* n, bool failed, ::uString* message);

struct WhileFailed : ::app::Fuse::Triggers::WhileTrigger
{
    void _ObjInit_3() { WhileFailed___ObjInit_3(this); }
};

}}}


#endif
