// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Exceptions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_OBJECT_DISPOSED_EXCEPTION_H__
#define __APP_UNO_OBJECT_DISPOSED_EXCEPTION_H__

#include <app/Uno.Exception.h>
#include <Uno.h>

namespace app {
namespace Uno {

struct ObjectDisposedException;

struct ObjectDisposedException__uType : ::app::Uno::Exception__uType
{
};

ObjectDisposedException__uType* ObjectDisposedException__typeof();

void ObjectDisposedException___ObjInit_2(ObjectDisposedException* __this, ::uString* objectName);
ObjectDisposedException* ObjectDisposedException__New_3(::uStatic* __this, ::uString* objectName);

struct ObjectDisposedException : ::app::Uno::Exception
{
    void _ObjInit_2(::uString* objectName) { ObjectDisposedException___ObjInit_2(this, objectName); }
};

}}


#endif
