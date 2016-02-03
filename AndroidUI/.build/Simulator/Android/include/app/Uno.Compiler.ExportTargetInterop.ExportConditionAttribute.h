// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Compiler\ExportTargetInterop\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COMPILER_EXPORT_TARGET_INTEROP_EXPORT_CONDITION_ATTRIBUTE_H__
#define __APP_UNO_COMPILER_EXPORT_TARGET_INTEROP_EXPORT_CONDITION_ATTRIBUTE_H__

#include <app/Uno.Attribute.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Compiler {
namespace ExportTargetInterop {

struct ExportConditionAttribute;

struct ExportConditionAttribute__uType : ::app::Uno::Attribute__uType
{
};

ExportConditionAttribute__uType* ExportConditionAttribute__typeof();

void ExportConditionAttribute___ObjInit_1(ExportConditionAttribute* __this, ::uString* condition);
ExportConditionAttribute* ExportConditionAttribute__New_1(::uStatic* __this, ::uString* condition);

struct ExportConditionAttribute : ::app::Uno::Attribute
{
    ::uStrong< ::uString*> Condition;

    void _ObjInit_1(::uString* condition) { ExportConditionAttribute___ObjInit_1(this, condition); }
};

}}}}


#endif
