// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Video\0.18.8\Graphics\Android\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.media.MediaPlayerDLROnErrorListener.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace media{struct MediaPlayer;}}}}
namespace g{namespace Fuse{namespace Video{namespace Graphics{namespace Android{struct ErrorEvent;}}}}}

namespace g{
namespace Fuse{
namespace Video{
namespace Graphics{
namespace Android{

// internal sealed extern class ErrorEvent :288
// {
struct ErrorEvent_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::android::media::MediaPlayerDLROnErrorListener interface2;
};

ErrorEvent_type* ErrorEvent_typeof();
void ErrorEvent__ctor_4_fn(ErrorEvent* __this, ::g::Android::android::media::MediaPlayer* mediaPlayer, uDelegate* handler);
void ErrorEvent__AddHandler_fn(::g::Android::android::media::MediaPlayer* mediaPlayer, uDelegate* handler, uObject** __retval);
void ErrorEvent__Android_android_media_MediaPlayerDLROnErrorListener_onError_fn(ErrorEvent* __this, ::g::Android::android::media::MediaPlayer* arg0, int* arg1, int* arg2, bool* __retval);
void ErrorEvent__New5_fn(::g::Android::android::media::MediaPlayer* mediaPlayer, uDelegate* handler, ErrorEvent** __retval);
void ErrorEvent__Uno_IDisposable_Dispose1_fn(ErrorEvent* __this);

struct ErrorEvent : ::g::Android::java::lang::Object
{
    uStrong<uDelegate*> _handler;
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    uStrong< ::g::Android::android::media::MediaPlayer*> _mediaPlayer;

    void ctor_4(::g::Android::android::media::MediaPlayer* mediaPlayer, uDelegate* handler);
    static uObject* AddHandler(::g::Android::android::media::MediaPlayer* mediaPlayer, uDelegate* handler);
    static ErrorEvent* New5(::g::Android::android::media::MediaPlayer* mediaPlayer, uDelegate* handler);
};
// }

}}}}} // ::g::Fuse::Video::Graphics::Android
