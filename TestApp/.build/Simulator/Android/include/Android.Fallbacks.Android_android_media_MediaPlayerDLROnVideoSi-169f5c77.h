// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.media.MediaPlayerDLROnVideoSizeChangedListener.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace media{struct MediaPlayer;}}}}
namespace g{namespace Android{namespace Fallbacks{struct Android_android_media_MediaPlayerDLROnVideoSizeChangedListener;}}}

namespace g{
namespace Android{
namespace Fallbacks{

// public sealed extern class Android_android_media_MediaPlayerDLROnVideoSizeChangedListener :27832
// {
struct Android_android_media_MediaPlayerDLROnVideoSizeChangedListener_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::android::media::MediaPlayerDLROnVideoSizeChangedListener interface2;
};

Android_android_media_MediaPlayerDLROnVideoSizeChangedListener_type* Android_android_media_MediaPlayerDLROnVideoSizeChangedListener_typeof();
void Android_android_media_MediaPlayerDLROnVideoSizeChangedListener__onVideoSizeChanged_fn(Android_android_media_MediaPlayerDLROnVideoSizeChangedListener* __this, ::g::Android::android::media::MediaPlayer* arg0, int* arg1, int* arg2);
void Android_android_media_MediaPlayerDLROnVideoSizeChangedListener__onVideoSizeChanged_IMPL_9443_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_, int* arg4_);

struct Android_android_media_MediaPlayerDLROnVideoSizeChangedListener : ::g::Android::java::lang::Object
{
    static jmethodID onVideoSizeChanged_9443_ID_;
    static jmethodID& onVideoSizeChanged_9443_ID() { return onVideoSizeChanged_9443_ID_; }

    void onVideoSizeChanged(::g::Android::android::media::MediaPlayer* arg0, int arg1, int arg2);
    static void onVideoSizeChanged_IMPL_9443(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_, int arg4_);
};
// }

}}} // ::g::Android::Fallbacks
