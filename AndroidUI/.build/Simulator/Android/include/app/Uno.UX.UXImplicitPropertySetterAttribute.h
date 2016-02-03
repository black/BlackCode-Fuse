// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\Attributes\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_X_U_X_IMPLICIT_PROPERTY_SETTER_ATTRIBUTE_H__
#define __APP_UNO_U_X_U_X_IMPLICIT_PROPERTY_SETTER_ATTRIBUTE_H__

#include <app/Uno.Attribute.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace UX {

struct UXImplicitPropertySetterAttribute;

struct UXImplicitPropertySetterAttribute__uType : ::app::Uno::Attribute__uType
{
};

UXImplicitPropertySetterAttribute__uType* UXImplicitPropertySetterAttribute__typeof();

void UXImplicitPropertySetterAttribute___ObjInit_1(UXImplicitPropertySetterAttribute* __this, ::uString* type);
UXImplicitPropertySetterAttribute* UXImplicitPropertySetterAttribute__New_1(::uStatic* __this, ::uString* type);

struct UXImplicitPropertySetterAttribute : ::app::Uno::Attribute
{
    ::uStrong< ::uString*> Type;

    void _ObjInit_1(::uString* type) { UXImplicitPropertySetterAttribute___ObjInit_1(this, type); }
};

}}}


#endif
