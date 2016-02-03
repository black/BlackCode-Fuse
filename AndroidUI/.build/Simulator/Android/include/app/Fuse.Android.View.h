// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANDROID_VIEW_H__
#define __APP_FUSE_ANDROID_VIEW_H__

#include <app/Fuse.Node.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <app/Uno.Float2.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace view { struct View; } } } }
namespace app { namespace Fuse { namespace Android { struct NativeView; } } }
namespace app { namespace Fuse { struct FastMatrix; } }
namespace app { namespace Fuse { struct HitTestContext; } }
namespace app { namespace Fuse { struct NodeBounds; } }
namespace app { namespace Uno { struct Float4; } }
namespace app { namespace Uno { struct Rect; } }

namespace app {
namespace Fuse {
namespace Android {

struct View;

struct View__uType : ::app::Fuse::Node__uType
{
    ::app::Uno::Float4(*__fp_AdjustLayout)(View*, ::app::Uno::Float2, ::app::Uno::Float2);
    ::app::Android::android::view::View*(*__fp_Create)(View*);
    ::app::Android::android::view::View*(*__fp_CreateInternal)(View*);
};

View__uType* View__typeof();

void View___ObjInit_1(View* __this);
::app::Uno::Float4 View__AdjustLayout(View* __this, ::app::Uno::Float2 position, ::app::Uno::Float2 size);
::app::Android::android::view::View* View__Create(View* __this);
::app::Uno::Float2 View__get_ActualSize(View* __this);
::app::Fuse::NodeBounds* View__get_HitTestLocalBounds(View* __this);
::app::Uno::Rect View__get_LocalRenderBounds(View* __this);
::app::Fuse::Android::NativeView* View__get_NativeView(View* __this);
::app::Uno::Float2 View__get_Position(View* __this);
::app::Uno::Float2 View__GetMarginSize(View* __this, ::app::Uno::Float2 fillSize, int fillSet);
bool View__IsPointInside(View* __this, ::app::Uno::Float2 localPoint);
::app::Uno::Float2 View__OnArrangeMarginBox(View* __this, ::app::Uno::Float2 position, ::app::Uno::Float2 availableSize, int availSet);
void View__OnHitTest(View* __this, ::app::Fuse::HitTestContext* htc);
void View__PrependImplicitTransform(View* __this, ::app::Fuse::FastMatrix* m);
void View__set_ActualSize(View* __this, ::app::Uno::Float2 value);
void View__set_Position(View* __this, ::app::Uno::Float2 value);

struct View : ::app::Fuse::Node
{
    ::app::Uno::Float2 _ActualSize;
    ::app::Uno::Float2 _Position;

    void _ObjInit_1() { View___ObjInit_1(this); }
    ::app::Uno::Float4 AdjustLayout(::app::Uno::Float2 position, ::app::Uno::Float2 size);
    ::app::Android::android::view::View* Create() { return (((View__uType*)this->__obj_type)->__fp_Create)(this); }
    ::app::Android::android::view::View* CreateInternal() { return (((View__uType*)this->__obj_type)->__fp_CreateInternal)(this); }
    ::app::Uno::Float2 ActualSize();
    ::app::Fuse::Android::NativeView* NativeView() { return View__get_NativeView(this); }
    ::app::Uno::Float2 Position();
    bool IsPointInside(::app::Uno::Float2 localPoint);
    void ActualSize(::app::Uno::Float2 value);
    void Position(::app::Uno::Float2 value);
};

}}}

#include <app/Uno.Float4.h>
#include <app/Uno.Rect.h>

namespace app {
namespace Fuse {
namespace Android {

inline ::app::Uno::Float4 View::AdjustLayout(::app::Uno::Float2 position, ::app::Uno::Float2 size) { return (((View__uType*)this->__obj_type)->__fp_AdjustLayout)(this, position, size); }
inline ::app::Uno::Float2 View::ActualSize() { return View__get_ActualSize(this); }
inline ::app::Uno::Float2 View::Position() { return View__get_Position(this); }
inline bool View::IsPointInside(::app::Uno::Float2 localPoint) { return View__IsPointInside(this, localPoint); }
inline void View::ActualSize(::app::Uno::Float2 value) { View__set_ActualSize(this, value); }
inline void View::Position(::app::Uno::Float2 value) { View__set_Position(this, value); }

}}}


#endif
