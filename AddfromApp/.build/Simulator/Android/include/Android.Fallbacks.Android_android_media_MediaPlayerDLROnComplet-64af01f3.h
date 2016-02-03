// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.media.MediaPlayerDLROnCompletionListener.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace media{struct MediaPlayer;}}}}
namespace g{namespace Android{namespace Fallbacks{struct Android_android_media_MediaPlayerDLROnCompletionListener;}}}

namespace g{
namespace Android{
namespace Fallbacks{

// public sealed extern class Android_android_media_MediaPlayerDLROnCompletionListener :27682
// {
struct Android_android_media_MediaPlayerDLROnCompletionListener_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::android::media::MediaPlayerDLROnCompletionListener interface2;
};

Android_android_media_MediaPlayerDLROnCompletionListener_type* Android_android_media_MediaPlayerDLROnCompletionListener_typeof();
void Android_android_media_MediaPlayerDLROnCompletionListener__onCompletion_fn(Android_android_media_MediaPlayerDLROnCompletionListener* __this, ::g::Android::android::media::MediaPlayer* arg0);
void Android_android_media_MediaPlayerDLROnCompletionListener__onCompletion_IMPL_9437_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);

struct Android_android_media_MediaPlayerDLROnCompletionListener : ::g::Android::java::lang::Object
{
    static jmethodID onCompletion_9437_ID_;
    static jmethodID& onCompletion_9437_ID() { return onCompletion_9437_ID_; }

    void onCompletion(::g::Android::android::media::MediaPlayer* arg0);
    static void onCompletion_IMPL_9437(bool arg0_, jobject arg1_, uObject* arg2_);
};
// }

}}} // ::g::Android::Fallbacks
