// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_FORMAT_STRING_TOKEN_H__
#define __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_FORMAT_STRING_TOKEN_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {
namespace Internal {

struct FormatStringToken;

struct FormatStringToken__uType : ::uClassType
{
    ::uString*(*__fp_ToString_1)(FormatStringToken*, ::uArray*);
};

FormatStringToken__uType* FormatStringToken__typeof();

void FormatStringToken___ObjInit(FormatStringToken* __this, ::uString* lexeme);
::uString* FormatStringToken__get_Lexeme(FormatStringToken* __this);
void FormatStringToken__set_Lexeme(FormatStringToken* __this, ::uString* value);

struct FormatStringToken : ::uObject
{
    ::uStrong< ::uString*> _Lexeme;

    void _ObjInit(::uString* lexeme) { FormatStringToken___ObjInit(this, lexeme); }
    ::uString* Lexeme() { return FormatStringToken__get_Lexeme(this); }
    void Lexeme(::uString* value) { FormatStringToken__set_Lexeme(this, value); }
    ::uString* ToString_1(::uArray* items) { return (((FormatStringToken__uType*)this->__obj_type)->__fp_ToString_1)(this, items); }
};

}}}}}


#endif
