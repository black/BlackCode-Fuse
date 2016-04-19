// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\Layouts\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Layouts.Layout.h>
namespace g{namespace Fuse{namespace Layouts{struct Column;}}}
namespace g{namespace Fuse{namespace Layouts{struct GridLayout;}}}
namespace g{namespace Fuse{namespace Layouts{struct Row;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct PropertyHandle;}}
namespace g{namespace Uno{namespace Collections{struct ObservableList;}}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Layouts{

// public sealed class GridLayout :657
// {
::g::Fuse::Layouts::Layout_type* GridLayout_typeof();
void GridLayout__ArrangePaddingBox_fn(GridLayout* __this, uObject* elements, ::g::Uno::Float4* padding, ::g::Uno::Float2* availableSize, int* flags);
void GridLayout__get_CellSpacing_fn(GridLayout* __this, float* __retval);
void GridLayout__set_CellSpacing_fn(GridLayout* __this, float* value);
void GridLayout__Changed_fn(GridLayout* __this);
void GridLayout__get_ColumnList_fn(GridLayout* __this, uObject** __retval);
void GridLayout__get_ContentAlignment_fn(GridLayout* __this, int* __retval);
void GridLayout__set_ContentAlignment_fn(GridLayout* __this, int* value);
void GridLayout__get_EffectiveCellSpacing_fn(GridLayout* __this, float* __retval);
void GridLayout__get_EffectiveContentAlignment_fn(GridLayout* __this, int* __retval);
void GridLayout__GenDefaultColumn_fn(GridLayout* __this, ::g::Fuse::Layouts::Column** __retval);
void GridLayout__GenDefaultRow_fn(GridLayout* __this, ::g::Fuse::Layouts::Row** __retval);
void GridLayout__GetActualColumn_fn(GridLayout* __this, ::g::Fuse::Node* elm, int* __retval);
void GridLayout__GetActualPositions_fn(GridLayout* __this, uObject* elements);
void GridLayout__GetActualRow_fn(GridLayout* __this, ::g::Fuse::Node* elm, int* __retval);
void GridLayout__GetColumn_fn(::g::Fuse::Node* elm, int* __retval);
void GridLayout__GetColumns_fn(GridLayout* __this, int* column, ::g::Fuse::Layouts::Column** __retval);
void GridLayout__GetColumnSpan_fn(::g::Fuse::Node* elm, int* __retval);
void GridLayout__GetContentSize_fn(GridLayout* __this, uObject* elements, ::g::Uno::Float2* fillSize, int* fillSet, ::g::Uno::Float2* __retval);
void GridLayout__GetRows_fn(GridLayout* __this, int* row, ::g::Fuse::Layouts::Row** __retval);
void GridLayout__GetRowSpan_fn(::g::Fuse::Node* elm, int* __retval);
void GridLayout__IsMarginBoxDependent_fn(GridLayout* __this, ::g::Fuse::Node* child, int* __retval);
void GridLayout__Measure_fn(GridLayout* __this, uObject* elements, ::g::Uno::Float2* fillSize, int* fillSet, ::g::Uno::Float2* __retval);
void GridLayout__get_RowList_fn(GridLayout* __this, uObject** __retval);

struct GridLayout : ::g::Fuse::Layouts::Layout
{
    static uSStrong< ::g::Fuse::PropertyHandle*> _actualColumnProperty_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _actualColumnProperty() { return GridLayout_typeof()->Init(), _actualColumnProperty_; }
    static uSStrong< ::g::Fuse::PropertyHandle*> _actualRowProperty_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _actualRowProperty() { return GridLayout_typeof()->Init(), _actualRowProperty_; }
    float _cellSpacing;
    static uSStrong< ::g::Fuse::PropertyHandle*> _columnProperty_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _columnProperty() { return GridLayout_typeof()->Init(), _columnProperty_; }
    uStrong< ::g::Uno::Collections::ObservableList*> _columns;
    static uSStrong< ::g::Fuse::PropertyHandle*> _columnSpanProperty_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _columnSpanProperty() { return GridLayout_typeof()->Init(), _columnSpanProperty_; }
    int _contentAlignment;
    uStrong< ::g::Fuse::Layouts::Column*> _defaultColumn;
    uStrong< ::g::Fuse::Layouts::Row*> _defaultRow;
    static uSStrong< ::g::Fuse::PropertyHandle*> _rowProperty_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _rowProperty() { return GridLayout_typeof()->Init(), _rowProperty_; }
    uStrong< ::g::Uno::Collections::ObservableList*> _rows;
    static uSStrong< ::g::Fuse::PropertyHandle*> _rowSpanProperty_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _rowSpanProperty() { return GridLayout_typeof()->Init(), _rowSpanProperty_; }
    static uSStrong< ::g::Fuse::Layouts::Column*> _staticDefaultColumn_;
    static uSStrong< ::g::Fuse::Layouts::Column*>& _staticDefaultColumn() { return GridLayout_typeof()->Init(), _staticDefaultColumn_; }
    static uSStrong< ::g::Fuse::Layouts::Row*> _staticDefaultRow_;
    static uSStrong< ::g::Fuse::Layouts::Row*>& _staticDefaultRow() { return GridLayout_typeof()->Init(), _staticDefaultRow_; }

    float CellSpacing();
    void CellSpacing(float value);
    void Changed();
    uObject* ColumnList();
    int ContentAlignment();
    void ContentAlignment(int value);
    float EffectiveCellSpacing();
    int EffectiveContentAlignment();
    ::g::Fuse::Layouts::Column* GenDefaultColumn();
    ::g::Fuse::Layouts::Row* GenDefaultRow();
    int GetActualColumn(::g::Fuse::Node* elm);
    void GetActualPositions(uObject* elements);
    int GetActualRow(::g::Fuse::Node* elm);
    ::g::Fuse::Layouts::Column* GetColumns(int column);
    ::g::Fuse::Layouts::Row* GetRows(int row);
    ::g::Uno::Float2 Measure(uObject* elements, ::g::Uno::Float2 fillSize, int fillSet);
    uObject* RowList();
    static int GetColumn(::g::Fuse::Node* elm);
    static int GetColumnSpan(::g::Fuse::Node* elm);
    static int GetRowSpan(::g::Fuse::Node* elm);
};
// }

}}} // ::g::Fuse::Layouts
