// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_PAGE_INDICATOR_H__
#define __APP_FUSE_CONTROLS_PAGE_INDICATOR_H__

#include <app/Fuse.Animations.IResize.h>
#include <app/Fuse.Controls.StackPanel.h>
#include <app/Fuse.IActualPlacement.h>
#include <app/Fuse.Navigation.INavigationPanel.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <app/Fuse.Triggers.Actions.ICollapse.h>
#include <app/Fuse.Triggers.Actions.IHide.h>
#include <app/Fuse.Triggers.Actions.IShow.h>
#include <app/Fuse.Triggers.IAddRemove__Fuse_Node.h>
#include <Uno.h>
namespace app { namespace Fuse { struct StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory; } }

namespace app {
namespace Fuse {
namespace Controls {

struct PageIndicator;

extern ::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory*> PageIndicator__DotFactoryProperty;

struct PageIndicator__uType : ::app::Fuse::Controls::StackPanel__uType
{
};

PageIndicator__uType* PageIndicator__typeof();

void PageIndicator___ObjInit_5(PageIndicator* __this, ::uObject* navigation);
void PageIndicator___TypeInit_5(::uStatic* __this);
::uObject* PageIndicator__get_DotFactory(PageIndicator* __this);
void PageIndicator__InitializeUX(PageIndicator* __this);
PageIndicator* PageIndicator__New_3(::uStatic* __this, ::uObject* navigation);
void PageIndicator__OnDotFactoryChanged(::uStatic* __this, PageIndicator* p);
void PageIndicator__OnRooted(PageIndicator* __this);
void PageIndicator__OnUnrooted(PageIndicator* __this);
void PageIndicator__RecreateDots(PageIndicator* __this);
void PageIndicator__set_DotFactory(PageIndicator* __this, ::uObject* value);
void PageIndicator__UpdateCount(PageIndicator* __this, ::uObject* s);
void PageIndicator__UpdateCurrent(PageIndicator* __this, ::uObject* s, double progress, double prevProgress);

struct PageIndicator : ::app::Fuse::Controls::StackPanel
{
    ::uStrong< ::uObject*> _pageProgress;

    void _ObjInit_5(::uObject* navigation) { PageIndicator___ObjInit_5(this, navigation); }
    ::uObject* DotFactory() { return PageIndicator__get_DotFactory(this); }
    void InitializeUX() { PageIndicator__InitializeUX(this); }
    void RecreateDots() { PageIndicator__RecreateDots(this); }
    void DotFactory(::uObject* value) { PageIndicator__set_DotFactory(this, value); }
    void UpdateCount(::uObject* s) { PageIndicator__UpdateCount(this, s); }
    void UpdateCurrent(::uObject* s, double progress, double prevProgress) { PageIndicator__UpdateCurrent(this, s, progress, prevProgress); }
};

}}}


#endif
