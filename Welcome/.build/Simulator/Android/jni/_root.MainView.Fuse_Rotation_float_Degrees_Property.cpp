// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Welcome\.build\Simulator\Android\Cache\GeneratedCode\MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.MainView.Fuse_Rotation_float_Degrees_Property.h>
#include <Fuse.Rotation.h>
#include <Uno.Object.h>
static uType* TYPES[1];

namespace g{

// public sealed class MainView.Fuse_Rotation_float_Degrees_Property :132
// {
::g::Uno::UX::Property_type* MainView__Fuse_Rotation_float_Degrees_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(MainView__Fuse_Rotation_float_Degrees_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("MainView.Fuse_Rotation_float_Degrees_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::Float_typeof()));
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))MainView__Fuse_Rotation_float_Degrees_Property__OnGet_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))MainView__Fuse_Rotation_float_Degrees_Property__OnSet_fn;
    ::TYPES[0] = ::g::Fuse::Rotation_typeof();
    type->SetFields(2,
        ::g::Fuse::Rotation_typeof(), offsetof(::g::MainView__Fuse_Rotation_float_Degrees_Property, _obj), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MainView__Fuse_Rotation_float_Degrees_Property__New1_fn, 0, true, MainView__Fuse_Rotation_float_Degrees_Property_typeof(), 1, ::g::Fuse::Rotation_typeof()));
    return type;
}

// public Fuse_Rotation_float_Degrees_Property(Fuse.Rotation obj) :135
void MainView__Fuse_Rotation_float_Degrees_Property__ctor_1_fn(MainView__Fuse_Rotation_float_Degrees_Property* __this, ::g::Fuse::Rotation* obj)
{
    __this->ctor_1(obj);
}

// public Fuse_Rotation_float_Degrees_Property New(Fuse.Rotation obj) :135
void MainView__Fuse_Rotation_float_Degrees_Property__New1_fn(::g::Fuse::Rotation* obj, MainView__Fuse_Rotation_float_Degrees_Property** __retval)
{
    *__retval = MainView__Fuse_Rotation_float_Degrees_Property::New1(obj);
}

// protected override sealed float OnGet() :136
void MainView__Fuse_Rotation_float_Degrees_Property__OnGet_fn(MainView__Fuse_Rotation_float_Degrees_Property* __this, float* __retval)
{
    return *__retval = uPtr(__this->_obj)->Degrees(), void();
}

// protected override sealed void OnSet(float v, object origin) :137
void MainView__Fuse_Rotation_float_Degrees_Property__OnSet_fn(MainView__Fuse_Rotation_float_Degrees_Property* __this, float* v, uObject* origin)
{
    float v_ = *v;
    uPtr(__this->_obj)->Degrees(v_);
}

// public Fuse_Rotation_float_Degrees_Property(Fuse.Rotation obj) [instance] :135
void MainView__Fuse_Rotation_float_Degrees_Property::ctor_1(::g::Fuse::Rotation* obj)
{
    ctor_();
    _obj = obj;
}

// public Fuse_Rotation_float_Degrees_Property New(Fuse.Rotation obj) [static] :135
MainView__Fuse_Rotation_float_Degrees_Property* MainView__Fuse_Rotation_float_Degrees_Property::New1(::g::Fuse::Rotation* obj)
{
    MainView__Fuse_Rotation_float_Degrees_Property* obj1 = (MainView__Fuse_Rotation_float_Degrees_Property*)uNew(MainView__Fuse_Rotation_float_Degrees_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

} // ::g
