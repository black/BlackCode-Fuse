// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\Attributes\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_X_U_X_ATTACHED_EVENT_ADDER_ATTRIBUTE_H__
#define __APP_UNO_U_X_U_X_ATTACHED_EVENT_ADDER_ATTRIBUTE_H__

#include <app/Uno.Attribute.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace UX {

struct UXAttachedEventAdderAttribute;

struct UXAttachedEventAdderAttribute__uType : ::app::Uno::Attribute__uType
{
};

UXAttachedEventAdderAttribute__uType* UXAttachedEventAdderAttribute__typeof();

void UXAttachedEventAdderAttribute___ObjInit_1(UXAttachedEventAdderAttribute* __this, ::uString* name);
UXAttachedEventAdderAttribute* UXAttachedEventAdderAttribute__New_1(::uStatic* __this, ::uString* name);

struct UXAttachedEventAdderAttribute : ::app::Uno::Attribute
{
    ::uStrong< ::uString*> Name;

    void _ObjInit_1(::uString* name) { UXAttachedEventAdderAttribute___ObjInit_1(this, name); }
};

}}}


#endif
