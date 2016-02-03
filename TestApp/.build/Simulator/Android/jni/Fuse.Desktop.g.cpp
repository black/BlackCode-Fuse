// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.AppBase.h>
#include <Fuse.Controls.FallbackTextEdit.TextEditVisual.h>
#include <Fuse.Controls.Graphics.DefaultTextVisual.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.PlainTextEdit.h>
#include <Fuse.Controls.TextBlock.h>
#include <Fuse.Desktop.DesktopRootViewport.h>
#include <Fuse.Desktop.NativeStyle.h>
#include <Fuse.Desktop.NativeStyle.Template.h>
#include <Fuse.Desktop.NativeStyle.Template1.Factory.h>
#include <Fuse.Desktop.NativeStyle.Template1.h>
#include <Fuse.DrawContext.h>
#include <Fuse.Input.Pointer.h>
#include <Fuse.Input.PointerEventData.h>
#include <Fuse.Input.PointerMovedArgs.h>
#include <Fuse.Input.PointerPressedArgs.h>
#include <Fuse.Input.PointerReleasedArgs.h>
#include <Fuse.Input.PointerWheelMovedArgs.h>
#include <Fuse.KeyboardBootstrapper.h>
#include <Fuse.Node.h>
#include <Fuse.NodeEventArgs.h>
#include <Fuse.StyleProperty-2.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.EventHandler-1.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.Platform.KeyEventArgs.h>
#include <Uno.Platform.PointerEventArgs.h>
#include <Uno.Platform.PointerType.h>
#include <Uno.Platform.TextInputEventArgs.h>
#include <Uno.Platform.WheelDeltaMode.h>
#include <Uno.Platform.Window.h>
#include <Uno.UX.IFactory.h>
#include <Uno.UX.Template-1.h>
static uType* TYPES[17];

namespace g{
namespace Fuse{
namespace Desktop{

// C:\ProgramData\Uno\Packages\Fuse.Desktop\0.18.8\$.uno(70)
// ---------------------------------------------------------

// internal sealed class DesktopRootViewport :70
// {
::g::Fuse::RootViewport_type* DesktopRootViewport_typeof()
{
    static uSStrong< ::g::Fuse::RootViewport_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 59;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(DesktopRootViewport);
    options.TypeSize = sizeof(::g::Fuse::RootViewport_type);
    type = (::g::Fuse::RootViewport_type*)uClassType::New("Fuse.Desktop.DesktopRootViewport", options);
    type->SetBase(::g::Fuse::RootViewport_typeof());
    type->interface1.fp_PointToWorldRay = (void(*)(uObject*, ::g::Uno::Float2*, ::g::Uno::Geometry::Ray*))::g::Fuse::RootViewport__PointToWorldRay_fn;
    type->interface1.fp_get_PointDensity = (void(*)(uObject*, float*))::g::Fuse::RootViewport__get_PointDensity1_fn;
    type->interface1.fp_get_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::RootViewport__get_Size_fn;
    type->interface1.fp_get_PixelSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::RootViewport__get_PixelSize_fn;
    type->interface1.fp_get_ProjectionTransform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::RootViewport__get_ProjectionTransform_fn;
    type->interface1.fp_get_ProjectionTransformInverse = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::RootViewport__get_ProjectionTransformInverse_fn;
    type->interface1.fp_get_ViewProjectionTransform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::RootViewport__get_ViewProjectionTransform_fn;
    type->interface1.fp_get_ViewProjectionTransformInverse = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::RootViewport__get_ViewProjectionTransformInverse_fn;
    type->interface1.fp_get_ViewTransform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::RootViewport__get_ViewTransform_fn;
    type->interface1.fp_get_ViewTransformInverse = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::RootViewport__get_ViewTransformInverse_fn;
    type->interface1.fp_get_ViewOrigin = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::RootViewport__get_ViewOrigin_fn;
    type->interface1.fp_get_ViewRange = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::RootViewport__get_ViewRange_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    ::TYPES[0] = ::g::Uno::Platform::Window_typeof();
    ::TYPES[1] = ::g::Fuse::RootViewport_typeof();
    ::TYPES[2] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::PointerEventArgs_typeof());
    ::TYPES[3] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::KeyEventArgs_typeof());
    ::TYPES[4] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::TextInputEventArgs_typeof());
    ::TYPES[5] = ::g::Fuse::IViewport_typeof();
    ::TYPES[6] = ::g::Uno::Platform::PointerEventArgs_typeof();
    ::TYPES[7] = ::g::Fuse::NodeEventArgs_typeof();
    ::TYPES[8] = ::g::Fuse::Input::PointerEventData_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::RootViewport_type, interface0),
        ::g::Fuse::IViewport_typeof(), offsetof(::g::Fuse::RootViewport_type, interface1));
    type->SetFields(58,
        ::g::Fuse::DrawContext_typeof(), offsetof(::g::Fuse::Desktop::DesktopRootViewport, _dc), 0);
    return type;
}

// public DesktopRootViewport(Uno.Platform.Window window) :74
void DesktopRootViewport__ctor_2_fn(DesktopRootViewport* __this, ::g::Uno::Platform::Window* window)
{
    __this->ctor_2(window);
}

// public DesktopRootViewport New(Uno.Platform.Window window) :74
void DesktopRootViewport__New2_fn(::g::Uno::Platform::Window* window, DesktopRootViewport** __retval)
{
    *__retval = DesktopRootViewport::New2(window);
}

// private void OnPointerLeft(object sender, Uno.Platform.PointerEventArgs args) :179
void DesktopRootViewport__OnPointerLeft_fn(DesktopRootViewport* __this, uObject* sender, ::g::Uno::Platform::PointerEventArgs* args)
{
    __this->OnPointerLeft(sender, args);
}

// private void OnPointerMoved(object sender, Uno.Platform.PointerEventArgs args) :153
void DesktopRootViewport__OnPointerMoved_fn(DesktopRootViewport* __this, uObject* sender, ::g::Uno::Platform::PointerEventArgs* args)
{
    __this->OnPointerMoved(sender, args);
}

// private void OnPointerPressed(object sender, Uno.Platform.PointerEventArgs args) :127
void DesktopRootViewport__OnPointerPressed_fn(DesktopRootViewport* __this, uObject* sender, ::g::Uno::Platform::PointerEventArgs* args)
{
    __this->OnPointerPressed(sender, args);
}

// private void OnPointerReleased(object sender, Uno.Platform.PointerEventArgs args) :140
void DesktopRootViewport__OnPointerReleased_fn(DesktopRootViewport* __this, uObject* sender, ::g::Uno::Platform::PointerEventArgs* args)
{
    __this->OnPointerReleased(sender, args);
}

// private void OnPointerWheelChanged(object sender, Uno.Platform.PointerEventArgs args) :166
void DesktopRootViewport__OnPointerWheelChanged_fn(DesktopRootViewport* __this, uObject* sender, ::g::Uno::Platform::PointerEventArgs* args)
{
    __this->OnPointerWheelChanged(sender, args);
}

// private Fuse.Input.PointerEventData TranslatePointerEvent(Uno.Platform.PointerEventArgs args) :89
void DesktopRootViewport__TranslatePointerEvent_fn(DesktopRootViewport* __this, ::g::Uno::Platform::PointerEventArgs* args, ::g::Fuse::Input::PointerEventData** __retval)
{
    *__retval = __this->TranslatePointerEvent(args);
}

// public DesktopRootViewport(Uno.Platform.Window window) [instance] :74
void DesktopRootViewport::ctor_2(::g::Uno::Platform::Window* window)
{
    ctor_1(window, -1.0f);
    uPtr(Window)->add_PointerPressed(uDelegate::New(::TYPES[2/*Uno.EventHandler<Uno.Platform.PointerEventArgs>*/], (void*)DesktopRootViewport__OnPointerPressed_fn, this));
    uPtr(Window)->add_PointerReleased(uDelegate::New(::TYPES[2/*Uno.EventHandler<Uno.Platform.PointerEventArgs>*/], (void*)DesktopRootViewport__OnPointerReleased_fn, this));
    uPtr(Window)->add_PointerMoved(uDelegate::New(::TYPES[2/*Uno.EventHandler<Uno.Platform.PointerEventArgs>*/], (void*)DesktopRootViewport__OnPointerMoved_fn, this));
    uPtr(Window)->add_PointerWheelChanged(uDelegate::New(::TYPES[2/*Uno.EventHandler<Uno.Platform.PointerEventArgs>*/], (void*)DesktopRootViewport__OnPointerWheelChanged_fn, this));
    uPtr(Window)->add_PointerLeft(uDelegate::New(::TYPES[2/*Uno.EventHandler<Uno.Platform.PointerEventArgs>*/], (void*)DesktopRootViewport__OnPointerLeft_fn, this));
    uPtr(Window)->add_KeyPressed(uDelegate::New(::TYPES[3/*Uno.EventHandler<Uno.Platform.KeyEventArgs>*/], (void*)::g::Fuse::KeyboardBootstrapper__OnKeyPressed_fn));
    uPtr(Window)->add_KeyReleased(uDelegate::New(::TYPES[3/*Uno.EventHandler<Uno.Platform.KeyEventArgs>*/], (void*)::g::Fuse::KeyboardBootstrapper__OnKeyReleased_fn));
    uPtr(Window)->add_TextInput(uDelegate::New(::TYPES[4/*Uno.EventHandler<Uno.Platform.TextInputEventArgs>*/], (void*)::g::Fuse::KeyboardBootstrapper__OnTextInput_fn));
    _dc = ::g::Fuse::DrawContext::New1((uObject*)this);
}

// private void OnPointerLeft(object sender, Uno.Platform.PointerEventArgs args) [instance] :179
void DesktopRootViewport::OnPointerLeft(uObject* sender, ::g::Uno::Platform::PointerEventArgs* args)
{
    try
    {
        if (Content() != NULL)
            ::g::Fuse::Input::Pointer::RaiseLeft(Content(), TranslatePointerEvent(args));
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e);
    }
}

// private void OnPointerMoved(object sender, Uno.Platform.PointerEventArgs args) [instance] :153
void DesktopRootViewport::OnPointerMoved(uObject* sender, ::g::Uno::Platform::PointerEventArgs* args)
{
    try
    {
        if (Content() != NULL)
            uPtr(args)->Handled(uPtr(::g::Fuse::Input::Pointer::RaiseMoved(Content(), TranslatePointerEvent(args)))->IsHandled());
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e);
    }
}

// private void OnPointerPressed(object sender, Uno.Platform.PointerEventArgs args) [instance] :127
void DesktopRootViewport::OnPointerPressed(uObject* sender, ::g::Uno::Platform::PointerEventArgs* args)
{
    try
    {
        if (Content() != NULL)
            uPtr(args)->Handled(uPtr(::g::Fuse::Input::Pointer::RaisePressed(Content(), TranslatePointerEvent(args)))->IsHandled());
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e);
    }
}

// private void OnPointerReleased(object sender, Uno.Platform.PointerEventArgs args) [instance] :140
void DesktopRootViewport::OnPointerReleased(uObject* sender, ::g::Uno::Platform::PointerEventArgs* args)
{
    try
    {
        if (Content() != NULL)
            uPtr(args)->Handled(uPtr(::g::Fuse::Input::Pointer::RaiseReleased(Content(), TranslatePointerEvent(args)))->IsHandled());
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e);
    }
}

// private void OnPointerWheelChanged(object sender, Uno.Platform.PointerEventArgs args) [instance] :166
void DesktopRootViewport::OnPointerWheelChanged(uObject* sender, ::g::Uno::Platform::PointerEventArgs* args)
{
    try
    {
        if (Content() != NULL)
            uPtr(args)->Handled(uPtr(::g::Fuse::Input::Pointer::RaiseWheelMoved(Content(), TranslatePointerEvent(args)))->IsHandled());
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e);
    }
}

// private Fuse.Input.PointerEventData TranslatePointerEvent(Uno.Platform.PointerEventArgs args) [instance] :89
::g::Fuse::Input::PointerEventData* DesktopRootViewport::TranslatePointerEvent(::g::Uno::Platform::PointerEventArgs* args)
{
    ::g::Fuse::Input::PointerEventData* collection1;
    collection1 = ::g::Fuse::Input::PointerEventData::New1();
    uPtr(collection1)->PointIndex = uPtr(args)->FingerId();
    uPtr(collection1)->WindowPoint = ::g::Uno::Float2__op_Division1(uPtr(args)->Position(), PointDensity1());
    uPtr(collection1)->WheelDelta = uPtr(args)->WheelDelta();
    uPtr(collection1)->WheelDeltaMode = uPtr(args)->WheelDeltaMode();
    uPtr(collection1)->IsPrimary = uPtr(args)->IsPrimary();
    uPtr(collection1)->PointerType = uPtr(args)->PointerType();
    return collection1;
}

// public DesktopRootViewport New(Uno.Platform.Window window) [static] :74
DesktopRootViewport* DesktopRootViewport::New2(::g::Uno::Platform::Window* window)
{
    DesktopRootViewport* obj2 = (DesktopRootViewport*)uNew(DesktopRootViewport_typeof());
    obj2->ctor_2(window);
    return obj2;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Desktop\0.18.8\.cache\GeneratedCode\$.uno(30)
// ------------------------------------------------------------------------------

// public partial sealed class NativeStyle.Template1.Factory :30
// {
// static Factory() :37
static void NativeStyle__Template1__Factory__cctor__fn(uType* __type)
{
}

NativeStyle__Template1__Factory_type* NativeStyle__Template1__Factory_typeof()
{
    static uSStrong<NativeStyle__Template1__Factory_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(NativeStyle__Template1__Factory);
    options.TypeSize = sizeof(NativeStyle__Template1__Factory_type);
    type = (NativeStyle__Template1__Factory_type*)uClassType::New("Fuse.Desktop.NativeStyle.Template1.Factory", options);
    type->fp_cctor_ = NativeStyle__Template1__Factory__cctor__fn;
    type->interface0.fp_New1 = (void(*)(uObject*, uObject**))NativeStyle__Template1__Factory__New1_fn;
    ::TYPES[9] = uObject_typeof();
    type->SetInterfaces(
        ::g::Uno::UX::IFactory_typeof(), offsetof(NativeStyle__Template1__Factory_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Desktop::NativeStyle__Template1_typeof(), offsetof(::g::Fuse::Desktop::NativeStyle__Template1__Factory, __parent1), 0);
    type->Reflection.SetFunctions(2,
        new uFunction("New", NULL, (void*)NativeStyle__Template1__Factory__New1_fn, 0, false, uObject_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)NativeStyle__Template1__Factory__New2_fn, 0, true, NativeStyle__Template1__Factory_typeof(), 1, ::g::Fuse::Desktop::NativeStyle__Template1_typeof()));
    return type;
}

// public Factory(Fuse.Desktop.NativeStyle.Template1 parent) :33
void NativeStyle__Template1__Factory__ctor__fn(NativeStyle__Template1__Factory* __this, ::g::Fuse::Desktop::NativeStyle__Template1* parent)
{
    __this->ctor_(parent);
}

// public object New() :40
void NativeStyle__Template1__Factory__New1_fn(NativeStyle__Template1__Factory* __this, uObject** __retval)
{
    *__retval = __this->New1();
}

// public Factory New(Fuse.Desktop.NativeStyle.Template1 parent) :33
void NativeStyle__Template1__Factory__New2_fn(::g::Fuse::Desktop::NativeStyle__Template1* parent, NativeStyle__Template1__Factory** __retval)
{
    *__retval = NativeStyle__Template1__Factory::New2(parent);
}

// public Factory(Fuse.Desktop.NativeStyle.Template1 parent) [instance] :33
void NativeStyle__Template1__Factory::ctor_(::g::Fuse::Desktop::NativeStyle__Template1* parent)
{
    __parent1 = parent;
}

// public object New() [instance] :40
uObject* NativeStyle__Template1__Factory::New1()
{
    ::g::Fuse::Controls::FallbackTextEdit::TextEditVisual* self = ::g::Fuse::Controls::FallbackTextEdit::TextEditVisual::New1();
    return self;
}

// public Factory New(Fuse.Desktop.NativeStyle.Template1 parent) [static] :33
NativeStyle__Template1__Factory* NativeStyle__Template1__Factory::New2(::g::Fuse::Desktop::NativeStyle__Template1* parent)
{
    NativeStyle__Template1__Factory* obj1 = (NativeStyle__Template1__Factory*)uNew(NativeStyle__Template1__Factory_typeof());
    obj1->ctor_(parent);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Desktop\0.18.8\.cache\GeneratedCode\$.uno(5)
// -----------------------------------------------------------------------------

// public partial sealed class NativeStyle :5
// {
// static NativeStyle() :55
static void NativeStyle__cctor__fn(uType* __type)
{
}

::g::Fuse::Style_type* NativeStyle_typeof()
{
    static uSStrong< ::g::Fuse::Style_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(NativeStyle);
    options.TypeSize = sizeof(::g::Fuse::Style_type);
    type = (::g::Fuse::Style_type*)uClassType::New("Fuse.Desktop.NativeStyle", options);
    type->SetBase(::g::Fuse::Style_typeof());
    type->fp_ctor_ = (void*)NativeStyle__New2_fn;
    type->fp_cctor_ = NativeStyle__cctor__fn;
    type->interface0.fp_Apply = (void(*)(uObject*, uObject*, bool*))::g::Fuse::Style__Apply_fn;
    ::TYPES[10] = ::g::Uno::UX::Template_typeof()->MakeType(::g::Fuse::Controls::TextBlock_typeof());
    ::TYPES[11] = ::g::Uno::UX::Template_typeof()->MakeType(::g::Fuse::Controls::PlainTextEdit_typeof());
    ::TYPES[12] = ::g::Fuse::Style_typeof();
    ::TYPES[13] = ::g::Uno::UX::ITemplate_typeof();
    type->SetInterfaces(
        ::g::Uno::UX::ITemplate_typeof(), offsetof(::g::Fuse::Style_type, interface0));
    type->SetFields(5);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)NativeStyle__New2_fn, 0, true, NativeStyle_typeof(), 0));
    return type;
}

// public NativeStyle() :58
void NativeStyle__ctor_1_fn(NativeStyle* __this)
{
    __this->ctor_1();
}

// internal void InitializeUX() :62
void NativeStyle__InitializeUX_fn(NativeStyle* __this)
{
    __this->InitializeUX();
}

// public NativeStyle New() :58
void NativeStyle__New2_fn(NativeStyle** __retval)
{
    *__retval = NativeStyle::New2();
}

// public NativeStyle() [instance] :58
void NativeStyle::ctor_1()
{
    ctor_();
    InitializeUX();
}

// internal void InitializeUX() [instance] :62
void NativeStyle::InitializeUX()
{
    NativeStyle__Template* collection1;
    NativeStyle__Template1* collection2;
    collection1 = NativeStyle__Template::New1(this);
    uPtr(collection1)->Cascade(true);
    true;
    uPtr(collection1)->AffectSubtypes(true);
    true;
    NativeStyle__Template* temp = collection1;
    collection2 = NativeStyle__Template1::New1(this);
    uPtr(collection2)->Cascade(true);
    true;
    uPtr(collection2)->AffectSubtypes(true);
    true;
    NativeStyle__Template1* temp1 = collection2;
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[13/*Uno.UX.ITemplate*/])), (uObject*)temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[13/*Uno.UX.ITemplate*/])), (uObject*)temp1);
}

// public NativeStyle New() [static] :58
NativeStyle* NativeStyle::New2()
{
    NativeStyle* obj3 = (NativeStyle*)uNew(NativeStyle_typeof());
    obj3->ctor_1();
    return obj3;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Desktop\0.18.8\.cache\GeneratedCode\$.uno(7)
// -----------------------------------------------------------------------------

// public partial sealed class NativeStyle.Template :7
// {
// static Template() :14
static void NativeStyle__Template__cctor__fn(uType* __type)
{
}

::g::Uno::UX::Template_type* NativeStyle__Template_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(NativeStyle__Template);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("Fuse.Desktop.NativeStyle.Template", options);
    type->SetBase(::g::Uno::UX::Template_typeof()->MakeType(::g::Fuse::Controls::TextBlock_typeof()));
    type->fp_cctor_ = NativeStyle__Template__cctor__fn;
    type->fp_OnApply = (void(*)(::g::Uno::UX::Template*, void*))NativeStyle__Template__OnApply_fn;
    type->interface0.fp_Apply = (void(*)(uObject*, uObject*, bool*))::g::Uno::UX::Template__Apply_fn;
    ::TYPES[14] = ::g::Fuse::Node_typeof();
    type->SetInterfaces(
        ::g::Uno::UX::ITemplate_typeof(), offsetof(::g::Uno::UX::Template_type, interface0));
    type->SetFields(2,
        ::g::Fuse::Desktop::NativeStyle_typeof(), offsetof(::g::Fuse::Desktop::NativeStyle__Template, __parent1), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)NativeStyle__Template__New1_fn, 0, true, NativeStyle__Template_typeof(), 1, ::g::Fuse::Desktop::NativeStyle_typeof()));
    return type;
}

// public Template(Fuse.Desktop.NativeStyle parent) :10
void NativeStyle__Template__ctor_1_fn(NativeStyle__Template* __this, ::g::Fuse::Desktop::NativeStyle* parent)
{
    __this->ctor_1(parent);
}

// public Template New(Fuse.Desktop.NativeStyle parent) :10
void NativeStyle__Template__New1_fn(::g::Fuse::Desktop::NativeStyle* parent, NativeStyle__Template** __retval)
{
    *__retval = NativeStyle__Template::New1(parent);
}

// protected override sealed void OnApply(Fuse.Controls.TextBlock self) :17
void NativeStyle__Template__OnApply_fn(NativeStyle__Template* __this, ::g::Fuse::Controls::TextBlock* self)
{
    ::g::Fuse::Controls::Graphics::DefaultTextVisual* temp = ::g::Fuse::Controls::Graphics::DefaultTextVisual::New1();
    uPtr(self)->AddStyleChild(temp);
}

// public Template(Fuse.Desktop.NativeStyle parent) [instance] :10
void NativeStyle__Template::ctor_1(::g::Fuse::Desktop::NativeStyle* parent)
{
    ctor_();
    __parent1 = parent;
}

// public Template New(Fuse.Desktop.NativeStyle parent) [static] :10
NativeStyle__Template* NativeStyle__Template::New1(::g::Fuse::Desktop::NativeStyle* parent)
{
    NativeStyle__Template* obj1 = (NativeStyle__Template*)uNew(NativeStyle__Template_typeof());
    obj1->ctor_1(parent);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Desktop\0.18.8\.cache\GeneratedCode\$.uno(23)
// ------------------------------------------------------------------------------

// public partial sealed class NativeStyle.Template1 :23
// {
// static Template1() :46
static void NativeStyle__Template1__cctor__fn(uType* __type)
{
}

::g::Uno::UX::Template_type* NativeStyle__Template1_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(NativeStyle__Template1);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("Fuse.Desktop.NativeStyle.Template1", options);
    type->SetBase(::g::Uno::UX::Template_typeof()->MakeType(::g::Fuse::Controls::PlainTextEdit_typeof()));
    type->fp_cctor_ = NativeStyle__Template1__cctor__fn;
    type->fp_OnApply = (void(*)(::g::Uno::UX::Template*, void*))NativeStyle__Template1__OnApply_fn;
    type->interface0.fp_Apply = (void(*)(uObject*, uObject*, bool*))::g::Uno::UX::Template__Apply_fn;
    ::TYPES[15] = ::g::Fuse::Controls::PlainTextEdit_typeof();
    ::TYPES[16] = ::g::Uno::UX::IFactory_typeof();
    type->SetInterfaces(
        ::g::Uno::UX::ITemplate_typeof(), offsetof(::g::Uno::UX::Template_type, interface0));
    type->SetFields(2,
        ::g::Fuse::Desktop::NativeStyle_typeof(), offsetof(::g::Fuse::Desktop::NativeStyle__Template1, __parent1), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)NativeStyle__Template1__New1_fn, 0, true, NativeStyle__Template1_typeof(), 1, ::g::Fuse::Desktop::NativeStyle_typeof()));
    return type;
}

// public Template1(Fuse.Desktop.NativeStyle parent) :26
void NativeStyle__Template1__ctor_1_fn(NativeStyle__Template1* __this, ::g::Fuse::Desktop::NativeStyle* parent)
{
    __this->ctor_1(parent);
}

// public Template1 New(Fuse.Desktop.NativeStyle parent) :26
void NativeStyle__Template1__New1_fn(::g::Fuse::Desktop::NativeStyle* parent, NativeStyle__Template1** __retval)
{
    *__retval = NativeStyle__Template1::New1(parent);
}

// protected override sealed void OnApply(Fuse.Controls.PlainTextEdit self) :49
void NativeStyle__Template1__OnApply_fn(NativeStyle__Template1* __this, ::g::Fuse::Controls::PlainTextEdit* self)
{
    bool ret2;
    NativeStyle__Template1__Factory* temp = NativeStyle__Template1__Factory::New2(__this);
    ::g::Fuse::StyleProperty1__SetStyle_fn(uPtr(::g::Fuse::Controls::PlainTextEdit::NativeEditProperty()), self, (uObject*)temp, &ret2);
}

// public Template1(Fuse.Desktop.NativeStyle parent) [instance] :26
void NativeStyle__Template1::ctor_1(::g::Fuse::Desktop::NativeStyle* parent)
{
    ctor_();
    __parent1 = parent;
}

// public Template1 New(Fuse.Desktop.NativeStyle parent) [static] :26
NativeStyle__Template1* NativeStyle__Template1::New1(::g::Fuse::Desktop::NativeStyle* parent)
{
    NativeStyle__Template1* obj1 = (NativeStyle__Template1*)uNew(NativeStyle__Template1_typeof());
    obj1->ctor_1(parent);
    return obj1;
}
// }

}}} // ::g::Fuse::Desktop
