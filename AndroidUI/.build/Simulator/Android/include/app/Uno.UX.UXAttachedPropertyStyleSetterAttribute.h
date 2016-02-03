// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\Attributes\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_X_U_X_ATTACHED_PROPERTY_STYLE_SETTER_ATTRIBUTE_H__
#define __APP_UNO_U_X_U_X_ATTACHED_PROPERTY_STYLE_SETTER_ATTRIBUTE_H__

#include <app/Uno.Attribute.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace UX {

struct UXAttachedPropertyStyleSetterAttribute;

struct UXAttachedPropertyStyleSetterAttribute__uType : ::app::Uno::Attribute__uType
{
};

UXAttachedPropertyStyleSetterAttribute__uType* UXAttachedPropertyStyleSetterAttribute__typeof();

void UXAttachedPropertyStyleSetterAttribute___ObjInit_1(UXAttachedPropertyStyleSetterAttribute* __this, ::uString* name);
UXAttachedPropertyStyleSetterAttribute* UXAttachedPropertyStyleSetterAttribute__New_1(::uStatic* __this, ::uString* name);

struct UXAttachedPropertyStyleSetterAttribute : ::app::Uno::Attribute
{
    ::uStrong< ::uString*> Name;

    void _ObjInit_1(::uString* name) { UXAttachedPropertyStyleSetterAttribute___ObjInit_1(this, name); }
};

}}}


#endif
