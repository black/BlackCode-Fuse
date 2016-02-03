// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.media.MediaPlayerDLROnPreparedListener.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace media{struct MediaPlayer;}}}}
namespace g{namespace Android{namespace Fallbacks{struct Android_android_media_MediaPlayerDLROnPreparedListener;}}}

namespace g{
namespace Android{
namespace Fallbacks{

// public sealed extern class Android_android_media_MediaPlayerDLROnPreparedListener :27757
// {
struct Android_android_media_MediaPlayerDLROnPreparedListener_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::android::media::MediaPlayerDLROnPreparedListener interface2;
};

Android_android_media_MediaPlayerDLROnPreparedListener_type* Android_android_media_MediaPlayerDLROnPreparedListener_typeof();
void Android_android_media_MediaPlayerDLROnPreparedListener__onPrepared_fn(Android_android_media_MediaPlayerDLROnPreparedListener* __this, ::g::Android::android::media::MediaPlayer* arg0);
void Android_android_media_MediaPlayerDLROnPreparedListener__onPrepared_IMPL_9440_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);

struct Android_android_media_MediaPlayerDLROnPreparedListener : ::g::Android::java::lang::Object
{
    static jmethodID onPrepared_9440_ID_;
    static jmethodID& onPrepared_9440_ID() { return onPrepared_9440_ID_; }

    void onPrepared(::g::Android::android::media::MediaPlayer* arg0);
    static void onPrepared_IMPL_9440(bool arg0_, jobject arg1_, uObject* arg2_);
};
// }

}}} // ::g::Android::Fallbacks
