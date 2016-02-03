// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Video\0.19.3\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Graphics{struct VideoTexture;}}}
namespace g{namespace Uno{struct Int2;}}

namespace g{
namespace Fuse{
namespace Video{

// public abstract interface IVideoPlayer :13
// {
uInterfaceType* IVideoPlayer_typeof();

struct IVideoPlayer
{
    void(*fp_add_Completed)(uObject*, uDelegate*);
    void(*fp_remove_Completed)(uObject*, uDelegate*);
    void(*fp_get_Duration)(uObject*, double*);
    void(*fp_add_Error)(uObject*, uDelegate*);
    void(*fp_remove_Error)(uObject*, uDelegate*);
    void(*fp_get_Flip)(uObject*, bool*);
    void(*fp_add_FrameAvailable)(uObject*, uDelegate*);
    void(*fp_remove_FrameAvailable)(uObject*, uDelegate*);
    void(*fp_get_IsLooping)(uObject*, bool*);
    void(*fp_set_IsLooping)(uObject*, bool*);
    void(*fp_get_IsPlaying)(uObject*, bool*);
    void(*fp_Pause)(uObject*);
    void(*fp_Play)(uObject*);
    void(*fp_get_Position)(uObject*, double*);
    void(*fp_set_Position)(uObject*, double*);
    void(*fp_get_Size)(uObject*, ::g::Uno::Int2*);
    void(*fp_Stop)(uObject*);
    void(*fp_Update)(uObject*);
    void(*fp_get_VideoTexture)(uObject*, ::g::Uno::Graphics::VideoTexture**);
    void(*fp_get_Volume)(uObject*, float*);
    void(*fp_set_Volume)(uObject*, float*);
    static void add_Completed(const uInterface& __this, uDelegate* value) { __this.VTable<IVideoPlayer>()->fp_add_Completed(__this, value); }
    static void remove_Completed(const uInterface& __this, uDelegate* value) { __this.VTable<IVideoPlayer>()->fp_remove_Completed(__this, value); }
    static double Duration(const uInterface& __this) { double __retval; return __this.VTable<IVideoPlayer>()->fp_get_Duration(__this, &__retval), __retval; }
    static void add_Error(const uInterface& __this, uDelegate* value) { __this.VTable<IVideoPlayer>()->fp_add_Error(__this, value); }
    static void remove_Error(const uInterface& __this, uDelegate* value) { __this.VTable<IVideoPlayer>()->fp_remove_Error(__this, value); }
    static bool Flip(const uInterface& __this) { bool __retval; return __this.VTable<IVideoPlayer>()->fp_get_Flip(__this, &__retval), __retval; }
    static void add_FrameAvailable(const uInterface& __this, uDelegate* value) { __this.VTable<IVideoPlayer>()->fp_add_FrameAvailable(__this, value); }
    static void remove_FrameAvailable(const uInterface& __this, uDelegate* value) { __this.VTable<IVideoPlayer>()->fp_remove_FrameAvailable(__this, value); }
    static bool IsLooping(const uInterface& __this) { bool __retval; return __this.VTable<IVideoPlayer>()->fp_get_IsLooping(__this, &__retval), __retval; }
    static void IsLooping(const uInterface& __this, bool value) { __this.VTable<IVideoPlayer>()->fp_set_IsLooping(__this, &value); }
    static bool IsPlaying(const uInterface& __this) { bool __retval; return __this.VTable<IVideoPlayer>()->fp_get_IsPlaying(__this, &__retval), __retval; }
    static void Pause(const uInterface& __this) { __this.VTable<IVideoPlayer>()->fp_Pause(__this); }
    static void Play(const uInterface& __this) { __this.VTable<IVideoPlayer>()->fp_Play(__this); }
    static double Position(const uInterface& __this) { double __retval; return __this.VTable<IVideoPlayer>()->fp_get_Position(__this, &__retval), __retval; }
    static void Position(const uInterface& __this, double value) { __this.VTable<IVideoPlayer>()->fp_set_Position(__this, &value); }
    static ::g::Uno::Int2 Size(const uInterface& __this);
    static void Stop(const uInterface& __this) { __this.VTable<IVideoPlayer>()->fp_Stop(__this); }
    static void Update(const uInterface& __this) { __this.VTable<IVideoPlayer>()->fp_Update(__this); }
    static ::g::Uno::Graphics::VideoTexture* VideoTexture(const uInterface& __this) { ::g::Uno::Graphics::VideoTexture* __retval; return __this.VTable<IVideoPlayer>()->fp_get_VideoTexture(__this, &__retval), __retval; }
    static float Volume(const uInterface& __this) { float __retval; return __this.VTable<IVideoPlayer>()->fp_get_Volume(__this, &__retval), __retval; }
    static void Volume(const uInterface& __this, float value) { __this.VTable<IVideoPlayer>()->fp_set_Volume(__this, &value); }
};

}}} // ::g::Fuse::Video

#include <Uno.Int2.h>

namespace g{
namespace Fuse{
namespace Video{

inline ::g::Uno::Int2 IVideoPlayer::Size(const uInterface& __this) { ::g::Uno::Int2 __retval; return __this.VTable<IVideoPlayer>()->fp_get_Size(__this, &__retval), __retval; }
// }

}}} // ::g::Fuse::Video
