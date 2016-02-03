// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_ATTRIBUTE_USAGE_ATTRIBUTE_H__
#define __APP_UNO_ATTRIBUTE_USAGE_ATTRIBUTE_H__

#include <app/Uno.Attribute.h>
#include <Uno.h>

namespace app {
namespace Uno {

struct AttributeUsageAttribute;

struct AttributeUsageAttribute__uType : ::app::Uno::Attribute__uType
{
};

AttributeUsageAttribute__uType* AttributeUsageAttribute__typeof();

void AttributeUsageAttribute___ObjInit_1(AttributeUsageAttribute* __this, int validOn);
AttributeUsageAttribute* AttributeUsageAttribute__New_1(::uStatic* __this, int validOn);

struct AttributeUsageAttribute : ::app::Uno::Attribute
{
    void _ObjInit_1(int validOn) { AttributeUsageAttribute___ObjInit_1(this, validOn); }
};

}}


#endif
