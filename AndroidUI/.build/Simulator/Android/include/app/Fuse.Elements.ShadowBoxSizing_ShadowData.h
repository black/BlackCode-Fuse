// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ELEMENTS_SHADOW_BOX_SIZING_SHADOW_DATA_H__
#define __APP_FUSE_ELEMENTS_SHADOW_BOX_SIZING_SHADOW_DATA_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Elements { struct Element; } } }

namespace app {
namespace Fuse {
namespace Elements {

struct ShadowBoxSizing_ShadowData;

struct ShadowBoxSizing_ShadowData__uType : ::uClassType
{
};

ShadowBoxSizing_ShadowData__uType* ShadowBoxSizing_ShadowData__typeof();

void ShadowBoxSizing_ShadowData___ObjInit(ShadowBoxSizing_ShadowData* __this);
void ShadowBoxSizing_ShadowData__CheckLayout(ShadowBoxSizing_ShadowData* __this);
::app::Fuse::Elements::Element* ShadowBoxSizing_ShadowData__get_Shadow(ShadowBoxSizing_ShadowData* __this);
ShadowBoxSizing_ShadowData* ShadowBoxSizing_ShadowData__New_1(::uStatic* __this);
void ShadowBoxSizing_ShadowData__OnLayoutChanged(ShadowBoxSizing_ShadowData* __this, ::uObject* s, ::uObject* args);
void ShadowBoxSizing_ShadowData__set_Shadow(ShadowBoxSizing_ShadowData* __this, ::app::Fuse::Elements::Element* value);

struct ShadowBoxSizing_ShadowData : ::uObject
{
    ::uStrong< ::app::Fuse::Elements::Element*> Element;
    ::uStrong< ::app::Fuse::Elements::Element*> _shadow;

    void _ObjInit() { ShadowBoxSizing_ShadowData___ObjInit(this); }
    void CheckLayout() { ShadowBoxSizing_ShadowData__CheckLayout(this); }
    ::app::Fuse::Elements::Element* Shadow() { return ShadowBoxSizing_ShadowData__get_Shadow(this); }
    void OnLayoutChanged(::uObject* s, ::uObject* args) { ShadowBoxSizing_ShadowData__OnLayoutChanged(this, s, args); }
    void Shadow(::app::Fuse::Elements::Element* value) { ShadowBoxSizing_ShadowData__set_Shadow(this, value); }
};

}}}


#endif
