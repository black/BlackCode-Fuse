// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\Attributes\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_X_U_X_GLOBAL_RESOURCE_ATTRIBUTE_H__
#define __APP_UNO_U_X_U_X_GLOBAL_RESOURCE_ATTRIBUTE_H__

#include <app/Uno.Attribute.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace UX {

struct UXGlobalResourceAttribute;

struct UXGlobalResourceAttribute__uType : ::app::Uno::Attribute__uType
{
};

UXGlobalResourceAttribute__uType* UXGlobalResourceAttribute__typeof();

void UXGlobalResourceAttribute___ObjInit_1(UXGlobalResourceAttribute* __this);
void UXGlobalResourceAttribute___ObjInit_2(UXGlobalResourceAttribute* __this, ::uString* alias);
UXGlobalResourceAttribute* UXGlobalResourceAttribute__New_1(::uStatic* __this);
UXGlobalResourceAttribute* UXGlobalResourceAttribute__New_2(::uStatic* __this, ::uString* alias);

struct UXGlobalResourceAttribute : ::app::Uno::Attribute
{
    ::uStrong< ::uString*> Alias;

    void _ObjInit_1() { UXGlobalResourceAttribute___ObjInit_1(this); }
    void _ObjInit_2(::uString* alias) { UXGlobalResourceAttribute___ObjInit_2(this, alias); }
};

}}}


#endif
