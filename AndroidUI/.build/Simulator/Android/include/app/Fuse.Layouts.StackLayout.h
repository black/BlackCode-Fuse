// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Layouts\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_LAYOUTS_STACK_LAYOUT_H__
#define __APP_FUSE_LAYOUTS_STACK_LAYOUT_H__

#include <app/Fuse.Layouts.Layout.h>
#include <Uno.h>
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Layouts {

struct StackLayout;

struct StackLayout__uType : ::app::Fuse::Layouts::Layout__uType
{
};

StackLayout__uType* StackLayout__typeof();

void StackLayout___ObjInit_1(StackLayout* __this);
void StackLayout__ArrangePaddingBox(StackLayout* __this, ::uObject* elements, ::app::Uno::Float4 padding, ::app::Uno::Float2 availableSize);
float StackLayout__get_EffectiveItemSpacing(StackLayout* __this);
float StackLayout__get_ItemSpacing(StackLayout* __this);
int StackLayout__get_Orientation(StackLayout* __this);
::app::Uno::Float2 StackLayout__GetContentSize(StackLayout* __this, ::uObject* elements, ::app::Uno::Float2 fillSize, int fillSet);
::app::Uno::Float2 StackLayout__GetElementsSize(StackLayout* __this, ::uObject* elements, ::app::Uno::Float2 fillSize, int fillSet);
StackLayout* StackLayout__New_1(::uStatic* __this);
void StackLayout__ResetOrientation(StackLayout* __this);
void StackLayout__set_ItemSpacing(StackLayout* __this, float value);
void StackLayout__set_Orientation(StackLayout* __this, int value);

struct StackLayout : ::app::Fuse::Layouts::Layout
{
    int _orientation;
    float _itemSpacing;

    void _ObjInit_1() { StackLayout___ObjInit_1(this); }
    float EffectiveItemSpacing() { return StackLayout__get_EffectiveItemSpacing(this); }
    float ItemSpacing() { return StackLayout__get_ItemSpacing(this); }
    int Orientation() { return StackLayout__get_Orientation(this); }
    ::app::Uno::Float2 GetElementsSize(::uObject* elements, ::app::Uno::Float2 fillSize, int fillSet);
    void ResetOrientation() { StackLayout__ResetOrientation(this); }
    void ItemSpacing(float value) { StackLayout__set_ItemSpacing(this, value); }
    void Orientation(int value) { StackLayout__set_Orientation(this, value); }
};

}}}

#include <app/Uno.Float2.h>
#include <app/Uno.Float4.h>

namespace app {
namespace Fuse {
namespace Layouts {

inline ::app::Uno::Float2 StackLayout::GetElementsSize(::uObject* elements, ::app::Uno::Float2 fillSize, int fillSet) { return StackLayout__GetElementsSize(this, elements, fillSize, fillSet); }

}}}


#endif
