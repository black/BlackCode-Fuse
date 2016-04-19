// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.BasicTheme\0.19.3\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.BackButton.h>
#include <Uno.UX.ITemplate.h>
#include <Uno.UX.Template-1.h>
namespace g{namespace Fuse{namespace BasicTheme{struct BasicStyle;}}}
namespace g{namespace Fuse{namespace BasicTheme{struct BasicStyle__Fuse_Drawing_SolidColor_float4_Color_Property;}}}
namespace g{namespace Fuse{namespace BasicTheme{struct BasicStyle__Template;}}}

namespace g{
namespace Fuse{
namespace BasicTheme{

// public partial sealed class BasicStyle.Template :179
// {
::g::Uno::UX::Template_type* BasicStyle__Template_typeof();
void BasicStyle__Template__ctor_1_fn(BasicStyle__Template* __this, ::g::Fuse::BasicTheme::BasicStyle* parent);
void BasicStyle__Template__New1_fn(::g::Fuse::BasicTheme::BasicStyle* parent, BasicStyle__Template** __retval);
void BasicStyle__Template__OnApply_fn(BasicStyle__Template* __this, ::g::Fuse::Controls::BackButton* self);

struct BasicStyle__Template : ::g::Uno::UX::Template
{
    uStrong< ::g::Fuse::BasicTheme::BasicStyle*> __parent1;
    uStrong< ::g::Fuse::BasicTheme::BasicStyle__Fuse_Drawing_SolidColor_float4_Color_Property*> temp_Color_inst;

    void ctor_1(::g::Fuse::BasicTheme::BasicStyle* parent);
    static BasicStyle__Template* New1(::g::Fuse::BasicTheme::BasicStyle* parent);
};
// }

}}} // ::g::Fuse::BasicTheme
