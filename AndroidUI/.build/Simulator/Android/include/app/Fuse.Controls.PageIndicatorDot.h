// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_PAGE_INDICATOR_DOT_H__
#define __APP_FUSE_CONTROLS_PAGE_INDICATOR_DOT_H__

#include <app/Fuse.Animations.IResize.h>
#include <app/Fuse.Controls.Panel.h>
#include <app/Fuse.IActualPlacement.h>
#include <app/Fuse.Navigation.INavigationPanel.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <app/Fuse.Triggers.Actions.ICollapse.h>
#include <app/Fuse.Triggers.Actions.IHide.h>
#include <app/Fuse.Triggers.Actions.IShow.h>
#include <app/Fuse.Triggers.IAddRemove__Fuse_Node.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Controls {

struct PageIndicatorDot;

struct PageIndicatorDot__uType : ::app::Fuse::Controls::Panel__uType
{
};

PageIndicatorDot__uType* PageIndicatorDot__typeof();

void PageIndicatorDot___ObjInit_4(PageIndicatorDot* __this);
void PageIndicatorDot__InitializeUX(PageIndicatorDot* __this);
PageIndicatorDot* PageIndicatorDot__New_2(::uStatic* __this);

struct PageIndicatorDot : ::app::Fuse::Controls::Panel
{
    void _ObjInit_4() { PageIndicatorDot___ObjInit_4(this); }
    void InitializeUX() { PageIndicatorDot__InitializeUX(this); }
};

}}}


#endif
