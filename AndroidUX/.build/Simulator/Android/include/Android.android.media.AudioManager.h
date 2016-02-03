// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\android\media\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace media{struct AudioManager;}}}}

namespace g{
namespace Android{
namespace android{
namespace media{

// public sealed extern class AudioManager :1185
// {
::g::Android::java::lang::Object_type* AudioManager_typeof();
void AudioManager___Init2_fn();
void AudioManager__abandonAudioFocus_fn(AudioManager* __this, uObject* arg0, int* __retval);
void AudioManager__abandonAudioFocus_IMPL_8799_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* __retval);
void AudioManager__get_AUDIOFOCUS_GAIN_fn(int* __retval);
void AudioManager__requestAudioFocus_fn(AudioManager* __this, uObject* arg0, int* arg1, int* arg2, int* __retval);
void AudioManager__requestAudioFocus_IMPL_8798_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_, int* arg4_, int* __retval);
void AudioManager__get_STREAM_MUSIC_fn(int* __retval);

struct AudioManager : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    static jmethodID abandonAudioFocus_8799_ID_;
    static jmethodID& abandonAudioFocus_8799_ID() { return abandonAudioFocus_8799_ID_; }
    static jfieldID AUDIOFOCUS_GAIN_8748_ID_;
    static jfieldID& AUDIOFOCUS_GAIN_8748_ID() { return AUDIOFOCUS_GAIN_8748_ID_; }
    static jmethodID requestAudioFocus_8798_ID_;
    static jmethodID& requestAudioFocus_8798_ID() { return requestAudioFocus_8798_ID_; }
    static jfieldID STREAM_MUSIC_8695_ID_;
    static jfieldID& STREAM_MUSIC_8695_ID() { return STREAM_MUSIC_8695_ID_; }

    int abandonAudioFocus(uObject* arg0);
    int requestAudioFocus(uObject* arg0, int arg1, int arg2);
    static void _Init2();
    static int abandonAudioFocus_IMPL_8799(bool arg0_, jobject arg1_, uObject* arg2_);
    static int requestAudioFocus_IMPL_8798(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_, int arg4_);
    static int AUDIOFOCUS_GAIN();
    static int STREAM_MUSIC();
};
// }

}}}} // ::g::Android::android::media
