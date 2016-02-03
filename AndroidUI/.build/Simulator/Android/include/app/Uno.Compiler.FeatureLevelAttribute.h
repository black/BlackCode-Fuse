// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Compiler\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COMPILER_FEATURE_LEVEL_ATTRIBUTE_H__
#define __APP_UNO_COMPILER_FEATURE_LEVEL_ATTRIBUTE_H__

#include <app/Uno.Attribute.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Compiler {

struct FeatureLevelAttribute;

struct FeatureLevelAttribute__uType : ::app::Uno::Attribute__uType
{
};

FeatureLevelAttribute__uType* FeatureLevelAttribute__typeof();

void FeatureLevelAttribute___ObjInit_1(FeatureLevelAttribute* __this, int value);
int FeatureLevelAttribute__get_Value(FeatureLevelAttribute* __this);
FeatureLevelAttribute* FeatureLevelAttribute__New_1(::uStatic* __this, int value);
void FeatureLevelAttribute__set_Value(FeatureLevelAttribute* __this, int value);

struct FeatureLevelAttribute : ::app::Uno::Attribute
{
    int _Value;

    void _ObjInit_1(int value) { FeatureLevelAttribute___ObjInit_1(this, value); }
    int Value() { return FeatureLevelAttribute__get_Value(this); }
    void Value(int value) { FeatureLevelAttribute__set_Value(this, value); }
};

}}}


#endif
