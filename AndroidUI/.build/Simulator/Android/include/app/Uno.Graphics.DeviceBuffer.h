// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_GRAPHICS_DEVICE_BUFFER_H__
#define __APP_UNO_GRAPHICS_DEVICE_BUFFER_H__

#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { struct Buffer; } }

namespace app {
namespace Uno {
namespace Graphics {

struct DeviceBuffer;

struct DeviceBuffer__uType : ::uClassType
{
    ::app::Uno::IDisposable __interface_0;
};

DeviceBuffer__uType* DeviceBuffer__typeof();

void DeviceBuffer___ObjInit(DeviceBuffer* __this, int usage);
void DeviceBuffer__Dispose(DeviceBuffer* __this);
::uUInt DeviceBuffer__get_GLBufferHandle(DeviceBuffer* __this);
int DeviceBuffer__get_GLBufferTarget(DeviceBuffer* __this);
bool DeviceBuffer__get_IsDisposed(DeviceBuffer* __this);
int DeviceBuffer__get_SizeInBytes(DeviceBuffer* __this);
int DeviceBuffer__get_Usage(DeviceBuffer* __this);
void DeviceBuffer__GLInit(DeviceBuffer* __this, int target);
void DeviceBuffer__GLInit_1(DeviceBuffer* __this, int target, ::app::Uno::Buffer* data);
void DeviceBuffer__GLInit_2(DeviceBuffer* __this, int target, int sizeInBytes);
void DeviceBuffer__set_GLBufferHandle(DeviceBuffer* __this, ::uUInt value);
void DeviceBuffer__set_GLBufferTarget(DeviceBuffer* __this, int value);
void DeviceBuffer__set_IsDisposed(DeviceBuffer* __this, bool value);
void DeviceBuffer__set_SizeInBytes(DeviceBuffer* __this, int value);
void DeviceBuffer__set_Usage(DeviceBuffer* __this, int value);
void DeviceBuffer__Update(DeviceBuffer* __this, ::app::Uno::Buffer* data);

struct DeviceBuffer : ::uObject
{
    int _SizeInBytes;
    int _Usage;
    int _GLBufferTarget;
    ::uUInt _GLBufferHandle;
    bool _IsDisposed;

    void _ObjInit(int usage) { DeviceBuffer___ObjInit(this, usage); }
    void Dispose() { DeviceBuffer__Dispose(this); }
    ::uUInt GLBufferHandle() { return DeviceBuffer__get_GLBufferHandle(this); }
    int GLBufferTarget() { return DeviceBuffer__get_GLBufferTarget(this); }
    bool IsDisposed() { return DeviceBuffer__get_IsDisposed(this); }
    int SizeInBytes() { return DeviceBuffer__get_SizeInBytes(this); }
    int Usage() { return DeviceBuffer__get_Usage(this); }
    void GLInit(int target) { DeviceBuffer__GLInit(this, target); }
    void GLInit_1(int target, ::app::Uno::Buffer* data) { DeviceBuffer__GLInit_1(this, target, data); }
    void GLInit_2(int target, int sizeInBytes) { DeviceBuffer__GLInit_2(this, target, sizeInBytes); }
    void GLBufferHandle(::uUInt value) { DeviceBuffer__set_GLBufferHandle(this, value); }
    void GLBufferTarget(int value) { DeviceBuffer__set_GLBufferTarget(this, value); }
    void IsDisposed(bool value) { DeviceBuffer__set_IsDisposed(this, value); }
    void SizeInBytes(int value) { DeviceBuffer__set_SizeInBytes(this, value); }
    void Usage(int value) { DeviceBuffer__set_Usage(this, value); }
    void Update(::app::Uno::Buffer* data) { DeviceBuffer__Update(this, data); }
};

}}}


#endif
