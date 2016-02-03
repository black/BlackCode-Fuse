// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.cache\GeneratedCode\MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP___MAIN_VIEW_TEMPLATE1_H__
#define __APP___MAIN_VIEW_TEMPLATE1_H__

#include <app/Uno.UX.ITemplate.h>
#include <app/Uno.UX.Template__Fuse_Controls_Image.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { struct Image; } } }
namespace app { struct MainView; }

namespace app {

struct MainView_Template1;

struct MainView_Template1__uType : ::app::Uno::UX::Template__Fuse_Controls_Image__uType
{
};

MainView_Template1__uType* MainView_Template1__typeof();

void MainView_Template1___ObjInit_1(MainView_Template1* __this, ::app::MainView* parent);
MainView_Template1* MainView_Template1__New_1(::uStatic* __this, ::app::MainView* parent);
void MainView_Template1__OnApply(MainView_Template1* __this, ::app::Fuse::Controls::Image* self);

struct MainView_Template1 : ::app::Uno::UX::Template__Fuse_Controls_Image
{
    ::uStrong< ::app::MainView*> __parent;

    void _ObjInit_1(::app::MainView* parent) { MainView_Template1___ObjInit_1(this, parent); }
};

}


#endif
