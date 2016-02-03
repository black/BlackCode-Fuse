// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Layouts\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_LAYOUTS_DOCK_LAYOUT_H__
#define __APP_FUSE_LAYOUTS_DOCK_LAYOUT_H__

#include <app/Fuse.Layouts.Layout.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct PropertyHandle; } }
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Layouts {

struct DockLayout;

extern ::uStaticStrong< ::app::Fuse::PropertyHandle*> DockLayout___dockProperty;

struct DockLayout__uType : ::app::Fuse::Layouts::Layout__uType
{
};

DockLayout__uType* DockLayout__typeof();

void DockLayout___ObjInit_1(DockLayout* __this);
void DockLayout___TypeInit_1(::uStatic* __this);
void DockLayout__ArrangePaddingBox(DockLayout* __this, ::uObject* elements, ::app::Uno::Float4 padding, ::app::Uno::Float2 finalSize);
::app::Uno::Float2 DockLayout__GetContentSize(DockLayout* __this, ::uObject* elements, ::app::Uno::Float2 fillSize, int fillSet);
int DockLayout__GetDock(::uStatic* __this, ::app::Fuse::Node* elm);
::app::Uno::Float2 DockLayout__MeasureSubtree(DockLayout* __this, ::uObject* elements, int childIndex, ::app::Uno::Float2 fillSize, int fillSet);
DockLayout* DockLayout__New_1(::uStatic* __this);
void DockLayout__ResetDock(::uStatic* __this, ::app::Fuse::Node* elm);
void DockLayout__SetDock(::uStatic* __this, ::app::Fuse::Node* elm, int dock);

struct DockLayout : ::app::Fuse::Layouts::Layout
{
    void _ObjInit_1() { DockLayout___ObjInit_1(this); }
    ::app::Uno::Float2 MeasureSubtree(::uObject* elements, int childIndex, ::app::Uno::Float2 fillSize, int fillSet);
};

}}}

#include <app/Uno.Float2.h>
#include <app/Uno.Float4.h>

namespace app {
namespace Fuse {
namespace Layouts {

inline ::app::Uno::Float2 DockLayout::MeasureSubtree(::uObject* elements, int childIndex, ::app::Uno::Float2 fillSize, int fillSet) { return DockLayout__MeasureSubtree(this, elements, childIndex, fillSize, fillSet); }

}}}


#endif
