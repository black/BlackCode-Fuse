// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Welcome\.build\Simulator\Android\Cache\GeneratedCode\MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.MainView.Fuse_Translation_float_X_Property.h>
#include <Fuse.Translation.h>
#include <Uno.Object.h>
static uType* TYPES[1];

namespace g{

// public sealed class MainView.Fuse_Translation_float_X_Property :125
// {
::g::Uno::UX::Property_type* MainView__Fuse_Translation_float_X_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(MainView__Fuse_Translation_float_X_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("MainView.Fuse_Translation_float_X_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::Float_typeof()));
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))MainView__Fuse_Translation_float_X_Property__OnGet_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))MainView__Fuse_Translation_float_X_Property__OnSet_fn;
    ::TYPES[0] = ::g::Fuse::Translation_typeof();
    type->SetFields(2,
        ::g::Fuse::Translation_typeof(), offsetof(::g::MainView__Fuse_Translation_float_X_Property, _obj), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MainView__Fuse_Translation_float_X_Property__New1_fn, 0, true, MainView__Fuse_Translation_float_X_Property_typeof(), 1, ::g::Fuse::Translation_typeof()));
    return type;
}

// public Fuse_Translation_float_X_Property(Fuse.Translation obj) :128
void MainView__Fuse_Translation_float_X_Property__ctor_1_fn(MainView__Fuse_Translation_float_X_Property* __this, ::g::Fuse::Translation* obj)
{
    __this->ctor_1(obj);
}

// public Fuse_Translation_float_X_Property New(Fuse.Translation obj) :128
void MainView__Fuse_Translation_float_X_Property__New1_fn(::g::Fuse::Translation* obj, MainView__Fuse_Translation_float_X_Property** __retval)
{
    *__retval = MainView__Fuse_Translation_float_X_Property::New1(obj);
}

// protected override sealed float OnGet() :129
void MainView__Fuse_Translation_float_X_Property__OnGet_fn(MainView__Fuse_Translation_float_X_Property* __this, float* __retval)
{
    return *__retval = uPtr(__this->_obj)->X(), void();
}

// protected override sealed void OnSet(float v, object origin) :130
void MainView__Fuse_Translation_float_X_Property__OnSet_fn(MainView__Fuse_Translation_float_X_Property* __this, float* v, uObject* origin)
{
    float v_ = *v;
    uPtr(__this->_obj)->X(v_);
}

// public Fuse_Translation_float_X_Property(Fuse.Translation obj) [instance] :128
void MainView__Fuse_Translation_float_X_Property::ctor_1(::g::Fuse::Translation* obj)
{
    ctor_();
    _obj = obj;
}

// public Fuse_Translation_float_X_Property New(Fuse.Translation obj) [static] :128
MainView__Fuse_Translation_float_X_Property* MainView__Fuse_Translation_float_X_Property::New1(::g::Fuse::Translation* obj)
{
    MainView__Fuse_Translation_float_X_Property* obj1 = (MainView__Fuse_Translation_float_X_Property*)uNew(MainView__Fuse_Translation_float_X_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

} // ::g
