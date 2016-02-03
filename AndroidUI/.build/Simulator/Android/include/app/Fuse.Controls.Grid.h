// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_GRID_H__
#define __APP_FUSE_CONTROLS_GRID_H__

#include <app/Fuse.Animations.IResize.h>
#include <app/Fuse.Controls.Panel.h>
#include <app/Fuse.IActualPlacement.h>
#include <app/Fuse.Navigation.INavigationPanel.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <app/Fuse.Triggers.Actions.ICollapse.h>
#include <app/Fuse.Triggers.Actions.IHide.h>
#include <app/Fuse.Triggers.Actions.IShow.h>
#include <app/Fuse.Triggers.IAddRemove__Fuse_Node.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Elements { struct Element; } } }
namespace app { namespace Fuse { namespace Layouts { struct GridLayout; } } }
namespace app { namespace Fuse { struct StyleProperty__Fuse_Controls_Grid__float; } }

namespace app {
namespace Fuse {
namespace Controls {

struct Grid;

extern ::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_Grid__float*> Grid__CellSpacingProperty;

struct Grid__uType : ::app::Fuse::Controls::Panel__uType
{
};

Grid__uType* Grid__typeof();

void Grid___ObjInit_4(Grid* __this);
void Grid___TypeInit_4(::uStatic* __this);
float Grid__get_CellSpacing(Grid* __this);
int Grid__get_ColumnCount(Grid* __this);
::uString* Grid__get_ColumnData(Grid* __this);
::uObject* Grid__get_ColumnList(Grid* __this);
::uString* Grid__get_Columns(Grid* __this);
::uString* Grid__get_DefaultColumn(Grid* __this);
::uString* Grid__get_DefaultRow(Grid* __this);
int Grid__get_RowCount(Grid* __this);
::uString* Grid__get_RowData(Grid* __this);
::uObject* Grid__get_RowList(Grid* __this);
::uString* Grid__get_Rows(Grid* __this);
int Grid__GetColumn(::uStatic* __this, ::app::Fuse::Elements::Element* elm);
int Grid__GetColumnSpan(::uStatic* __this, ::app::Fuse::Elements::Element* elm);
int Grid__GetRow(::uStatic* __this, ::app::Fuse::Elements::Element* elm);
int Grid__GetRowSpan(::uStatic* __this, ::app::Fuse::Elements::Element* elm);
Grid* Grid__New_2(::uStatic* __this);
void Grid__OnCellSpacingChanged(::uStatic* __this, Grid* p);
void Grid__ResetColumn(::uStatic* __this, ::app::Fuse::Elements::Element* elm);
void Grid__ResetColumnSpan(::uStatic* __this, ::app::Fuse::Elements::Element* elm);
void Grid__ResetRow(::uStatic* __this, ::app::Fuse::Elements::Element* elm);
void Grid__ResetRowSpan(::uStatic* __this, ::app::Fuse::Elements::Element* elm);
void Grid__set_CellSpacing(Grid* __this, float value);
void Grid__set_ColumnCount(Grid* __this, int value);
void Grid__set_ColumnData(Grid* __this, ::uString* value);
void Grid__set_Columns(Grid* __this, ::uString* value);
void Grid__set_DefaultColumn(Grid* __this, ::uString* value);
void Grid__set_DefaultRow(Grid* __this, ::uString* value);
void Grid__set_RowCount(Grid* __this, int value);
void Grid__set_RowData(Grid* __this, ::uString* value);
void Grid__set_Rows(Grid* __this, ::uString* value);
void Grid__SetColumn(::uStatic* __this, ::app::Fuse::Elements::Element* elm, int col);
void Grid__SetColumnSpan(::uStatic* __this, ::app::Fuse::Elements::Element* elm, int span);
void Grid__SetRow(::uStatic* __this, ::app::Fuse::Elements::Element* elm, int row);
void Grid__SetRowSpan(::uStatic* __this, ::app::Fuse::Elements::Element* elm, int span);

struct Grid : ::app::Fuse::Controls::Panel
{
    ::uStrong< ::app::Fuse::Layouts::GridLayout*> _gridLayout;

    void _ObjInit_4() { Grid___ObjInit_4(this); }
    float CellSpacing() { return Grid__get_CellSpacing(this); }
    int ColumnCount() { return Grid__get_ColumnCount(this); }
    ::uString* ColumnData() { return Grid__get_ColumnData(this); }
    ::uObject* ColumnList() { return Grid__get_ColumnList(this); }
    ::uString* Columns() { return Grid__get_Columns(this); }
    ::uString* DefaultColumn() { return Grid__get_DefaultColumn(this); }
    ::uString* DefaultRow() { return Grid__get_DefaultRow(this); }
    int RowCount() { return Grid__get_RowCount(this); }
    ::uString* RowData() { return Grid__get_RowData(this); }
    ::uObject* RowList() { return Grid__get_RowList(this); }
    ::uString* Rows() { return Grid__get_Rows(this); }
    void CellSpacing(float value) { Grid__set_CellSpacing(this, value); }
    void ColumnCount(int value) { Grid__set_ColumnCount(this, value); }
    void ColumnData(::uString* value) { Grid__set_ColumnData(this, value); }
    void Columns(::uString* value) { Grid__set_Columns(this, value); }
    void DefaultColumn(::uString* value) { Grid__set_DefaultColumn(this, value); }
    void DefaultRow(::uString* value) { Grid__set_DefaultRow(this, value); }
    void RowCount(int value) { Grid__set_RowCount(this, value); }
    void RowData(::uString* value) { Grid__set_RowData(this, value); }
    void Rows(::uString* value) { Grid__set_Rows(this, value); }
};

}}}


#endif
