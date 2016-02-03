// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android\0.18.8\NativeViews\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Android.NativeViews.ParentNativeView-1.h>
#include <Fuse.Controls.GraphicsView.h>
#include <Source/Graphics/GLHelper.h>
namespace g{namespace Android{namespace android{namespace view{struct Surface;}}}}
namespace g{namespace Android{namespace android{namespace view{struct View;}}}}
namespace g{namespace Android{namespace android{namespace widget{struct RelativeLayout;}}}}
namespace g{namespace Fuse{namespace Android{namespace NativeViews{struct GraphicsView;}}}}
namespace g{namespace Fuse{namespace Android{namespace NativeViews{struct NativeView;}}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{struct EventArgs;}}

namespace g{
namespace Fuse{
namespace Android{
namespace NativeViews{

// public abstract extern class GraphicsView :75
// {
struct GraphicsView_type : ::g::Fuse::Android::NativeViews::ParentNativeView_type
{
    void(*fp_CreateGraphicsView)(::g::Fuse::Android::NativeViews::GraphicsView*, ::g::Android::android::view::View**);
};

GraphicsView_type* GraphicsView_typeof();
void GraphicsView__ctor_3_fn(GraphicsView* __this);
void GraphicsView__Attach_fn(GraphicsView* __this);
void GraphicsView__ChildRooted_fn(GraphicsView* __this, ::g::Fuse::Android::NativeViews::NativeView* child);
void GraphicsView__ChildUnrooted_fn(GraphicsView* __this, ::g::Fuse::Android::NativeViews::NativeView* child);
void GraphicsView__CreateInternal_fn(GraphicsView* __this, ::g::Android::android::view::View** __retval);
void GraphicsView__Detach_fn(GraphicsView* __this);
void GraphicsView__DrawFrame_fn(GraphicsView* __this, uObject* sender, ::g::Uno::EventArgs* args);
void GraphicsView__Find_fn(::g::Fuse::Node* node, GraphicsView** __retval);
void GraphicsView__NotifyNewSize_fn(GraphicsView* __this, ::g::Fuse::Android::NativeViews::NativeView* child);
void GraphicsView__OnResized_fn(GraphicsView* __this, uObject* sender, ::g::Uno::EventArgs* args);
void GraphicsView__OnSurfaceCreated_fn(GraphicsView* __this, ::g::Android::android::view::Surface* s);
void GraphicsView__OnSurfaceDestroyed_fn(GraphicsView* __this);

struct GraphicsView : ::g::Fuse::Android::NativeViews::ParentNativeView
{
    uStrong< ::g::Fuse::DrawContext*> _dc;
    void* _eglSurface;
    void* _nativeWindow;
    uStrong< ::g::Android::android::widget::RelativeLayout*> _relativeLayout;
    uStrong< ::g::Android::android::view::Surface*> _surface;
    int rotationHackRedrawCount;

    void ctor_3();
    ::g::Android::android::view::View* CreateGraphicsView() { ::g::Android::android::view::View* __retval; return (((GraphicsView_type*)__type)->fp_CreateGraphicsView)(this, &__retval), __retval; }
    void DrawFrame(uObject* sender, ::g::Uno::EventArgs* args);
    void OnResized(uObject* sender, ::g::Uno::EventArgs* args);
    void OnSurfaceCreated(::g::Android::android::view::Surface* s);
    void OnSurfaceDestroyed();
    static GraphicsView* Find(::g::Fuse::Node* node);
};
// }

}}}} // ::g::Fuse::Android::NativeViews
