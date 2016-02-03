// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.media.MediaPlayerDLROnBufferingUpdateListener.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace media{struct MediaPlayer;}}}}
namespace g{namespace Android{namespace Fallbacks{struct Android_android_media_MediaPlayerDLROnBufferingUpdateListener;}}}

namespace g{
namespace Android{
namespace Fallbacks{

// public sealed extern class Android_android_media_MediaPlayerDLROnBufferingUpdateListener :27657
// {
struct Android_android_media_MediaPlayerDLROnBufferingUpdateListener_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::android::media::MediaPlayerDLROnBufferingUpdateListener interface2;
};

Android_android_media_MediaPlayerDLROnBufferingUpdateListener_type* Android_android_media_MediaPlayerDLROnBufferingUpdateListener_typeof();
void Android_android_media_MediaPlayerDLROnBufferingUpdateListener__onBufferingUpdate_fn(Android_android_media_MediaPlayerDLROnBufferingUpdateListener* __this, ::g::Android::android::media::MediaPlayer* arg0, int* arg1);
void Android_android_media_MediaPlayerDLROnBufferingUpdateListener__onBufferingUpdate_IMPL_9436_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_);

struct Android_android_media_MediaPlayerDLROnBufferingUpdateListener : ::g::Android::java::lang::Object
{
    static jmethodID onBufferingUpdate_9436_ID_;
    static jmethodID& onBufferingUpdate_9436_ID() { return onBufferingUpdate_9436_ID_; }

    void onBufferingUpdate(::g::Android::android::media::MediaPlayer* arg0, int arg1);
    static void onBufferingUpdate_IMPL_9436(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_);
};
// }

}}} // ::g::Android::Fallbacks
