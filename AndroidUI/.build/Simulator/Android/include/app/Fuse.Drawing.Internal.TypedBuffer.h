// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_INTERNAL_TYPED_BUFFER_H__
#define __APP_FUSE_DRAWING_INTERNAL_TYPED_BUFFER_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Graphics { struct IndexBuffer; } } }
namespace app { namespace Uno { namespace Graphics { struct VertexBuffer; } } }
namespace app { namespace Uno { struct Buffer; } }

namespace app {
namespace Fuse {
namespace Drawing {
namespace Internal {

struct TypedBuffer;

struct TypedBuffer__uType : ::uClassType
{
};

TypedBuffer__uType* TypedBuffer__typeof();

void TypedBuffer___ObjInit(TypedBuffer* __this);
void TypedBuffer___ObjInit_1(TypedBuffer* __this, int typeSize, int initSize);
void TypedBuffer__CheckGrow(TypedBuffer* __this);
void TypedBuffer__Clear(TypedBuffer* __this);
int TypedBuffer__Count(TypedBuffer* __this);
::app::Uno::Buffer* TypedBuffer__GetBuffer(TypedBuffer* __this);
::app::Uno::Graphics::IndexBuffer* TypedBuffer__GetDeviceIndex(TypedBuffer* __this);
::app::Uno::Graphics::VertexBuffer* TypedBuffer__GetDeviceVertex(TypedBuffer* __this);
void TypedBuffer__Init(TypedBuffer* __this, int initSize);
void TypedBuffer__InitDeviceIndex(TypedBuffer* __this, int bu);
void TypedBuffer__InitDeviceVertex(TypedBuffer* __this, int bu);
TypedBuffer* TypedBuffer__New_1(::uStatic* __this);
TypedBuffer* TypedBuffer__New_2(::uStatic* __this, int typeSize, int initSize);
void TypedBuffer__UpdateDevice(TypedBuffer* __this);

struct TypedBuffer : ::uObject
{
    ::uStrong< ::app::Uno::Buffer*> back;
    int typeSize;
    int capacity;
    int size;
    ::uStrong< ::app::Uno::Graphics::IndexBuffer*> deviceIndex;
    ::uStrong< ::app::Uno::Graphics::VertexBuffer*> deviceVertex;

    void _ObjInit() { TypedBuffer___ObjInit(this); }
    void _ObjInit_1(int typeSize, int initSize) { TypedBuffer___ObjInit_1(this, typeSize, initSize); }
    void CheckGrow() { TypedBuffer__CheckGrow(this); }
    void Clear() { TypedBuffer__Clear(this); }
    int Count() { return TypedBuffer__Count(this); }
    ::app::Uno::Buffer* GetBuffer() { return TypedBuffer__GetBuffer(this); }
    ::app::Uno::Graphics::IndexBuffer* GetDeviceIndex() { return TypedBuffer__GetDeviceIndex(this); }
    ::app::Uno::Graphics::VertexBuffer* GetDeviceVertex() { return TypedBuffer__GetDeviceVertex(this); }
    void Init(int initSize) { TypedBuffer__Init(this, initSize); }
    void InitDeviceIndex(int bu) { TypedBuffer__InitDeviceIndex(this, bu); }
    void InitDeviceVertex(int bu) { TypedBuffer__InitDeviceVertex(this, bu); }
    void UpdateDevice() { TypedBuffer__UpdateDevice(this); }
};

}}}}


#endif
