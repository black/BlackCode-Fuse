// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Video\0.18.8\Graphics\Android\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.media.MediaPlayerDLROnVideoSizeChangedListener.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace media{struct MediaPlayer;}}}}
namespace g{namespace Fuse{namespace Video{namespace Graphics{namespace Android{struct VideoSizeChanged;}}}}}
namespace g{namespace Fuse{namespace Video{namespace Graphics{namespace Android{struct VideoSizeChangedArgs;}}}}}

namespace g{
namespace Fuse{
namespace Video{
namespace Graphics{
namespace Android{

// internal sealed extern class VideoSizeChanged :201
// {
struct VideoSizeChanged_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::android::media::MediaPlayerDLROnVideoSizeChangedListener interface2;
};

VideoSizeChanged_type* VideoSizeChanged_typeof();
void VideoSizeChanged__ctor_4_fn(VideoSizeChanged* __this, ::g::Android::android::media::MediaPlayer* mediaPlayer, uDelegate* handler);
void VideoSizeChanged__AddHandler_fn(::g::Android::android::media::MediaPlayer* mediaPlayer, uDelegate* handler, uObject** __retval);
void VideoSizeChanged__Android_android_media_MediaPlayerDLROnVideoSizeChangedListener_onVideoSizeChanged_fn(VideoSizeChanged* __this, ::g::Android::android::media::MediaPlayer* arg0, int* arg1, int* arg2);
void VideoSizeChanged__New5_fn(::g::Android::android::media::MediaPlayer* mediaPlayer, uDelegate* handler, VideoSizeChanged** __retval);
void VideoSizeChanged__Uno_IDisposable_Dispose1_fn(VideoSizeChanged* __this);

struct VideoSizeChanged : ::g::Android::java::lang::Object
{
    uStrong<uDelegate*> _handler;
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    uStrong< ::g::Android::android::media::MediaPlayer*> _mediaPlayer;

    void ctor_4(::g::Android::android::media::MediaPlayer* mediaPlayer, uDelegate* handler);
    static uObject* AddHandler(::g::Android::android::media::MediaPlayer* mediaPlayer, uDelegate* handler);
    static VideoSizeChanged* New5(::g::Android::android::media::MediaPlayer* mediaPlayer, uDelegate* handler);
};
// }

}}}}} // ::g::Fuse::Video::Graphics::Android
