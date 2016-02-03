// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Video\0.18.8\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Graphics.ControlVisual-1.h>
#include <Fuse.Controls.Video.h>
#include <Fuse.Scripting.INameScope.h>
#include <Uno.Float2.h>
#include <Uno.Float4.h>
#include <Uno.Int2.h>
namespace g{namespace Fuse{namespace Internal{struct SizingContainer;}}}
namespace g{namespace Fuse{namespace Video{struct VideoContainer;}}}
namespace g{namespace Fuse{namespace Video{struct VideoVisual;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct HitTestContext;}}
namespace g{namespace Uno{struct EventArgs;}}

namespace g{
namespace Fuse{
namespace Video{

// public sealed extern class VideoVisual :644
// {
::g::Fuse::Controls::Graphics::ControlVisual_type* VideoVisual_typeof();
void VideoVisual__ctor_3_fn(VideoVisual* __this);
void VideoVisual__Attach_fn(VideoVisual* __this);
void VideoVisual__Detach_fn(VideoVisual* __this);
void VideoVisual__GetMarginSize_fn(VideoVisual* __this, ::g::Uno::Float2* fillSize, int* fillSet, ::g::Uno::Float2* __retval);
void VideoVisual__GetSize_fn(VideoVisual* __this, ::g::Uno::Float2* __retval);
void VideoVisual__New1_fn(VideoVisual** __retval);
void VideoVisual__OnArrangeMarginBox_fn(VideoVisual* __this, ::g::Uno::Float2* position, ::g::Uno::Float2* availableSize, int* fillSet, ::g::Uno::Float2* __retval);
void VideoVisual__OnCompleted_fn(VideoVisual* __this, uObject* sender, ::g::Uno::EventArgs* args);
void VideoVisual__OnDraw_fn(VideoVisual* __this, ::g::Fuse::DrawContext* dc);
void VideoVisual__OnError_fn(VideoVisual* __this, uObject* sender, uString* msg);
void VideoVisual__OnFrameAvailable_fn(VideoVisual* __this, uObject* sender, ::g::Uno::EventArgs* args);
void VideoVisual__OnHitTest_fn(VideoVisual* __this, ::g::Fuse::HitTestContext* htc);
void VideoVisual__OnLoading_fn(VideoVisual* __this, uObject* sender, ::g::Uno::EventArgs* args);
void VideoVisual__OnParamChanged_fn(VideoVisual* __this, uObject* sender, ::g::Uno::EventArgs* args);
void VideoVisual__OnPaused_fn(VideoVisual* __this, uObject* sender, ::g::Uno::EventArgs* args);
void VideoVisual__OnPrepared_fn(VideoVisual* __this, uObject* sender, ::g::Uno::EventArgs* args);
void VideoVisual__OnRenderParamChanged_fn(VideoVisual* __this, uObject* sender, ::g::Uno::EventArgs* args);
void VideoVisual__OnSourceChanged_fn(VideoVisual* __this, uObject* sender, ::g::Uno::EventArgs* args);
void VideoVisual__OnStarted_fn(VideoVisual* __this, uObject* sender, ::g::Uno::EventArgs* args);
void VideoVisual__OnStopped_fn(VideoVisual* __this, uObject* sender, ::g::Uno::EventArgs* args);
void VideoVisual__OnUpdate_fn(VideoVisual* __this, uObject* sender, ::g::Uno::EventArgs* args);
void VideoVisual__ResetTriggers_fn(VideoVisual* __this);

struct VideoVisual : ::g::Fuse::Controls::Graphics::ControlVisual
{
    ::g::Uno::Float2 _drawOrigin;
    ::g::Uno::Float2 _drawSize;
    ::g::Uno::Float2 _origin;
    ::g::Uno::Float2 _scale;
    ::g::Uno::Int2 _sizeCache;
    uStrong< ::g::Fuse::Internal::SizingContainer*> _sizing;
    ::g::Uno::Float4 _uvClip;
    uStrong< ::g::Fuse::Video::VideoContainer*> _videoContainer;

    void ctor_3();
    ::g::Uno::Float2 GetSize();
    void OnCompleted(uObject* sender, ::g::Uno::EventArgs* args);
    void OnError(uObject* sender, uString* msg);
    void OnFrameAvailable(uObject* sender, ::g::Uno::EventArgs* args);
    void OnLoading(uObject* sender, ::g::Uno::EventArgs* args);
    void OnParamChanged(uObject* sender, ::g::Uno::EventArgs* args);
    void OnPaused(uObject* sender, ::g::Uno::EventArgs* args);
    void OnPrepared(uObject* sender, ::g::Uno::EventArgs* args);
    void OnRenderParamChanged(uObject* sender, ::g::Uno::EventArgs* args);
    void OnSourceChanged(uObject* sender, ::g::Uno::EventArgs* args);
    void OnStarted(uObject* sender, ::g::Uno::EventArgs* args);
    void OnStopped(uObject* sender, ::g::Uno::EventArgs* args);
    void OnUpdate(uObject* sender, ::g::Uno::EventArgs* args);
    void ResetTriggers();
    static VideoVisual* New1();
};
// }

}}} // ::g::Fuse::Video
