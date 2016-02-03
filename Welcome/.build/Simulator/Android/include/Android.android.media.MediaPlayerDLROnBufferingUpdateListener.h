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

// public abstract extern interface MediaPlayerDLROnBufferingUpdateListener :18641
// {
uInterfaceType* MediaPlayerDLROnBufferingUpdateListener_typeof();

struct MediaPlayerDLROnBufferingUpdateListener
{
    void(*fp_onBufferingUpdate)(uObject*, ::g::Android::android::media::MediaPlayer*, int*);
    static void onBufferingUpdate(const uInterface& __this, ::g::Android::android::media::MediaPlayer* arg0, int arg1) { __this.VTable<MediaPlayerDLROnBufferingUpdateListener>()->fp_onBufferingUpdate(__this, arg0, &arg1); }
};
// }

}}}} // ::g::Android::android::media
