// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\Attributes\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_X_U_X_ATTACHED_PROPERTY_SETTER_ATTRIBUTE_H__
#define __APP_UNO_U_X_U_X_ATTACHED_PROPERTY_SETTER_ATTRIBUTE_H__

#include <app/Uno.Attribute.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace UX {

struct UXAttachedPropertySetterAttribute;

struct UXAttachedPropertySetterAttribute__uType : ::app::Uno::Attribute__uType
{
};

UXAttachedPropertySetterAttribute__uType* UXAttachedPropertySetterAttribute__typeof();

void UXAttachedPropertySetterAttribute___ObjInit_1(UXAttachedPropertySetterAttribute* __this, ::uString* name);
UXAttachedPropertySetterAttribute* UXAttachedPropertySetterAttribute__New_1(::uStatic* __this, ::uString* name);

struct UXAttachedPropertySetterAttribute : ::app::Uno::Attribute
{
    ::uStrong< ::uString*> Name;

    void _ObjInit_1(::uString* name) { UXAttachedPropertySetterAttribute___ObjInit_1(this, name); }
};

}}}


#endif
