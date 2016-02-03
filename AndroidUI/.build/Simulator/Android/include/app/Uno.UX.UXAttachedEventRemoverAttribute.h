// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\Attributes\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_X_U_X_ATTACHED_EVENT_REMOVER_ATTRIBUTE_H__
#define __APP_UNO_U_X_U_X_ATTACHED_EVENT_REMOVER_ATTRIBUTE_H__

#include <app/Uno.Attribute.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace UX {

struct UXAttachedEventRemoverAttribute;

struct UXAttachedEventRemoverAttribute__uType : ::app::Uno::Attribute__uType
{
};

UXAttachedEventRemoverAttribute__uType* UXAttachedEventRemoverAttribute__typeof();

void UXAttachedEventRemoverAttribute___ObjInit_1(UXAttachedEventRemoverAttribute* __this, ::uString* name);
UXAttachedEventRemoverAttribute* UXAttachedEventRemoverAttribute__New_1(::uStatic* __this, ::uString* name);

struct UXAttachedEventRemoverAttribute : ::app::Uno::Attribute
{
    ::uStrong< ::uString*> Name;

    void _ObjInit_1(::uString* name) { UXAttachedEventRemoverAttribute___ObjInit_1(this, name); }
};

}}}


#endif
