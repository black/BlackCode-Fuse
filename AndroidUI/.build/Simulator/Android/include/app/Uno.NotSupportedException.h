// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Exceptions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_NOT_SUPPORTED_EXCEPTION_H__
#define __APP_UNO_NOT_SUPPORTED_EXCEPTION_H__

#include <app/Uno.Exception.h>
#include <Uno.h>

namespace app {
namespace Uno {

struct NotSupportedException;

struct NotSupportedException__uType : ::app::Uno::Exception__uType
{
};

NotSupportedException__uType* NotSupportedException__typeof();

void NotSupportedException___ObjInit_2(NotSupportedException* __this);
void NotSupportedException___ObjInit_3(NotSupportedException* __this, ::uString* message);
NotSupportedException* NotSupportedException__New_3(::uStatic* __this);
NotSupportedException* NotSupportedException__New_4(::uStatic* __this, ::uString* message);

struct NotSupportedException : ::app::Uno::Exception
{
    void _ObjInit_2() { NotSupportedException___ObjInit_2(this); }
    void _ObjInit_3(::uString* message) { NotSupportedException___ObjInit_3(this, message); }
};

}}


#endif
