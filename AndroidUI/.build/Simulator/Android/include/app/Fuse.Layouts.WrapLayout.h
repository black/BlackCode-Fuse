// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Layouts\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_LAYOUTS_WRAP_LAYOUT_H__
#define __APP_FUSE_LAYOUTS_WRAP_LAYOUT_H__

#include <app/Fuse.Layouts.Layout.h>
#include <Uno.h>
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Layouts {

struct WrapLayout;

struct WrapLayout__uType : ::app::Fuse::Layouts::Layout__uType
{
};

WrapLayout__uType* WrapLayout__typeof();

void WrapLayout___ObjInit_1(WrapLayout* __this);
void WrapLayout__ArrangePaddingBox(WrapLayout* __this, ::uObject* elements, ::app::Uno::Float4 padding, ::app::Uno::Float2 availableSize);
int WrapLayout__get_FlowDirection(WrapLayout* __this);
::uString* WrapLayout__get_ID(WrapLayout* __this);
float WrapLayout__get_ItemHeight(WrapLayout* __this);
float WrapLayout__get_ItemWidth(WrapLayout* __this);
int WrapLayout__get_Orientation(WrapLayout* __this);
::app::Uno::Float2 WrapLayout__GetContentSize(WrapLayout* __this, ::uObject* elements, ::app::Uno::Float2 fillSize, int fillSet);
WrapLayout* WrapLayout__New_1(::uStatic* __this);
void WrapLayout__set_FlowDirection(WrapLayout* __this, int value);
void WrapLayout__set_ID(WrapLayout* __this, ::uString* value);
void WrapLayout__set_ItemHeight(WrapLayout* __this, float value);
void WrapLayout__set_ItemWidth(WrapLayout* __this, float value);
void WrapLayout__set_Orientation(WrapLayout* __this, int value);

struct WrapLayout : ::app::Fuse::Layouts::Layout
{
    bool _hasItemHeight;
    float _itemHeight;
    bool _hasItemWidth;
    float _itemWidth;
    bool _hasOrientation;
    int _orientation;
    bool _hasFlowDirection;
    int _flowDirection;
    ::uStrong< ::uString*> _ID;

    void _ObjInit_1() { WrapLayout___ObjInit_1(this); }
    int FlowDirection() { return WrapLayout__get_FlowDirection(this); }
    ::uString* ID() { return WrapLayout__get_ID(this); }
    float ItemHeight() { return WrapLayout__get_ItemHeight(this); }
    float ItemWidth() { return WrapLayout__get_ItemWidth(this); }
    int Orientation() { return WrapLayout__get_Orientation(this); }
    void FlowDirection(int value) { WrapLayout__set_FlowDirection(this, value); }
    void ID(::uString* value) { WrapLayout__set_ID(this, value); }
    void ItemHeight(float value) { WrapLayout__set_ItemHeight(this, value); }
    void ItemWidth(float value) { WrapLayout__set_ItemWidth(this, value); }
    void Orientation(int value) { WrapLayout__set_Orientation(this, value); }
};

}}}


#endif
