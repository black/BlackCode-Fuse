// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_TEXT_H__
#define __APP_FUSE_CONTROLS_TEXT_H__

#include <app/Fuse.Animations.IResize.h>
#include <app/Fuse.Controls.TextBlock.h>
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

struct Text;

struct Text__uType : ::app::Fuse::Controls::TextBlock__uType
{
};

Text__uType* Text__typeof();

void Text___ObjInit_6(Text* __this);
Text* Text__New_2(::uStatic* __this);
void Text__OnRooted(Text* __this);
void Text__OnUnrooted(Text* __this);

struct Text : ::app::Fuse::Controls::TextBlock
{
    void _ObjInit_6() { Text___ObjInit_6(this); }
};

}}}


#endif
