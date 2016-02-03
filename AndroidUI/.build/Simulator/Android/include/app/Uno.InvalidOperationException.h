// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Exceptions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_INVALID_OPERATION_EXCEPTION_H__
#define __APP_UNO_INVALID_OPERATION_EXCEPTION_H__

#include <app/Uno.Exception.h>
#include <Uno.h>

namespace app {
namespace Uno {

struct InvalidOperationException;

struct InvalidOperationException__uType : ::app::Uno::Exception__uType
{
};

InvalidOperationException__uType* InvalidOperationException__typeof();

void InvalidOperationException___ObjInit_2(InvalidOperationException* __this);
void InvalidOperationException___ObjInit_3(InvalidOperationException* __this, ::uString* message);
InvalidOperationException* InvalidOperationException__New_3(::uStatic* __this);
InvalidOperationException* InvalidOperationException__New_4(::uStatic* __this, ::uString* message);

struct InvalidOperationException : ::app::Uno::Exception
{
    void _ObjInit_2() { InvalidOperationException___ObjInit_2(this); }
    void _ObjInit_3(::uString* message) { InvalidOperationException___ObjInit_3(this, message); }
};

}}


#endif
