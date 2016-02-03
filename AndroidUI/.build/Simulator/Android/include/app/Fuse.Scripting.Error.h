// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Scripting\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_SCRIPTING_ERROR_H__
#define __APP_FUSE_SCRIPTING_ERROR_H__

#include <app/Uno.Exception.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Scripting {

struct Error;

struct Error__uType : ::app::Uno::Exception__uType
{
};

Error__uType* Error__typeof();

void Error___ObjInit_2(Error* __this, ::uString* message);
Error* Error__New_3(::uStatic* __this, ::uString* message);

struct Error : ::app::Uno::Exception
{
    void _ObjInit_2(::uString* message) { Error___ObjInit_2(this, message); }
};

}}}


#endif
