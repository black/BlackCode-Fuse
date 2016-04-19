// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\media\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Uno.Object.h>
namespace g{namespace Android{namespace android{namespace media{struct MediaPlayer;}}}}

namespace g{
namespace Android{
namespace android{
namespace media{

// public abstract extern interface MediaPlayerDLROnErrorListener :18673
// {
uInterfaceType* MediaPlayerDLROnErrorListener_typeof();

struct MediaPlayerDLROnErrorListener
{
    void(*fp_onError)(uObject*, ::g::Android::android::media::MediaPlayer*, int*, int*, bool*);
    static bool onError(const uInterface& __this, ::g::Android::android::media::MediaPlayer* arg0, int arg1, int arg2) { bool __retval; return __this.VTable<MediaPlayerDLROnErrorListener>()->fp_onError(__this, arg0, &arg1, &arg2, &__retval), __retval; }
};
// }

}}}} // ::g::Android::android::media
