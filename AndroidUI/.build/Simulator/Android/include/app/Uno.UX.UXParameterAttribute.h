// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\Attributes\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_X_U_X_PARAMETER_ATTRIBUTE_H__
#define __APP_UNO_U_X_U_X_PARAMETER_ATTRIBUTE_H__

#include <app/Uno.Attribute.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace UX {

struct UXParameterAttribute;

struct UXParameterAttribute__uType : ::app::Uno::Attribute__uType
{
};

UXParameterAttribute__uType* UXParameterAttribute__typeof();

void UXParameterAttribute___ObjInit_1(UXParameterAttribute* __this, ::uString* name);
UXParameterAttribute* UXParameterAttribute__New_1(::uStatic* __this, ::uString* name);

struct UXParameterAttribute : ::app::Uno::Attribute
{
    ::uStrong< ::uString*> Name;

    void _ObjInit_1(::uString* name) { UXParameterAttribute___ObjInit_1(this, name); }
};

}}}


#endif
