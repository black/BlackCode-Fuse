// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\Layouts\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Layouts.Layout.h>
namespace g{namespace Fuse{namespace Layouts{struct DockLayout;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct PropertyHandle;}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Layouts{

// public sealed class DockLayout :223
// {
::g::Fuse::Layouts::Layout_type* DockLayout_typeof();
void DockLayout__ctor_1_fn(DockLayout* __this);
void DockLayout__ArrangePaddingBox_fn(DockLayout* __this, uObject* elements, ::g::Uno::Float4* padding, ::g::Uno::Float2* finalSize, int* flags);
void DockLayout__GetContentSize_fn(DockLayout* __this, uObject* elements, ::g::Uno::Float2* fillSize, int* fillSet, ::g::Uno::Float2* __retval);
void DockLayout__GetDock_fn(::g::Fuse::Node* elm, int* __retval);
void DockLayout__MeasureSubtree_fn(DockLayout* __this, uObject* elements, int* childIndex, ::g::Uno::Float2* fillSize, int* fillSet, ::g::Uno::Float2* __retval);
void DockLayout__New1_fn(DockLayout** __retval);
void DockLayout__ResetDock_fn(::g::Fuse::Node* elm);
void DockLayout__SetDock_fn(::g::Fuse::Node* elm, int* dock);

struct DockLayout : ::g::Fuse::Layouts::Layout
{
    static uSStrong< ::g::Fuse::PropertyHandle*> _dockProperty_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _dockProperty() { return DockLayout_typeof()->Init(), _dockProperty_; }

    void ctor_1();
    ::g::Uno::Float2 MeasureSubtree(uObject* elements, int childIndex, ::g::Uno::Float2 fillSize, int fillSet);
    static int GetDock(::g::Fuse::Node* elm);
    static DockLayout* New1();
    static void ResetDock(::g::Fuse::Node* elm);
    static void SetDock(::g::Fuse::Node* elm, int dock);
};
// }

}}} // ::g::Fuse::Layouts
