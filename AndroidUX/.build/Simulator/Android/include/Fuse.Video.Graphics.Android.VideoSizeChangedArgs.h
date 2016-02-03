// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Video\0.18.8\Graphics\Android\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.EventArgs.h>
#include <Uno.Int2.h>
namespace g{namespace Fuse{namespace Video{namespace Graphics{namespace Android{struct VideoSizeChangedArgs;}}}}}

namespace g{
namespace Fuse{
namespace Video{
namespace Graphics{
namespace Android{

// internal sealed extern class VideoSizeChangedArgs :195
// {
uType* VideoSizeChangedArgs_typeof();
void VideoSizeChangedArgs__ctor_1_fn(VideoSizeChangedArgs* __this, ::g::Uno::Int2* newSize);
void VideoSizeChangedArgs__New2_fn(::g::Uno::Int2* newSize, VideoSizeChangedArgs** __retval);
void VideoSizeChangedArgs__get_NewSize_fn(VideoSizeChangedArgs* __this, ::g::Uno::Int2* __retval);
void VideoSizeChangedArgs__set_NewSize_fn(VideoSizeChangedArgs* __this, ::g::Uno::Int2* value);

struct VideoSizeChangedArgs : ::g::Uno::EventArgs
{
    ::g::Uno::Int2 _NewSize;

    void ctor_1(::g::Uno::Int2 newSize);
    ::g::Uno::Int2 NewSize();
    void NewSize(::g::Uno::Int2 value);
    static VideoSizeChangedArgs* New2(::g::Uno::Int2 newSize);
};
// }

}}}}} // ::g::Fuse::Video::Graphics::Android
