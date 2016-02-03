// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Layouts\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_LAYOUTS_COLUMN_LAYOUT_H__
#define __APP_FUSE_LAYOUTS_COLUMN_LAYOUT_H__

#include <app/Fuse.Layouts.Layout.h>
#include <Uno.h>
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Layouts {

struct ColumnLayout;

struct ColumnLayout__uType : ::app::Fuse::Layouts::Layout__uType
{
};

ColumnLayout__uType* ColumnLayout__typeof();

void ColumnLayout___ObjInit_1(ColumnLayout* __this);
::app::Uno::Float2 ColumnLayout__Arrange(ColumnLayout* __this, ::uObject* nodes, ::app::Uno::Float2 fillSize, int fillSet, ::app::Uno::Float2 offset, bool doArrange, ::app::Uno::Float4 padding, ::app::Uno::Float2 availableSize);
void ColumnLayout__ArrangePaddingBox(ColumnLayout* __this, ::uObject* nodes, ::app::Uno::Float4 padding, ::app::Uno::Float2 availableSize);
int ColumnLayout__get_ColumnCount(ColumnLayout* __this);
int ColumnLayout__get_Orientation(ColumnLayout* __this);
::app::Uno::Float2 ColumnLayout__GetContentSize(ColumnLayout* __this, ::uObject* nodes, ::app::Uno::Float2 fillSize, int fillSet);
int ColumnLayout__LeastAt(ColumnLayout* __this, ::uArray* c);
float ColumnLayout__Max(ColumnLayout* __this, ::uArray* c);
ColumnLayout* ColumnLayout__New_1(::uStatic* __this);
void ColumnLayout__set_ColumnCount(ColumnLayout* __this, int value);
void ColumnLayout__set_Orientation(ColumnLayout* __this, int value);

struct ColumnLayout : ::app::Fuse::Layouts::Layout
{
    int _orientation;
    int _columnCount;

    void _ObjInit_1() { ColumnLayout___ObjInit_1(this); }
    ::app::Uno::Float2 Arrange(::uObject* nodes, ::app::Uno::Float2 fillSize, int fillSet, ::app::Uno::Float2 offset, bool doArrange, ::app::Uno::Float4 padding, ::app::Uno::Float2 availableSize);
    int ColumnCount() { return ColumnLayout__get_ColumnCount(this); }
    int Orientation() { return ColumnLayout__get_Orientation(this); }
    int LeastAt(::uArray* c) { return ColumnLayout__LeastAt(this, c); }
    float Max(::uArray* c) { return ColumnLayout__Max(this, c); }
    void ColumnCount(int value) { ColumnLayout__set_ColumnCount(this, value); }
    void Orientation(int value) { ColumnLayout__set_Orientation(this, value); }
};

}}}

#include <app/Uno.Float2.h>
#include <app/Uno.Float4.h>

namespace app {
namespace Fuse {
namespace Layouts {

inline ::app::Uno::Float2 ColumnLayout::Arrange(::uObject* nodes, ::app::Uno::Float2 fillSize, int fillSet, ::app::Uno::Float2 offset, bool doArrange, ::app::Uno::Float4 padding, ::app::Uno::Float2 availableSize) { return ColumnLayout__Arrange(this, nodes, fillSize, fillSet, offset, doArrange, padding, availableSize); }

}}}


#endif
