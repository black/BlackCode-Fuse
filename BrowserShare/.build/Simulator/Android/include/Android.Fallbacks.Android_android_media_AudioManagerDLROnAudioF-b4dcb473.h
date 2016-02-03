// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.media.AudioManagerDLROnAudioFocusChangeListener.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace Fallbacks{struct Android_android_media_AudioManagerDLROnAudioFocusChangeListener;}}}

namespace g{
namespace Android{
namespace Fallbacks{

// public sealed extern class Android_android_media_AudioManagerDLROnAudioFocusChangeListener :27467
// {
struct Android_android_media_AudioManagerDLROnAudioFocusChangeListener_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::android::media::AudioManagerDLROnAudioFocusChangeListener interface2;
};

Android_android_media_AudioManagerDLROnAudioFocusChangeListener_type* Android_android_media_AudioManagerDLROnAudioFocusChangeListener_typeof();
void Android_android_media_AudioManagerDLROnAudioFocusChangeListener__onAudioFocusChange_fn(Android_android_media_AudioManagerDLROnAudioFocusChangeListener* __this, int* arg0);
void Android_android_media_AudioManagerDLROnAudioFocusChangeListener__onAudioFocusChange_IMPL_8685_fn(bool* arg0_, jobject* arg1_, int* arg2_);

struct Android_android_media_AudioManagerDLROnAudioFocusChangeListener : ::g::Android::java::lang::Object
{
    static jmethodID onAudioFocusChange_8685_ID_;
    static jmethodID& onAudioFocusChange_8685_ID() { return onAudioFocusChange_8685_ID_; }

    void onAudioFocusChange(int arg0);
    static void onAudioFocusChange_IMPL_8685(bool arg0_, jobject arg1_, int arg2_);
};
// }

}}} // ::g::Android::Fallbacks
