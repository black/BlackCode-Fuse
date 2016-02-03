// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.cache\GeneratedCode\MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP___MAIN_VIEW_TEMPLATE2_H__
#define __APP___MAIN_VIEW_TEMPLATE2_H__

#include <app/Uno.UX.ITemplate.h>
#include <app/Uno.UX.Template__Fuse_Controls_Page.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { struct Page; } } }
namespace app { struct MainView; }

namespace app {

struct MainView_Template2;

struct MainView_Template2__uType : ::app::Uno::UX::Template__Fuse_Controls_Page__uType
{
};

MainView_Template2__uType* MainView_Template2__typeof();

void MainView_Template2___ObjInit_1(MainView_Template2* __this, ::app::MainView* parent);
MainView_Template2* MainView_Template2__New_1(::uStatic* __this, ::app::MainView* parent);
void MainView_Template2__OnApply(MainView_Template2* __this, ::app::Fuse::Controls::Page* self);

struct MainView_Template2 : ::app::Uno::UX::Template__Fuse_Controls_Page
{
    ::uStrong< ::app::MainView*> __parent;

    void _ObjInit_1(::app::MainView* parent) { MainView_Template2___ObjInit_1(this, parent); }
};

}


#endif
