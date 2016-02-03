// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_INT_H__
#define __APP_UNO_INT_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {

struct Int__uType : ::uStructType
{
};

Int__uType* Int__typeof();

bool Int__Equals(int* __this, ::uObject* o);
int Int__GetHashCode(int* __this);
int Int__Parse(::uStatic* __this, ::uString* str_);
::uString* Int__ToString(int* __this);
bool Int__TryParse(::uStatic* __this, ::uString* str_, int* res_);

struct Int
{
    static bool Equals(int __this, ::uObject* o) { return Int__Equals(&__this, o); }
    static int GetHashCode(int __this) { return Int__GetHashCode(&__this); }
    static ::uString* ToString(int __this) { return Int__ToString(&__this); }
};

}}


#endif
