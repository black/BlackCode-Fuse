// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.media.MediaPlayerDLROnErrorListener.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace media{struct MediaPlayer;}}}}
namespace g{namespace Android{namespace Fallbacks{struct Android_android_media_MediaPlayerDLROnErrorListener;}}}

namespace g{
namespace Android{
namespace Fallbacks{

// public sealed extern class Android_android_media_MediaPlayerDLROnErrorListener :27707
// {
struct Android_android_media_MediaPlayerDLROnErrorListener_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::android::media::MediaPlayerDLROnErrorListener interface2;
};

Android_android_media_MediaPlayerDLROnErrorListener_type* Android_android_media_MediaPlayerDLROnErrorListener_typeof();
void Android_android_media_MediaPlayerDLROnErrorListener__onError_fn(Android_android_media_MediaPlayerDLROnErrorListener* __this, ::g::Android::android::media::MediaPlayer* arg0, int* arg1, int* arg2, bool* __retval);
void Android_android_media_MediaPlayerDLROnErrorListener__onError_IMPL_9438_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_, int* arg4_, bool* __retval);

struct Android_android_media_MediaPlayerDLROnErrorListener : ::g::Android::java::lang::Object
{
    static jmethodID onError_9438_ID_;
    static jmethodID& onError_9438_ID() { return onError_9438_ID_; }

    bool onError(::g::Android::android::media::MediaPlayer* arg0, int arg1, int arg2);
    static bool onError_IMPL_9438(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_, int arg4_);
};
// }

}}} // ::g::Android::Fallbacks
