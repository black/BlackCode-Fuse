// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_PAGE_CONTROL_TEMPLATE_H__
#define __APP_FUSE_CONTROLS_PAGE_CONTROL_TEMPLATE_H__

#include <app/Uno.UX.ITemplate.h>
#include <app/Uno.UX.Template__Fuse_Controls_Page.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { struct Page; } } }
namespace app { namespace Fuse { namespace Controls { struct PageControl; } } }

namespace app {
namespace Fuse {
namespace Controls {

struct PageControl_Template;

struct PageControl_Template__uType : ::app::Uno::UX::Template__Fuse_Controls_Page__uType
{
};

PageControl_Template__uType* PageControl_Template__typeof();

void PageControl_Template___ObjInit_1(PageControl_Template* __this, ::app::Fuse::Controls::PageControl* parent);
PageControl_Template* PageControl_Template__New_1(::uStatic* __this, ::app::Fuse::Controls::PageControl* parent);
void PageControl_Template__OnApply(PageControl_Template* __this, ::app::Fuse::Controls::Page* self);

struct PageControl_Template : ::app::Uno::UX::Template__Fuse_Controls_Page
{
    ::uStrong< ::app::Fuse::Controls::PageControl*> __parent;

    void _ObjInit_1(::app::Fuse::Controls::PageControl* parent) { PageControl_Template___ObjInit_1(this, parent); }
};

}}}


#endif
