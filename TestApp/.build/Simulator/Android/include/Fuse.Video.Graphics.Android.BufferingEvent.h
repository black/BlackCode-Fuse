// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Video\0.18.8\Graphics\Android\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.media.MediaPlayerDLROnBufferingUpdateListener.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace media{struct MediaPlayer;}}}}
namespace g{namespace Fuse{namespace Video{namespace Graphics{namespace Android{struct BufferingArgs;}}}}}
namespace g{namespace Fuse{namespace Video{namespace Graphics{namespace Android{struct BufferingEvent;}}}}}

namespace g{
namespace Fuse{
namespace Video{
namespace Graphics{
namespace Android{

// internal sealed extern class BufferingEvent :131
// {
struct BufferingEvent_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::android::media::MediaPlayerDLROnBufferingUpdateListener interface2;
};

BufferingEvent_type* BufferingEvent_typeof();
void BufferingEvent__ctor_4_fn(BufferingEvent* __this, ::g::Android::android::media::MediaPlayer* mediaPlayer, uDelegate* handler);
void BufferingEvent__AddHandler_fn(::g::Android::android::media::MediaPlayer* mediaPlayer, uDelegate* handler, uObject** __retval);
void BufferingEvent__Android_android_media_MediaPlayerDLROnBufferingUpdateListener_onBufferingUpdate_fn(BufferingEvent* __this, ::g::Android::android::media::MediaPlayer* arg0, int* arg1);
void BufferingEvent__New5_fn(::g::Android::android::media::MediaPlayer* mediaPlayer, uDelegate* handler, BufferingEvent** __retval);
void BufferingEvent__Uno_IDisposable_Dispose1_fn(BufferingEvent* __this);

struct BufferingEvent : ::g::Android::java::lang::Object
{
    uStrong<uDelegate*> _handler;
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    uStrong< ::g::Android::android::media::MediaPlayer*> _mediaPlayer;

    void ctor_4(::g::Android::android::media::MediaPlayer* mediaPlayer, uDelegate* handler);
    static uObject* AddHandler(::g::Android::android::media::MediaPlayer* mediaPlayer, uDelegate* handler);
    static BufferingEvent* New5(::g::Android::android::media::MediaPlayer* mediaPlayer, uDelegate* handler);
};
// }

}}}}} // ::g::Fuse::Video::Graphics::Android
