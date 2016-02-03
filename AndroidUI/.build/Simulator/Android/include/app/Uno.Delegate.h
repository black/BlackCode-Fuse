// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_DELEGATE_H__
#define __APP_UNO_DELEGATE_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {

struct Delegate__uType : ::uClassType
{
};

Delegate__uType* Delegate__typeof();

void Delegate___ObjInit(::uDelegate* __this);
::uDelegate* Delegate__Combine(::uStatic* __this, ::uDelegate* source_, ::uDelegate* value_);
bool Delegate__Equals(::uDelegate* __this, ::uObject* other);
bool Delegate__EqualsImpl(::uStatic* __this, ::uDelegate* left_, ::uDelegate* right_);
int Delegate__GetHashCode(::uDelegate* __this);
::uDelegate* Delegate__New_1(::uStatic* __this);
bool Delegate__op_Equality(::uStatic* __this, ::uDelegate* left, ::uDelegate* right);
bool Delegate__op_Inequality(::uStatic* __this, ::uDelegate* left, ::uDelegate* right);
::uDelegate* Delegate__Remove(::uStatic* __this, ::uDelegate* source_, ::uDelegate* value_);

struct Delegate
{
    static void _ObjInit(::uDelegate* __this) { Delegate___ObjInit(__this); }
};

}}


#endif
