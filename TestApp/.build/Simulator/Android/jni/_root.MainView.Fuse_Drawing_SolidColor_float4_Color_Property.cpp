// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\TestApp\.build\Simulator\Android\Cache\GeneratedCode\MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.MainView.Fuse_Drawing_SolidColor_float4_Color_Property.h>
#include <Fuse.Drawing.SolidColor.h>
#include <Uno.Object.h>
static uType* TYPES[1];

namespace g{

// public sealed class MainView.Fuse_Drawing_SolidColor_float4_Color_Property :3
// {
::g::Uno::UX::Property_type* MainView__Fuse_Drawing_SolidColor_float4_Color_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(MainView__Fuse_Drawing_SolidColor_float4_Color_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("MainView.Fuse_Drawing_SolidColor_float4_Color_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::Float4_typeof()));
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))MainView__Fuse_Drawing_SolidColor_float4_Color_Property__OnGet_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))MainView__Fuse_Drawing_SolidColor_float4_Color_Property__OnSet_fn;
    ::TYPES[0] = ::g::Fuse::Drawing::SolidColor_typeof();
    type->SetFields(2,
        ::g::Fuse::Drawing::SolidColor_typeof(), offsetof(::g::MainView__Fuse_Drawing_SolidColor_float4_Color_Property, _obj), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MainView__Fuse_Drawing_SolidColor_float4_Color_Property__New1_fn, 0, true, MainView__Fuse_Drawing_SolidColor_float4_Color_Property_typeof(), 1, ::g::Fuse::Drawing::SolidColor_typeof()));
    return type;
}

// public Fuse_Drawing_SolidColor_float4_Color_Property(Fuse.Drawing.SolidColor obj) :6
void MainView__Fuse_Drawing_SolidColor_float4_Color_Property__ctor_1_fn(MainView__Fuse_Drawing_SolidColor_float4_Color_Property* __this, ::g::Fuse::Drawing::SolidColor* obj)
{
    __this->ctor_1(obj);
}

// public Fuse_Drawing_SolidColor_float4_Color_Property New(Fuse.Drawing.SolidColor obj) :6
void MainView__Fuse_Drawing_SolidColor_float4_Color_Property__New1_fn(::g::Fuse::Drawing::SolidColor* obj, MainView__Fuse_Drawing_SolidColor_float4_Color_Property** __retval)
{
    *__retval = MainView__Fuse_Drawing_SolidColor_float4_Color_Property::New1(obj);
}

// protected override sealed float4 OnGet() :7
void MainView__Fuse_Drawing_SolidColor_float4_Color_Property__OnGet_fn(MainView__Fuse_Drawing_SolidColor_float4_Color_Property* __this, ::g::Uno::Float4* __retval)
{
    return *__retval = uPtr(__this->_obj)->Color(), void();
}

// protected override sealed void OnSet(float4 v, object origin) :8
void MainView__Fuse_Drawing_SolidColor_float4_Color_Property__OnSet_fn(MainView__Fuse_Drawing_SolidColor_float4_Color_Property* __this, ::g::Uno::Float4* v, uObject* origin)
{
    ::g::Uno::Float4 v_ = *v;
    uPtr(__this->_obj)->Color(v_);
}

// public Fuse_Drawing_SolidColor_float4_Color_Property(Fuse.Drawing.SolidColor obj) [instance] :6
void MainView__Fuse_Drawing_SolidColor_float4_Color_Property::ctor_1(::g::Fuse::Drawing::SolidColor* obj)
{
    ctor_();
    _obj = obj;
}

// public Fuse_Drawing_SolidColor_float4_Color_Property New(Fuse.Drawing.SolidColor obj) [static] :6
MainView__Fuse_Drawing_SolidColor_float4_Color_Property* MainView__Fuse_Drawing_SolidColor_float4_Color_Property::New1(::g::Fuse::Drawing::SolidColor* obj)
{
    MainView__Fuse_Drawing_SolidColor_float4_Color_Property* obj1 = (MainView__Fuse_Drawing_SolidColor_float4_Color_Property*)uNew(MainView__Fuse_Drawing_SolidColor_float4_Color_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

} // ::g
