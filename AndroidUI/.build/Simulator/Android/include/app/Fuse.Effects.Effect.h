// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.11.3\Effects\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_EFFECTS_EFFECT_H__
#define __APP_FUSE_EFFECTS_EFFECT_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Elements { struct Element; } } }
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Uno { struct Rect; } }

namespace app {
namespace Fuse {
namespace Effects {

struct Effect;

struct Effect__uType : ::uClassType
{
    bool(*__fp_get_Active)(Effect*);
    ::app::Uno::Rect(*__fp_ModifyRenderBounds)(Effect*, ::app::Uno::Rect);
    void(*__fp_Render)(Effect*, ::app::Fuse::DrawContext*);
};

Effect__uType* Effect__typeof();

void Effect___ObjInit(Effect* __this, int effectType);
void Effect__add_RenderBoundsChanged(Effect* __this, ::uDelegate* value);
void Effect__add_RenderingChanged(Effect* __this, ::uDelegate* value);
void Effect__Added(Effect* __this, ::app::Fuse::Elements::Element* elm);
bool Effect__get_Active(Effect* __this);
::app::Fuse::Elements::Element* Effect__get_Element(Effect* __this);
int Effect__get_Type(Effect* __this);
::app::Uno::Rect Effect__ModifyRenderBounds(Effect* __this, ::app::Uno::Rect inBounds);
void Effect__OnRenderBoundsChanged(Effect* __this);
void Effect__OnRenderingChanged(Effect* __this);
void Effect__OnRooted(Effect* __this);
void Effect__OnUnrooted(Effect* __this);
void Effect__remove_RenderBoundsChanged(Effect* __this, ::uDelegate* value);
void Effect__remove_RenderingChanged(Effect* __this, ::uDelegate* value);
void Effect__Removed(Effect* __this, ::app::Fuse::Elements::Element* elm);
void Effect__Rooted(Effect* __this);
void Effect__set_Element(Effect* __this, ::app::Fuse::Elements::Element* value);
void Effect__Unrooted(Effect* __this);

struct Effect : ::uObject
{
    int _effectType;
    bool AddedByStyle;
    bool _isRooted;
    ::uStrong< ::uDelegate*> RenderingChanged;
    ::uStrong< ::uDelegate*> RenderBoundsChanged;
    ::uStrong< ::app::Fuse::Elements::Element*> _Element;

    void _ObjInit(int effectType) { Effect___ObjInit(this, effectType); }
    void add_RenderBoundsChanged(::uDelegate* value) { Effect__add_RenderBoundsChanged(this, value); }
    void add_RenderingChanged(::uDelegate* value) { Effect__add_RenderingChanged(this, value); }
    void Added(::app::Fuse::Elements::Element* elm) { Effect__Added(this, elm); }
    bool Active() { return (((Effect__uType*)this->__obj_type)->__fp_get_Active)(this); }
    ::app::Fuse::Elements::Element* Element() { return Effect__get_Element(this); }
    int Type() { return Effect__get_Type(this); }
    ::app::Uno::Rect ModifyRenderBounds(::app::Uno::Rect inBounds);
    void OnRenderBoundsChanged() { Effect__OnRenderBoundsChanged(this); }
    void OnRenderingChanged() { Effect__OnRenderingChanged(this); }
    void OnRooted() { Effect__OnRooted(this); }
    void OnUnrooted() { Effect__OnUnrooted(this); }
    void remove_RenderBoundsChanged(::uDelegate* value) { Effect__remove_RenderBoundsChanged(this, value); }
    void remove_RenderingChanged(::uDelegate* value) { Effect__remove_RenderingChanged(this, value); }
    void Removed(::app::Fuse::Elements::Element* elm) { Effect__Removed(this, elm); }
    void Render(::app::Fuse::DrawContext* dc) { (((Effect__uType*)this->__obj_type)->__fp_Render)(this, dc); }
    void Rooted() { Effect__Rooted(this); }
    void Element(::app::Fuse::Elements::Element* value) { Effect__set_Element(this, value); }
    void Unrooted() { Effect__Unrooted(this); }
};

}}}

#include <app/Uno.Rect.h>

namespace app {
namespace Fuse {
namespace Effects {

inline ::app::Uno::Rect Effect::ModifyRenderBounds(::app::Uno::Rect inBounds) { return (((Effect__uType*)this->__obj_type)->__fp_ModifyRenderBounds)(this, inBounds); }

}}}


#endif
