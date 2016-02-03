// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Compiler\ExportTargetInterop\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COMPILER_EXPORT_TARGET_INTEROP_DOT_NET_TYPE_ATTRIBUTE_H__
#define __APP_UNO_COMPILER_EXPORT_TARGET_INTEROP_DOT_NET_TYPE_ATTRIBUTE_H__

#include <app/Uno.Attribute.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Compiler {
namespace ExportTargetInterop {

struct DotNetTypeAttribute;

struct DotNetTypeAttribute__uType : ::app::Uno::Attribute__uType
{
};

DotNetTypeAttribute__uType* DotNetTypeAttribute__typeof();

void DotNetTypeAttribute___ObjInit_1(DotNetTypeAttribute* __this, ::uString* dotNetName);
::uString* DotNetTypeAttribute__get_DotNetName(DotNetTypeAttribute* __this);
DotNetTypeAttribute* DotNetTypeAttribute__New_1(::uStatic* __this, ::uString* dotNetName);
void DotNetTypeAttribute__set_DotNetName(DotNetTypeAttribute* __this, ::uString* value);

struct DotNetTypeAttribute : ::app::Uno::Attribute
{
    ::uStrong< ::uString*> _DotNetName;

    void _ObjInit_1(::uString* dotNetName) { DotNetTypeAttribute___ObjInit_1(this, dotNetName); }
    ::uString* DotNetName() { return DotNetTypeAttribute__get_DotNetName(this); }
    void DotNetName(::uString* value) { DotNetTypeAttribute__set_DotNetName(this, value); }
};

}}}}


#endif
