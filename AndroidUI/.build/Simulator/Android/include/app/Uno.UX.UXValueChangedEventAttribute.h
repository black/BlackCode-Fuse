// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\Attributes\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_X_U_X_VALUE_CHANGED_EVENT_ATTRIBUTE_H__
#define __APP_UNO_U_X_U_X_VALUE_CHANGED_EVENT_ATTRIBUTE_H__

#include <app/Uno.Attribute.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace UX {

struct UXValueChangedEventAttribute;

struct UXValueChangedEventAttribute__uType : ::app::Uno::Attribute__uType
{
};

UXValueChangedEventAttribute__uType* UXValueChangedEventAttribute__typeof();

void UXValueChangedEventAttribute___ObjInit_1(UXValueChangedEventAttribute* __this, ::uString* originSetterName, ::uString* eventName);
UXValueChangedEventAttribute* UXValueChangedEventAttribute__New_1(::uStatic* __this, ::uString* originSetterName, ::uString* eventName);

struct UXValueChangedEventAttribute : ::app::Uno::Attribute
{
    ::uStrong< ::uString*> OriginSetterName;
    ::uStrong< ::uString*> EventName;

    void _ObjInit_1(::uString* originSetterName, ::uString* eventName) { UXValueChangedEventAttribute___ObjInit_1(this, originSetterName, eventName); }
};

}}}


#endif
