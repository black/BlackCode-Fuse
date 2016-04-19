// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\Layouts\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{struct Panel;}}}
namespace g{namespace Fuse{namespace Layouts{struct Layout;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct PropertyHandle;}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Layouts{

// public abstract class Layout :1412
// {
struct Layout_type : uType
{
    void(*fp_ArrangePaddingBox)(::g::Fuse::Layouts::Layout*, uObject*, ::g::Uno::Float4*, ::g::Uno::Float2*, int*);
    void(*fp_GetContentSize)(::g::Fuse::Layouts::Layout*, uObject*, ::g::Uno::Float2*, int*, ::g::Uno::Float2*);
    void(*fp_IsMarginBoxDependent)(::g::Fuse::Layouts::Layout*, ::g::Fuse::Node*, int*);
};

Layout_type* Layout_typeof();
void Layout__ctor__fn(Layout* __this);
void Layout__AffectsLayout_fn(Layout* __this, ::g::Fuse::Node* n, bool* __retval);
void Layout__ArrangeMarginBoxSpecial_fn(Layout* __this, ::g::Fuse::Node* e, ::g::Uno::Float4* padding, ::g::Uno::Float2* size, int* flags, bool* __retval);
void Layout__AssignZOrder_fn(uObject* nodes);
void Layout__GetFillPadding_fn(::g::Fuse::Node* n, bool* __retval);
void Layout__InvalidateLayout_fn(Layout* __this);
void Layout__IsMarginBoxDependent_fn(Layout* __this, ::g::Fuse::Node* child, int* __retval);
void Layout__RemoveContainer_fn(Layout* __this, ::g::Fuse::Controls::Panel* element);
void Layout__SetContainer_fn(Layout* __this, ::g::Fuse::Controls::Panel* element);
void Layout__Snap_fn(Layout* __this, float* p, float* __retval);
void Layout__Snap1_fn(Layout* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval);
void Layout__get_SnapToPixels_fn(Layout* __this, bool* __retval);
void Layout__SnapUp_fn(Layout* __this, float* p, float* __retval);
void Layout__SnapUp1_fn(Layout* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval);

struct Layout : uObject
{
    static uSStrong< ::g::Fuse::PropertyHandle*> _fillPaddingProperty_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _fillPaddingProperty() { return Layout_typeof()->Init(), _fillPaddingProperty_; }
    uStrong< ::g::Fuse::Controls::Panel*> Container;

    void ctor_();
    bool AffectsLayout(::g::Fuse::Node* n);
    bool ArrangeMarginBoxSpecial(::g::Fuse::Node* e, ::g::Uno::Float4 padding, ::g::Uno::Float2 size, int flags);
    void ArrangePaddingBox(uObject* elements, ::g::Uno::Float4 padding, ::g::Uno::Float2 availableSize, int flags);
    ::g::Uno::Float2 GetContentSize(uObject* elements, ::g::Uno::Float2 fillSize, int fillSet);
    void InvalidateLayout();
    int IsMarginBoxDependent(::g::Fuse::Node* child) { int __retval; return (((Layout_type*)__type)->fp_IsMarginBoxDependent)(this, child, &__retval), __retval; }
    void RemoveContainer(::g::Fuse::Controls::Panel* element);
    void SetContainer(::g::Fuse::Controls::Panel* element);
    float Snap(float p);
    ::g::Uno::Float2 Snap1(::g::Uno::Float2 p);
    bool SnapToPixels();
    float SnapUp(float p);
    ::g::Uno::Float2 SnapUp1(::g::Uno::Float2 p);
    static void AssignZOrder(uObject* nodes);
    static bool GetFillPadding(::g::Fuse::Node* n);
    static int IsMarginBoxDependent(Layout* __this, ::g::Fuse::Node* child) { int __retval; return Layout__IsMarginBoxDependent_fn(__this, child, &__retval), __retval; }
};

}}} // ::g::Fuse::Layouts

#include <Uno.Float2.h>
#include <Uno.Float4.h>

namespace g{
namespace Fuse{
namespace Layouts{

inline void Layout::ArrangePaddingBox(uObject* elements, ::g::Uno::Float4 padding, ::g::Uno::Float2 availableSize, int flags) { (((Layout_type*)__type)->fp_ArrangePaddingBox)(this, elements, &padding, &availableSize, &flags); }
inline ::g::Uno::Float2 Layout::GetContentSize(uObject* elements, ::g::Uno::Float2 fillSize, int fillSet) { ::g::Uno::Float2 __retval; return (((Layout_type*)__type)->fp_GetContentSize)(this, elements, &fillSize, &fillSet, &__retval), __retval; }
// }

}}} // ::g::Fuse::Layouts
