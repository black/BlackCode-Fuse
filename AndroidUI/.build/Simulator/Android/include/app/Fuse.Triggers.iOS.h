// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_I_O_S_H__
#define __APP_FUSE_TRIGGERS_I_O_S_H__

#include <app/Fuse.Triggers.Trigger.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Triggers {

struct iOS;

struct iOS__uType : ::app::Fuse::Triggers::Trigger__uType
{
};

iOS__uType* iOS__typeof();

void iOS___ObjInit_2(iOS* __this);
iOS* iOS__New_1(::uStatic* __this);
void iOS__OnRooted(iOS* __this, ::app::Fuse::Node* n);
void iOS__OnUnrooted(iOS* __this, ::app::Fuse::Node* n);

struct iOS : ::app::Fuse::Triggers::Trigger
{
    void _ObjInit_2() { iOS___ObjInit_2(this); }
};

}}}


#endif
