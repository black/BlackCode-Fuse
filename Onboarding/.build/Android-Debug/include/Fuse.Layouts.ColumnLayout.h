// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\Layouts\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Layouts.Layout.h>
namespace g{namespace Fuse{namespace Layouts{struct ColumnLayout;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Layouts{

// public sealed class ColumnLayout :8
// {
::g::Fuse::Layouts::Layout_type* ColumnLayout_typeof();
void ColumnLayout__Arrange_fn(ColumnLayout* __this, uObject* nodes, ::g::Uno::Float2* fillSize, int* fillSet, ::g::Uno::Float2* offset, bool* doArrange, ::g::Uno::Float4* padding, ::g::Uno::Float2* availableSize, ::g::Uno::Float2* __retval);
void ColumnLayout__ArrangePaddingBox_fn(ColumnLayout* __this, uObject* nodes, ::g::Uno::Float4* padding, ::g::Uno::Float2* availableSize, int* flags);
void ColumnLayout__get_ColumnCount_fn(ColumnLayout* __this, int* __retval);
void ColumnLayout__set_ColumnCount_fn(ColumnLayout* __this, int* value);
void ColumnLayout__GetContentSize_fn(ColumnLayout* __this, uObject* nodes, ::g::Uno::Float2* fillSize, int* fillSet, ::g::Uno::Float2* __retval);
void ColumnLayout__LeastAt_fn(ColumnLayout* __this, uArray* c, int* __retval);
void ColumnLayout__Max_fn(ColumnLayout* __this, uArray* c, float* __retval);
void ColumnLayout__get_Orientation_fn(ColumnLayout* __this, int* __retval);
void ColumnLayout__set_Orientation_fn(ColumnLayout* __this, int* value);

struct ColumnLayout : ::g::Fuse::Layouts::Layout
{
    int _columnCount;
    int _orientation;

    ::g::Uno::Float2 Arrange(uObject* nodes, ::g::Uno::Float2 fillSize, int fillSet, ::g::Uno::Float2 offset, bool doArrange, ::g::Uno::Float4 padding, ::g::Uno::Float2 availableSize);
    int ColumnCount();
    void ColumnCount(int value);
    int LeastAt(uArray* c);
    float Max(uArray* c);
    int Orientation();
    void Orientation(int value);
};
// }

}}} // ::g::Fuse::Layouts
