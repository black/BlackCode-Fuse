// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_PAGE_INDICATOR_TEMPLATE_H__
#define __APP_FUSE_CONTROLS_PAGE_INDICATOR_TEMPLATE_H__

#include <app/Uno.UX.ITemplate.h>
#include <app/Uno.UX.Template__Fuse_Controls_PageIndicatorDot.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { struct PageIndicator; } } }
namespace app { namespace Fuse { namespace Controls { struct PageIndicator_Fuse_Drawing_SolidColor_float4_Color_Property; } } }
namespace app { namespace Fuse { namespace Controls { struct PageIndicatorDot; } } }

namespace app {
namespace Fuse {
namespace Controls {

struct PageIndicator_Template;

struct PageIndicator_Template__uType : ::app::Uno::UX::Template__Fuse_Controls_PageIndicatorDot__uType
{
};

PageIndicator_Template__uType* PageIndicator_Template__typeof();

void PageIndicator_Template___ObjInit_1(PageIndicator_Template* __this, ::app::Fuse::Controls::PageIndicator* parent);
PageIndicator_Template* PageIndicator_Template__New_1(::uStatic* __this, ::app::Fuse::Controls::PageIndicator* parent);
void PageIndicator_Template__OnApply(PageIndicator_Template* __this, ::app::Fuse::Controls::PageIndicatorDot* self);

struct PageIndicator_Template : ::app::Uno::UX::Template__Fuse_Controls_PageIndicatorDot
{
    ::uStrong< ::app::Fuse::Controls::PageIndicator*> __parent;
    ::uStrong< ::app::Fuse::Controls::PageIndicator_Fuse_Drawing_SolidColor_float4_Color_Property*> TheColor_Color_inst;

    void _ObjInit_1(::app::Fuse::Controls::PageIndicator* parent) { PageIndicator_Template___ObjInit_1(this, parent); }
};

}}}


#endif
