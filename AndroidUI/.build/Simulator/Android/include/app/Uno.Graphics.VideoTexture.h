// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_GRAPHICS_VIDEO_TEXTURE_H__
#define __APP_UNO_GRAPHICS_VIDEO_TEXTURE_H__

#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Graphics {

struct VideoTexture;

struct VideoTexture__uType : ::uClassType
{
    ::app::Uno::IDisposable __interface_0;
};

VideoTexture__uType* VideoTexture__typeof();

void VideoTexture___ObjInit(VideoTexture* __this, ::uUInt handle);
void VideoTexture__Dispose(VideoTexture* __this);
::uUInt VideoTexture__get_GLTextureHandle(VideoTexture* __this);
bool VideoTexture__get_IsDisposed(VideoTexture* __this);
VideoTexture* VideoTexture__New_1(::uStatic* __this, ::uUInt handle);
void VideoTexture__set_GLTextureHandle(VideoTexture* __this, ::uUInt value);
void VideoTexture__set_IsDisposed(VideoTexture* __this, bool value);

struct VideoTexture : ::uObject
{
    bool SupportsMipmap;
    ::uUInt _GLTextureHandle;
    bool _IsDisposed;

    void _ObjInit(::uUInt handle) { VideoTexture___ObjInit(this, handle); }
    void Dispose() { VideoTexture__Dispose(this); }
    ::uUInt GLTextureHandle() { return VideoTexture__get_GLTextureHandle(this); }
    bool IsDisposed() { return VideoTexture__get_IsDisposed(this); }
    void GLTextureHandle(::uUInt value) { VideoTexture__set_GLTextureHandle(this, value); }
    void IsDisposed(bool value) { VideoTexture__set_IsDisposed(this, value); }
};

}}}


#endif
