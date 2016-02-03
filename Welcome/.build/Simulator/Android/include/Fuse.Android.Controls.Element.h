// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\Controls\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Node.h>
#include <Fuse.Scripting.INameScope.h>
#include <Uno.Float2.h>
namespace g{namespace Android{namespace android{namespace view{struct View;}}}}
namespace g{namespace Fuse{namespace Android{namespace Controls{struct Element;}}}}
namespace g{namespace Fuse{namespace Android{namespace NativeViews{struct NativeView;}}}}
namespace g{namespace Fuse{struct FastMatrix;}}
namespace g{namespace Fuse{struct HitTestContext;}}
namespace g{namespace Fuse{struct NodeBounds;}}
namespace g{namespace Uno{struct Float4;}}
namespace g{namespace Uno{struct Rect;}}

namespace g{
namespace Fuse{
namespace Android{
namespace Controls{

// public abstract extern class Element :600
// {
struct Element_type : ::g::Fuse::Node_type
{
    void(*fp_AdjustLayout)(::g::Fuse::Android::Controls::Element*, ::g::Uno::Float2*, ::g::Uno::Float2*, ::g::Uno::Float4*);
    void(*fp_Create)(::g::Fuse::Android::Controls::Element*, ::g::Android::android::view::View**);
    void(*fp_CreateInternal)(::g::Fuse::Android::Controls::Element*, ::g::Android::android::view::View**);
};

Element_type* Element_typeof();
void Element__ctor_1_fn(Element* __this);
void Element__get_ActualSize_fn(Element* __this, ::g::Uno::Float2* __retval);
void Element__set_ActualSize_fn(Element* __this, ::g::Uno::Float2* value);
void Element__AdjustLayout_fn(Element* __this, ::g::Uno::Float2* position, ::g::Uno::Float2* size, ::g::Uno::Float4* __retval);
void Element__Create_fn(Element* __this, ::g::Android::android::view::View** __retval);
void Element__GetMarginSize_fn(Element* __this, ::g::Uno::Float2* fillSize, int* fillSet, ::g::Uno::Float2* __retval);
void Element__get_HitTestLocalBounds_fn(Element* __this, ::g::Fuse::NodeBounds** __retval);
void Element__IsPointInside_fn(Element* __this, ::g::Uno::Float2* localPoint, bool* __retval);
void Element__get_LocalRenderBounds_fn(Element* __this, ::g::Uno::Rect* __retval);
void Element__get_NativeView_fn(Element* __this, ::g::Fuse::Android::NativeViews::NativeView** __retval);
void Element__OnArrangeMarginBox_fn(Element* __this, ::g::Uno::Float2* position, ::g::Uno::Float2* availableSize, int* availSet, ::g::Uno::Float2* __retval);
void Element__OnHitTest_fn(Element* __this, ::g::Fuse::HitTestContext* htc);
void Element__get_Position_fn(Element* __this, ::g::Uno::Float2* __retval);
void Element__set_Position_fn(Element* __this, ::g::Uno::Float2* value);
void Element__PrependImplicitTransform_fn(Element* __this, ::g::Fuse::FastMatrix* m);

struct Element : ::g::Fuse::Node
{
    ::g::Uno::Float2 _ActualSize;
    ::g::Uno::Float2 _Position;

    void ctor_1();
    ::g::Uno::Float2 ActualSize();
    void ActualSize(::g::Uno::Float2 value);
    ::g::Uno::Float4 AdjustLayout(::g::Uno::Float2 position, ::g::Uno::Float2 size);
    ::g::Android::android::view::View* Create() { ::g::Android::android::view::View* __retval; return (((Element_type*)__type)->fp_Create)(this, &__retval), __retval; }
    ::g::Android::android::view::View* CreateInternal() { ::g::Android::android::view::View* __retval; return (((Element_type*)__type)->fp_CreateInternal)(this, &__retval), __retval; }
    bool IsPointInside(::g::Uno::Float2 localPoint);
    ::g::Fuse::Android::NativeViews::NativeView* NativeView();
    ::g::Uno::Float2 Position();
    void Position(::g::Uno::Float2 value);
    static ::g::Uno::Float4 AdjustLayout(Element* __this, ::g::Uno::Float2 position, ::g::Uno::Float2 size);
    static ::g::Android::android::view::View* Create(Element* __this) { ::g::Android::android::view::View* __retval; return Element__Create_fn(__this, &__retval), __retval; }
};

}}}} // ::g::Fuse::Android::Controls

#include <Uno.Float4.h>
#include <Uno.Rect.h>

namespace g{
namespace Fuse{
namespace Android{
namespace Controls{

inline ::g::Uno::Float4 Element::AdjustLayout(::g::Uno::Float2 position, ::g::Uno::Float2 size) { ::g::Uno::Float4 __retval; return (((Element_type*)__type)->fp_AdjustLayout)(this, &position, &size, &__retval), __retval; }
inline ::g::Uno::Float4 Element::AdjustLayout(Element* __this, ::g::Uno::Float2 position, ::g::Uno::Float2 size) { ::g::Uno::Float4 __retval; return Element__AdjustLayout_fn(__this, &position, &size, &__retval), __retval; }
// }

}}}} // ::g::Fuse::Android::Controls
