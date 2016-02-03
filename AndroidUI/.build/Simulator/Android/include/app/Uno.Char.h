// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_CHAR_H__
#define __APP_UNO_CHAR_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {

struct Char__uType : ::uStructType
{
};

Char__uType* Char__typeof();

bool Char__Equals(::uChar* __this, ::uObject* o);
int Char__GetHashCode(::uChar* __this);
bool Char__IsDigit(::uStatic* __this, ::uChar c);
bool Char__IsLetter(::uStatic* __this, ::uChar c);
bool Char__IsLower(::uStatic* __this, ::uChar c);
bool Char__IsUpper(::uStatic* __this, ::uChar c);
bool Char__IsWhiteSpace(::uStatic* __this, ::uChar c);
::uChar Char__ToLower(::uStatic* __this, ::uChar c_);
::uString* Char__ToString(::uChar* __this);
::uChar Char__ToUpper(::uStatic* __this, ::uChar c_);

struct Char
{
    static bool Equals(::uChar __this, ::uObject* o) { return Char__Equals(&__this, o); }
    static int GetHashCode(::uChar __this) { return Char__GetHashCode(&__this); }
    static ::uString* ToString(::uChar __this) { return Char__ToString(&__this); }
};

}}


#endif
