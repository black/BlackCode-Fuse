#include <app/Fuse.AppBase.h>
#include <app/Fuse.Controls.Graphics.DefaultTextVisual.h>
#include <app/Fuse.Controls.Panel.h>
#include <app/Fuse.Controls.PlainTextEdit.h>
#include <app/Fuse.Controls.TextBlock.h>
#include <app/Fuse.Controls.TextEdit.TextEditVisual.h>
#include <app/Fuse.Desktop.DesktopRootViewport.h>
#include <app/Fuse.Desktop.NativeStyle.h>
#include <app/Fuse.Desktop.NativeStyle_Template.h>
#include <app/Fuse.Desktop.NativeStyle_Template1.h>
#include <app/Fuse.Desktop.NativeStyle_Template1_Factory.h>
#include <app/Fuse.DrawContext.h>
#include <app/Fuse.Input.Pointer.h>
#include <app/Fuse.Input.PointerEventData.h>
#include <app/Fuse.Input.PointerMovedArgs.h>
#include <app/Fuse.Input.PointerPressedArgs.h>
#include <app/Fuse.Input.PointerReleasedArgs.h>
#include <app/Fuse.Input.PointerWheelMovedArgs.h>
#include <app/Fuse.KeyboardBootstrapper.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.NodeEventArgs.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.ICollection__Uno_UX_ITemplate.h>
#include <app/Uno.Collections.IList__Uno_UX_ITemplate.h>
#include <app/Uno.EventHandler__Uno_Platform_KeyEventArgs.h>
#include <app/Uno.EventHandler__Uno_Platform_PointerEventArgs.h>
#include <app/Uno.EventHandler__Uno_Platform_TextInputEventArgs.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Int.h>
#include <app/Uno.Object.h>
#include <app/Uno.Platform.PointerEventArgs.h>
#include <app/Uno.Platform.PointerType.h>
#include <app/Uno.Platform.WheelDeltaMode.h>
#include <app/Uno.Platform.Window.h>
#include <app/Uno.UX.IFactory.h>
#include <app/Uno.UX.Template__Fuse_Controls_PlainTextEdit.h>
#include <app/Uno.UX.Template__Fuse_Controls_TextBlock.h>

namespace app {
namespace Fuse {
namespace Desktop {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Desktop\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DesktopRootViewport__uType* DesktopRootViewport__typeof()
{
    static ::uStaticStrong<DesktopRootViewport__uType*> type;
    if (type != NULL) return type;

    type = (DesktopRootViewport__uType*)::uAllocClassType(sizeof(DesktopRootViewport__uType), "Fuse.Desktop.DesktopRootViewport", false, 2, 1, 0);

    type->SetBaseType(::app::Fuse::RootViewport__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(DesktopRootViewport__uType, __interface_0),
        ::app::Fuse::IViewport__typeof(), offsetof(DesktopRootViewport__uType, __interface_1));

    type->SetStrongRefs(
        "_dc", offsetof(DesktopRootViewport, _dc));

    type->SetFields(1,
        ::uNewField("_dc", NULL, offsetof(DesktopRootViewport, _dc), ::app::Fuse::DrawContext__typeof()));

    type->SetFunctions(8,
        ::uNewFunctionVoid("Draw", DesktopRootViewport__Draw_1, 0, false),
        ::uNewFunction(".ctor", DesktopRootViewport__New_2, 0, true, DesktopRootViewport__typeof(), ::app::Uno::Platform::Window__typeof()),
        ::uNewFunctionVoid("OnPointerLeft", DesktopRootViewport__OnPointerLeft, 0, false, ::uObject__typeof(), ::app::Uno::Platform::PointerEventArgs__typeof()),
        ::uNewFunctionVoid("OnPointerMoved", DesktopRootViewport__OnPointerMoved, 0, false, ::uObject__typeof(), ::app::Uno::Platform::PointerEventArgs__typeof()),
        ::uNewFunctionVoid("OnPointerPressed", DesktopRootViewport__OnPointerPressed, 0, false, ::uObject__typeof(), ::app::Uno::Platform::PointerEventArgs__typeof()),
        ::uNewFunctionVoid("OnPointerReleased", DesktopRootViewport__OnPointerReleased, 0, false, ::uObject__typeof(), ::app::Uno::Platform::PointerEventArgs__typeof()),
        ::uNewFunctionVoid("OnPointerWheelChanged", DesktopRootViewport__OnPointerWheelChanged, 0, false, ::uObject__typeof(), ::app::Uno::Platform::PointerEventArgs__typeof()),
        ::uNewFunction("TranslatePointerEvent", DesktopRootViewport__TranslatePointerEvent, 0, false, ::app::Fuse::Input::PointerEventData__typeof(), ::app::Uno::Platform::PointerEventArgs__typeof()));

    ::uRegisterType(type);
    return type;
}

void DesktopRootViewport___ObjInit_2(DesktopRootViewport* __this, ::app::Uno::Platform::Window* window)
{
    ::app::Fuse::RootViewport___ObjInit_1(__this, window, -1.0f);
    ::uPtr< ::app::Uno::Platform::Window*>(__this->Window)->add_PointerPressed(::uNewDelegateNonVirt(::app::Uno::EventHandler__Uno_Platform_PointerEventArgs__typeof(), (const void*)DesktopRootViewport__OnPointerPressed, __this));
    ::uPtr< ::app::Uno::Platform::Window*>(__this->Window)->add_PointerReleased(::uNewDelegateNonVirt(::app::Uno::EventHandler__Uno_Platform_PointerEventArgs__typeof(), (const void*)DesktopRootViewport__OnPointerReleased, __this));
    ::uPtr< ::app::Uno::Platform::Window*>(__this->Window)->add_PointerMoved(::uNewDelegateNonVirt(::app::Uno::EventHandler__Uno_Platform_PointerEventArgs__typeof(), (const void*)DesktopRootViewport__OnPointerMoved, __this));
    ::uPtr< ::app::Uno::Platform::Window*>(__this->Window)->add_PointerWheelChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__Uno_Platform_PointerEventArgs__typeof(), (const void*)DesktopRootViewport__OnPointerWheelChanged, __this));
    ::uPtr< ::app::Uno::Platform::Window*>(__this->Window)->add_PointerLeft(::uNewDelegateNonVirt(::app::Uno::EventHandler__Uno_Platform_PointerEventArgs__typeof(), (const void*)DesktopRootViewport__OnPointerLeft, __this));
    ::uPtr< ::app::Uno::Platform::Window*>(__this->Window)->add_KeyPressed(::uNewDelegateNonVirt(::app::Uno::EventHandler__Uno_Platform_KeyEventArgs__typeof(), (const void*)::app::Fuse::KeyboardBootstrapper__OnKeyPressed));
    ::uPtr< ::app::Uno::Platform::Window*>(__this->Window)->add_KeyReleased(::uNewDelegateNonVirt(::app::Uno::EventHandler__Uno_Platform_KeyEventArgs__typeof(), (const void*)::app::Fuse::KeyboardBootstrapper__OnKeyReleased));
    ::uPtr< ::app::Uno::Platform::Window*>(__this->Window)->add_TextInput(::uNewDelegateNonVirt(::app::Uno::EventHandler__Uno_Platform_TextInputEventArgs__typeof(), (const void*)::app::Fuse::KeyboardBootstrapper__OnTextInput));
    __this->_dc = ::app::Fuse::DrawContext__New_1(NULL, (::uObject*)__this);
}

void DesktopRootViewport__Draw_1(DesktopRootViewport* __this)
{
    try
    {
        ::uPtr< ::app::Fuse::DrawContext*>(__this->_dc)->CaptureRootbuffer();
        ::uPtr< ::app::Fuse::DrawContext*>(__this->_dc)->MakeCurrent();

        if (__this->Content() != NULL)
        {
            ::uPtr< ::app::Fuse::Node*>(__this->Content())->Draw(__this->_dc);
        }

        ::uPtr< ::app::Fuse::DrawContext*>(__this->_dc)->Flush();
        ::uPtr< ::app::Fuse::AppBase*>(::app::Fuse::AppBase__get_Current_1(NULL))->DrawSelection(__this->_dc);
        ::uPtr< ::app::Fuse::DrawContext*>(__this->_dc)->ReleaseRootbuffer();
    }
    catch (const ::uThrowable& __t)
    {
        if (::uIs(__t.Exception, ::app::Uno::Exception__typeof()))
        {
            ::app::Uno::Exception* e = (::app::Uno::Exception*)__t.Exception;
            ::app::Fuse::AppBase__OnUnhandledExceptionInternal(NULL, e);
        }
        else
        {
            throw __t;
        }
    }
}

DesktopRootViewport* DesktopRootViewport__New_2(::uStatic* __this, ::app::Uno::Platform::Window* window)
{
    DesktopRootViewport* inst = (DesktopRootViewport*)::uAllocObject(sizeof(DesktopRootViewport), DesktopRootViewport__typeof());
    inst->_ObjInit_2(window);
    return inst;
}

void DesktopRootViewport__OnPointerLeft(DesktopRootViewport* __this, ::uObject* sender, ::app::Uno::Platform::PointerEventArgs* args)
{
    try
    {
        if (__this->Content() != NULL)
        {
            ::app::Fuse::Input::Pointer__RaiseLeft(NULL, __this->Content(), __this->TranslatePointerEvent(args));
        }
    }
    catch (const ::uThrowable& __t)
    {
        if (::uIs(__t.Exception, ::app::Uno::Exception__typeof()))
        {
            ::app::Uno::Exception* e = (::app::Uno::Exception*)__t.Exception;
            ::app::Fuse::AppBase__OnUnhandledExceptionInternal(NULL, e);
        }
        else
        {
            throw __t;
        }
    }
}

void DesktopRootViewport__OnPointerMoved(DesktopRootViewport* __this, ::uObject* sender, ::app::Uno::Platform::PointerEventArgs* args)
{
    try
    {
        if (__this->Content() != NULL)
        {
            ::uPtr< ::app::Uno::Platform::PointerEventArgs*>(args)->Handled(::uPtr< ::app::Fuse::Input::PointerMovedArgs*>(::app::Fuse::Input::Pointer__RaiseMoved(NULL, __this->Content(), __this->TranslatePointerEvent(args)))->IsHandled());
        }
    }
    catch (const ::uThrowable& __t)
    {
        if (::uIs(__t.Exception, ::app::Uno::Exception__typeof()))
        {
            ::app::Uno::Exception* e = (::app::Uno::Exception*)__t.Exception;
            ::app::Fuse::AppBase__OnUnhandledExceptionInternal(NULL, e);
        }
        else
        {
            throw __t;
        }
    }
}

void DesktopRootViewport__OnPointerPressed(DesktopRootViewport* __this, ::uObject* sender, ::app::Uno::Platform::PointerEventArgs* args)
{
    try
    {
        if (__this->Content() != NULL)
        {
            ::uPtr< ::app::Uno::Platform::PointerEventArgs*>(args)->Handled(::uPtr< ::app::Fuse::Input::PointerPressedArgs*>(::app::Fuse::Input::Pointer__RaisePressed(NULL, __this->Content(), __this->TranslatePointerEvent(args)))->IsHandled());
        }
    }
    catch (const ::uThrowable& __t)
    {
        if (::uIs(__t.Exception, ::app::Uno::Exception__typeof()))
        {
            ::app::Uno::Exception* e = (::app::Uno::Exception*)__t.Exception;
            ::app::Fuse::AppBase__OnUnhandledExceptionInternal(NULL, e);
        }
        else
        {
            throw __t;
        }
    }
}

void DesktopRootViewport__OnPointerReleased(DesktopRootViewport* __this, ::uObject* sender, ::app::Uno::Platform::PointerEventArgs* args)
{
    try
    {
        if (__this->Content() != NULL)
        {
            ::uPtr< ::app::Uno::Platform::PointerEventArgs*>(args)->Handled(::uPtr< ::app::Fuse::Input::PointerReleasedArgs*>(::app::Fuse::Input::Pointer__RaiseReleased(NULL, __this->Content(), __this->TranslatePointerEvent(args)))->IsHandled());
        }
    }
    catch (const ::uThrowable& __t)
    {
        if (::uIs(__t.Exception, ::app::Uno::Exception__typeof()))
        {
            ::app::Uno::Exception* e = (::app::Uno::Exception*)__t.Exception;
            ::app::Fuse::AppBase__OnUnhandledExceptionInternal(NULL, e);
        }
        else
        {
            throw __t;
        }
    }
}

void DesktopRootViewport__OnPointerWheelChanged(DesktopRootViewport* __this, ::uObject* sender, ::app::Uno::Platform::PointerEventArgs* args)
{
    try
    {
        if (__this->Content() != NULL)
        {
            ::uPtr< ::app::Uno::Platform::PointerEventArgs*>(args)->Handled(::uPtr< ::app::Fuse::Input::PointerWheelMovedArgs*>(::app::Fuse::Input::Pointer__RaiseWheelMoved(NULL, __this->Content(), __this->TranslatePointerEvent(args)))->IsHandled());
        }
    }
    catch (const ::uThrowable& __t)
    {
        if (::uIs(__t.Exception, ::app::Uno::Exception__typeof()))
        {
            ::app::Uno::Exception* e = (::app::Uno::Exception*)__t.Exception;
            ::app::Fuse::AppBase__OnUnhandledExceptionInternal(NULL, e);
        }
        else
        {
            throw __t;
        }
    }
}

::app::Fuse::Input::PointerEventData* DesktopRootViewport__TranslatePointerEvent(DesktopRootViewport* __this, ::app::Uno::Platform::PointerEventArgs* args)
{
    ::app::Fuse::Input::PointerEventData* collection_123;
    collection_123 = ::app::Fuse::Input::PointerEventData__New_1(NULL);
    ::uPtr< ::app::Fuse::Input::PointerEventData*>(collection_123)->PointIndex = ::uPtr< ::app::Uno::Platform::PointerEventArgs*>(args)->FingerId();
    collection_123->WindowPoint = ::app::Uno::Float2__op_Division_1(NULL, args->Position(), __this->PointDensity_1());
    collection_123->WheelDelta = args->WheelDelta();
    collection_123->WheelDeltaMode = args->WheelDeltaMode();
    collection_123->IsPrimary = args->IsPrimary();
    collection_123->PointerType = args->PointerType();
    return collection_123;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Desktop\0.11.3\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NativeStyle__uType* NativeStyle__typeof()
{
    static ::uStaticStrong<NativeStyle__uType*> type;
    if (type != NULL) return type;

    type = (NativeStyle__uType*)::uAllocClassType(sizeof(NativeStyle__uType), "Fuse.Desktop.NativeStyle", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::Style__typeof());

    type->SetInterfaces(
        ::app::Uno::UX::ITemplate__typeof(), offsetof(NativeStyle__uType, __interface_0));

    type->SetFunctions(2,
        ::uNewFunctionVoid("InitializeUX", NativeStyle__InitializeUX, 0, false),
        ::uNewFunction(".ctor", NativeStyle__New_2, 0, true, NativeStyle__typeof()));

    ::uRegisterType(type);
    return type;
}

void NativeStyle___ObjInit_1(NativeStyle* __this)
{
    ::app::Fuse::Style___ObjInit(__this);
    __this->InitializeUX();
}

void NativeStyle__InitializeUX(NativeStyle* __this)
{
    ::app::Fuse::Desktop::NativeStyle_Template* collection_123;
    ::app::Fuse::Desktop::NativeStyle_Template1* collection_124;
    collection_123 = ::app::Fuse::Desktop::NativeStyle_Template__New_1(NULL, __this);
    ::uPtr< ::app::Fuse::Desktop::NativeStyle_Template*>(collection_123)->Cascade(true);
    collection_123->AffectSubtypes(true);
    ::app::Fuse::Desktop::NativeStyle_Template* temp = collection_123;
    collection_124 = ::app::Fuse::Desktop::NativeStyle_Template1__New_1(NULL, __this);
    ::uPtr< ::app::Fuse::Desktop::NativeStyle_Template1*>(collection_124)->Cascade(true);
    collection_124->AffectSubtypes(true);
    ::app::Fuse::Desktop::NativeStyle_Template1* temp1 = collection_124;
    ::app::Uno::Collections::ICollection__Uno_UX_ITemplate::Add(::uPtr< ::uObject*>(__this->Templates()), (::uObject*)temp);
    ::app::Uno::Collections::ICollection__Uno_UX_ITemplate::Add(::uPtr< ::uObject*>(__this->Templates()), (::uObject*)temp1);
}

NativeStyle* NativeStyle__New_2(::uStatic* __this)
{
    NativeStyle* inst = (NativeStyle*)::uAllocObject(sizeof(NativeStyle), NativeStyle__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Desktop\0.11.3\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NativeStyle_Template__uType* NativeStyle_Template__typeof()
{
    static ::uStaticStrong<NativeStyle_Template__uType*> type;
    if (type != NULL) return type;

    type = (NativeStyle_Template__uType*)::uAllocClassType(sizeof(NativeStyle_Template__uType), "Fuse.Desktop.NativeStyle.Template", false, 1, 1, 0);

    type->SetBaseType(::app::Uno::UX::Template__Fuse_Controls_TextBlock__typeof());
    type->__fp_OnApply = (void(*)(::app::Uno::UX::Template__Fuse_Controls_TextBlock*, ::app::Fuse::Controls::TextBlock*))NativeStyle_Template__OnApply;

    type->SetInterfaces(
        ::app::Uno::UX::ITemplate__typeof(), offsetof(NativeStyle_Template__uType, __interface_0));

    type->SetStrongRefs(
        "__parent", offsetof(NativeStyle_Template, __parent));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", NativeStyle_Template__New_1, 0, true, NativeStyle_Template__typeof(), ::app::Fuse::Desktop::NativeStyle__typeof()));

    ::uRegisterType(type);
    return type;
}

void NativeStyle_Template___ObjInit_1(NativeStyle_Template* __this, ::app::Fuse::Desktop::NativeStyle* parent)
{
    ::app::Uno::UX::Template__Fuse_Controls_TextBlock___ObjInit(__this);
    __this->__parent = parent;
}

NativeStyle_Template* NativeStyle_Template__New_1(::uStatic* __this, ::app::Fuse::Desktop::NativeStyle* parent)
{
    NativeStyle_Template* inst = (NativeStyle_Template*)::uAllocObject(sizeof(NativeStyle_Template), NativeStyle_Template__typeof());
    inst->_ObjInit_1(parent);
    return inst;
}

void NativeStyle_Template__OnApply(NativeStyle_Template* __this, ::app::Fuse::Controls::TextBlock* self)
{
    ::app::Fuse::Controls::Graphics::DefaultTextVisual* temp = ::app::Fuse::Controls::Graphics::DefaultTextVisual__New_1(NULL);
    ::uPtr< ::app::Fuse::Controls::TextBlock*>(self)->AddStyleChild((::app::Fuse::Node*)temp);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Desktop\0.11.3\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NativeStyle_Template1__uType* NativeStyle_Template1__typeof()
{
    static ::uStaticStrong<NativeStyle_Template1__uType*> type;
    if (type != NULL) return type;

    type = (NativeStyle_Template1__uType*)::uAllocClassType(sizeof(NativeStyle_Template1__uType), "Fuse.Desktop.NativeStyle.Template1", false, 1, 1, 0);

    type->SetBaseType(::app::Uno::UX::Template__Fuse_Controls_PlainTextEdit__typeof());
    type->__fp_OnApply = (void(*)(::app::Uno::UX::Template__Fuse_Controls_PlainTextEdit*, ::app::Fuse::Controls::PlainTextEdit*))NativeStyle_Template1__OnApply;

    type->SetInterfaces(
        ::app::Uno::UX::ITemplate__typeof(), offsetof(NativeStyle_Template1__uType, __interface_0));

    type->SetStrongRefs(
        "__parent", offsetof(NativeStyle_Template1, __parent));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", NativeStyle_Template1__New_1, 0, true, NativeStyle_Template1__typeof(), ::app::Fuse::Desktop::NativeStyle__typeof()));

    ::uRegisterType(type);
    return type;
}

void NativeStyle_Template1___ObjInit_1(NativeStyle_Template1* __this, ::app::Fuse::Desktop::NativeStyle* parent)
{
    ::app::Uno::UX::Template__Fuse_Controls_PlainTextEdit___ObjInit(__this);
    __this->__parent = parent;
}

NativeStyle_Template1* NativeStyle_Template1__New_1(::uStatic* __this, ::app::Fuse::Desktop::NativeStyle* parent)
{
    NativeStyle_Template1* inst = (NativeStyle_Template1*)::uAllocObject(sizeof(NativeStyle_Template1), NativeStyle_Template1__typeof());
    inst->_ObjInit_1(parent);
    return inst;
}

void NativeStyle_Template1__OnApply(NativeStyle_Template1* __this, ::app::Fuse::Controls::PlainTextEdit* self)
{
    ::app::Fuse::Desktop::NativeStyle_Template1_Factory* temp = ::app::Fuse::Desktop::NativeStyle_Template1_Factory__New_2(NULL, __this);
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory*>(::app::Fuse::Controls::PlainTextEdit__NativeEditProperty)->SetStyle(self, (::uObject*)temp);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Desktop\0.11.3\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NativeStyle_Template1_Factory__uType* NativeStyle_Template1_Factory__typeof()
{
    static ::uStaticStrong<NativeStyle_Template1_Factory__uType*> type;
    if (type != NULL) return type;

    type = (NativeStyle_Template1_Factory__uType*)::uAllocClassType(sizeof(NativeStyle_Template1_Factory__uType), "Fuse.Desktop.NativeStyle.Template1.Factory", false, 1, 1, 0);

    type->__interface_0.__fp_New_1 = (::uObject*(*)(void*))NativeStyle_Template1_Factory__New_1;

    type->SetInterfaces(
        ::app::Uno::UX::IFactory__typeof(), offsetof(NativeStyle_Template1_Factory__uType, __interface_0));

    type->SetStrongRefs(
        "__parent", offsetof(NativeStyle_Template1_Factory, __parent));

    type->SetFunctions(2,
        ::uNewFunction("New", NativeStyle_Template1_Factory__New_1, 0, false, ::uObject__typeof()),
        ::uNewFunction(".ctor", NativeStyle_Template1_Factory__New_2, 0, true, NativeStyle_Template1_Factory__typeof(), ::app::Fuse::Desktop::NativeStyle_Template1__typeof()));

    ::uRegisterType(type);
    return type;
}

void NativeStyle_Template1_Factory___ObjInit(NativeStyle_Template1_Factory* __this, ::app::Fuse::Desktop::NativeStyle_Template1* parent)
{
    __this->__parent = parent;
}

::uObject* NativeStyle_Template1_Factory__New_1(NativeStyle_Template1_Factory* __this)
{
    ::app::Fuse::Controls::TextEdit::TextEditVisual* self = ::app::Fuse::Controls::TextEdit::TextEditVisual__New_1(NULL);
    return (::uObject*)self;
}

NativeStyle_Template1_Factory* NativeStyle_Template1_Factory__New_2(::uStatic* __this, ::app::Fuse::Desktop::NativeStyle_Template1* parent)
{
    NativeStyle_Template1_Factory* inst = (NativeStyle_Template1_Factory*)::uAllocObject(sizeof(NativeStyle_Template1_Factory), NativeStyle_Template1_Factory__typeof());
    inst->_ObjInit(parent);
    return inst;
}

}}}
