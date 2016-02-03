// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Compiler\ExportTargetInterop\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COMPILER_EXPORT_TARGET_INTEROP_NATIVE_CLASS_ATTRIBUTE_H__
#define __APP_UNO_COMPILER_EXPORT_TARGET_INTEROP_NATIVE_CLASS_ATTRIBUTE_H__

#include <app/Uno.Attribute.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Compiler {
namespace ExportTargetInterop {

struct NativeClassAttribute;

struct NativeClassAttribute__uType : ::app::Uno::Attribute__uType
{
};

NativeClassAttribute__uType* NativeClassAttribute__typeof();

void NativeClassAttribute___ObjInit_1(NativeClassAttribute* __this, ::uString* language, ::uString* className);
::uString* NativeClassAttribute__get_ClassName(NativeClassAttribute* __this);
::uString* NativeClassAttribute__get_Language(NativeClassAttribute* __this);
NativeClassAttribute* NativeClassAttribute__New_1(::uStatic* __this, ::uString* language, ::uString* className);
void NativeClassAttribute__set_ClassName(NativeClassAttribute* __this, ::uString* value);
void NativeClassAttribute__set_Language(NativeClassAttribute* __this, ::uString* value);

struct NativeClassAttribute : ::app::Uno::Attribute
{
    ::uStrong< ::uString*> _Language;
    ::uStrong< ::uString*> _ClassName;

    void _ObjInit_1(::uString* language, ::uString* className) { NativeClassAttribute___ObjInit_1(this, language, className); }
    ::uString* ClassName() { return NativeClassAttribute__get_ClassName(this); }
    ::uString* Language() { return NativeClassAttribute__get_Language(this); }
    void ClassName(::uString* value) { NativeClassAttribute__set_ClassName(this, value); }
    void Language(::uString* value) { NativeClassAttribute__set_Language(this, value); }
};

}}}}


#endif
