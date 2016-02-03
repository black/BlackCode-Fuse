// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_FORMAT_STRING_LITERAL_H__
#define __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_FORMAT_STRING_LITERAL_H__

#include <app/Uno.Runtime.Implementation.Internal.FormatStringToken.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {
namespace Internal {

struct FormatStringLiteral;

struct FormatStringLiteral__uType : ::app::Uno::Runtime::Implementation::Internal::FormatStringToken__uType
{
};

FormatStringLiteral__uType* FormatStringLiteral__typeof();

void FormatStringLiteral___ObjInit_1(FormatStringLiteral* __this, ::uString* lexeme);
bool FormatStringLiteral__Equals(FormatStringLiteral* __this, ::uObject* obj);
int FormatStringLiteral__GetHashCode(FormatStringLiteral* __this);
FormatStringLiteral* FormatStringLiteral__New_1(::uStatic* __this, ::uString* lexeme);
::uString* FormatStringLiteral__ToString_1(FormatStringLiteral* __this, ::uArray* objs);

struct FormatStringLiteral : ::app::Uno::Runtime::Implementation::Internal::FormatStringToken
{
    void _ObjInit_1(::uString* lexeme) { FormatStringLiteral___ObjInit_1(this, lexeme); }
};

}}}}}


#endif
