// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Exceptions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_FORMAT_EXCEPTION_H__
#define __APP_UNO_FORMAT_EXCEPTION_H__

#include <app/Uno.Exception.h>
#include <Uno.h>

namespace app {
namespace Uno {

struct FormatException;

struct FormatException__uType : ::app::Uno::Exception__uType
{
};

FormatException__uType* FormatException__typeof();

void FormatException___ObjInit_2(FormatException* __this, ::uString* message);
FormatException* FormatException__New_3(::uStatic* __this, ::uString* message);

struct FormatException : ::app::Uno::Exception
{
    void _ObjInit_2(::uString* message) { FormatException___ObjInit_2(this, message); }
};

}}


#endif
