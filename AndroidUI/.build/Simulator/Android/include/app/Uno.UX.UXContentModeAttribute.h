// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\Attributes\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_X_U_X_CONTENT_MODE_ATTRIBUTE_H__
#define __APP_UNO_U_X_U_X_CONTENT_MODE_ATTRIBUTE_H__

#include <app/Uno.Attribute.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace UX {

struct UXContentModeAttribute;

struct UXContentModeAttribute__uType : ::app::Uno::Attribute__uType
{
};

UXContentModeAttribute__uType* UXContentModeAttribute__typeof();

void UXContentModeAttribute___ObjInit_1(UXContentModeAttribute* __this, ::uString* mode);
UXContentModeAttribute* UXContentModeAttribute__New_1(::uStatic* __this, ::uString* mode);

struct UXContentModeAttribute : ::app::Uno::Attribute
{
    ::uStrong< ::uString*> Mode;

    void _ObjInit_1(::uString* mode) { UXContentModeAttribute___ObjInit_1(this, mode); }
};

}}}


#endif
