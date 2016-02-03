// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\IO\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_I_O_I_O_EXCEPTION_H__
#define __APP_UNO_I_O_I_O_EXCEPTION_H__

#include <app/Uno.Exception.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace IO {

struct IOException;

struct IOException__uType : ::app::Uno::Exception__uType
{
};

IOException__uType* IOException__typeof();

void IOException___ObjInit_2(IOException* __this, ::uString* message);
IOException* IOException__New_3(::uStatic* __this, ::uString* message);

struct IOException : ::app::Uno::Exception
{
    void _ObjInit_2(::uString* message) { IOException___ObjInit_2(this, message); }
};

}}}


#endif
