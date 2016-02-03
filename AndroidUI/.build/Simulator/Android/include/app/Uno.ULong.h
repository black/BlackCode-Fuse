// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_LONG_H__
#define __APP_UNO_U_LONG_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {

struct ULong__uType : ::uStructType
{
};

ULong__uType* ULong__typeof();

bool ULong__Equals(::uULong* __this, ::uObject* o);
int ULong__GetHashCode(::uULong* __this);
::uString* ULong__ToString(::uULong* __this);

struct ULong
{
    static bool Equals(::uULong __this, ::uObject* o) { return ULong__Equals(&__this, o); }
    static int GetHashCode(::uULong __this) { return ULong__GetHashCode(&__this); }
    static ::uString* ToString(::uULong __this) { return ULong__ToString(&__this); }
};

}}


#endif
