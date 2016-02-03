// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Welcome\.build\Simulator\Android\Cache\GeneratedCode\MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.MainView.Fuse_Triggers_Timeline_double_TargetProgress_Property.h>
#include <Fuse.Triggers.Timeline.h>
#include <Uno.Object.h>
static uType* TYPES[1];

namespace g{

// public sealed class MainView.Fuse_Triggers_Timeline_double_TargetProgress_Property :111
// {
::g::Uno::UX::Property_type* MainView__Fuse_Triggers_Timeline_double_TargetProgress_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(MainView__Fuse_Triggers_Timeline_double_TargetProgress_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("MainView.Fuse_Triggers_Timeline_double_TargetProgress_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::Double_typeof()));
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))MainView__Fuse_Triggers_Timeline_double_TargetProgress_Property__OnGet_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))MainView__Fuse_Triggers_Timeline_double_TargetProgress_Property__OnSet_fn;
    ::TYPES[0] = ::g::Fuse::Triggers::Timeline_typeof();
    type->SetFields(2,
        ::g::Fuse::Triggers::Timeline_typeof(), offsetof(::g::MainView__Fuse_Triggers_Timeline_double_TargetProgress_Property, _obj), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MainView__Fuse_Triggers_Timeline_double_TargetProgress_Property__New1_fn, 0, true, MainView__Fuse_Triggers_Timeline_double_TargetProgress_Property_typeof(), 1, ::g::Fuse::Triggers::Timeline_typeof()));
    return type;
}

// public Fuse_Triggers_Timeline_double_TargetProgress_Property(Fuse.Triggers.Timeline obj) :114
void MainView__Fuse_Triggers_Timeline_double_TargetProgress_Property__ctor_1_fn(MainView__Fuse_Triggers_Timeline_double_TargetProgress_Property* __this, ::g::Fuse::Triggers::Timeline* obj)
{
    __this->ctor_1(obj);
}

// public Fuse_Triggers_Timeline_double_TargetProgress_Property New(Fuse.Triggers.Timeline obj) :114
void MainView__Fuse_Triggers_Timeline_double_TargetProgress_Property__New1_fn(::g::Fuse::Triggers::Timeline* obj, MainView__Fuse_Triggers_Timeline_double_TargetProgress_Property** __retval)
{
    *__retval = MainView__Fuse_Triggers_Timeline_double_TargetProgress_Property::New1(obj);
}

// protected override sealed double OnGet() :115
void MainView__Fuse_Triggers_Timeline_double_TargetProgress_Property__OnGet_fn(MainView__Fuse_Triggers_Timeline_double_TargetProgress_Property* __this, double* __retval)
{
    return *__retval = uPtr(__this->_obj)->TargetProgress(), void();
}

// protected override sealed void OnSet(double v, object origin) :116
void MainView__Fuse_Triggers_Timeline_double_TargetProgress_Property__OnSet_fn(MainView__Fuse_Triggers_Timeline_double_TargetProgress_Property* __this, double* v, uObject* origin)
{
    double v_ = *v;
    uPtr(__this->_obj)->TargetProgress(v_);
}

// public Fuse_Triggers_Timeline_double_TargetProgress_Property(Fuse.Triggers.Timeline obj) [instance] :114
void MainView__Fuse_Triggers_Timeline_double_TargetProgress_Property::ctor_1(::g::Fuse::Triggers::Timeline* obj)
{
    ctor_();
    _obj = obj;
}

// public Fuse_Triggers_Timeline_double_TargetProgress_Property New(Fuse.Triggers.Timeline obj) [static] :114
MainView__Fuse_Triggers_Timeline_double_TargetProgress_Property* MainView__Fuse_Triggers_Timeline_double_TargetProgress_Property::New1(::g::Fuse::Triggers::Timeline* obj)
{
    MainView__Fuse_Triggers_Timeline_double_TargetProgress_Property* obj1 = (MainView__Fuse_Triggers_Timeline_double_TargetProgress_Property*)uNew(MainView__Fuse_Triggers_Timeline_double_TargetProgress_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

} // ::g
