// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.PageIndicatorDot.h>
#include <Uno.UX.ITemplate.h>
#include <Uno.UX.Template-1.h>
namespace g{namespace Fuse{namespace Controls{struct PageIndicator;}}}
namespace g{namespace Fuse{namespace Controls{struct PageIndicator__Fuse_Drawing_SolidColor_float4_Color_Property;}}}
namespace g{namespace Fuse{namespace Controls{struct PageIndicator__Template;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public partial sealed class PageIndicator.Template :178
// {
::g::Uno::UX::Template_type* PageIndicator__Template_typeof();
void PageIndicator__Template__ctor_1_fn(PageIndicator__Template* __this, ::g::Fuse::Controls::PageIndicator* parent);
void PageIndicator__Template__New1_fn(::g::Fuse::Controls::PageIndicator* parent, PageIndicator__Template** __retval);
void PageIndicator__Template__OnApply_fn(PageIndicator__Template* __this, ::g::Fuse::Controls::PageIndicatorDot* self);

struct PageIndicator__Template : ::g::Uno::UX::Template
{
    uStrong< ::g::Fuse::Controls::PageIndicator*> __parent1;
    uStrong< ::g::Fuse::Controls::PageIndicator__Fuse_Drawing_SolidColor_float4_Color_Property*> TheColor_Color_inst;

    void ctor_1(::g::Fuse::Controls::PageIndicator* parent);
    static PageIndicator__Template* New1(::g::Fuse::Controls::PageIndicator* parent);
};
// }

}}} // ::g::Fuse::Controls
