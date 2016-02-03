// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.BasicTheme\0.18.8\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.NavigationBar.h>
#include <Uno.UX.ITemplate.h>
#include <Uno.UX.Template-1.h>
namespace g{namespace Fuse{namespace BasicTheme{struct BasicStyle;}}}
namespace g{namespace Fuse{namespace BasicTheme{struct BasicStyle__Fuse_Drawing_SolidColor_float4_Color_Property;}}}
namespace g{namespace Fuse{namespace BasicTheme{struct BasicStyle__Template1;}}}

namespace g{
namespace Fuse{
namespace BasicTheme{

// public partial sealed class BasicStyle.Template1 :250
// {
::g::Uno::UX::Template_type* BasicStyle__Template1_typeof();
void BasicStyle__Template1__ctor_1_fn(BasicStyle__Template1* __this, ::g::Fuse::BasicTheme::BasicStyle* parent);
void BasicStyle__Template1__New1_fn(::g::Fuse::BasicTheme::BasicStyle* parent, BasicStyle__Template1** __retval);
void BasicStyle__Template1__OnApply_fn(BasicStyle__Template1* __this, ::g::Fuse::Controls::NavigationBar* self);

struct BasicStyle__Template1 : ::g::Uno::UX::Template
{
    uStrong< ::g::Fuse::BasicTheme::BasicStyle*> __parent1;
    uStrong< ::g::Fuse::BasicTheme::BasicStyle__Fuse_Drawing_SolidColor_float4_Color_Property*> _navigationBarFill_Color_inst;

    void ctor_1(::g::Fuse::BasicTheme::BasicStyle* parent);
    static BasicStyle__Template1* New1(::g::Fuse::BasicTheme::BasicStyle* parent);
};
// }

}}} // ::g::Fuse::BasicTheme
