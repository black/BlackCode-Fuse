// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_WHILE_BOOL_H__
#define __APP_FUSE_TRIGGERS_WHILE_BOOL_H__

#include <app/Fuse.Triggers.IValue__bool.h>
#include <app/Fuse.Triggers.WhileValue__bool.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Triggers {

struct WhileBool;

struct WhileBool__uType : ::app::Fuse::Triggers::WhileValue__bool__uType
{
};

WhileBool__uType* WhileBool__typeof();

void WhileBool___ObjInit_4(WhileBool* __this);
bool WhileBool__get_Value_1(WhileBool* __this);
void WhileBool__set_Value_1(WhileBool* __this, bool value);

struct WhileBool : ::app::Fuse::Triggers::WhileValue__bool
{
    void _ObjInit_4() { WhileBool___ObjInit_4(this); }
    bool Value_1() { return WhileBool__get_Value_1(this); }
    void Value_1(bool value) { WhileBool__set_Value_1(this, value); }
};

}}}


#endif
