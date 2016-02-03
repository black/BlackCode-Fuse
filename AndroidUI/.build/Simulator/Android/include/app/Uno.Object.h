// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_OBJECT_H__
#define __APP_UNO_OBJECT_H__

#include <Uno.h>

namespace app {
namespace Uno {

bool Object__Equals(::uObject* __this, ::uObject* o_);
bool Object__Equals_1(::uStatic* __this, ::uObject* left, ::uObject* right);
int Object__GetHashCode(::uObject* __this);
::uType* Object__GetType(::uObject* __this);
::uObject* Object__New(::uStatic* __this);
bool Object__ReferenceEquals(::uStatic* __this, ::uObject* left, ::uObject* right);
::uString* Object__ToString(::uObject* __this);

struct Object
{
    static bool Equals(::uObject* __this, ::uObject* o_) { return (((::uClassType*)__this->__obj_type)->__fp_Equals)(__this, o_); }
    static int GetHashCode(::uObject* __this) { return (((::uClassType*)__this->__obj_type)->__fp_GetHashCode)(__this); }
    static ::uType* GetType(::uObject* __this) { return Object__GetType(__this); }
    static ::uString* ToString(::uObject* __this) { return (((::uClassType*)__this->__obj_type)->__fp_ToString)(__this); }
};

}}


#endif
