// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.Navigation.INavigationPanel.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.INameScope.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.IAddRemove-1.h>
namespace g{namespace Fuse{namespace Controls{struct PageIndicator;}}}
namespace g{namespace Fuse{struct StyleProperty1;}}

namespace g{
namespace Fuse{
namespace Controls{

// public partial sealed class PageIndicator :1629
// {
::g::Fuse::Controls::Panel_type* PageIndicator_typeof();
void PageIndicator__ctor_5_fn(PageIndicator* __this, uObject* navigation);
void PageIndicator__get_DotFactory_fn(PageIndicator* __this, uObject** __retval);
void PageIndicator__set_DotFactory_fn(PageIndicator* __this, uObject* value);
void PageIndicator__InitializeUX_fn(PageIndicator* __this);
void PageIndicator__New3_fn(uObject* navigation, PageIndicator** __retval);
void PageIndicator__OnDotFactoryChanged_fn(PageIndicator* p);
void PageIndicator__OnRooted_fn(PageIndicator* __this);
void PageIndicator__OnUnrooted_fn(PageIndicator* __this);
void PageIndicator__RecreateDots_fn(PageIndicator* __this);
void PageIndicator__UpdateCount_fn(PageIndicator* __this, uObject* s);
void PageIndicator__UpdateCurrent_fn(PageIndicator* __this, uObject* s, double* progress, double* prevProgress);

struct PageIndicator : ::g::Fuse::Controls::StackPanel
{
    uStrong<uObject*> _pageProgress;
    static uSStrong< ::g::Fuse::StyleProperty1*> DotFactoryProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& DotFactoryProperty() { return PageIndicator_typeof()->Init(), DotFactoryProperty_; }

    void ctor_5(uObject* navigation);
    uObject* DotFactory();
    void DotFactory(uObject* value);
    void InitializeUX();
    void RecreateDots();
    void UpdateCount(uObject* s);
    void UpdateCurrent(uObject* s, double progress, double prevProgress);
    static PageIndicator* New3(uObject* navigation);
    static void OnDotFactoryChanged(PageIndicator* p);
};
// }

}}} // ::g::Fuse::Controls
