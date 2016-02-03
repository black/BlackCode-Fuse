// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Exceptions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_INVALID_CAST_EXCEPTION_H__
#define __APP_UNO_INVALID_CAST_EXCEPTION_H__

#include <app/Uno.Exception.h>
#include <Uno.h>

namespace app {
namespace Uno {

struct InvalidCastException;

struct InvalidCastException__uType : ::app::Uno::Exception__uType
{
};

InvalidCastException__uType* InvalidCastException__typeof();

void InvalidCastException___ObjInit_2(InvalidCastException* __this);
InvalidCastException* InvalidCastException__New_3(::uStatic* __this);

struct InvalidCastException : ::app::Uno::Exception
{
    void _ObjInit_2() { InvalidCastException___ObjInit_2(this); }
};

}}


#endif
