// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.Navigation.INavigationPanel.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.INameScope.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.IAddRemove-1.h>
#include <Fuse.Triggers.IMediaPlayback.h>
#include <Fuse.Triggers.IPlayback.h>
#include <Fuse.Triggers.IProgress.h>
#include <Uno.Float4.h>
namespace g{namespace Fuse{namespace Controls{struct Video;}}}
namespace g{namespace Fuse{struct StyleProperty1;}}
namespace g{namespace Uno{namespace UX{struct FileSource;}}}
namespace g{namespace Uno{struct EventArgs;}}

namespace g{
namespace Fuse{
namespace Controls{

// public sealed class Video :2365
// {
struct Video_type : ::g::Fuse::Controls::Panel_type
{
    ::g::Fuse::Triggers::IMediaPlayback interface8;
    ::g::Fuse::Triggers::IPlayback interface9;
    ::g::Fuse::Triggers::IProgress interface10;
};

Video_type* Video_typeof();
void Video__ctor_4_fn(Video* __this);
void Video__get_AutoPlay_fn(Video* __this, bool* __retval);
void Video__set_AutoPlay_fn(Video* __this, bool* value);
void Video__get_CanPause_fn(Video* __this, bool* __retval);
void Video__get_CanPlayTo_fn(Video* __this, bool* __retval);
void Video__get_CanResume_fn(Video* __this, bool* __retval);
void Video__get_CanStop_fn(Video* __this, bool* __retval);
void Video__get_ContentAlignment_fn(Video* __this, int* __retval);
void Video__set_ContentAlignment_fn(Video* __this, int* value);
void Video__get_Duration_fn(Video* __this, double* __retval);
void Video__get_File_fn(Video* __this, ::g::Uno::UX::FileSource** __retval);
void Video__set_File_fn(Video* __this, ::g::Uno::UX::FileSource* value);
void Video__get_IsLooping_fn(Video* __this, bool* __retval);
void Video__set_IsLooping_fn(Video* __this, bool* value);
void Video__New2_fn(Video** __retval);
void Video__OnParamChanged_fn(Video* __this);
void Video__OnProgressChanged_fn(Video* __this, uObject* sender, ::g::Uno::EventArgs* args);
void Video__OnRenderParamChanged_fn(Video* __this);
void Video__OnSourceChanged_fn(Video* __this);
void Video__add_ParamChanged_fn(Video* __this, uDelegate* value);
void Video__remove_ParamChanged_fn(Video* __this, uDelegate* value);
void Video__Pause_fn(Video* __this);
void Video__get_Playback_fn(Video* __this, uObject** __retval);
void Video__set_Playback_fn(Video* __this, uObject* value);
void Video__PlayTo_fn(Video* __this, double* progress);
void Video__get_Position_fn(Video* __this, double* __retval);
void Video__set_Position_fn(Video* __this, double* value);
void Video__get_Progress_fn(Video* __this, double* __retval);
void Video__set_Progress_fn(Video* __this, double* value);
void Video__add_ProgressChanged_fn(Video* __this, uDelegate* value);
void Video__remove_ProgressChanged_fn(Video* __this, uDelegate* value);
void Video__add_RenderParamChanged_fn(Video* __this, uDelegate* value);
void Video__remove_RenderParamChanged_fn(Video* __this, uDelegate* value);
void Video__Resume_fn(Video* __this);
void Video__get_Scale9Margin_fn(Video* __this, ::g::Uno::Float4* __retval);
void Video__set_Scale9Margin_fn(Video* __this, ::g::Uno::Float4* value);
void Video__SetPlayback_fn(Video* __this, uObject* playback);
void Video__SetProgress_fn(Video* __this, double* value, uObject* origin);
void Video__add_SourceChanged_fn(Video* __this, uDelegate* value);
void Video__remove_SourceChanged_fn(Video* __this, uDelegate* value);
void Video__Stop_fn(Video* __this);
void Video__get_StretchDirection_fn(Video* __this, int* __retval);
void Video__set_StretchDirection_fn(Video* __this, int* value);
void Video__get_StretchMode_fn(Video* __this, int* __retval);
void Video__set_StretchMode_fn(Video* __this, int* value);
void Video__get_StretchSizing_fn(Video* __this, int* __retval);
void Video__set_StretchSizing_fn(Video* __this, int* value);
void Video__UpdateParam_fn(Video* video);
void Video__UpdateRenderParam_fn(Video* video);
void Video__get_Url_fn(Video* __this, uString** __retval);
void Video__set_Url_fn(Video* __this, uString* value);
void Video__add_ValueChanged_fn(Video* __this, uDelegate* value);
void Video__remove_ValueChanged_fn(Video* __this, uDelegate* value);
void Video__get_Volume_fn(Video* __this, float* __retval);
void Video__set_Volume_fn(Video* __this, float* value);

struct Video : ::g::Fuse::Controls::Panel
{
    uStrong< ::g::Uno::UX::FileSource*> _file;
    bool _hasScale9Margin;
    uStrong<uObject*> _playback;
    ::g::Uno::Float4 _scale9Margin;
    uStrong<uString*> _url;
    static uSStrong< ::g::Fuse::StyleProperty1*> AutoPlayProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& AutoPlayProperty() { return Video_typeof()->Init(), AutoPlayProperty_; }
    static uSStrong< ::g::Fuse::StyleProperty1*> ContentAlignmentProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& ContentAlignmentProperty() { return Video_typeof()->Init(), ContentAlignmentProperty_; }
    static uSStrong< ::g::Fuse::StyleProperty1*> IsLoopingProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& IsLoopingProperty() { return Video_typeof()->Init(), IsLoopingProperty_; }
    static uSStrong< ::g::Fuse::StyleProperty1*> StretchDirectionProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& StretchDirectionProperty() { return Video_typeof()->Init(), StretchDirectionProperty_; }
    static uSStrong< ::g::Fuse::StyleProperty1*> StretchModeProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& StretchModeProperty() { return Video_typeof()->Init(), StretchModeProperty_; }
    static uSStrong< ::g::Fuse::StyleProperty1*> StretchSizingProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& StretchSizingProperty() { return Video_typeof()->Init(), StretchSizingProperty_; }
    static uSStrong< ::g::Fuse::StyleProperty1*> VolumeProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& VolumeProperty() { return Video_typeof()->Init(), VolumeProperty_; }
    uStrong<uDelegate*> ParamChanged1;
    uStrong<uDelegate*> ProgressChanged1;
    uStrong<uDelegate*> RenderParamChanged1;
    uStrong<uDelegate*> SourceChanged1;
    uStrong<uDelegate*> ValueChanged1;

    void ctor_4();
    bool AutoPlay();
    void AutoPlay(bool value);
    bool CanPause();
    bool CanPlayTo();
    bool CanResume();
    bool CanStop();
    int ContentAlignment();
    void ContentAlignment(int value);
    double Duration();
    ::g::Uno::UX::FileSource* File();
    void File(::g::Uno::UX::FileSource* value);
    bool IsLooping();
    void IsLooping(bool value);
    void OnParamChanged();
    void OnProgressChanged(uObject* sender, ::g::Uno::EventArgs* args);
    void OnRenderParamChanged();
    void OnSourceChanged();
    void add_ParamChanged(uDelegate* value);
    void remove_ParamChanged(uDelegate* value);
    void Pause();
    uObject* Playback();
    void Playback(uObject* value);
    void PlayTo(double progress);
    double Position();
    void Position(double value);
    double Progress();
    void Progress(double value);
    void add_ProgressChanged(uDelegate* value);
    void remove_ProgressChanged(uDelegate* value);
    void add_RenderParamChanged(uDelegate* value);
    void remove_RenderParamChanged(uDelegate* value);
    void Resume();
    ::g::Uno::Float4 Scale9Margin();
    void Scale9Margin(::g::Uno::Float4 value);
    void SetPlayback(uObject* playback);
    void SetProgress(double value, uObject* origin);
    void add_SourceChanged(uDelegate* value);
    void remove_SourceChanged(uDelegate* value);
    void Stop();
    int StretchDirection();
    void StretchDirection(int value);
    int StretchMode();
    void StretchMode(int value);
    int StretchSizing();
    void StretchSizing(int value);
    uString* Url();
    void Url(uString* value);
    void add_ValueChanged(uDelegate* value);
    void remove_ValueChanged(uDelegate* value);
    float Volume();
    void Volume(float value);
    static Video* New2();
    static void UpdateParam(Video* video);
    static void UpdateRenderParam(Video* video);
};
// }

}}} // ::g::Fuse::Controls
