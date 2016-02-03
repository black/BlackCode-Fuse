// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.BasicTheme\0.11.3\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_BASIC_THEME_BASIC_STYLE_TEMPLATE_H__
#define __APP_FUSE_BASIC_THEME_BASIC_STYLE_TEMPLATE_H__

#include <app/Uno.UX.ITemplate.h>
#include <app/Uno.UX.Template__Fuse_Controls_BackButton.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace BasicTheme { struct BasicStyle; } } }
namespace app { namespace Fuse { namespace BasicTheme { struct BasicStyle_Fuse_Drawing_SolidColor_float4_Color_Property; } } }
namespace app { namespace Fuse { namespace Controls { struct BackButton; } } }

namespace app {
namespace Fuse {
namespace BasicTheme {

struct BasicStyle_Template;

struct BasicStyle_Template__uType : ::app::Uno::UX::Template__Fuse_Controls_BackButton__uType
{
};

BasicStyle_Template__uType* BasicStyle_Template__typeof();

void BasicStyle_Template___ObjInit_1(BasicStyle_Template* __this, ::app::Fuse::BasicTheme::BasicStyle* parent);
BasicStyle_Template* BasicStyle_Template__New_1(::uStatic* __this, ::app::Fuse::BasicTheme::BasicStyle* parent);
void BasicStyle_Template__OnApply(BasicStyle_Template* __this, ::app::Fuse::Controls::BackButton* self);

struct BasicStyle_Template : ::app::Uno::UX::Template__Fuse_Controls_BackButton
{
    ::uStrong< ::app::Fuse::BasicTheme::BasicStyle*> __parent;
    ::uStrong< ::app::Fuse::BasicTheme::BasicStyle_Fuse_Drawing_SolidColor_float4_Color_Property*> temp_Color_inst;

    void _ObjInit_1(::app::Fuse::BasicTheme::BasicStyle* parent) { BasicStyle_Template___ObjInit_1(this, parent); }
};

}}}


#endif
