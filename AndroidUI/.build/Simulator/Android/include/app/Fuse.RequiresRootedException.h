// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_REQUIRES_ROOTED_EXCEPTION_H__
#define __APP_FUSE_REQUIRES_ROOTED_EXCEPTION_H__

#include <app/Uno.Exception.h>
#include <Uno.h>

namespace app {
namespace Fuse {

struct RequiresRootedException;

struct RequiresRootedException__uType : ::app::Uno::Exception__uType
{
};

RequiresRootedException__uType* RequiresRootedException__typeof();

void RequiresRootedException___ObjInit_2(RequiresRootedException* __this);
RequiresRootedException* RequiresRootedException__New_3(::uStatic* __this);

struct RequiresRootedException : ::app::Uno::Exception
{
    void _ObjInit_2() { RequiresRootedException___ObjInit_2(this); }
};

}}


#endif
