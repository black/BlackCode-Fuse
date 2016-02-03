// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.cache\GeneratedCode\MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/-.MainView_Fuse_Triggers_WhileBool_bool_Value_Property.h>
#include <app/Fuse.Triggers.WhileBool.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Object.h>

namespace app {

MainView_Fuse_Triggers_WhileBool_bool_Value_Property__uType* MainView_Fuse_Triggers_WhileBool_bool_Value_Property__typeof()
{
    static ::uStaticStrong<MainView_Fuse_Triggers_WhileBool_bool_Value_Property__uType*> type;
    if (type != NULL) return type;

    type = (MainView_Fuse_Triggers_WhileBool_bool_Value_Property__uType*)::uAllocClassType(sizeof(MainView_Fuse_Triggers_WhileBool_bool_Value_Property__uType), "MainView.Fuse_Triggers_WhileBool_bool_Value_Property", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::UX::Property__bool__typeof());
    type->__fp_OnGet = (bool(*)(::app::Uno::UX::Property__bool*))MainView_Fuse_Triggers_WhileBool_bool_Value_Property__OnGet;
    type->__fp_OnSet = (void(*)(::app::Uno::UX::Property__bool*, bool, ::uObject*))MainView_Fuse_Triggers_WhileBool_bool_Value_Property__OnSet;

    type->SetStrongRefs(
        "_obj", offsetof(MainView_Fuse_Triggers_WhileBool_bool_Value_Property, _obj));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", MainView_Fuse_Triggers_WhileBool_bool_Value_Property__New_1, 0, true, MainView_Fuse_Triggers_WhileBool_bool_Value_Property__typeof(), ::app::Fuse::Triggers::WhileBool__typeof()));

    ::uRegisterType(type);
    return type;
}

void MainView_Fuse_Triggers_WhileBool_bool_Value_Property___ObjInit_1(MainView_Fuse_Triggers_WhileBool_bool_Value_Property* __this, ::app::Fuse::Triggers::WhileBool* obj)
{
    ::app::Uno::UX::Property__bool___ObjInit(__this);
    __this->_obj = obj;
}

MainView_Fuse_Triggers_WhileBool_bool_Value_Property* MainView_Fuse_Triggers_WhileBool_bool_Value_Property__New_1(::uStatic* __this, ::app::Fuse::Triggers::WhileBool* obj)
{
    MainView_Fuse_Triggers_WhileBool_bool_Value_Property* inst = (MainView_Fuse_Triggers_WhileBool_bool_Value_Property*)::uAllocObject(sizeof(MainView_Fuse_Triggers_WhileBool_bool_Value_Property), MainView_Fuse_Triggers_WhileBool_bool_Value_Property__typeof());
    inst->_ObjInit_1(obj);
    return inst;
}

bool MainView_Fuse_Triggers_WhileBool_bool_Value_Property__OnGet(MainView_Fuse_Triggers_WhileBool_bool_Value_Property* __this)
{
    return ::uPtr< ::app::Fuse::Triggers::WhileBool*>(__this->_obj)->Value_1();
}

void MainView_Fuse_Triggers_WhileBool_bool_Value_Property__OnSet(MainView_Fuse_Triggers_WhileBool_bool_Value_Property* __this, bool v, ::uObject* origin)
{
    ::uPtr< ::app::Fuse::Triggers::WhileBool*>(__this->_obj)->Value_1(v);
}

}
