// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Layouts\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_LAYOUTS_GRID_LAYOUT_H__
#define __APP_FUSE_LAYOUTS_GRID_LAYOUT_H__

#include <app/Fuse.Layouts.Layout.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Layouts { struct Column; } } }
namespace app { namespace Fuse { namespace Layouts { struct Row; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct PropertyHandle; } }
namespace app { namespace Uno { namespace Collections { struct ObservableList__Fuse_Layouts_Column; } } }
namespace app { namespace Uno { namespace Collections { struct ObservableList__Fuse_Layouts_Row; } } }
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Layouts {

struct GridLayout;

extern ::uStaticStrong< ::app::Fuse::PropertyHandle*> GridLayout___actualColumnProperty;
extern ::uStaticStrong< ::app::Fuse::PropertyHandle*> GridLayout___actualRowProperty;
extern ::uStaticStrong< ::app::Fuse::PropertyHandle*> GridLayout___columnProperty;
extern ::uStaticStrong< ::app::Fuse::PropertyHandle*> GridLayout___columnSpanProperty;
extern ::uStaticStrong< ::app::Fuse::PropertyHandle*> GridLayout___rowProperty;
extern ::uStaticStrong< ::app::Fuse::PropertyHandle*> GridLayout___rowSpanProperty;
extern ::uStaticStrong< ::app::Fuse::Layouts::Column*> GridLayout___staticDefaultColumn;
extern ::uStaticStrong< ::app::Fuse::Layouts::Row*> GridLayout___staticDefaultRow;

struct GridLayout__uType : ::app::Fuse::Layouts::Layout__uType
{
};

GridLayout__uType* GridLayout__typeof();

void GridLayout___ObjInit_1(GridLayout* __this);
void GridLayout___TypeInit_1(::uStatic* __this);
void GridLayout__ArrangePaddingBox(GridLayout* __this, ::uObject* elements, ::app::Uno::Float4 padding, ::app::Uno::Float2 availableSize);
void GridLayout__Changed(GridLayout* __this);
void GridLayout__ColumnAdded(GridLayout* __this, ::app::Fuse::Layouts::Column* c);
void GridLayout__ColumnRemoved(GridLayout* __this, ::app::Fuse::Layouts::Column* c);
::app::Fuse::Layouts::Column* GridLayout__GenDefaultColumn(GridLayout* __this);
::app::Fuse::Layouts::Row* GridLayout__GenDefaultRow(GridLayout* __this);
float GridLayout__get_CellSpacing(GridLayout* __this);
int GridLayout__get_ColumnCount(GridLayout* __this);
::uString* GridLayout__get_ColumnData(GridLayout* __this);
::uObject* GridLayout__get_ColumnList(GridLayout* __this);
::uString* GridLayout__get_Columns(GridLayout* __this);
::uString* GridLayout__get_DefaultColumn(GridLayout* __this);
::uString* GridLayout__get_DefaultRow(GridLayout* __this);
float GridLayout__get_EffectiveCellSpacing(GridLayout* __this);
int GridLayout__get_RowCount(GridLayout* __this);
::uString* GridLayout__get_RowData(GridLayout* __this);
::uObject* GridLayout__get_RowList(GridLayout* __this);
::uString* GridLayout__get_Rows(GridLayout* __this);
int GridLayout__GetActualColumn(GridLayout* __this, ::app::Fuse::Node* elm);
void GridLayout__GetActualPositions(GridLayout* __this, ::uObject* elements);
int GridLayout__GetActualRow(GridLayout* __this, ::app::Fuse::Node* elm);
int GridLayout__GetColumn(::uStatic* __this, ::app::Fuse::Node* elm);
::app::Fuse::Layouts::Column* GridLayout__GetColumns(GridLayout* __this, int column);
int GridLayout__GetColumnSpan(::uStatic* __this, ::app::Fuse::Node* elm);
::app::Uno::Float2 GridLayout__GetContentSize(GridLayout* __this, ::uObject* elements, ::app::Uno::Float2 fillSize, int fillSet);
int GridLayout__GetRow(::uStatic* __this, ::app::Fuse::Node* elm);
::app::Fuse::Layouts::Row* GridLayout__GetRows(GridLayout* __this, int row);
int GridLayout__GetRowSpan(::uStatic* __this, ::app::Fuse::Node* elm);
int GridLayout__IsMarginBoxDependent(GridLayout* __this, ::app::Fuse::Node* child);
::app::Uno::Float2 GridLayout__Measure(GridLayout* __this, ::uObject* elements, ::app::Uno::Float2 fillSize, int fillSet);
GridLayout* GridLayout__New_1(::uStatic* __this);
void GridLayout__ResetColumn(::uStatic* __this, ::app::Fuse::Node* elm);
void GridLayout__ResetColumnSpan(::uStatic* __this, ::app::Fuse::Node* elm);
void GridLayout__ResetRow(::uStatic* __this, ::app::Fuse::Node* elm);
void GridLayout__ResetRowSpan(::uStatic* __this, ::app::Fuse::Node* elm);
void GridLayout__RowAdded(GridLayout* __this, ::app::Fuse::Layouts::Row* r);
void GridLayout__RowRemoved(GridLayout* __this, ::app::Fuse::Layouts::Row* r);
void GridLayout__set_CellSpacing(GridLayout* __this, float value);
void GridLayout__set_ColumnCount(GridLayout* __this, int value);
void GridLayout__set_ColumnData(GridLayout* __this, ::uString* value);
void GridLayout__set_Columns(GridLayout* __this, ::uString* value);
void GridLayout__set_DefaultColumn(GridLayout* __this, ::uString* value);
void GridLayout__set_DefaultRow(GridLayout* __this, ::uString* value);
void GridLayout__set_RowCount(GridLayout* __this, int value);
void GridLayout__set_RowData(GridLayout* __this, ::uString* value);
void GridLayout__set_Rows(GridLayout* __this, ::uString* value);
void GridLayout__SetColumn(::uStatic* __this, ::app::Fuse::Node* elm, int col);
void GridLayout__SetColumnSpan(::uStatic* __this, ::app::Fuse::Node* elm, int span);
void GridLayout__SetRow(::uStatic* __this, ::app::Fuse::Node* elm, int row);
void GridLayout__SetRowSpan(::uStatic* __this, ::app::Fuse::Node* elm, int span);

struct GridLayout : ::app::Fuse::Layouts::Layout
{
    ::uStrong< ::app::Fuse::Layouts::Row*> _defaultRow;
    ::uStrong< ::app::Fuse::Layouts::Column*> _defaultColumn;
    float _cellSpacing;
    ::uStrong< ::app::Uno::Collections::ObservableList__Fuse_Layouts_Row*> _rows;
    ::uStrong< ::app::Uno::Collections::ObservableList__Fuse_Layouts_Column*> _columns;

    void _ObjInit_1() { GridLayout___ObjInit_1(this); }
    void Changed() { GridLayout__Changed(this); }
    void ColumnAdded(::app::Fuse::Layouts::Column* c) { GridLayout__ColumnAdded(this, c); }
    void ColumnRemoved(::app::Fuse::Layouts::Column* c) { GridLayout__ColumnRemoved(this, c); }
    ::app::Fuse::Layouts::Column* GenDefaultColumn() { return GridLayout__GenDefaultColumn(this); }
    ::app::Fuse::Layouts::Row* GenDefaultRow() { return GridLayout__GenDefaultRow(this); }
    float CellSpacing() { return GridLayout__get_CellSpacing(this); }
    int ColumnCount() { return GridLayout__get_ColumnCount(this); }
    ::uString* ColumnData() { return GridLayout__get_ColumnData(this); }
    ::uObject* ColumnList() { return GridLayout__get_ColumnList(this); }
    ::uString* Columns() { return GridLayout__get_Columns(this); }
    ::uString* DefaultColumn() { return GridLayout__get_DefaultColumn(this); }
    ::uString* DefaultRow() { return GridLayout__get_DefaultRow(this); }
    float EffectiveCellSpacing() { return GridLayout__get_EffectiveCellSpacing(this); }
    int RowCount() { return GridLayout__get_RowCount(this); }
    ::uString* RowData() { return GridLayout__get_RowData(this); }
    ::uObject* RowList() { return GridLayout__get_RowList(this); }
    ::uString* Rows() { return GridLayout__get_Rows(this); }
    int GetActualColumn(::app::Fuse::Node* elm) { return GridLayout__GetActualColumn(this, elm); }
    void GetActualPositions(::uObject* elements) { GridLayout__GetActualPositions(this, elements); }
    int GetActualRow(::app::Fuse::Node* elm) { return GridLayout__GetActualRow(this, elm); }
    ::app::Fuse::Layouts::Column* GetColumns(int column) { return GridLayout__GetColumns(this, column); }
    ::app::Fuse::Layouts::Row* GetRows(int row) { return GridLayout__GetRows(this, row); }
    ::app::Uno::Float2 Measure(::uObject* elements, ::app::Uno::Float2 fillSize, int fillSet);
    void RowAdded(::app::Fuse::Layouts::Row* r) { GridLayout__RowAdded(this, r); }
    void RowRemoved(::app::Fuse::Layouts::Row* r) { GridLayout__RowRemoved(this, r); }
    void CellSpacing(float value) { GridLayout__set_CellSpacing(this, value); }
    void ColumnCount(int value) { GridLayout__set_ColumnCount(this, value); }
    void ColumnData(::uString* value) { GridLayout__set_ColumnData(this, value); }
    void Columns(::uString* value) { GridLayout__set_Columns(this, value); }
    void DefaultColumn(::uString* value) { GridLayout__set_DefaultColumn(this, value); }
    void DefaultRow(::uString* value) { GridLayout__set_DefaultRow(this, value); }
    void RowCount(int value) { GridLayout__set_RowCount(this, value); }
    void RowData(::uString* value) { GridLayout__set_RowData(this, value); }
    void Rows(::uString* value) { GridLayout__set_Rows(this, value); }
};

}}}

#include <app/Uno.Float2.h>
#include <app/Uno.Float4.h>

namespace app {
namespace Fuse {
namespace Layouts {

inline ::app::Uno::Float2 GridLayout::Measure(::uObject* elements, ::app::Uno::Float2 fillSize, int fillSet) { return GridLayout__Measure(this, elements, fillSize, fillSet); }

}}}


#endif
