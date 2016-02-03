// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.BasicTheme\0.11.3\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_BASIC_THEME_BASIC_STYLE_TEMPLATE1_H__
#define __APP_FUSE_BASIC_THEME_BASIC_STYLE_TEMPLATE1_H__

#include <app/Uno.UX.ITemplate.h>
#include <app/Uno.UX.Template__Fuse_Controls_NavigationBar.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace BasicTheme { struct BasicStyle; } } }
namespace app { namespace Fuse { namespace BasicTheme { struct BasicStyle_Fuse_Drawing_SolidColor_float4_Color_Property; } } }
namespace app { namespace Fuse { namespace Controls { struct NavigationBar; } } }

namespace app {
namespace Fuse {
namespace BasicTheme {

struct BasicStyle_Template1;

struct BasicStyle_Template1__uType : ::app::Uno::UX::Template__Fuse_Controls_NavigationBar__uType
{
};

BasicStyle_Template1__uType* BasicStyle_Template1__typeof();

void BasicStyle_Template1___ObjInit_1(BasicStyle_Template1* __this, ::app::Fuse::BasicTheme::BasicStyle* parent);
BasicStyle_Template1* BasicStyle_Template1__New_1(::uStatic* __this, ::app::Fuse::BasicTheme::BasicStyle* parent);
void BasicStyle_Template1__OnApply(BasicStyle_Template1* __this, ::app::Fuse::Controls::NavigationBar* self);

struct BasicStyle_Template1 : ::app::Uno::UX::Template__Fuse_Controls_NavigationBar
{
    ::uStrong< ::app::Fuse::BasicTheme::BasicStyle*> __parent;
    ::uStrong< ::app::Fuse::BasicTheme::BasicStyle_Fuse_Drawing_SolidColor_float4_Color_Property*> _navigationBarFill_Color_inst;

    void _ObjInit_1(::app::Fuse::BasicTheme::BasicStyle* parent) { BasicStyle_Template1___ObjInit_1(this, parent); }
};

}}}


#endif
