// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\TestApp\.build\Simulator\Android\Cache\GeneratedCode\MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.MainView.Fuse_iOS_StatusBarConfig_Uno_Platform_iOS_Status-5e09bf19.h>
#include <Fuse.iOS.StatusBarConfig.h>
#include <Uno.Object.h>
static uType* TYPES[1];

namespace g{

// public sealed class MainView.Fuse_iOS_StatusBarConfig_Uno_Platform_iOS_StatusBarStyle_Style_Property :17
// {
::g::Uno::UX::Property_type* MainView__Fuse_iOS_StatusBarConfig_Uno_Platform_iOS_StatusBarStyle_Style_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(MainView__Fuse_iOS_StatusBarConfig_Uno_Platform_iOS_StatusBarStyle_Style_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("MainView.Fuse_iOS_StatusBarConfig_Uno_Platform_iOS_StatusBarStyle_Style_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::Platform::iOS::StatusBarStyle_typeof()));
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))MainView__Fuse_iOS_StatusBarConfig_Uno_Platform_iOS_StatusBarStyle_Style_Property__OnGet_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))MainView__Fuse_iOS_StatusBarConfig_Uno_Platform_iOS_StatusBarStyle_Style_Property__OnSet_fn;
    ::TYPES[0] = ::g::Fuse::iOS::StatusBarConfig_typeof();
    type->SetFields(2,
        ::g::Fuse::iOS::StatusBarConfig_typeof(), offsetof(::g::MainView__Fuse_iOS_StatusBarConfig_Uno_Platform_iOS_StatusBarStyle_Style_Property, _obj), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MainView__Fuse_iOS_StatusBarConfig_Uno_Platform_iOS_StatusBarStyle_Style_Property__New1_fn, 0, true, MainView__Fuse_iOS_StatusBarConfig_Uno_Platform_iOS_StatusBarStyle_Style_Property_typeof(), 1, ::g::Fuse::iOS::StatusBarConfig_typeof()));
    return type;
}

// public Fuse_iOS_StatusBarConfig_Uno_Platform_iOS_StatusBarStyle_Style_Property(Fuse.iOS.StatusBarConfig obj) :20
void MainView__Fuse_iOS_StatusBarConfig_Uno_Platform_iOS_StatusBarStyle_Style_Property__ctor_1_fn(MainView__Fuse_iOS_StatusBarConfig_Uno_Platform_iOS_StatusBarStyle_Style_Property* __this, ::g::Fuse::iOS::StatusBarConfig* obj)
{
    __this->ctor_1(obj);
}

// public Fuse_iOS_StatusBarConfig_Uno_Platform_iOS_StatusBarStyle_Style_Property New(Fuse.iOS.StatusBarConfig obj) :20
void MainView__Fuse_iOS_StatusBarConfig_Uno_Platform_iOS_StatusBarStyle_Style_Property__New1_fn(::g::Fuse::iOS::StatusBarConfig* obj, MainView__Fuse_iOS_StatusBarConfig_Uno_Platform_iOS_StatusBarStyle_Style_Property** __retval)
{
    *__retval = MainView__Fuse_iOS_StatusBarConfig_Uno_Platform_iOS_StatusBarStyle_Style_Property::New1(obj);
}

// protected override sealed Uno.Platform.iOS.StatusBarStyle OnGet() :21
void MainView__Fuse_iOS_StatusBarConfig_Uno_Platform_iOS_StatusBarStyle_Style_Property__OnGet_fn(MainView__Fuse_iOS_StatusBarConfig_Uno_Platform_iOS_StatusBarStyle_Style_Property* __this, int* __retval)
{
    return *__retval = uPtr(__this->_obj)->Style(), void();
}

// protected override sealed void OnSet(Uno.Platform.iOS.StatusBarStyle v, object origin) :22
void MainView__Fuse_iOS_StatusBarConfig_Uno_Platform_iOS_StatusBarStyle_Style_Property__OnSet_fn(MainView__Fuse_iOS_StatusBarConfig_Uno_Platform_iOS_StatusBarStyle_Style_Property* __this, int* v, uObject* origin)
{
    int v_ = *v;
    uPtr(__this->_obj)->Style(v_);
}

// public Fuse_iOS_StatusBarConfig_Uno_Platform_iOS_StatusBarStyle_Style_Property(Fuse.iOS.StatusBarConfig obj) [instance] :20
void MainView__Fuse_iOS_StatusBarConfig_Uno_Platform_iOS_StatusBarStyle_Style_Property::ctor_1(::g::Fuse::iOS::StatusBarConfig* obj)
{
    ctor_();
    _obj = obj;
}

// public Fuse_iOS_StatusBarConfig_Uno_Platform_iOS_StatusBarStyle_Style_Property New(Fuse.iOS.StatusBarConfig obj) [static] :20
MainView__Fuse_iOS_StatusBarConfig_Uno_Platform_iOS_StatusBarStyle_Style_Property* MainView__Fuse_iOS_StatusBarConfig_Uno_Platform_iOS_StatusBarStyle_Style_Property::New1(::g::Fuse::iOS::StatusBarConfig* obj)
{
    MainView__Fuse_iOS_StatusBarConfig_Uno_Platform_iOS_StatusBarStyle_Style_Property* obj1 = (MainView__Fuse_iOS_StatusBarConfig_Uno_Platform_iOS_StatusBarStyle_Style_Property*)uNew(MainView__Fuse_iOS_StatusBarConfig_Uno_Platform_iOS_StatusBarStyle_Style_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

} // ::g
