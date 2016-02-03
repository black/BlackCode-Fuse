// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_VIEWBOX_H__
#define __APP_FUSE_CONTROLS_VIEWBOX_H__

#include <app/Fuse.Animations.IResize.h>
#include <app/Fuse.Controls.ContentControl.h>
#include <app/Fuse.IActualPlacement.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <app/Fuse.Triggers.Actions.ICollapse.h>
#include <app/Fuse.Triggers.Actions.IHide.h>
#include <app/Fuse.Triggers.Actions.IShow.h>
#include <app/Uno.Float2.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Elements { struct Element; } } }
namespace app { namespace Fuse { namespace Internal { struct SizingContainer; } } }
namespace app { namespace Fuse { struct FastMatrix; } }

namespace app {
namespace Fuse {
namespace Controls {

struct Viewbox;

struct Viewbox__uType : ::app::Fuse::Controls::ContentControl__uType
{
};

Viewbox__uType* Viewbox__typeof();

void Viewbox___ObjInit_4(Viewbox* __this);
void Viewbox__ArrangePaddingBox(Viewbox* __this, ::app::Uno::Float2 size);
::app::Fuse::Elements::Element* Viewbox__get_Content_1(Viewbox* __this);
int Viewbox__get_StretchDirection(Viewbox* __this);
int Viewbox__get_StretchMode(Viewbox* __this);
::app::Uno::Float2 Viewbox__GetContentSize(Viewbox* __this, ::app::Uno::Float2 fillSize, int fillSet);
::app::Uno::Float2 Viewbox__GetNaturalContentSize(Viewbox* __this);
Viewbox* Viewbox__New_2(::uStatic* __this);
void Viewbox__OnApplyStyle(Viewbox* __this, ::uObject* target);
void Viewbox__OnSizingChanged(Viewbox* __this);
void Viewbox__PrependImplicitTransform(Viewbox* __this, ::app::Fuse::FastMatrix* m);
void Viewbox__set_Content_1(Viewbox* __this, ::app::Fuse::Elements::Element* value);
void Viewbox__set_StretchDirection(Viewbox* __this, int value);
void Viewbox__set_StretchMode(Viewbox* __this, int value);

struct Viewbox : ::app::Fuse::Controls::ContentControl
{
    ::uStrong< ::app::Fuse::Internal::SizingContainer*> sizing;
    ::app::Uno::Float2 _scale;

    void _ObjInit_4() { Viewbox___ObjInit_4(this); }
    ::app::Fuse::Elements::Element* Content_1() { return Viewbox__get_Content_1(this); }
    int StretchDirection() { return Viewbox__get_StretchDirection(this); }
    int StretchMode() { return Viewbox__get_StretchMode(this); }
    ::app::Uno::Float2 GetNaturalContentSize() { return Viewbox__GetNaturalContentSize(this); }
    void OnSizingChanged() { Viewbox__OnSizingChanged(this); }
    void Content_1(::app::Fuse::Elements::Element* value) { Viewbox__set_Content_1(this, value); }
    void StretchDirection(int value) { Viewbox__set_StretchDirection(this, value); }
    void StretchMode(int value) { Viewbox__set_StretchMode(this, value); }
};

}}}


#endif
