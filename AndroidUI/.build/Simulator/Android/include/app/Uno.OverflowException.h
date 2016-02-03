// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Exceptions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_OVERFLOW_EXCEPTION_H__
#define __APP_UNO_OVERFLOW_EXCEPTION_H__

#include <app/Uno.Exception.h>
#include <Uno.h>

namespace app {
namespace Uno {

struct OverflowException;

struct OverflowException__uType : ::app::Uno::Exception__uType
{
};

OverflowException__uType* OverflowException__typeof();

void OverflowException___ObjInit_2(OverflowException* __this, ::uString* message);
OverflowException* OverflowException__New_3(::uStatic* __this, ::uString* message);

struct OverflowException : ::app::Uno::Exception
{
    void _ObjInit_2(::uString* message) { OverflowException___ObjInit_2(this, message); }
};

}}


#endif
