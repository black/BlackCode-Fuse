// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\BrowserShare\.build\Simulator\Android\Cache\GeneratedCode\MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.MainView.Fuse_Elements_Element_Fuse_Elements_Visibility_V-2e4a2461.h>
#include <Fuse.Elements.Element.h>
#include <Uno.Object.h>
static uType* TYPES[1];

namespace g{

// public sealed class MainView.Fuse_Elements_Element_Fuse_Elements_Visibility_Visibility_Property :3
// {
::g::Uno::UX::Property_type* MainView__Fuse_Elements_Element_Fuse_Elements_Visibility_Visibility_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(MainView__Fuse_Elements_Element_Fuse_Elements_Visibility_Visibility_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("MainView.Fuse_Elements_Element_Fuse_Elements_Visibility_Visibility_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof()));
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))MainView__Fuse_Elements_Element_Fuse_Elements_Visibility_Visibility_Property__OnGet_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))MainView__Fuse_Elements_Element_Fuse_Elements_Visibility_Visibility_Property__OnSet_fn;
    ::TYPES[0] = ::g::Fuse::Elements::Element_typeof();
    type->SetFields(2,
        ::g::Fuse::Elements::Element_typeof(), offsetof(::g::MainView__Fuse_Elements_Element_Fuse_Elements_Visibility_Visibility_Property, _obj), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MainView__Fuse_Elements_Element_Fuse_Elements_Visibility_Visibility_Property__New1_fn, 0, true, MainView__Fuse_Elements_Element_Fuse_Elements_Visibility_Visibility_Property_typeof(), 1, ::g::Fuse::Elements::Element_typeof()));
    return type;
}

// public Fuse_Elements_Element_Fuse_Elements_Visibility_Visibility_Property(Fuse.Elements.Element obj) :6
void MainView__Fuse_Elements_Element_Fuse_Elements_Visibility_Visibility_Property__ctor_1_fn(MainView__Fuse_Elements_Element_Fuse_Elements_Visibility_Visibility_Property* __this, ::g::Fuse::Elements::Element* obj)
{
    __this->ctor_1(obj);
}

// public Fuse_Elements_Element_Fuse_Elements_Visibility_Visibility_Property New(Fuse.Elements.Element obj) :6
void MainView__Fuse_Elements_Element_Fuse_Elements_Visibility_Visibility_Property__New1_fn(::g::Fuse::Elements::Element* obj, MainView__Fuse_Elements_Element_Fuse_Elements_Visibility_Visibility_Property** __retval)
{
    *__retval = MainView__Fuse_Elements_Element_Fuse_Elements_Visibility_Visibility_Property::New1(obj);
}

// protected override sealed Fuse.Elements.Visibility OnGet() :7
void MainView__Fuse_Elements_Element_Fuse_Elements_Visibility_Visibility_Property__OnGet_fn(MainView__Fuse_Elements_Element_Fuse_Elements_Visibility_Visibility_Property* __this, int* __retval)
{
    return *__retval = uPtr(__this->_obj)->Visibility(), void();
}

// protected override sealed void OnSet(Fuse.Elements.Visibility v, object origin) :8
void MainView__Fuse_Elements_Element_Fuse_Elements_Visibility_Visibility_Property__OnSet_fn(MainView__Fuse_Elements_Element_Fuse_Elements_Visibility_Visibility_Property* __this, int* v, uObject* origin)
{
    int v_ = *v;
    uPtr(__this->_obj)->Visibility(v_);
}

// public Fuse_Elements_Element_Fuse_Elements_Visibility_Visibility_Property(Fuse.Elements.Element obj) [instance] :6
void MainView__Fuse_Elements_Element_Fuse_Elements_Visibility_Visibility_Property::ctor_1(::g::Fuse::Elements::Element* obj)
{
    ctor_();
    _obj = obj;
}

// public Fuse_Elements_Element_Fuse_Elements_Visibility_Visibility_Property New(Fuse.Elements.Element obj) [static] :6
MainView__Fuse_Elements_Element_Fuse_Elements_Visibility_Visibility_Property* MainView__Fuse_Elements_Element_Fuse_Elements_Visibility_Visibility_Property::New1(::g::Fuse::Elements::Element* obj)
{
    MainView__Fuse_Elements_Element_Fuse_Elements_Visibility_Visibility_Property* obj1 = (MainView__Fuse_Elements_Element_Fuse_Elements_Visibility_Visibility_Property*)uNew(MainView__Fuse_Elements_Element_Fuse_Elements_Visibility_Visibility_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

} // ::g
