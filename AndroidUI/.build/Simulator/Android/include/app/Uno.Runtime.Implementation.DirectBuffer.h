// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_RUNTIME_IMPLEMENTATION_DIRECT_BUFFER_H__
#define __APP_UNO_RUNTIME_IMPLEMENTATION_DIRECT_BUFFER_H__

#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {

struct DirectBuffer;

struct DirectBuffer__uType : ::uClassType
{
    ::app::Uno::IDisposable __interface_0;
};

DirectBuffer__uType* DirectBuffer__typeof();

void DirectBuffer___ObjInit(DirectBuffer* __this, void* ptr, ::uLong size, ::uObject* dispose);
DirectBuffer* DirectBuffer__Create(::uStatic* __this, void* ptr, ::uLong size);
DirectBuffer* DirectBuffer__Create_1(::uStatic* __this, void* ptr, ::uLong size, ::uObject* dispose);
void* DirectBuffer__get_Handle(DirectBuffer* __this);
::uLong DirectBuffer__get_Size(DirectBuffer* __this);
DirectBuffer* DirectBuffer__New_1(::uStatic* __this, void* ptr, ::uLong size, ::uObject* dispose);
void DirectBuffer__Uno_IDisposable_Dispose(DirectBuffer* __this);

struct DirectBuffer : ::uObject
{
    void* _ptr;
    ::uLong _size;
    ::uStrong< ::uObject*> _dispose;

    void _ObjInit(void* ptr, ::uLong size, ::uObject* dispose) { DirectBuffer___ObjInit(this, ptr, size, dispose); }
    void* Handle() { return DirectBuffer__get_Handle(this); }
    ::uLong Size() { return DirectBuffer__get_Size(this); }
};

}}}}


#endif
