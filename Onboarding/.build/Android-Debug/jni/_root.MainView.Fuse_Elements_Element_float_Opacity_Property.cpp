// This file was generated based on 'C:\Users\Kuro\Desktop\GitHub\BlackCode-Fuse\Onboarding\.cache\GeneratedCode\MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.MainView.Fuse_Elements_Element_float_Opacity_Property.h>
#include <Fuse.Elements.Element.h>
#include <Uno.Object.h>
static uType* TYPES[1];

namespace g{

// public sealed class MainView.Fuse_Elements_Element_float_Opacity_Property :10
// {
::g::Uno::UX::Property_type* MainView__Fuse_Elements_Element_float_Opacity_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(MainView__Fuse_Elements_Element_float_Opacity_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("MainView.Fuse_Elements_Element_float_Opacity_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::Float_typeof()));
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))MainView__Fuse_Elements_Element_float_Opacity_Property__OnGet_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))MainView__Fuse_Elements_Element_float_Opacity_Property__OnSet_fn;
    ::TYPES[0] = ::g::Fuse::Elements::Element_typeof();
    type->SetFields(2,
        ::g::Fuse::Elements::Element_typeof(), offsetof(::g::MainView__Fuse_Elements_Element_float_Opacity_Property, _obj), 0);
    return type;
}

// public Fuse_Elements_Element_float_Opacity_Property(Fuse.Elements.Element obj) :13
void MainView__Fuse_Elements_Element_float_Opacity_Property__ctor_1_fn(MainView__Fuse_Elements_Element_float_Opacity_Property* __this, ::g::Fuse::Elements::Element* obj)
{
    __this->ctor_1(obj);
}

// public Fuse_Elements_Element_float_Opacity_Property New(Fuse.Elements.Element obj) :13
void MainView__Fuse_Elements_Element_float_Opacity_Property__New1_fn(::g::Fuse::Elements::Element* obj, MainView__Fuse_Elements_Element_float_Opacity_Property** __retval)
{
    *__retval = MainView__Fuse_Elements_Element_float_Opacity_Property::New1(obj);
}

// protected override sealed float OnGet() :14
void MainView__Fuse_Elements_Element_float_Opacity_Property__OnGet_fn(MainView__Fuse_Elements_Element_float_Opacity_Property* __this, float* __retval)
{
    return *__retval = uPtr(__this->_obj)->Opacity(), void();
}

// protected override sealed void OnSet(float v, object origin) :15
void MainView__Fuse_Elements_Element_float_Opacity_Property__OnSet_fn(MainView__Fuse_Elements_Element_float_Opacity_Property* __this, float* v, uObject* origin)
{
    float v_ = *v;
    uPtr(__this->_obj)->Opacity(v_);
}

// public Fuse_Elements_Element_float_Opacity_Property(Fuse.Elements.Element obj) [instance] :13
void MainView__Fuse_Elements_Element_float_Opacity_Property::ctor_1(::g::Fuse::Elements::Element* obj)
{
    ctor_();
    _obj = obj;
}

// public Fuse_Elements_Element_float_Opacity_Property New(Fuse.Elements.Element obj) [static] :13
MainView__Fuse_Elements_Element_float_Opacity_Property* MainView__Fuse_Elements_Element_float_Opacity_Property::New1(::g::Fuse::Elements::Element* obj)
{
    MainView__Fuse_Elements_Element_float_Opacity_Property* obj1 = (MainView__Fuse_Elements_Element_float_Opacity_Property*)uNew(MainView__Fuse_Elements_Element_float_Opacity_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

} // ::g
