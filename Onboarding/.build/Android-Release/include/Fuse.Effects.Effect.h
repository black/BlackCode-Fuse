// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.19.3\Effects\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Effects{struct Effect;}}}
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Uno{struct Rect;}}

namespace g{
namespace Fuse{
namespace Effects{

// public abstract class Effect :18
// {
struct Effect_type : uType
{
    void(*fp_get_Active)(::g::Fuse::Effects::Effect*, bool*);
    void(*fp_ModifyRenderBounds)(::g::Fuse::Effects::Effect*, ::g::Uno::Rect*, ::g::Uno::Rect*);
    void(*fp_Render)(::g::Fuse::Effects::Effect*, ::g::Fuse::DrawContext*);
};

Effect_type* Effect_typeof();
void Effect__ctor__fn(Effect* __this, int* effectType);
void Effect__get_Active_fn(Effect* __this, bool* __retval);
void Effect__Added_fn(Effect* __this, ::g::Fuse::Elements::Element* elm);
void Effect__get_Element_fn(Effect* __this, ::g::Fuse::Elements::Element** __retval);
void Effect__set_Element_fn(Effect* __this, ::g::Fuse::Elements::Element* value);
void Effect__ModifyRenderBounds_fn(Effect* __this, ::g::Uno::Rect* inBounds, ::g::Uno::Rect* __retval);
void Effect__OnRenderBoundsChanged_fn(Effect* __this);
void Effect__OnRenderingChanged_fn(Effect* __this);
void Effect__OnRooted_fn(Effect* __this);
void Effect__OnUnrooted_fn(Effect* __this);
void Effect__Removed_fn(Effect* __this, ::g::Fuse::Elements::Element* elm);
void Effect__add_RenderBoundsChanged_fn(Effect* __this, uDelegate* value);
void Effect__remove_RenderBoundsChanged_fn(Effect* __this, uDelegate* value);
void Effect__add_RenderingChanged_fn(Effect* __this, uDelegate* value);
void Effect__remove_RenderingChanged_fn(Effect* __this, uDelegate* value);
void Effect__Rooted_fn(Effect* __this);
void Effect__get_Type_fn(Effect* __this, int* __retval);
void Effect__Unrooted_fn(Effect* __this);

struct Effect : uObject
{
    int _effectType;
    bool _isRooted;
    bool AddedByStyle;
    uStrong< ::g::Fuse::Elements::Element*> _Element;
    uStrong<uDelegate*> RenderBoundsChanged1;
    uStrong<uDelegate*> RenderingChanged1;

    void ctor_(int effectType);
    bool Active() { bool __retval; return (((Effect_type*)__type)->fp_get_Active)(this, &__retval), __retval; }
    void Added(::g::Fuse::Elements::Element* elm);
    ::g::Fuse::Elements::Element* Element();
    void Element(::g::Fuse::Elements::Element* value);
    ::g::Uno::Rect ModifyRenderBounds(::g::Uno::Rect inBounds);
    void OnRenderBoundsChanged();
    void OnRenderingChanged();
    void OnRooted();
    void OnUnrooted();
    void Removed(::g::Fuse::Elements::Element* elm);
    void Render(::g::Fuse::DrawContext* dc) { (((Effect_type*)__type)->fp_Render)(this, dc); }
    void add_RenderBoundsChanged(uDelegate* value);
    void remove_RenderBoundsChanged(uDelegate* value);
    void add_RenderingChanged(uDelegate* value);
    void remove_RenderingChanged(uDelegate* value);
    void Rooted();
    int Type();
    void Unrooted();
    static ::g::Uno::Rect ModifyRenderBounds(Effect* __this, ::g::Uno::Rect inBounds);
    static bool Active(Effect* __this) { bool __retval; return Effect__get_Active_fn(__this, &__retval), __retval; }
};

}}} // ::g::Fuse::Effects

#include <Uno.Rect.h>

namespace g{
namespace Fuse{
namespace Effects{

inline ::g::Uno::Rect Effect::ModifyRenderBounds(::g::Uno::Rect inBounds) { ::g::Uno::Rect __retval; return (((Effect_type*)__type)->fp_ModifyRenderBounds)(this, &inBounds, &__retval), __retval; }
inline ::g::Uno::Rect Effect::ModifyRenderBounds(Effect* __this, ::g::Uno::Rect inBounds) { ::g::Uno::Rect __retval; return Effect__ModifyRenderBounds_fn(__this, &inBounds, &__retval), __retval; }
// }

}}} // ::g::Fuse::Effects
