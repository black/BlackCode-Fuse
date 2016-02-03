// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\Attributes\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_X_U_X_VALUE_BINDING_ALIAS_ATTRIBUTE_H__
#define __APP_UNO_U_X_U_X_VALUE_BINDING_ALIAS_ATTRIBUTE_H__

#include <app/Uno.Attribute.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace UX {

struct UXValueBindingAliasAttribute;

struct UXValueBindingAliasAttribute__uType : ::app::Uno::Attribute__uType
{
};

UXValueBindingAliasAttribute__uType* UXValueBindingAliasAttribute__typeof();

void UXValueBindingAliasAttribute___ObjInit_1(UXValueBindingAliasAttribute* __this, ::uString* alias);
UXValueBindingAliasAttribute* UXValueBindingAliasAttribute__New_1(::uStatic* __this, ::uString* alias);

struct UXValueBindingAliasAttribute : ::app::Uno::Attribute
{
    ::uStrong< ::uString*> Alias;

    void _ObjInit_1(::uString* alias) { UXValueBindingAliasAttribute___ObjInit_1(this, alias); }
};

}}}


#endif
