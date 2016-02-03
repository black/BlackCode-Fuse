// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Video\0.18.8\Graphics\Android\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.media.MediaPlayerDLROnPreparedListener.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace media{struct MediaPlayer;}}}}
namespace g{namespace Fuse{namespace Video{namespace Graphics{namespace Android{struct PreparedEvent;}}}}}

namespace g{
namespace Fuse{
namespace Video{
namespace Graphics{
namespace Android{

// internal sealed extern class PreparedEvent :61
// {
struct PreparedEvent_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::android::media::MediaPlayerDLROnPreparedListener interface2;
};

PreparedEvent_type* PreparedEvent_typeof();
void PreparedEvent__ctor_4_fn(PreparedEvent* __this, ::g::Android::android::media::MediaPlayer* mediaPlayer, uDelegate* handler);
void PreparedEvent__AddHandler_fn(::g::Android::android::media::MediaPlayer* mediaPlayer, uDelegate* handler, uObject** __retval);
void PreparedEvent__Android_android_media_MediaPlayerDLROnPreparedListener_onPrepared_fn(PreparedEvent* __this, ::g::Android::android::media::MediaPlayer* arg0);
void PreparedEvent__New5_fn(::g::Android::android::media::MediaPlayer* mediaPlayer, uDelegate* handler, PreparedEvent** __retval);
void PreparedEvent__Uno_IDisposable_Dispose1_fn(PreparedEvent* __this);

struct PreparedEvent : ::g::Android::java::lang::Object
{
    uStrong<uDelegate*> _handler;
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    uStrong< ::g::Android::android::media::MediaPlayer*> _mediaPlayer;

    void ctor_4(::g::Android::android::media::MediaPlayer* mediaPlayer, uDelegate* handler);
    static uObject* AddHandler(::g::Android::android::media::MediaPlayer* mediaPlayer, uDelegate* handler);
    static PreparedEvent* New5(::g::Android::android::media::MediaPlayer* mediaPlayer, uDelegate* handler);
};
// }

}}}}} // ::g::Fuse::Video::Graphics::Android
