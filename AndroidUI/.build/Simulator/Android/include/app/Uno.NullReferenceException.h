// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Exceptions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_NULL_REFERENCE_EXCEPTION_H__
#define __APP_UNO_NULL_REFERENCE_EXCEPTION_H__

#include <app/Uno.Exception.h>
#include <Uno.h>

namespace app {
namespace Uno {

struct NullReferenceException;

struct NullReferenceException__uType : ::app::Uno::Exception__uType
{
};

NullReferenceException__uType* NullReferenceException__typeof();

void NullReferenceException___ObjInit_2(NullReferenceException* __this);
NullReferenceException* NullReferenceException__New_3(::uStatic* __this);

struct NullReferenceException : ::app::Uno::Exception
{
    void _ObjInit_2() { NullReferenceException___ObjInit_2(this); }
};

}}


#endif
