// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_WHILE_LOADING_H__
#define __APP_FUSE_TRIGGERS_WHILE_LOADING_H__

#include <app/Fuse.Triggers.WhileTrigger.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct PropertyHandle; } }

namespace app {
namespace Fuse {
namespace Triggers {

struct WhileLoading;

extern ::uStaticStrong< ::app::Fuse::PropertyHandle*> WhileLoading___whileLoadingProp;

struct WhileLoading__uType : ::app::Fuse::Triggers::WhileTrigger__uType
{
};

WhileLoading__uType* WhileLoading__typeof();

void WhileLoading___ObjInit_3(WhileLoading* __this);
void WhileLoading___TypeInit(::uStatic* __this);
bool WhileLoading__IsLoading(::uStatic* __this, ::app::Fuse::Node* n);
WhileLoading* WhileLoading__New_1(::uStatic* __this);
void WhileLoading__OnRooted(WhileLoading* __this, ::app::Fuse::Node* n);
void WhileLoading__SetState(::uStatic* __this, ::app::Fuse::Node* n, bool loading);

struct WhileLoading : ::app::Fuse::Triggers::WhileTrigger
{
    void _ObjInit_3() { WhileLoading___ObjInit_3(this); }
};

}}}


#endif
