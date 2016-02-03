// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Welcome\.build\Simulator\Android\Cache\GeneratedCode\MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.MainView.Fuse_Controls_Image_Fuse_Resources_ImageSource_S-b473a59f.h>
#include <Fuse.Controls.Image.h>
#include <Uno.Object.h>
static uType* TYPES[1];

namespace g{

// public sealed class MainView.Fuse_Controls_Image_Fuse_Resources_ImageSource_Source_Property :104
// {
::g::Uno::UX::Property_type* MainView__Fuse_Controls_Image_Fuse_Resources_ImageSource_Source_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(MainView__Fuse_Controls_Image_Fuse_Resources_ImageSource_Source_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("MainView.Fuse_Controls_Image_Fuse_Resources_ImageSource_Source_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Fuse::Resources::ImageSource_typeof()));
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))MainView__Fuse_Controls_Image_Fuse_Resources_ImageSource_Source_Property__OnGet_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))MainView__Fuse_Controls_Image_Fuse_Resources_ImageSource_Source_Property__OnSet_fn;
    ::TYPES[0] = ::g::Fuse::Controls::Image_typeof();
    type->SetFields(2,
        ::g::Fuse::Controls::Image_typeof(), offsetof(::g::MainView__Fuse_Controls_Image_Fuse_Resources_ImageSource_Source_Property, _obj), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MainView__Fuse_Controls_Image_Fuse_Resources_ImageSource_Source_Property__New1_fn, 0, true, MainView__Fuse_Controls_Image_Fuse_Resources_ImageSource_Source_Property_typeof(), 1, ::g::Fuse::Controls::Image_typeof()));
    return type;
}

// public Fuse_Controls_Image_Fuse_Resources_ImageSource_Source_Property(Fuse.Controls.Image obj) :107
void MainView__Fuse_Controls_Image_Fuse_Resources_ImageSource_Source_Property__ctor_1_fn(MainView__Fuse_Controls_Image_Fuse_Resources_ImageSource_Source_Property* __this, ::g::Fuse::Controls::Image* obj)
{
    __this->ctor_1(obj);
}

// public Fuse_Controls_Image_Fuse_Resources_ImageSource_Source_Property New(Fuse.Controls.Image obj) :107
void MainView__Fuse_Controls_Image_Fuse_Resources_ImageSource_Source_Property__New1_fn(::g::Fuse::Controls::Image* obj, MainView__Fuse_Controls_Image_Fuse_Resources_ImageSource_Source_Property** __retval)
{
    *__retval = MainView__Fuse_Controls_Image_Fuse_Resources_ImageSource_Source_Property::New1(obj);
}

// protected override sealed Fuse.Resources.ImageSource OnGet() :108
void MainView__Fuse_Controls_Image_Fuse_Resources_ImageSource_Source_Property__OnGet_fn(MainView__Fuse_Controls_Image_Fuse_Resources_ImageSource_Source_Property* __this, ::g::Fuse::Resources::ImageSource** __retval)
{
    return *__retval = uPtr(__this->_obj)->Source(), void();
}

// protected override sealed void OnSet(Fuse.Resources.ImageSource v, object origin) :109
void MainView__Fuse_Controls_Image_Fuse_Resources_ImageSource_Source_Property__OnSet_fn(MainView__Fuse_Controls_Image_Fuse_Resources_ImageSource_Source_Property* __this, ::g::Fuse::Resources::ImageSource* v, uObject* origin)
{
    uPtr(__this->_obj)->Source(v);
}

// public Fuse_Controls_Image_Fuse_Resources_ImageSource_Source_Property(Fuse.Controls.Image obj) [instance] :107
void MainView__Fuse_Controls_Image_Fuse_Resources_ImageSource_Source_Property::ctor_1(::g::Fuse::Controls::Image* obj)
{
    ctor_();
    _obj = obj;
}

// public Fuse_Controls_Image_Fuse_Resources_ImageSource_Source_Property New(Fuse.Controls.Image obj) [static] :107
MainView__Fuse_Controls_Image_Fuse_Resources_ImageSource_Source_Property* MainView__Fuse_Controls_Image_Fuse_Resources_ImageSource_Source_Property::New1(::g::Fuse::Controls::Image* obj)
{
    MainView__Fuse_Controls_Image_Fuse_Resources_ImageSource_Source_Property* obj1 = (MainView__Fuse_Controls_Image_Fuse_Resources_ImageSource_Source_Property*)uNew(MainView__Fuse_Controls_Image_Fuse_Resources_ImageSource_Source_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

} // ::g
