// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Video\0.19.3\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.IMediaPlayback.h>
#include <Fuse.Triggers.IPlayback.h>
#include <Fuse.Triggers.IProgress.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Video{struct CancellationTokenSource;}}}
namespace g{namespace Fuse{namespace Video{struct LoadResult;}}}
namespace g{namespace Fuse{namespace Video{struct VideoContainer;}}}
namespace g{namespace Uno{namespace Graphics{struct VideoTexture;}}}
namespace g{namespace Uno{namespace UX{struct FileSource;}}}
namespace g{namespace Uno{struct EventArgs;}}
namespace g{namespace Uno{struct Int2;}}

namespace g{
namespace Fuse{
namespace Video{

// internal sealed class VideoContainer :58
// {
struct VideoContainer_type : uType
{
    ::g::Fuse::Triggers::IMediaPlayback interface0;
    ::g::Fuse::Triggers::IPlayback interface1;
    ::g::Fuse::Triggers::IProgress interface2;
};

VideoContainer_type* VideoContainer_typeof();
void VideoContainer__ctor__fn(VideoContainer* __this);
void VideoContainer__get_AutoPlay_fn(VideoContainer* __this, bool* __retval);
void VideoContainer__set_AutoPlay_fn(VideoContainer* __this, bool* value);
void VideoContainer__Cancel_fn(VideoContainer* __this);
void VideoContainer__get_CanPause_fn(VideoContainer* __this, bool* __retval);
void VideoContainer__get_CanPlayTo_fn(VideoContainer* __this, bool* __retval);
void VideoContainer__get_CanResume_fn(VideoContainer* __this, bool* __retval);
void VideoContainer__get_CanStop_fn(VideoContainer* __this, bool* __retval);
void VideoContainer__add_Completed_fn(VideoContainer* __this, uDelegate* value);
void VideoContainer__remove_Completed_fn(VideoContainer* __this, uDelegate* value);
void VideoContainer__DisposePlayer_fn(VideoContainer* __this);
void VideoContainer__get_Duration_fn(VideoContainer* __this, double* __retval);
void VideoContainer__add_Error_fn(VideoContainer* __this, uDelegate* value);
void VideoContainer__remove_Error_fn(VideoContainer* __this, uDelegate* value);
void VideoContainer__set_File_fn(VideoContainer* __this, ::g::Uno::UX::FileSource* value);
void VideoContainer__get_Flip_fn(VideoContainer* __this, bool* __retval);
void VideoContainer__add_FrameAvailable_fn(VideoContainer* __this, uDelegate* value);
void VideoContainer__remove_FrameAvailable_fn(VideoContainer* __this, uDelegate* value);
void VideoContainer__get_IsLooping_fn(VideoContainer* __this, bool* __retval);
void VideoContainer__set_IsLooping_fn(VideoContainer* __this, bool* value);
void VideoContainer__get_IsPlaying_fn(VideoContainer* __this, bool* __retval);
void VideoContainer__Load_fn(VideoContainer* __this, uString* url);
void VideoContainer__Load1_fn(VideoContainer* __this, ::g::Uno::UX::FileSource* fileSource);
void VideoContainer__add_Loading_fn(VideoContainer* __this, uDelegate* value);
void VideoContainer__remove_Loading_fn(VideoContainer* __this, uDelegate* value);
void VideoContainer__New1_fn(VideoContainer** __retval);
void VideoContainer__OnCompleted_fn(VideoContainer* __this, uObject* sender, ::g::Uno::EventArgs* args);
void VideoContainer__OnError_fn(VideoContainer* __this, uObject* sender, uString* msg);
void VideoContainer__OnFrameAvailable_fn(VideoContainer* __this, uObject* sender, ::g::Uno::EventArgs* args);
void VideoContainer__OnLoadedHandler_fn(VideoContainer* __this, ::g::Fuse::Video::LoadResult* result);
void VideoContainer__OnLoading_fn(VideoContainer* __this);
void VideoContainer__OnParamChanged_fn(VideoContainer* __this);
void VideoContainer__OnPaused_fn(VideoContainer* __this);
void VideoContainer__OnPrepared_fn(VideoContainer* __this);
void VideoContainer__OnStarted_fn(VideoContainer* __this);
void VideoContainer__OnStopped_fn(VideoContainer* __this);
void VideoContainer__Pause_fn(VideoContainer* __this);
void VideoContainer__add_Paused_fn(VideoContainer* __this, uDelegate* value);
void VideoContainer__remove_Paused_fn(VideoContainer* __this, uDelegate* value);
void VideoContainer__Play_fn(VideoContainer* __this);
void VideoContainer__PlayTo_fn(VideoContainer* __this, double* progress);
void VideoContainer__get_Position_fn(VideoContainer* __this, double* __retval);
void VideoContainer__set_Position_fn(VideoContainer* __this, double* value);
void VideoContainer__add_Prepared_fn(VideoContainer* __this, uDelegate* value);
void VideoContainer__remove_Prepared_fn(VideoContainer* __this, uDelegate* value);
void VideoContainer__get_Progress_fn(VideoContainer* __this, double* __retval);
void VideoContainer__set_Progress_fn(VideoContainer* __this, double* value);
void VideoContainer__add_ProgressChanged_fn(VideoContainer* __this, uDelegate* value);
void VideoContainer__remove_ProgressChanged_fn(VideoContainer* __this, uDelegate* value);
void VideoContainer__Reset_fn(VideoContainer* __this);
void VideoContainer__Resume_fn(VideoContainer* __this);
void VideoContainer__SetPlayer_fn(VideoContainer* __this, uObject* player);
void VideoContainer__get_Size_fn(VideoContainer* __this, ::g::Uno::Int2* __retval);
void VideoContainer__add_Started_fn(VideoContainer* __this, uDelegate* value);
void VideoContainer__remove_Started_fn(VideoContainer* __this, uDelegate* value);
void VideoContainer__Stop_fn(VideoContainer* __this);
void VideoContainer__add_Stopped_fn(VideoContainer* __this, uDelegate* value);
void VideoContainer__remove_Stopped_fn(VideoContainer* __this, uDelegate* value);
void VideoContainer__Update_fn(VideoContainer* __this);
void VideoContainer__set_Url_fn(VideoContainer* __this, uString* value);
void VideoContainer__get_VideoTexture_fn(VideoContainer* __this, ::g::Uno::Graphics::VideoTexture** __retval);
void VideoContainer__get_Volume_fn(VideoContainer* __this, float* __retval);
void VideoContainer__set_Volume_fn(VideoContainer* __this, float* value);

struct VideoContainer : uObject
{
    bool _autoPlay;
    uStrong< ::g::Fuse::Video::CancellationTokenSource*> _cancellationTokenSource;
    bool _isLooping;
    uStrong<uObject*> _player;
    float _volume;
    uStrong<uDelegate*> Completed1;
    uStrong<uDelegate*> Error1;
    uStrong<uDelegate*> FrameAvailable1;
    uStrong<uDelegate*> Loading1;
    uStrong<uDelegate*> Paused1;
    uStrong<uDelegate*> Prepared1;
    uStrong<uDelegate*> ProgressChanged1;
    uStrong<uDelegate*> Started1;
    uStrong<uDelegate*> Stopped1;

    void ctor_();
    bool AutoPlay();
    void AutoPlay(bool value);
    void Cancel();
    bool CanPause();
    bool CanPlayTo();
    bool CanResume();
    bool CanStop();
    void add_Completed(uDelegate* value);
    void remove_Completed(uDelegate* value);
    void DisposePlayer();
    double Duration();
    void add_Error(uDelegate* value);
    void remove_Error(uDelegate* value);
    void File(::g::Uno::UX::FileSource* value);
    bool Flip();
    void add_FrameAvailable(uDelegate* value);
    void remove_FrameAvailable(uDelegate* value);
    bool IsLooping();
    void IsLooping(bool value);
    bool IsPlaying();
    void Load(uString* url);
    void Load1(::g::Uno::UX::FileSource* fileSource);
    void add_Loading(uDelegate* value);
    void remove_Loading(uDelegate* value);
    void OnCompleted(uObject* sender, ::g::Uno::EventArgs* args);
    void OnError(uObject* sender, uString* msg);
    void OnFrameAvailable(uObject* sender, ::g::Uno::EventArgs* args);
    void OnLoadedHandler(::g::Fuse::Video::LoadResult* result);
    void OnLoading();
    void OnParamChanged();
    void OnPaused();
    void OnPrepared();
    void OnStarted();
    void OnStopped();
    void Pause();
    void add_Paused(uDelegate* value);
    void remove_Paused(uDelegate* value);
    void Play();
    void PlayTo(double progress);
    double Position();
    void Position(double value);
    void add_Prepared(uDelegate* value);
    void remove_Prepared(uDelegate* value);
    double Progress();
    void Progress(double value);
    void add_ProgressChanged(uDelegate* value);
    void remove_ProgressChanged(uDelegate* value);
    void Reset();
    void Resume();
    void SetPlayer(uObject* player);
    ::g::Uno::Int2 Size();
    void add_Started(uDelegate* value);
    void remove_Started(uDelegate* value);
    void Stop();
    void add_Stopped(uDelegate* value);
    void remove_Stopped(uDelegate* value);
    void Update();
    void Url(uString* value);
    ::g::Uno::Graphics::VideoTexture* VideoTexture();
    float Volume();
    void Volume(float value);
    static VideoContainer* New1();
};
// }

}}} // ::g::Fuse::Video
