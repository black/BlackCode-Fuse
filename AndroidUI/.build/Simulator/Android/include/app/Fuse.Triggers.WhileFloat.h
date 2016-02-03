// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_WHILE_FLOAT_H__
#define __APP_FUSE_TRIGGERS_WHILE_FLOAT_H__

#include <app/Fuse.Triggers.IValue__float.h>
#include <app/Fuse.Triggers.WhileValue__float.h>
#include <app/Uno.Float2.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Triggers {

struct WhileFloat;

struct WhileFloat__uType : ::app::Fuse::Triggers::WhileValue__float__uType
{
};

WhileFloat__uType* WhileFloat__typeof();

void WhileFloat___ObjInit_4(WhileFloat* __this);
float WhileFloat__get_GreaterThan(WhileFloat* __this);
float WhileFloat__get_GreaterThanEqual(WhileFloat* __this);
bool WhileFloat__get_IsOn(WhileFloat* __this);
float WhileFloat__get_LessThan(WhileFloat* __this);
float WhileFloat__get_LessThanEqual(WhileFloat* __this);
float WhileFloat__get_Value_1(WhileFloat* __this);
WhileFloat* WhileFloat__New_1(::uStatic* __this);
void WhileFloat__set_GreaterThan(WhileFloat* __this, float value);
void WhileFloat__set_GreaterThanEqual(WhileFloat* __this, float value);
void WhileFloat__set_LessThan(WhileFloat* __this, float value);
void WhileFloat__set_LessThanEqual(WhileFloat* __this, float value);
void WhileFloat__set_Value_1(WhileFloat* __this, float value);

struct WhileFloat : ::app::Fuse::Triggers::WhileValue__float
{
    ::app::Uno::Float2 _compare;
    int _low;
    int _high;

    void _ObjInit_4() { WhileFloat___ObjInit_4(this); }
    float GreaterThan() { return WhileFloat__get_GreaterThan(this); }
    float GreaterThanEqual() { return WhileFloat__get_GreaterThanEqual(this); }
    float LessThan() { return WhileFloat__get_LessThan(this); }
    float LessThanEqual() { return WhileFloat__get_LessThanEqual(this); }
    float Value_1() { return WhileFloat__get_Value_1(this); }
    void GreaterThan(float value) { WhileFloat__set_GreaterThan(this, value); }
    void GreaterThanEqual(float value) { WhileFloat__set_GreaterThanEqual(this, value); }
    void LessThan(float value) { WhileFloat__set_LessThan(this, value); }
    void LessThanEqual(float value) { WhileFloat__set_LessThanEqual(this, value); }
    void Value_1(float value) { WhileFloat__set_Value_1(this, value); }
};

}}}


#endif
