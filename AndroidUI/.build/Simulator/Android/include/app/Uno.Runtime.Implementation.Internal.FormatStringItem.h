// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_FORMAT_STRING_ITEM_H__
#define __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_FORMAT_STRING_ITEM_H__

#include <app/Uno.Runtime.Implementation.Internal.FormatStringToken.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {
namespace Internal {

struct FormatStringItem;

struct FormatStringItem__uType : ::app::Uno::Runtime::Implementation::Internal::FormatStringToken__uType
{
};

FormatStringItem__uType* FormatStringItem__typeof();

void FormatStringItem___ObjInit_1(FormatStringItem* __this, ::uString* lexeme);
bool FormatStringItem__Equals(FormatStringItem* __this, ::uObject* obj);
::uString* FormatStringItem__get_FormatString(FormatStringItem* __this);
int FormatStringItem__get_Number(FormatStringItem* __this);
int FormatStringItem__GetHashCode(FormatStringItem* __this);
FormatStringItem* FormatStringItem__New_1(::uStatic* __this, ::uString* lexeme);
::uString* FormatStringItem__ToString_1(FormatStringItem* __this, ::uArray* objs);

struct FormatStringItem : ::app::Uno::Runtime::Implementation::Internal::FormatStringToken
{
    void _ObjInit_1(::uString* lexeme) { FormatStringItem___ObjInit_1(this, lexeme); }
    ::uString* FormatString() { return FormatStringItem__get_FormatString(this); }
    int Number() { return FormatStringItem__get_Number(this); }
};

}}}}}


#endif
