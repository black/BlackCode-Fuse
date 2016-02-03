// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Video\0.18.8\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Video{struct CancellationTokenSource;}}}
namespace g{namespace Fuse{namespace Video{struct LoadResult;}}}
namespace g{namespace Fuse{namespace Video{struct VideoLoader;}}}
namespace g{namespace Uno{namespace UX{struct FileSource;}}}

namespace g{
namespace Fuse{
namespace Video{

// internal abstract class VideoLoader :438
// {
struct VideoLoader_type : uType
{
    void(*fp_Dispose)(::g::Fuse::Video::VideoLoader*);
    void(*fp_LoadInternal)(::g::Fuse::Video::VideoLoader*, uString*, uDelegate*);
    void(*fp_LoadInternal1)(::g::Fuse::Video::VideoLoader*, ::g::Uno::UX::FileSource*, uDelegate*);
};

VideoLoader_type* VideoLoader_typeof();
void VideoLoader__ctor__fn(VideoLoader* __this, uDelegate* loadedHandler);
void VideoLoader__Cancel_fn(VideoLoader* __this);
void VideoLoader__DoDispose_fn(VideoLoader* __this);
void VideoLoader__Load_fn(VideoLoader* __this, uString* url, ::g::Fuse::Video::CancellationTokenSource** __retval);
void VideoLoader__Load1_fn(uString* url, uDelegate* loadedHandler, ::g::Fuse::Video::CancellationTokenSource** __retval);
void VideoLoader__Load2_fn(VideoLoader* __this, ::g::Uno::UX::FileSource* fileSource, ::g::Fuse::Video::CancellationTokenSource** __retval);
void VideoLoader__Load3_fn(::g::Uno::UX::FileSource* fileSource, uDelegate* loadedHandler, ::g::Fuse::Video::CancellationTokenSource** __retval);
void VideoLoader__OnLoadedHandler_fn(VideoLoader* __this, ::g::Fuse::Video::LoadResult* result);
void VideoLoader__ScheduleDispose_fn(VideoLoader* __this);

struct VideoLoader : uObject
{
    bool _isCancelled;
    uStrong<uDelegate*> _loadedHandler;
    bool _readyToDispose;

    void ctor_(uDelegate* loadedHandler);
    void Cancel();
    void Dispose() { (((VideoLoader_type*)__type)->fp_Dispose)(this); }
    void DoDispose();
    ::g::Fuse::Video::CancellationTokenSource* Load(uString* url);
    ::g::Fuse::Video::CancellationTokenSource* Load2(::g::Uno::UX::FileSource* fileSource);
    void LoadInternal(uString* url, uDelegate* loadedHandler) { (((VideoLoader_type*)__type)->fp_LoadInternal)(this, url, loadedHandler); }
    void LoadInternal1(::g::Uno::UX::FileSource* fileSource, uDelegate* loadedHandler) { (((VideoLoader_type*)__type)->fp_LoadInternal1)(this, fileSource, loadedHandler); }
    void OnLoadedHandler(::g::Fuse::Video::LoadResult* result);
    void ScheduleDispose();
    static ::g::Fuse::Video::CancellationTokenSource* Load1(uString* url, uDelegate* loadedHandler);
    static ::g::Fuse::Video::CancellationTokenSource* Load3(::g::Uno::UX::FileSource* fileSource, uDelegate* loadedHandler);
};
// }

}}} // ::g::Fuse::Video
