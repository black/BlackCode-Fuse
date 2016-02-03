// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Exceptions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_NOT_IMPLEMENTED_EXCEPTION_H__
#define __APP_UNO_NOT_IMPLEMENTED_EXCEPTION_H__

#include <app/Uno.Exception.h>
#include <Uno.h>

namespace app {
namespace Uno {

struct NotImplementedException;

struct NotImplementedException__uType : ::app::Uno::Exception__uType
{
};

NotImplementedException__uType* NotImplementedException__typeof();

void NotImplementedException___ObjInit_2(NotImplementedException* __this);
NotImplementedException* NotImplementedException__New_3(::uStatic* __this);

struct NotImplementedException : ::app::Uno::Exception
{
    void _ObjInit_2() { NotImplementedException___ObjInit_2(this); }
};

}}


#endif
