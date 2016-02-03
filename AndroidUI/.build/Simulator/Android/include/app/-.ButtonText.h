// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.BasicTheme\0.11.3\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP___BUTTON_TEXT_H__
#define __APP___BUTTON_TEXT_H__

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

struct ButtonText;

struct ButtonText__uType : ::app::Fuse::Controls::TextBlock__uType
{
};

ButtonText__uType* ButtonText__typeof();

void ButtonText___ObjInit_6(ButtonText* __this);
void ButtonText__InitializeUX(ButtonText* __this);
ButtonText* ButtonText__New_2(::uStatic* __this);

struct ButtonText : ::app::Fuse::Controls::TextBlock
{
    void _ObjInit_6() { ButtonText___ObjInit_6(this); }
    void InitializeUX() { ButtonText__InitializeUX(this); }
};

}


#endif
