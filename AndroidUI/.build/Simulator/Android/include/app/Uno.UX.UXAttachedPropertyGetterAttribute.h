// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\Attributes\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_X_U_X_ATTACHED_PROPERTY_GETTER_ATTRIBUTE_H__
#define __APP_UNO_U_X_U_X_ATTACHED_PROPERTY_GETTER_ATTRIBUTE_H__

#include <app/Uno.Attribute.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace UX {

struct UXAttachedPropertyGetterAttribute;

struct UXAttachedPropertyGetterAttribute__uType : ::app::Uno::Attribute__uType
{
};

UXAttachedPropertyGetterAttribute__uType* UXAttachedPropertyGetterAttribute__typeof();

void UXAttachedPropertyGetterAttribute___ObjInit_1(UXAttachedPropertyGetterAttribute* __this, ::uString* name);
UXAttachedPropertyGetterAttribute* UXAttachedPropertyGetterAttribute__New_1(::uStatic* __this, ::uString* name);

struct UXAttachedPropertyGetterAttribute : ::app::Uno::Attribute
{
    ::uStrong< ::uString*> Name;

    void _ObjInit_1(::uString* name) { UXAttachedPropertyGetterAttribute___ObjInit_1(this, name); }
};

}}}


#endif
