// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Video\0.19.3\Graphics\Android\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Video.IVideoPlayer.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Android{namespace android{namespace content{namespace res{struct AssetFileDescriptor;}}}}}
namespace g{namespace Android{namespace android{namespace media{struct MediaPlayer;}}}}
namespace g{namespace Fuse{namespace Video{namespace Graphics{namespace Android{struct ErrorEventArgs;}}}}}
namespace g{namespace Fuse{namespace Video{namespace Graphics{namespace Android{struct VideoPlayer;}}}}}
namespace g{namespace Fuse{namespace Video{namespace Graphics{namespace Android{struct VideoSurface;}}}}}
namespace g{namespace Uno{namespace Graphics{struct VideoTexture;}}}
namespace g{namespace Uno{struct EventArgs;}}
namespace g{namespace Uno{struct Int2;}}

namespace g{
namespace Fuse{
namespace Video{
namespace Graphics{
namespace Android{

// internal sealed extern class VideoPlayer :417
// {
struct VideoPlayer_type : uType
{
    ::g::Fuse::Video::IVideoPlayer interface0;
    ::g::Uno::IDisposable interface1;
};

VideoPlayer_type* VideoPlayer_typeof();
void VideoPlayer__ctor__fn(VideoPlayer* __this);
void VideoPlayer__add_Completed_fn(VideoPlayer* __this, uDelegate* value);
void VideoPlayer__remove_Completed_fn(VideoPlayer* __this, uDelegate* value);
void VideoPlayer__Dispose_fn(VideoPlayer* __this);
void VideoPlayer__get_Duration_fn(VideoPlayer* __this, double* __retval);
void VideoPlayer__add_Error_fn(VideoPlayer* __this, uDelegate* value);
void VideoPlayer__remove_Error_fn(VideoPlayer* __this, uDelegate* value);
void VideoPlayer__get_Flip_fn(VideoPlayer* __this, bool* __retval);
void VideoPlayer__add_FrameAvailable_fn(VideoPlayer* __this, uDelegate* value);
void VideoPlayer__remove_FrameAvailable_fn(VideoPlayer* __this, uDelegate* value);
void VideoPlayer__get_IsLooping_fn(VideoPlayer* __this, bool* __retval);
void VideoPlayer__set_IsLooping_fn(VideoPlayer* __this, bool* value);
void VideoPlayer__get_IsPlaying_fn(VideoPlayer* __this, bool* __retval);
void VideoPlayer__LoadAsync_fn(VideoPlayer* __this, ::g::Android::android::content::res::AssetFileDescriptor* afd);
void VideoPlayer__LoadAsync1_fn(VideoPlayer* __this, uString* url);
void VideoPlayer__New1_fn(VideoPlayer** __retval);
void VideoPlayer__OnCompletion_fn(VideoPlayer* __this, uObject* sender, ::g::Uno::EventArgs* args);
void VideoPlayer__OnEnteringBackground_fn(VideoPlayer* __this, int* args);
void VideoPlayer__OnEnteringForeground_fn(VideoPlayer* __this, int* args);
void VideoPlayer__OnError_fn(VideoPlayer* __this, uObject* sender, ::g::Fuse::Video::Graphics::Android::ErrorEventArgs* args, bool* __retval);
void VideoPlayer__OnFrameAvailable_fn(VideoPlayer* __this);
void VideoPlayer__OnPrepared_fn(VideoPlayer* __this, uObject* sender, ::g::Uno::EventArgs* args);
void VideoPlayer__Pause_fn(VideoPlayer* __this);
void VideoPlayer__Play_fn(VideoPlayer* __this);
void VideoPlayer__get_Position_fn(VideoPlayer* __this, double* __retval);
void VideoPlayer__set_Position_fn(VideoPlayer* __this, double* value);
void VideoPlayer__add_Prepared_fn(VideoPlayer* __this, uDelegate* value);
void VideoPlayer__remove_Prepared_fn(VideoPlayer* __this, uDelegate* value);
void VideoPlayer__get_Size_fn(VideoPlayer* __this, ::g::Uno::Int2* __retval);
void VideoPlayer__Stop_fn(VideoPlayer* __this);
void VideoPlayer__Update_fn(VideoPlayer* __this);
void VideoPlayer__get_VideoTexture_fn(VideoPlayer* __this, ::g::Uno::Graphics::VideoTexture** __retval);
void VideoPlayer__get_Volume_fn(VideoPlayer* __this, float* __retval);
void VideoPlayer__set_Volume_fn(VideoPlayer* __this, float* value);

struct VideoPlayer : uObject
{
    uStrong<uObject*> _completionEvent;
    uStrong<uObject*> _errorEvent;
    bool _isDisposed;
    bool _isPaused;
    uStrong< ::g::Android::android::media::MediaPlayer*> _mediaPlayer;
    uStrong<uObject*> _preparedEvent;
    uStrong< ::g::Fuse::Video::Graphics::Android::VideoSurface*> _videoSurface;
    float _volume;
    bool _IsLooping;
    uStrong<uDelegate*> Completed1;
    uStrong<uDelegate*> Error1;
    uStrong<uDelegate*> FrameAvailable1;
    uStrong<uDelegate*> Prepared1;

    void ctor_();
    void add_Completed(uDelegate* value);
    void remove_Completed(uDelegate* value);
    void Dispose();
    double Duration();
    void add_Error(uDelegate* value);
    void remove_Error(uDelegate* value);
    bool Flip();
    void add_FrameAvailable(uDelegate* value);
    void remove_FrameAvailable(uDelegate* value);
    bool IsLooping();
    void IsLooping(bool value);
    bool IsPlaying();
    void LoadAsync(::g::Android::android::content::res::AssetFileDescriptor* afd);
    void LoadAsync1(uString* url);
    void OnCompletion(uObject* sender, ::g::Uno::EventArgs* args);
    void OnEnteringBackground(int args);
    void OnEnteringForeground(int args);
    bool OnError(uObject* sender, ::g::Fuse::Video::Graphics::Android::ErrorEventArgs* args);
    void OnFrameAvailable();
    void OnPrepared(uObject* sender, ::g::Uno::EventArgs* args);
    void Pause();
    void Play();
    double Position();
    void Position(double value);
    void add_Prepared(uDelegate* value);
    void remove_Prepared(uDelegate* value);
    ::g::Uno::Int2 Size();
    void Stop();
    void Update();
    ::g::Uno::Graphics::VideoTexture* VideoTexture();
    float Volume();
    void Volume(float value);
    static VideoPlayer* New1();
};
// }

}}}}} // ::g::Fuse::Video::Graphics::Android
