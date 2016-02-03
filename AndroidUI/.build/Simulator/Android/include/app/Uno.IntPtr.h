// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_INT_PTR_H__
#define __APP_UNO_INT_PTR_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {

extern void* IntPtr__Zero;

struct IntPtr__uType : ::uStructType
{
};

IntPtr__uType* IntPtr__typeof();

bool IntPtr__Equals(void** __this, ::uObject* o);
int IntPtr__GetHashCode(void** __this);
bool IntPtr__op_Equality(::uStatic* __this, void* left_, void* right_);
bool IntPtr__op_Inequality(::uStatic* __this, void* left_, void* right_);
::uString* IntPtr__ToString(void** __this);

struct IntPtr
{
    static bool Equals(void* __this, ::uObject* o) { return IntPtr__Equals(&__this, o); }
    static int GetHashCode(void* __this) { return IntPtr__GetHashCode(&__this); }
    static ::uString* ToString(void* __this) { return IntPtr__ToString(&__this); }
};

}}


#endif
