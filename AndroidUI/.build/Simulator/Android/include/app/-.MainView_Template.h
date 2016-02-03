// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.cache\GeneratedCode\MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP___MAIN_VIEW_TEMPLATE_H__
#define __APP___MAIN_VIEW_TEMPLATE_H__

#include <app/Uno.UX.ITemplate.h>
#include <app/Uno.UX.Template__Fuse_Controls_Text.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { struct Text; } } }
namespace app { struct MainView; }

namespace app {

struct MainView_Template;

struct MainView_Template__uType : ::app::Uno::UX::Template__Fuse_Controls_Text__uType
{
};

MainView_Template__uType* MainView_Template__typeof();

void MainView_Template___ObjInit_1(MainView_Template* __this, ::app::MainView* parent);
MainView_Template* MainView_Template__New_1(::uStatic* __this, ::app::MainView* parent);
void MainView_Template__OnApply(MainView_Template* __this, ::app::Fuse::Controls::Text* self);

struct MainView_Template : ::app::Uno::UX::Template__Fuse_Controls_Text
{
    ::uStrong< ::app::MainView*> __parent;

    void _ObjInit_1(::app::MainView* parent) { MainView_Template___ObjInit_1(this, parent); }
};

}


#endif
