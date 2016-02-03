// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.cache\GeneratedCode\MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/-.MainView.h>
#include <app/-.MainView_Template1.h>
#include <app/Fuse.Controls.Image.h>
#include <app/Fuse.Elements.StretchMode.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode.h>
#include <app/Uno.Bool.h>

namespace app {

MainView_Template1__uType* MainView_Template1__typeof()
{
    static ::uStaticStrong<MainView_Template1__uType*> type;
    if (type != NULL) return type;

    type = (MainView_Template1__uType*)::uAllocClassType(sizeof(MainView_Template1__uType), "MainView.Template1", false, 1, 1, 0);

    type->SetBaseType(::app::Uno::UX::Template__Fuse_Controls_Image__typeof());
    type->__fp_OnApply = (void(*)(::app::Uno::UX::Template__Fuse_Controls_Image*, ::app::Fuse::Controls::Image*))MainView_Template1__OnApply;

    type->SetInterfaces(
        ::app::Uno::UX::ITemplate__typeof(), offsetof(MainView_Template1__uType, __interface_0));

    type->SetStrongRefs(
        "__parent", offsetof(MainView_Template1, __parent));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", MainView_Template1__New_1, 0, true, MainView_Template1__typeof(), ::app::MainView__typeof()));

    ::uRegisterType(type);
    return type;
}

void MainView_Template1___ObjInit_1(MainView_Template1* __this, ::app::MainView* parent)
{
    ::app::Uno::UX::Template__Fuse_Controls_Image___ObjInit(__this);
    __this->__parent = parent;
}

MainView_Template1* MainView_Template1__New_1(::uStatic* __this, ::app::MainView* parent)
{
    MainView_Template1* inst = (MainView_Template1*)::uAllocObject(sizeof(MainView_Template1), MainView_Template1__typeof());
    inst->_ObjInit_1(parent);
    return inst;
}

void MainView_Template1__OnApply(MainView_Template1* __this, ::app::Fuse::Controls::Image* self)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode*>(::app::Fuse::Controls::Image__StretchModeProperty)->SetStyle(self, 6);
}

}
