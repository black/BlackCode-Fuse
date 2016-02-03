// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.Navigation.INavigationPanel.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.INameScope.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.IAddRemove-1.h>
namespace g{namespace Fuse{namespace Controls{struct Grid;}}}
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Layouts{struct Column;}}}
namespace g{namespace Fuse{namespace Layouts{struct GridLayout;}}}
namespace g{namespace Fuse{namespace Layouts{struct Row;}}}
namespace g{namespace Fuse{struct StyleProperty1;}}

namespace g{
namespace Fuse{
namespace Controls{

// public sealed class Grid :842
// {
::g::Fuse::Controls::Panel_type* Grid_typeof();
void Grid__ctor_4_fn(Grid* __this);
void Grid__get_CellSpacing_fn(Grid* __this, float* __retval);
void Grid__set_CellSpacing_fn(Grid* __this, float* value);
void Grid__get_ColumnCount_fn(Grid* __this, int* __retval);
void Grid__set_ColumnCount_fn(Grid* __this, int* value);
void Grid__get_ColumnData_fn(Grid* __this, uString** __retval);
void Grid__set_ColumnData_fn(Grid* __this, uString* value);
void Grid__get_ColumnList_fn(Grid* __this, uObject** __retval);
void Grid__get_Columns_fn(Grid* __this, uString** __retval);
void Grid__set_Columns_fn(Grid* __this, uString* value);
void Grid__get_ContentAlignment_fn(Grid* __this, int* __retval);
void Grid__set_ContentAlignment_fn(Grid* __this, int* value);
void Grid__get_DefaultColumn_fn(Grid* __this, uString** __retval);
void Grid__set_DefaultColumn_fn(Grid* __this, uString* value);
void Grid__get_DefaultRow_fn(Grid* __this, uString** __retval);
void Grid__set_DefaultRow_fn(Grid* __this, uString* value);
void Grid__GetColumn_fn(::g::Fuse::Elements::Element* elm, int* __retval);
void Grid__GetColumnSpan_fn(::g::Fuse::Elements::Element* elm, int* __retval);
void Grid__GetRow_fn(::g::Fuse::Elements::Element* elm, int* __retval);
void Grid__GetRowSpan_fn(::g::Fuse::Elements::Element* elm, int* __retval);
void Grid__New2_fn(Grid** __retval);
void Grid__OnCellSpacingChanged_fn(Grid* p);
void Grid__OnContentAlignmentChanged_fn(Grid* p);
void Grid__ResetColumn_fn(::g::Fuse::Elements::Element* elm);
void Grid__ResetColumnSpan_fn(::g::Fuse::Elements::Element* elm);
void Grid__ResetRow_fn(::g::Fuse::Elements::Element* elm);
void Grid__ResetRowSpan_fn(::g::Fuse::Elements::Element* elm);
void Grid__get_RowCount_fn(Grid* __this, int* __retval);
void Grid__set_RowCount_fn(Grid* __this, int* value);
void Grid__get_RowData_fn(Grid* __this, uString** __retval);
void Grid__set_RowData_fn(Grid* __this, uString* value);
void Grid__get_RowList_fn(Grid* __this, uObject** __retval);
void Grid__get_Rows_fn(Grid* __this, uString** __retval);
void Grid__set_Rows_fn(Grid* __this, uString* value);
void Grid__SetColumn_fn(::g::Fuse::Elements::Element* elm, int* col);
void Grid__SetColumnSpan_fn(::g::Fuse::Elements::Element* elm, int* span);
void Grid__SetRow_fn(::g::Fuse::Elements::Element* elm, int* row);
void Grid__SetRowSpan_fn(::g::Fuse::Elements::Element* elm, int* span);

struct Grid : ::g::Fuse::Controls::Panel
{
    uStrong< ::g::Fuse::Layouts::GridLayout*> _gridLayout;
    static uSStrong< ::g::Fuse::StyleProperty1*> CellSpacingProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& CellSpacingProperty() { return Grid_typeof()->Init(), CellSpacingProperty_; }
    static uSStrong< ::g::Fuse::StyleProperty1*> ContentAlignmentProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& ContentAlignmentProperty() { return Grid_typeof()->Init(), ContentAlignmentProperty_; }

    void ctor_4();
    float CellSpacing();
    void CellSpacing(float value);
    int ColumnCount();
    void ColumnCount(int value);
    uString* ColumnData();
    void ColumnData(uString* value);
    uObject* ColumnList();
    uString* Columns();
    void Columns(uString* value);
    int ContentAlignment();
    void ContentAlignment(int value);
    uString* DefaultColumn();
    void DefaultColumn(uString* value);
    uString* DefaultRow();
    void DefaultRow(uString* value);
    int RowCount();
    void RowCount(int value);
    uString* RowData();
    void RowData(uString* value);
    uObject* RowList();
    uString* Rows();
    void Rows(uString* value);
    static int GetColumn(::g::Fuse::Elements::Element* elm);
    static int GetColumnSpan(::g::Fuse::Elements::Element* elm);
    static int GetRow(::g::Fuse::Elements::Element* elm);
    static int GetRowSpan(::g::Fuse::Elements::Element* elm);
    static Grid* New2();
    static void OnCellSpacingChanged(Grid* p);
    static void OnContentAlignmentChanged(Grid* p);
    static void ResetColumn(::g::Fuse::Elements::Element* elm);
    static void ResetColumnSpan(::g::Fuse::Elements::Element* elm);
    static void ResetRow(::g::Fuse::Elements::Element* elm);
    static void ResetRowSpan(::g::Fuse::Elements::Element* elm);
    static void SetColumn(::g::Fuse::Elements::Element* elm, int col);
    static void SetColumnSpan(::g::Fuse::Elements::Element* elm, int span);
    static void SetRow(::g::Fuse::Elements::Element* elm, int row);
    static void SetRowSpan(::g::Fuse::Elements::Element* elm, int span);
};
// }

}}} // ::g::Fuse::Controls
