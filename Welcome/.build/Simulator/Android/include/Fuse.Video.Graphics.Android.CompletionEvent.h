// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Video\0.19.3\Graphics\Android\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.media.MediaPlayerDLROnCompletionListener.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace media{struct MediaPlayer;}}}}
namespace g{namespace Fuse{namespace Video{namespace Graphics{namespace Android{struct CompletionEvent;}}}}}

namespace g{
namespace Fuse{
namespace Video{
namespace Graphics{
namespace Android{

// internal sealed extern class CompletionEvent :93
// {
struct CompletionEvent_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::android::media::MediaPlayerDLROnCompletionListener interface2;
};

CompletionEvent_type* CompletionEvent_typeof();
void CompletionEvent__ctor_4_fn(CompletionEvent* __this, ::g::Android::android::media::MediaPlayer* mediaPlayer, uDelegate* handler);
void CompletionEvent__AddHandler_fn(::g::Android::android::media::MediaPlayer* mediaPlayer, uDelegate* handler, uObject** __retval);
void CompletionEvent__Android_android_media_MediaPlayerDLROnCompletionListener_onCompletion_fn(CompletionEvent* __this, ::g::Android::android::media::MediaPlayer* arg0);
void CompletionEvent__New5_fn(::g::Android::android::media::MediaPlayer* mediaPlayer, uDelegate* handler, CompletionEvent** __retval);
void CompletionEvent__Uno_IDisposable_Dispose1_fn(CompletionEvent* __this);

struct CompletionEvent : ::g::Android::java::lang::Object
{
    uStrong<uDelegate*> _handler;
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    uStrong< ::g::Android::android::media::MediaPlayer*> _mediaPlayer;

    void ctor_4(::g::Android::android::media::MediaPlayer* mediaPlayer, uDelegate* handler);
    static uObject* AddHandler(::g::Android::android::media::MediaPlayer* mediaPlayer, uDelegate* handler);
    static CompletionEvent* New5(::g::Android::android::media::MediaPlayer* mediaPlayer, uDelegate* handler);
};
// }

}}}}} // ::g::Fuse::Video::Graphics::Android
