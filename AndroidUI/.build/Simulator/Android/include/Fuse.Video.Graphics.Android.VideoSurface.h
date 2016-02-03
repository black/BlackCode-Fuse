// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Video\0.18.8\Graphics\Android\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Android{namespace android{namespace graphics{struct SurfaceTexture;}}}}
namespace g{namespace Android{namespace android{namespace media{struct MediaPlayer;}}}}
namespace g{namespace Android{namespace android{namespace view{struct Surface;}}}}
namespace g{namespace Fuse{namespace Video{namespace Graphics{namespace Android{struct VideoSurface;}}}}}
namespace g{namespace Uno{namespace Graphics{struct VideoTexture;}}}
namespace g{namespace Uno{struct EventArgs;}}
namespace g{namespace Uno{struct Float4x4;}}

namespace g{
namespace Fuse{
namespace Video{
namespace Graphics{
namespace Android{

// internal sealed extern class VideoSurface :644
// {
struct VideoSurface_type : uType
{
    ::g::Uno::IDisposable interface0;
};

VideoSurface_type* VideoSurface_typeof();
void VideoSurface__ctor__fn(VideoSurface* __this, ::g::Android::android::media::MediaPlayer* mediaPlayer);
void VideoSurface__Create_fn(::g::Android::android::media::MediaPlayer* mediaPlayer, VideoSurface** __retval);
void VideoSurface__Dispose_fn(VideoSurface* __this);
void VideoSurface__get_FrameAvailable_fn(VideoSurface* __this, bool* __retval);
void VideoSurface__New1_fn(::g::Android::android::media::MediaPlayer* mediaPlayer, VideoSurface** __retval);
void VideoSurface__OnFrameAvailable_fn(VideoSurface* __this, uObject* sender, ::g::Uno::EventArgs* args);
void VideoSurface__get_Surface_fn(VideoSurface* __this, ::g::Android::android::view::Surface** __retval);
void VideoSurface__get_Transform_fn(VideoSurface* __this, ::g::Uno::Float4x4* __retval);
void VideoSurface__UpdateTexture_fn(VideoSurface* __this);
void VideoSurface__get_VideoTexture_fn(VideoSurface* __this, ::g::Uno::Graphics::VideoTexture** __retval);

struct VideoSurface : uObject
{
    bool _frameAvailable;
    uStrong<uObject*> _frameAvailableListener;
    bool _isDisposed;
    uStrong< ::g::Android::android::media::MediaPlayer*> _mediaPlayer;
    uStrong< ::g::Android::android::view::Surface*> _surface;
    uStrong< ::g::Android::android::graphics::SurfaceTexture*> _surfaceTexture;
    uStrong< ::g::Uno::Graphics::VideoTexture*> _videoTexture;

    void ctor_(::g::Android::android::media::MediaPlayer* mediaPlayer);
    void Dispose();
    bool FrameAvailable();
    void OnFrameAvailable(uObject* sender, ::g::Uno::EventArgs* args);
    ::g::Android::android::view::Surface* Surface();
    ::g::Uno::Float4x4 Transform();
    void UpdateTexture();
    ::g::Uno::Graphics::VideoTexture* VideoTexture();
    static VideoSurface* Create(::g::Android::android::media::MediaPlayer* mediaPlayer);
    static VideoSurface* New1(::g::Android::android::media::MediaPlayer* mediaPlayer);
};
// }

}}}}} // ::g::Fuse::Video::Graphics::Android
