// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANDROID_GRAPHICS_VIEW_H__
#define __APP_FUSE_ANDROID_GRAPHICS_VIEW_H__

#include <app/Fuse.Android.ParentView__Fuse_Controls_GraphicsView.h>
#include <Source/Graphics/GLHelper.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace view { struct Surface; } } } }
namespace app { namespace Android { namespace android { namespace view { struct View; } } } }
namespace app { namespace Android { namespace android { namespace widget { struct RelativeLayout; } } } }
namespace app { namespace Fuse { namespace Android { struct NativeView; } } }
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { struct EventArgs; } }

namespace app {
namespace Fuse {
namespace Android {

struct GraphicsView;

struct GraphicsView__uType : ::app::Fuse::Android::ParentView__Fuse_Controls_GraphicsView__uType
{
    ::app::Android::android::view::View*(*__fp_CreateGraphicsView)(GraphicsView*);
};

GraphicsView__uType* GraphicsView__typeof();

void GraphicsView___ObjInit_3(GraphicsView* __this);
void GraphicsView__Attach(GraphicsView* __this);
void GraphicsView__ChildRooted(GraphicsView* __this, ::app::Fuse::Android::NativeView* child);
void GraphicsView__ChildUnrooted(GraphicsView* __this, ::app::Fuse::Android::NativeView* child);
::app::Android::android::view::View* GraphicsView__CreateInternal(GraphicsView* __this);
void GraphicsView__Detach(GraphicsView* __this);
void GraphicsView__DrawFrame(GraphicsView* __this, ::uObject* sender, ::app::Uno::EventArgs* args);
GraphicsView* GraphicsView__Find(::uStatic* __this, ::app::Fuse::Node* node);
void GraphicsView__NotifyNewSize(GraphicsView* __this, ::app::Fuse::Android::NativeView* child);
void GraphicsView__OnResized(GraphicsView* __this, ::uObject* sender, ::app::Uno::EventArgs* args);
void GraphicsView__OnSurfaceCreated(GraphicsView* __this, ::app::Android::android::view::Surface* s);
void GraphicsView__OnSurfaceDestroyed(GraphicsView* __this);

struct GraphicsView : ::app::Fuse::Android::ParentView__Fuse_Controls_GraphicsView
{
    int rotationHackRedrawCount;
    ::uStrong< ::app::Android::android::widget::RelativeLayout*> _relativeLayout;
    ::uStrong< ::app::Fuse::DrawContext*> _dc;
    void* _eglSurface;
    ::uStrong< ::app::Android::android::view::Surface*> _surface;
    void* _nativeWindow;

    void _ObjInit_3() { GraphicsView___ObjInit_3(this); }
    ::app::Android::android::view::View* CreateGraphicsView() { return (((GraphicsView__uType*)this->__obj_type)->__fp_CreateGraphicsView)(this); }
    void DrawFrame(::uObject* sender, ::app::Uno::EventArgs* args) { GraphicsView__DrawFrame(this, sender, args); }
    void OnResized(::uObject* sender, ::app::Uno::EventArgs* args) { GraphicsView__OnResized(this, sender, args); }
    void OnSurfaceCreated(::app::Android::android::view::Surface* s) { GraphicsView__OnSurfaceCreated(this, s); }
    void OnSurfaceDestroyed() { GraphicsView__OnSurfaceDestroyed(this); }
};

}}}


#endif
