// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.18.8\Layouts\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Layouts.Layout.h>
namespace g{namespace Fuse{namespace Layouts{struct WrapLayout;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Layouts{

// public sealed class WrapLayout :1850
// {
::g::Fuse::Layouts::Layout_type* WrapLayout_typeof();
void WrapLayout__ctor_1_fn(WrapLayout* __this);
void WrapLayout__ArrangePaddingBox_fn(WrapLayout* __this, uObject* elements, ::g::Uno::Float4* padding, ::g::Uno::Float2* availableSize, int* flags);
void WrapLayout__get_FlowDirection_fn(WrapLayout* __this, int* __retval);
void WrapLayout__set_FlowDirection_fn(WrapLayout* __this, int* value);
void WrapLayout__GetContentSize_fn(WrapLayout* __this, uObject* elements, ::g::Uno::Float2* fillSize, int* fillSet, ::g::Uno::Float2* __retval);
void WrapLayout__get_ID_fn(WrapLayout* __this, uString** __retval);
void WrapLayout__set_ID_fn(WrapLayout* __this, uString* value);
void WrapLayout__get_ItemHeight_fn(WrapLayout* __this, float* __retval);
void WrapLayout__set_ItemHeight_fn(WrapLayout* __this, float* value);
void WrapLayout__get_ItemWidth_fn(WrapLayout* __this, float* __retval);
void WrapLayout__set_ItemWidth_fn(WrapLayout* __this, float* value);
void WrapLayout__New1_fn(WrapLayout** __retval);
void WrapLayout__get_Orientation_fn(WrapLayout* __this, int* __retval);
void WrapLayout__set_Orientation_fn(WrapLayout* __this, int* value);

struct WrapLayout : ::g::Fuse::Layouts::Layout
{
    int _flowDirection;
    bool _hasFlowDirection;
    bool _hasItemHeight;
    bool _hasItemWidth;
    bool _hasOrientation;
    float _itemHeight;
    float _itemWidth;
    int _orientation;
    uStrong<uString*> _ID;

    void ctor_1();
    int FlowDirection();
    void FlowDirection(int value);
    uString* ID();
    void ID(uString* value);
    float ItemHeight();
    void ItemHeight(float value);
    float ItemWidth();
    void ItemWidth(float value);
    int Orientation();
    void Orientation(int value);
    static WrapLayout* New1();
};
// }

}}} // ::g::Fuse::Layouts
