// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.cache\GeneratedCode\MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/-.MainView_Fuse_iOS_StatusBarConfig_Uno_Platform_iOS_StatusBarS-76d400dd.h>
#include <app/Fuse.iOS.StatusBarConfig.h>
#include <app/Uno.Object.h>
#include <app/Uno.Platform.iOS.StatusBarStyle.h>

namespace app {

MainView_Fuse_iOS_StatusBarConfig_Uno_Platform_iOS_StatusBarStyle_Style_Property__uType* MainView_Fuse_iOS_StatusBarConfig_Uno_Platform_iOS_StatusBarStyle_Style_Property__typeof()
{
    static ::uStaticStrong<MainView_Fuse_iOS_StatusBarConfig_Uno_Platform_iOS_StatusBarStyle_Style_Property__uType*> type;
    if (type != NULL) return type;

    type = (MainView_Fuse_iOS_StatusBarConfig_Uno_Platform_iOS_StatusBarStyle_Style_Property__uType*)::uAllocClassType(sizeof(MainView_Fuse_iOS_StatusBarConfig_Uno_Platform_iOS_StatusBarStyle_Style_Property__uType), "MainView.Fuse_iOS_StatusBarConfig_Uno_Platform_iOS_StatusBarStyle_Style_Property", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::UX::Property__Uno_Platform_iOS_StatusBarStyle__typeof());
    type->__fp_OnGet = (int(*)(::app::Uno::UX::Property__Uno_Platform_iOS_StatusBarStyle*))MainView_Fuse_iOS_StatusBarConfig_Uno_Platform_iOS_StatusBarStyle_Style_Property__OnGet;
    type->__fp_OnSet = (void(*)(::app::Uno::UX::Property__Uno_Platform_iOS_StatusBarStyle*, int, ::uObject*))MainView_Fuse_iOS_StatusBarConfig_Uno_Platform_iOS_StatusBarStyle_Style_Property__OnSet;

    type->SetStrongRefs(
        "_obj", offsetof(MainView_Fuse_iOS_StatusBarConfig_Uno_Platform_iOS_StatusBarStyle_Style_Property, _obj));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", MainView_Fuse_iOS_StatusBarConfig_Uno_Platform_iOS_StatusBarStyle_Style_Property__New_1, 0, true, MainView_Fuse_iOS_StatusBarConfig_Uno_Platform_iOS_StatusBarStyle_Style_Property__typeof(), ::app::Fuse::iOS::StatusBarConfig__typeof()));

    ::uRegisterType(type);
    return type;
}

void MainView_Fuse_iOS_StatusBarConfig_Uno_Platform_iOS_StatusBarStyle_Style_Property___ObjInit_1(MainView_Fuse_iOS_StatusBarConfig_Uno_Platform_iOS_StatusBarStyle_Style_Property* __this, ::app::Fuse::iOS::StatusBarConfig* obj)
{
    ::app::Uno::UX::Property__Uno_Platform_iOS_StatusBarStyle___ObjInit(__this);
    __this->_obj = obj;
}

MainView_Fuse_iOS_StatusBarConfig_Uno_Platform_iOS_StatusBarStyle_Style_Property* MainView_Fuse_iOS_StatusBarConfig_Uno_Platform_iOS_StatusBarStyle_Style_Property__New_1(::uStatic* __this, ::app::Fuse::iOS::StatusBarConfig* obj)
{
    MainView_Fuse_iOS_StatusBarConfig_Uno_Platform_iOS_StatusBarStyle_Style_Property* inst = (MainView_Fuse_iOS_StatusBarConfig_Uno_Platform_iOS_StatusBarStyle_Style_Property*)::uAllocObject(sizeof(MainView_Fuse_iOS_StatusBarConfig_Uno_Platform_iOS_StatusBarStyle_Style_Property), MainView_Fuse_iOS_StatusBarConfig_Uno_Platform_iOS_StatusBarStyle_Style_Property__typeof());
    inst->_ObjInit_1(obj);
    return inst;
}

int MainView_Fuse_iOS_StatusBarConfig_Uno_Platform_iOS_StatusBarStyle_Style_Property__OnGet(MainView_Fuse_iOS_StatusBarConfig_Uno_Platform_iOS_StatusBarStyle_Style_Property* __this)
{
    return ::uPtr< ::app::Fuse::iOS::StatusBarConfig*>(__this->_obj)->Style();
}

void MainView_Fuse_iOS_StatusBarConfig_Uno_Platform_iOS_StatusBarStyle_Style_Property__OnSet(MainView_Fuse_iOS_StatusBarConfig_Uno_Platform_iOS_StatusBarStyle_Style_Property* __this, int v, ::uObject* origin)
{
    ::uPtr< ::app::Fuse::iOS::StatusBarConfig*>(__this->_obj)->Style(v);
}

}
