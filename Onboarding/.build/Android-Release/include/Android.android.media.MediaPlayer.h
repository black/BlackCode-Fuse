// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\media\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace media{struct MediaPlayer;}}}}
namespace g{namespace Android{namespace android{namespace view{struct Surface;}}}}
namespace g{namespace Android{namespace java{namespace io{struct FileDescriptor;}}}}
namespace g{namespace Android{namespace java{namespace lang{struct String;}}}}

namespace g{
namespace Android{
namespace android{
namespace media{

// public sealed extern class MediaPlayer :11793
// {
::g::Android::java::lang::Object_type* MediaPlayer_typeof();
void MediaPlayer__ctor_4_fn(MediaPlayer* __this);
void MediaPlayer___Init2_fn();
void MediaPlayer__getCurrentPosition_fn(MediaPlayer* __this, int* __retval);
void MediaPlayer__getCurrentPosition_IMPL_9497_fn(bool* arg0_, jobject* arg1_, int* __retval);
void MediaPlayer__getDuration_fn(MediaPlayer* __this, int* __retval);
void MediaPlayer__getDuration_IMPL_9498_fn(bool* arg0_, jobject* arg1_, int* __retval);
void MediaPlayer__getVideoHeight_fn(MediaPlayer* __this, int* __retval);
void MediaPlayer__getVideoHeight_IMPL_9494_fn(bool* arg0_, jobject* arg1_, int* __retval);
void MediaPlayer__getVideoWidth_fn(MediaPlayer* __this, int* __retval);
void MediaPlayer__getVideoWidth_IMPL_9493_fn(bool* arg0_, jobject* arg1_, int* __retval);
void MediaPlayer__isPlaying_fn(MediaPlayer* __this, bool* __retval);
void MediaPlayer__isPlaying_IMPL_9495_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void MediaPlayer__get_MEDIA_ERROR_IO_fn(int* __retval);
void MediaPlayer__get_MEDIA_ERROR_MALFORMED_fn(int* __retval);
void MediaPlayer__get_MEDIA_ERROR_SERVER_DIED_fn(int* __retval);
void MediaPlayer__get_MEDIA_ERROR_TIMED_OUT_fn(int* __retval);
void MediaPlayer__get_MEDIA_ERROR_UNKNOWN_fn(int* __retval);
void MediaPlayer__get_MEDIA_ERROR_UNSUPPORTED_fn(int* __retval);
void MediaPlayer__New5_fn(MediaPlayer** __retval);
void MediaPlayer__pause_fn(MediaPlayer* __this);
void MediaPlayer__pause_IMPL_9490_fn(bool* arg0_, jobject* arg1_);
void MediaPlayer__prepareAsync_fn(MediaPlayer* __this);
void MediaPlayer__prepareAsync_IMPL_9487_fn(bool* arg0_, jobject* arg1_);
void MediaPlayer__release_fn(MediaPlayer* __this);
void MediaPlayer__release_IMPL_9500_fn(bool* arg0_, jobject* arg1_);
void MediaPlayer__reset_fn(MediaPlayer* __this);
void MediaPlayer__reset_IMPL_9501_fn(bool* arg0_, jobject* arg1_);
void MediaPlayer__seekTo_fn(MediaPlayer* __this, int* arg0);
void MediaPlayer__seekTo_IMPL_9496_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void MediaPlayer__setAudioStreamType_fn(MediaPlayer* __this, int* arg0);
void MediaPlayer__setAudioStreamType_IMPL_9502_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void MediaPlayer__setDataSource3_fn(MediaPlayer* __this, ::g::Android::java::io::FileDescriptor* arg0, int64_t* arg1, int64_t* arg2);
void MediaPlayer__setDataSource4_fn(MediaPlayer* __this, ::g::Android::java::lang::String* arg0);
void MediaPlayer__setDataSource_IMPL_9483_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void MediaPlayer__setDataSource_IMPL_9485_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int64_t* arg3_, int64_t* arg4_);
void MediaPlayer__setOnCompletionListener_fn(MediaPlayer* __this, uObject* arg0);
void MediaPlayer__setOnCompletionListener_IMPL_9519_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void MediaPlayer__setOnErrorListener_fn(MediaPlayer* __this, uObject* arg0);
void MediaPlayer__setOnErrorListener_IMPL_9524_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void MediaPlayer__setOnPreparedListener_fn(MediaPlayer* __this, uObject* arg0);
void MediaPlayer__setOnPreparedListener_IMPL_9518_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void MediaPlayer__setSurface_fn(MediaPlayer* __this, ::g::Android::android::view::Surface* arg0);
void MediaPlayer__setSurface_IMPL_9476_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void MediaPlayer__setVolume_fn(MediaPlayer* __this, float* arg0, float* arg1);
void MediaPlayer__setVolume_IMPL_9505_fn(bool* arg0_, jobject* arg1_, float* arg2_, float* arg3_);
void MediaPlayer__start_fn(MediaPlayer* __this);
void MediaPlayer__start_IMPL_9488_fn(bool* arg0_, jobject* arg1_);

struct MediaPlayer : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    static jmethodID getCurrentPosition_9497_ID_;
    static jmethodID& getCurrentPosition_9497_ID() { return getCurrentPosition_9497_ID_; }
    static jmethodID getDuration_9498_ID_;
    static jmethodID& getDuration_9498_ID() { return getDuration_9498_ID_; }
    static jmethodID getVideoHeight_9494_ID_;
    static jmethodID& getVideoHeight_9494_ID() { return getVideoHeight_9494_ID_; }
    static jmethodID getVideoWidth_9493_ID_;
    static jmethodID& getVideoWidth_9493_ID() { return getVideoWidth_9493_ID_; }
    static jmethodID isPlaying_9495_ID_;
    static jmethodID& isPlaying_9495_ID() { return isPlaying_9495_ID_; }
    static jfieldID MEDIA_ERROR_IO_9460_ID_;
    static jfieldID& MEDIA_ERROR_IO_9460_ID() { return MEDIA_ERROR_IO_9460_ID_; }
    static jfieldID MEDIA_ERROR_MALFORMED_9461_ID_;
    static jfieldID& MEDIA_ERROR_MALFORMED_9461_ID() { return MEDIA_ERROR_MALFORMED_9461_ID_; }
    static jfieldID MEDIA_ERROR_SERVER_DIED_9458_ID_;
    static jfieldID& MEDIA_ERROR_SERVER_DIED_9458_ID() { return MEDIA_ERROR_SERVER_DIED_9458_ID_; }
    static jfieldID MEDIA_ERROR_TIMED_OUT_9463_ID_;
    static jfieldID& MEDIA_ERROR_TIMED_OUT_9463_ID() { return MEDIA_ERROR_TIMED_OUT_9463_ID_; }
    static jfieldID MEDIA_ERROR_UNKNOWN_9457_ID_;
    static jfieldID& MEDIA_ERROR_UNKNOWN_9457_ID() { return MEDIA_ERROR_UNKNOWN_9457_ID_; }
    static jfieldID MEDIA_ERROR_UNSUPPORTED_9462_ID_;
    static jfieldID& MEDIA_ERROR_UNSUPPORTED_9462_ID() { return MEDIA_ERROR_UNSUPPORTED_9462_ID_; }
    static jmethodID MediaPlayer_9474_ID_c_;
    static jmethodID& MediaPlayer_9474_ID_c() { return MediaPlayer_9474_ID_c_; }
    static jmethodID pause_9490_ID_;
    static jmethodID& pause_9490_ID() { return pause_9490_ID_; }
    static jmethodID prepareAsync_9487_ID_;
    static jmethodID& prepareAsync_9487_ID() { return prepareAsync_9487_ID_; }
    static jmethodID release_9500_ID_;
    static jmethodID& release_9500_ID() { return release_9500_ID_; }
    static jmethodID reset_9501_ID_;
    static jmethodID& reset_9501_ID() { return reset_9501_ID_; }
    static jmethodID seekTo_9496_ID_;
    static jmethodID& seekTo_9496_ID() { return seekTo_9496_ID_; }
    static jmethodID setAudioStreamType_9502_ID_;
    static jmethodID& setAudioStreamType_9502_ID() { return setAudioStreamType_9502_ID_; }
    static jmethodID setDataSource_9483_ID_;
    static jmethodID& setDataSource_9483_ID() { return setDataSource_9483_ID_; }
    static jmethodID setDataSource_9485_ID_;
    static jmethodID& setDataSource_9485_ID() { return setDataSource_9485_ID_; }
    static jmethodID setOnCompletionListener_9519_ID_;
    static jmethodID& setOnCompletionListener_9519_ID() { return setOnCompletionListener_9519_ID_; }
    static jmethodID setOnErrorListener_9524_ID_;
    static jmethodID& setOnErrorListener_9524_ID() { return setOnErrorListener_9524_ID_; }
    static jmethodID setOnPreparedListener_9518_ID_;
    static jmethodID& setOnPreparedListener_9518_ID() { return setOnPreparedListener_9518_ID_; }
    static jmethodID setSurface_9476_ID_;
    static jmethodID& setSurface_9476_ID() { return setSurface_9476_ID_; }
    static jmethodID setVolume_9505_ID_;
    static jmethodID& setVolume_9505_ID() { return setVolume_9505_ID_; }
    static jmethodID start_9488_ID_;
    static jmethodID& start_9488_ID() { return start_9488_ID_; }

    void ctor_4();
    int getCurrentPosition();
    int getDuration();
    int getVideoHeight();
    int getVideoWidth();
    bool isPlaying();
    void pause();
    void prepareAsync();
    void release();
    void reset();
    void seekTo(int arg0);
    void setAudioStreamType(int arg0);
    void setDataSource3(::g::Android::java::io::FileDescriptor* arg0, int64_t arg1, int64_t arg2);
    void setDataSource4(::g::Android::java::lang::String* arg0);
    void setOnCompletionListener(uObject* arg0);
    void setOnErrorListener(uObject* arg0);
    void setOnPreparedListener(uObject* arg0);
    void setSurface(::g::Android::android::view::Surface* arg0);
    void setVolume(float arg0, float arg1);
    void start();
    static void _Init2();
    static int getCurrentPosition_IMPL_9497(bool arg0_, jobject arg1_);
    static int getDuration_IMPL_9498(bool arg0_, jobject arg1_);
    static int getVideoHeight_IMPL_9494(bool arg0_, jobject arg1_);
    static int getVideoWidth_IMPL_9493(bool arg0_, jobject arg1_);
    static bool isPlaying_IMPL_9495(bool arg0_, jobject arg1_);
    static MediaPlayer* New5();
    static void pause_IMPL_9490(bool arg0_, jobject arg1_);
    static void prepareAsync_IMPL_9487(bool arg0_, jobject arg1_);
    static void release_IMPL_9500(bool arg0_, jobject arg1_);
    static void reset_IMPL_9501(bool arg0_, jobject arg1_);
    static void seekTo_IMPL_9496(bool arg0_, jobject arg1_, int arg2_);
    static void setAudioStreamType_IMPL_9502(bool arg0_, jobject arg1_, int arg2_);
    static void setDataSource_IMPL_9483(bool arg0_, jobject arg1_, uObject* arg2_);
    static void setDataSource_IMPL_9485(bool arg0_, jobject arg1_, uObject* arg2_, int64_t arg3_, int64_t arg4_);
    static void setOnCompletionListener_IMPL_9519(bool arg0_, jobject arg1_, uObject* arg2_);
    static void setOnErrorListener_IMPL_9524(bool arg0_, jobject arg1_, uObject* arg2_);
    static void setOnPreparedListener_IMPL_9518(bool arg0_, jobject arg1_, uObject* arg2_);
    static void setSurface_IMPL_9476(bool arg0_, jobject arg1_, uObject* arg2_);
    static void setVolume_IMPL_9505(bool arg0_, jobject arg1_, float arg2_, float arg3_);
    static void start_IMPL_9488(bool arg0_, jobject arg1_);
    static int MEDIA_ERROR_IO();
    static int MEDIA_ERROR_MALFORMED();
    static int MEDIA_ERROR_SERVER_DIED();
    static int MEDIA_ERROR_TIMED_OUT();
    static int MEDIA_ERROR_UNKNOWN();
    static int MEDIA_ERROR_UNSUPPORTED();
};
// }

}}}} // ::g::Android::android::media
