// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Video\0.19.3\Graphics\Android\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.media.MediaPlayerDLROnSeekCompleteListener.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace media{struct MediaPlayer;}}}}
namespace g{namespace Fuse{namespace Video{namespace Graphics{namespace Android{struct SeekCompleteEvent;}}}}}

namespace g{
namespace Fuse{
namespace Video{
namespace Graphics{
namespace Android{

// internal sealed extern class SeekCompleteEvent :163
// {
struct SeekCompleteEvent_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::android::media::MediaPlayerDLROnSeekCompleteListener interface2;
};

SeekCompleteEvent_type* SeekCompleteEvent_typeof();
void SeekCompleteEvent__ctor_4_fn(SeekCompleteEvent* __this, ::g::Android::android::media::MediaPlayer* mediaPlayer, uDelegate* handler);
void SeekCompleteEvent__AddHandler_fn(::g::Android::android::media::MediaPlayer* mediaPlayer, uDelegate* handler, uObject** __retval);
void SeekCompleteEvent__Android_android_media_MediaPlayerDLROnSeekCompleteListener_onSeekComplete_fn(SeekCompleteEvent* __this, ::g::Android::android::media::MediaPlayer* arg0);
void SeekCompleteEvent__New5_fn(::g::Android::android::media::MediaPlayer* mediaPlayer, uDelegate* handler, SeekCompleteEvent** __retval);
void SeekCompleteEvent__Uno_IDisposable_Dispose1_fn(SeekCompleteEvent* __this);

struct SeekCompleteEvent : ::g::Android::java::lang::Object
{
    uStrong<uDelegate*> _handler;
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    uStrong< ::g::Android::android::media::MediaPlayer*> _mediaPlayer;

    void ctor_4(::g::Android::android::media::MediaPlayer* mediaPlayer, uDelegate* handler);
    static uObject* AddHandler(::g::Android::android::media::MediaPlayer* mediaPlayer, uDelegate* handler);
    static SeekCompleteEvent* New5(::g::Android::android::media::MediaPlayer* mediaPlayer, uDelegate* handler);
};
// }

}}}}} // ::g::Fuse::Video::Graphics::Android
