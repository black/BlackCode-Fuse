// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Compiler\ExportTargetInterop\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COMPILER_EXPORT_TARGET_INTEROP_GLSL_INTRINSIC_ATTRIBUTE_H__
#define __APP_UNO_COMPILER_EXPORT_TARGET_INTEROP_GLSL_INTRINSIC_ATTRIBUTE_H__

#include <app/Uno.Attribute.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Compiler {
namespace ExportTargetInterop {

struct GlslIntrinsicAttribute;

struct GlslIntrinsicAttribute__uType : ::app::Uno::Attribute__uType
{
};

GlslIntrinsicAttribute__uType* GlslIntrinsicAttribute__typeof();

void GlslIntrinsicAttribute___ObjInit_1(GlslIntrinsicAttribute* __this, ::uString* name);
GlslIntrinsicAttribute* GlslIntrinsicAttribute__New_1(::uStatic* __this, ::uString* name);

struct GlslIntrinsicAttribute : ::app::Uno::Attribute
{
    ::uStrong< ::uString*> Name;

    void _ObjInit_1(::uString* name) { GlslIntrinsicAttribute___ObjInit_1(this, name); }
};

}}}}


#endif
