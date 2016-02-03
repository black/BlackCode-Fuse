// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UX\.build\Simulator\Android\Cache\GeneratedCode\MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.MainView.Fuse_Effects_Blur_float_Radius_Property.h>
#include <Fuse.Effects.Blur.h>
#include <Uno.Object.h>
static uType* TYPES[1];

namespace g{

// public sealed class MainView.Fuse_Effects_Blur_float_Radius_Property :24
// {
::g::Uno::UX::Property_type* MainView__Fuse_Effects_Blur_float_Radius_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(MainView__Fuse_Effects_Blur_float_Radius_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("MainView.Fuse_Effects_Blur_float_Radius_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::Float_typeof()));
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))MainView__Fuse_Effects_Blur_float_Radius_Property__OnGet_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))MainView__Fuse_Effects_Blur_float_Radius_Property__OnSet_fn;
    ::TYPES[0] = ::g::Fuse::Effects::Blur_typeof();
    type->SetFields(2,
        ::g::Fuse::Effects::Blur_typeof(), offsetof(::g::MainView__Fuse_Effects_Blur_float_Radius_Property, _obj), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MainView__Fuse_Effects_Blur_float_Radius_Property__New1_fn, 0, true, MainView__Fuse_Effects_Blur_float_Radius_Property_typeof(), 1, ::g::Fuse::Effects::Blur_typeof()));
    return type;
}

// public Fuse_Effects_Blur_float_Radius_Property(Fuse.Effects.Blur obj) :27
void MainView__Fuse_Effects_Blur_float_Radius_Property__ctor_1_fn(MainView__Fuse_Effects_Blur_float_Radius_Property* __this, ::g::Fuse::Effects::Blur* obj)
{
    __this->ctor_1(obj);
}

// public Fuse_Effects_Blur_float_Radius_Property New(Fuse.Effects.Blur obj) :27
void MainView__Fuse_Effects_Blur_float_Radius_Property__New1_fn(::g::Fuse::Effects::Blur* obj, MainView__Fuse_Effects_Blur_float_Radius_Property** __retval)
{
    *__retval = MainView__Fuse_Effects_Blur_float_Radius_Property::New1(obj);
}

// protected override sealed float OnGet() :28
void MainView__Fuse_Effects_Blur_float_Radius_Property__OnGet_fn(MainView__Fuse_Effects_Blur_float_Radius_Property* __this, float* __retval)
{
    return *__retval = uPtr(__this->_obj)->Radius(), void();
}

// protected override sealed void OnSet(float v, object origin) :29
void MainView__Fuse_Effects_Blur_float_Radius_Property__OnSet_fn(MainView__Fuse_Effects_Blur_float_Radius_Property* __this, float* v, uObject* origin)
{
    float v_ = *v;
    uPtr(__this->_obj)->Radius(v_);
}

// public Fuse_Effects_Blur_float_Radius_Property(Fuse.Effects.Blur obj) [instance] :27
void MainView__Fuse_Effects_Blur_float_Radius_Property::ctor_1(::g::Fuse::Effects::Blur* obj)
{
    ctor_();
    _obj = obj;
}

// public Fuse_Effects_Blur_float_Radius_Property New(Fuse.Effects.Blur obj) [static] :27
MainView__Fuse_Effects_Blur_float_Radius_Property* MainView__Fuse_Effects_Blur_float_Radius_Property::New1(::g::Fuse::Effects::Blur* obj)
{
    MainView__Fuse_Effects_Blur_float_Radius_Property* obj1 = (MainView__Fuse_Effects_Blur_float_Radius_Property*)uNew(MainView__Fuse_Effects_Blur_float_Radius_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

} // ::g
