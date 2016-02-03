// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\Attributes\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_X_U_X_STYLE_LIST_ATTRIBUTE_H__
#define __APP_UNO_U_X_U_X_STYLE_LIST_ATTRIBUTE_H__

#include <app/Uno.Attribute.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace UX {

struct UXStyleListAttribute;

struct UXStyleListAttribute__uType : ::app::Uno::Attribute__uType
{
};

UXStyleListAttribute__uType* UXStyleListAttribute__typeof();

void UXStyleListAttribute___ObjInit_1(UXStyleListAttribute* __this, ::uString* addMethod);
UXStyleListAttribute* UXStyleListAttribute__New_1(::uStatic* __this, ::uString* addMethod);

struct UXStyleListAttribute : ::app::Uno::Attribute
{
    ::uStrong< ::uString*> AddMethod;

    void _ObjInit_1(::uString* addMethod) { UXStyleListAttribute___ObjInit_1(this, addMethod); }
};

}}}


#endif
