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

// public abstract extern interface MediaPlayerDLROnSeekCompleteListener :18721
// {
uInterfaceType* MediaPlayerDLROnSeekCompleteListener_typeof();

struct MediaPlayerDLROnSeekCompleteListener
{
    void(*fp_onSeekComplete)(uObject*, ::g::Android::android::media::MediaPlayer*);
    static void onSeekComplete(const uInterface& __this, ::g::Android::android::media::MediaPlayer* arg0) { __this.VTable<MediaPlayerDLROnSeekCompleteListener>()->fp_onSeekComplete(__this, arg0); }
};
// }

}}}} // ::g::Android::android::media
