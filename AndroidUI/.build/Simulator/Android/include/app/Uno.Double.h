// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_DOUBLE_H__
#define __APP_UNO_DOUBLE_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {

struct Double__uType : ::uStructType
{
};

Double__uType* Double__typeof();

bool Double__Equals(double* __this, ::uObject* o);
int Double__GetHashCode(double* __this);
double Double__Parse(::uStatic* __this, ::uString* str_);
::uString* Double__ToString(double* __this);
bool Double__TryParse(::uStatic* __this, ::uString* str_, double* res_);

struct Double
{
    static bool Equals(double __this, ::uObject* o) { return Double__Equals(&__this, o); }
    static int GetHashCode(double __this) { return Double__GetHashCode(&__this); }
    static ::uString* ToString(double __this) { return Double__ToString(&__this); }
};

}}


#endif
