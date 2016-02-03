// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Exceptions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_ARGUMENT_EXCEPTION_H__
#define __APP_UNO_ARGUMENT_EXCEPTION_H__

#include <app/Uno.Exception.h>
#include <Uno.h>

namespace app {
namespace Uno {

struct ArgumentException;

struct ArgumentException__uType : ::app::Uno::Exception__uType
{
};

ArgumentException__uType* ArgumentException__typeof();

void ArgumentException___ObjInit_2(ArgumentException* __this, ::uString* message);
void ArgumentException___ObjInit_3(ArgumentException* __this, ::uString* message, ::uString* paramName);
ArgumentException* ArgumentException__New_3(::uStatic* __this, ::uString* message);
ArgumentException* ArgumentException__New_4(::uStatic* __this, ::uString* message, ::uString* paramName);

struct ArgumentException : ::app::Uno::Exception
{
    void _ObjInit_2(::uString* message) { ArgumentException___ObjInit_2(this, message); }
    void _ObjInit_3(::uString* message, ::uString* paramName) { ArgumentException___ObjInit_3(this, message, paramName); }
};

}}


#endif
