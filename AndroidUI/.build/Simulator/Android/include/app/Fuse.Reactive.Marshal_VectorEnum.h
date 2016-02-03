// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_REACTIVE_MARSHAL_VECTOR_ENUM_H__
#define __APP_FUSE_REACTIVE_MARSHAL_VECTOR_ENUM_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Reactive {

struct Marshal_VectorEnum;

struct Marshal_VectorEnum__uType : ::uClassType
{
};

Marshal_VectorEnum__uType* Marshal_VectorEnum__typeof();

void Marshal_VectorEnum___ObjInit(Marshal_VectorEnum* __this, ::uDelegate* callback);
void Marshal_VectorEnum__Enum(Marshal_VectorEnum* __this, ::uArray* values);
Marshal_VectorEnum* Marshal_VectorEnum__New_1(::uStatic* __this, ::uDelegate* callback);

struct Marshal_VectorEnum : ::uObject
{
    ::uStrong< ::uDelegate*> _callback;

    void _ObjInit(::uDelegate* callback) { Marshal_VectorEnum___ObjInit(this, callback); }
    void Enum(::uArray* values) { Marshal_VectorEnum__Enum(this, values); }
};

}}}


#endif
