// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.cache\GeneratedCode\MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/-.MainView_Fuse_Drawing_SolidColor_float4_Color_Property.h>
#include <app/Fuse.Drawing.SolidColor.h>
#include <app/Uno.Object.h>
#include <app/Uno.Float4.h>

namespace app {

MainView_Fuse_Drawing_SolidColor_float4_Color_Property__uType* MainView_Fuse_Drawing_SolidColor_float4_Color_Property__typeof()
{
    static ::uStaticStrong<MainView_Fuse_Drawing_SolidColor_float4_Color_Property__uType*> type;
    if (type != NULL) return type;

    type = (MainView_Fuse_Drawing_SolidColor_float4_Color_Property__uType*)::uAllocClassType(sizeof(MainView_Fuse_Drawing_SolidColor_float4_Color_Property__uType), "MainView.Fuse_Drawing_SolidColor_float4_Color_Property", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::UX::Property__float4__typeof());
    type->__fp_OnGet = (::app::Uno::Float4(*)(::app::Uno::UX::Property__float4*))MainView_Fuse_Drawing_SolidColor_float4_Color_Property__OnGet;
    type->__fp_OnSet = (void(*)(::app::Uno::UX::Property__float4*, ::app::Uno::Float4, ::uObject*))MainView_Fuse_Drawing_SolidColor_float4_Color_Property__OnSet;

    type->SetStrongRefs(
        "_obj", offsetof(MainView_Fuse_Drawing_SolidColor_float4_Color_Property, _obj));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", MainView_Fuse_Drawing_SolidColor_float4_Color_Property__New_1, 0, true, MainView_Fuse_Drawing_SolidColor_float4_Color_Property__typeof(), ::app::Fuse::Drawing::SolidColor__typeof()));

    ::uRegisterType(type);
    return type;
}

void MainView_Fuse_Drawing_SolidColor_float4_Color_Property___ObjInit_1(MainView_Fuse_Drawing_SolidColor_float4_Color_Property* __this, ::app::Fuse::Drawing::SolidColor* obj)
{
    ::app::Uno::UX::Property__float4___ObjInit(__this);
    __this->_obj = obj;
}

MainView_Fuse_Drawing_SolidColor_float4_Color_Property* MainView_Fuse_Drawing_SolidColor_float4_Color_Property__New_1(::uStatic* __this, ::app::Fuse::Drawing::SolidColor* obj)
{
    MainView_Fuse_Drawing_SolidColor_float4_Color_Property* inst = (MainView_Fuse_Drawing_SolidColor_float4_Color_Property*)::uAllocObject(sizeof(MainView_Fuse_Drawing_SolidColor_float4_Color_Property), MainView_Fuse_Drawing_SolidColor_float4_Color_Property__typeof());
    inst->_ObjInit_1(obj);
    return inst;
}

::app::Uno::Float4 MainView_Fuse_Drawing_SolidColor_float4_Color_Property__OnGet(MainView_Fuse_Drawing_SolidColor_float4_Color_Property* __this)
{
    return ::uPtr< ::app::Fuse::Drawing::SolidColor*>(__this->_obj)->Color();
}

void MainView_Fuse_Drawing_SolidColor_float4_Color_Property__OnSet(MainView_Fuse_Drawing_SolidColor_float4_Color_Property* __this, ::app::Uno::Float4 v, ::uObject* origin)
{
    ::uPtr< ::app::Fuse::Drawing::SolidColor*>(__this->_obj)->Color(v);
}

}
