// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Compiler\ExportTargetInterop\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COMPILER_EXPORT_TARGET_INTEROP_EXPORT_NAME_ATTRIBUTE_H__
#define __APP_UNO_COMPILER_EXPORT_TARGET_INTEROP_EXPORT_NAME_ATTRIBUTE_H__

#include <app/Uno.Attribute.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Compiler {
namespace ExportTargetInterop {

struct ExportNameAttribute;

struct ExportNameAttribute__uType : ::app::Uno::Attribute__uType
{
};

ExportNameAttribute__uType* ExportNameAttribute__typeof();

void ExportNameAttribute___ObjInit_1(ExportNameAttribute* __this, ::uString* name);
ExportNameAttribute* ExportNameAttribute__New_1(::uStatic* __this, ::uString* name);

struct ExportNameAttribute : ::app::Uno::Attribute
{
    ::uStrong< ::uString*> Name;

    void _ObjInit_1(::uString* name) { ExportNameAttribute___ObjInit_1(this, name); }
};

}}}}


#endif
