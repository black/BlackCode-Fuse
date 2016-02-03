// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.18.8\Layouts\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Layouts.Layout.h>
namespace g{namespace Fuse{namespace Layouts{struct StackLayout;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Layouts{

// public sealed class StackLayout :1627
// {
::g::Fuse::Layouts::Layout_type* StackLayout_typeof();
void StackLayout__ctor_1_fn(StackLayout* __this);
void StackLayout__ArrangePaddingBox_fn(StackLayout* __this, uObject* elements, ::g::Uno::Float4* padding, ::g::Uno::Float2* availableSize, int* flags);
void StackLayout__get_ContentAlignment_fn(StackLayout* __this, int* __retval);
void StackLayout__set_ContentAlignment_fn(StackLayout* __this, int* value);
void StackLayout__get_EffectiveContentAlignment_fn(StackLayout* __this, int* __retval);
void StackLayout__get_EffectiveItemSpacing_fn(StackLayout* __this, float* __retval);
void StackLayout__GetContentSize_fn(StackLayout* __this, uObject* elements, ::g::Uno::Float2* fillSize, int* fillSet, ::g::Uno::Float2* __retval);
void StackLayout__GetElementsSize_fn(StackLayout* __this, uObject* elements, ::g::Uno::Float2* fillSize, int* fillSet, ::g::Uno::Float2* __retval);
void StackLayout__get_ItemSpacing_fn(StackLayout* __this, float* __retval);
void StackLayout__set_ItemSpacing_fn(StackLayout* __this, float* value);
void StackLayout__New1_fn(StackLayout** __retval);
void StackLayout__get_Orientation_fn(StackLayout* __this, int* __retval);
void StackLayout__set_Orientation_fn(StackLayout* __this, int* value);
void StackLayout__ResetOrientation_fn(StackLayout* __this);

struct StackLayout : ::g::Fuse::Layouts::Layout
{
    int _contentAlignment;
    float _itemSpacing;
    int _orientation;

    void ctor_1();
    int ContentAlignment();
    void ContentAlignment(int value);
    int EffectiveContentAlignment();
    float EffectiveItemSpacing();
    ::g::Uno::Float2 GetElementsSize(uObject* elements, ::g::Uno::Float2 fillSize, int fillSet);
    float ItemSpacing();
    void ItemSpacing(float value);
    int Orientation();
    void Orientation(int value);
    void ResetOrientation();
    static StackLayout* New1();
};
// }

}}} // ::g::Fuse::Layouts
