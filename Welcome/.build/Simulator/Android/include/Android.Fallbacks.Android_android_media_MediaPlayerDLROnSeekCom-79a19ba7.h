// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.media.MediaPlayerDLROnSeekCompleteListener.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace media{struct MediaPlayer;}}}}
namespace g{namespace Android{namespace Fallbacks{struct Android_android_media_MediaPlayerDLROnSeekCompleteListener;}}}

namespace g{
namespace Android{
namespace Fallbacks{

// public sealed extern class Android_android_media_MediaPlayerDLROnSeekCompleteListener :27782
// {
struct Android_android_media_MediaPlayerDLROnSeekCompleteListener_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::android::media::MediaPlayerDLROnSeekCompleteListener interface2;
};

Android_android_media_MediaPlayerDLROnSeekCompleteListener_type* Android_android_media_MediaPlayerDLROnSeekCompleteListener_typeof();
void Android_android_media_MediaPlayerDLROnSeekCompleteListener__onSeekComplete_fn(Android_android_media_MediaPlayerDLROnSeekCompleteListener* __this, ::g::Android::android::media::MediaPlayer* arg0);
void Android_android_media_MediaPlayerDLROnSeekCompleteListener__onSeekComplete_IMPL_9441_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);

struct Android_android_media_MediaPlayerDLROnSeekCompleteListener : ::g::Android::java::lang::Object
{
    static jmethodID onSeekComplete_9441_ID_;
    static jmethodID& onSeekComplete_9441_ID() { return onSeekComplete_9441_ID_; }

    void onSeekComplete(::g::Android::android::media::MediaPlayer* arg0);
    static void onSeekComplete_IMPL_9441(bool arg0_, jobject arg1_, uObject* arg2_);
};
// }

}}} // ::g::Android::Fallbacks
