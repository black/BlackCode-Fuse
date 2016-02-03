// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Exceptions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_ARGUMENT_OUT_OF_RANGE_EXCEPTION_H__
#define __APP_UNO_ARGUMENT_OUT_OF_RANGE_EXCEPTION_H__

#include <app/Uno.ArgumentException.h>
#include <Uno.h>

namespace app {
namespace Uno {

struct ArgumentOutOfRangeException;

struct ArgumentOutOfRangeException__uType : ::app::Uno::ArgumentException__uType
{
};

ArgumentOutOfRangeException__uType* ArgumentOutOfRangeException__typeof();

void ArgumentOutOfRangeException___ObjInit_4(ArgumentOutOfRangeException* __this, ::uString* paramName);
void ArgumentOutOfRangeException___ObjInit_5(ArgumentOutOfRangeException* __this, ::uString* message, ::uString* paramName);
ArgumentOutOfRangeException* ArgumentOutOfRangeException__New_5(::uStatic* __this, ::uString* paramName);
ArgumentOutOfRangeException* ArgumentOutOfRangeException__New_6(::uStatic* __this, ::uString* message, ::uString* paramName);

struct ArgumentOutOfRangeException : ::app::Uno::ArgumentException
{
    void _ObjInit_4(::uString* paramName) { ArgumentOutOfRangeException___ObjInit_4(this, paramName); }
    void _ObjInit_5(::uString* message, ::uString* paramName) { ArgumentOutOfRangeException___ObjInit_5(this, message, paramName); }
};

}}


#endif
