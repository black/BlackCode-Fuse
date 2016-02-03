// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\Cache\GeneratedCode\MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.MainView.Fuse_Triggers_WhileBool_bool_Value_Property.h>
#include <Fuse.Triggers.WhileBool.h>
#include <Uno.Object.h>
static uType* TYPES[1];

namespace g{

// public sealed class MainView.Fuse_Triggers_WhileBool_bool_Value_Property :10
// {
::g::Uno::UX::Property_type* MainView__Fuse_Triggers_WhileBool_bool_Value_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(MainView__Fuse_Triggers_WhileBool_bool_Value_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("MainView.Fuse_Triggers_WhileBool_bool_Value_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::Bool_typeof()));
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))MainView__Fuse_Triggers_WhileBool_bool_Value_Property__OnGet_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))MainView__Fuse_Triggers_WhileBool_bool_Value_Property__OnSet_fn;
    ::TYPES[0] = ::g::Fuse::Triggers::WhileBool_typeof();
    type->SetFields(2,
        ::g::Fuse::Triggers::WhileBool_typeof(), offsetof(::g::MainView__Fuse_Triggers_WhileBool_bool_Value_Property, _obj), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MainView__Fuse_Triggers_WhileBool_bool_Value_Property__New1_fn, 0, true, MainView__Fuse_Triggers_WhileBool_bool_Value_Property_typeof(), 1, ::g::Fuse::Triggers::WhileBool_typeof()));
    return type;
}

// public Fuse_Triggers_WhileBool_bool_Value_Property(Fuse.Triggers.WhileBool obj) :13
void MainView__Fuse_Triggers_WhileBool_bool_Value_Property__ctor_1_fn(MainView__Fuse_Triggers_WhileBool_bool_Value_Property* __this, ::g::Fuse::Triggers::WhileBool* obj)
{
    __this->ctor_1(obj);
}

// public Fuse_Triggers_WhileBool_bool_Value_Property New(Fuse.Triggers.WhileBool obj) :13
void MainView__Fuse_Triggers_WhileBool_bool_Value_Property__New1_fn(::g::Fuse::Triggers::WhileBool* obj, MainView__Fuse_Triggers_WhileBool_bool_Value_Property** __retval)
{
    *__retval = MainView__Fuse_Triggers_WhileBool_bool_Value_Property::New1(obj);
}

// protected override sealed bool OnGet() :14
void MainView__Fuse_Triggers_WhileBool_bool_Value_Property__OnGet_fn(MainView__Fuse_Triggers_WhileBool_bool_Value_Property* __this, bool* __retval)
{
    return *__retval = uPtr(__this->_obj)->Value1(), void();
}

// protected override sealed void OnSet(bool v, object origin) :15
void MainView__Fuse_Triggers_WhileBool_bool_Value_Property__OnSet_fn(MainView__Fuse_Triggers_WhileBool_bool_Value_Property* __this, bool* v, uObject* origin)
{
    bool v_ = *v;
    uPtr(__this->_obj)->Value1(v_);
}

// public Fuse_Triggers_WhileBool_bool_Value_Property(Fuse.Triggers.WhileBool obj) [instance] :13
void MainView__Fuse_Triggers_WhileBool_bool_Value_Property::ctor_1(::g::Fuse::Triggers::WhileBool* obj)
{
    ctor_();
    _obj = obj;
}

// public Fuse_Triggers_WhileBool_bool_Value_Property New(Fuse.Triggers.WhileBool obj) [static] :13
MainView__Fuse_Triggers_WhileBool_bool_Value_Property* MainView__Fuse_Triggers_WhileBool_bool_Value_Property::New1(::g::Fuse::Triggers::WhileBool* obj)
{
    MainView__Fuse_Triggers_WhileBool_bool_Value_Property* obj1 = (MainView__Fuse_Triggers_WhileBool_bool_Value_Property*)uNew(MainView__Fuse_Triggers_WhileBool_bool_Value_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

} // ::g
