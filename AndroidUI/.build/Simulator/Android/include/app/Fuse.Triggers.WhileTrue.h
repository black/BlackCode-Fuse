// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_WHILE_TRUE_H__
#define __APP_FUSE_TRIGGERS_WHILE_TRUE_H__

#include <app/Fuse.Triggers.IValue__bool.h>
#include <app/Fuse.Triggers.WhileBool.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Triggers {

struct WhileTrue;

struct WhileTrue__uType : ::app::Fuse::Triggers::WhileBool__uType
{
};

WhileTrue__uType* WhileTrue__typeof();

void WhileTrue___ObjInit_5(WhileTrue* __this);
bool WhileTrue__get_IsOn(WhileTrue* __this);
WhileTrue* WhileTrue__New_1(::uStatic* __this);

struct WhileTrue : ::app::Fuse::Triggers::WhileBool
{
    void _ObjInit_5() { WhileTrue___ObjInit_5(this); }
};

}}}


#endif
