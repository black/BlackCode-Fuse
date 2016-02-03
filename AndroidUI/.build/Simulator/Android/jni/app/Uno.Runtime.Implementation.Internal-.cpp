#include <app/Uno.Application.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Buffer.h>
#include <app/Uno.BundleFile.h>
#include <app/Uno.Byte.h>
#include <app/Uno.Byte4.h>
#include <app/Uno.Char.h>
#include <app/Uno.Collections.IEnumerator__char.h>
#include <app/Uno.Collections.List__char.h>
#include <app/Uno.Collections.List__Uno_Runtime_Implementation_Internal_Forma-9a8ac0f6.h>
#include <app/Uno.Content.Fonts.FontFace.h>
#include <app/Uno.Content.Splines.KeyframedSpline2_Key__float4x4__float4x4.h>
#include <app/Uno.Double.h>
#include <app/Uno.EventArgs.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Float4x4.h>
#include <app/Uno.FormatException.h>
#include <app/Uno.Func__Uno_Runtime_Implementation_Internal_BufferReader__float4x4.h>
#include <app/Uno.Func__Uno_Runtime_Implementation_Internal_BufferReader__Uno-be2c1e22.h>
#include <app/Uno.Graphics.BufferUsage.h>
#include <app/Uno.Graphics.GraphicsContext.h>
#include <app/Uno.Graphics.IndexBuffer.h>
#include <app/Uno.Graphics.RenderTarget.h>
#include <app/Uno.Graphics.Texture2D.h>
#include <app/Uno.Graphics.TextureCube.h>
#include <app/Uno.Graphics.VertexBuffer.h>
#include <app/Uno.Int.h>
#include <app/Uno.Long.h>
#include <app/Uno.Math.h>
#include <app/Uno.Object.h>
#include <app/Uno.Platform.ClosingEventArgs.h>
#include <app/Uno.Platform.EventModifiers.h>
#include <app/Uno.Platform.Key.h>
#include <app/Uno.Platform.KeyEventArgs.h>
#include <app/Uno.Platform.MouseButton.h>
#include <app/Uno.Platform.PointerEventArgs.h>
#include <app/Uno.Platform.PointerType.h>
#include <app/Uno.Platform.TextInputEventArgs.h>
#include <app/Uno.Platform.WheelDeltaMode.h>
#include <app/Uno.Platform.Window.h>
#include <app/Uno.Runtime.Implementation.ClockImpl.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayConverters.h>
#include <app/Uno.Runtime.Implementation.Internal.BootstrapHints.h>
#include <app/Uno.Runtime.Implementation.Internal.Bootstrapper.h>
#include <app/Uno.Runtime.Implementation.Internal.BufferConverters.h>
#include <app/Uno.Runtime.Implementation.Internal.BufferReader.h>
#include <app/Uno.Runtime.Implementation.Internal.BundleFileFactory.h>
#include <app/Uno.Runtime.Implementation.Internal.BundleRegistry.h>
#include <app/Uno.Runtime.Implementation.Internal.FormatSpecifier.h>
#include <app/Uno.Runtime.Implementation.Internal.FormatStringItem.h>
#include <app/Uno.Runtime.Implementation.Internal.FormatStringLiteral.h>
#include <app/Uno.Runtime.Implementation.Internal.FormatStringToken.h>
#include <app/Uno.Runtime.Implementation.Internal.FormatStringTokenizer.h>
#include <app/Uno.Runtime.Implementation.Internal.FormatStringTokenizer_State.h>
#include <app/Uno.Runtime.Implementation.Internal.NumericFormatter.h>
#include <app/Uno.Runtime.Implementation.Internal.StringEnumerable.h>
#include <app/Uno.Runtime.Implementation.Internal.StringEnumerator.h>
#include <app/Uno.Runtime.Implementation.Internal.WindowHelpers.h>
#include <app/Uno.Runtime.Implementation.PlatformWindowHandle.h>
#include <app/Uno.Runtime.Implementation.PlatformWindowImpl.h>
#include <app/Uno.Runtime.Implementation.TextEncodingImpl.h>
#include <app/Uno.SByte.h>
#include <app/Uno.SByte4.h>
#include <app/Uno.Short.h>
#include <app/Uno.String.h>
#include <app/Uno.Text.StringBuilder.h>
#include <app/Uno.UInt.h>
#include <app/Uno.ULong.h>
#include <app/Uno.UShort.h>

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {
namespace Internal {

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ArrayConverters__uType* ArrayConverters__typeof()
{
    static ::uStaticStrong<ArrayConverters__uType*> type;
    if (type != NULL) return type;

    type = (ArrayConverters__uType*)::uAllocClassType(sizeof(ArrayConverters__uType), "Uno.Runtime.Implementation.Internal.ArrayConverters");

    type->SetFunctions(2,
        ::uNewFunction("ToFloat4x4Array", ArrayConverters__ToFloat4x4Array, 0, true, ::uGetArrayType(::app::Uno::Float4x4__typeof()), ::app::Uno::Buffer__typeof()),
        ::uNewFunction("ToFloat4x4KeyArray", ArrayConverters__ToFloat4x4KeyArray, 0, true, ::uGetArrayType(::app::Uno::Content::Splines::KeyframedSpline2_Key__float4x4__float4x4__typeof()), ::app::Uno::Buffer__typeof()));

    ::uRegisterType(type);
    return type;
}

::uArray* ArrayConverters__ToFloat4x4Array(::uStatic* __this, ::app::Uno::Buffer* b)
{
    return ::app::Uno::Runtime::Implementation::Internal::BufferReader__ReadArray__float4x4(NULL, ::app::Uno::Runtime::Implementation::Internal::BufferReader__New_1(NULL, b), ::uPtr< ::app::Uno::Buffer*>(b)->SizeInBytes() / 64, ::uNewDelegateNonVirt(::app::Uno::Func__Uno_Runtime_Implementation_Internal_BufferReader__float4x4__typeof(), (const void*)::app::Uno::Runtime::Implementation::Internal::BufferReader__ReadFloat4x4_1));
}

::uArray* ArrayConverters__ToFloat4x4KeyArray(::uStatic* __this, ::app::Uno::Buffer* b)
{
    return ::app::Uno::Runtime::Implementation::Internal::BufferReader__ReadArray__Uno_Content_Splines_KeyframedSpline2_Key_float4x4_float4x4_(NULL, ::app::Uno::Runtime::Implementation::Internal::BufferReader__New_1(NULL, b), ::uPtr< ::app::Uno::Buffer*>(b)->SizeInBytes() / 72, ::uNewDelegateNonVirt(::app::Uno::Func__Uno_Runtime_Implementation_Internal_BufferReader__Uno_Content_Splines_KeyframedSpline2_Key_float4x4_float4x4___typeof(), (const void*)::app::Uno::Runtime::Implementation::Internal::BufferReader__ReadFloat4x4Key));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

int BootstrapHints___MaxFps;
bool BootstrapHints___VSync;

BootstrapHints__uType* BootstrapHints__typeof()
{
    static ::uStaticStrong<BootstrapHints__uType*> type;
    if (type != NULL) return type;

    type = (BootstrapHints__uType*)::uAllocClassType(sizeof(BootstrapHints__uType), "Uno.Runtime.Implementation.Internal.BootstrapHints");

    type->SetFunctions(4,
        ::uNewFunction("get_MaxFps", BootstrapHints__get_MaxFps, 0, true, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_VSync", BootstrapHints__get_VSync, 0, true, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_MaxFps", BootstrapHints__set_MaxFps, 0, true, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("set_VSync", BootstrapHints__set_VSync, 0, true, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

int BootstrapHints__get_MaxFps(::uStatic* __this)
{
    return BootstrapHints___MaxFps;
}

bool BootstrapHints__get_VSync(::uStatic* __this)
{
    return BootstrapHints___VSync;
}

void BootstrapHints__set_MaxFps(::uStatic* __this, int value)
{
    BootstrapHints___MaxFps = value;
}

void BootstrapHints__set_VSync(::uStatic* __this, bool value)
{
    BootstrapHints___VSync = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

int Bootstrapper___fingerCount;
int Bootstrapper___lastMouseX;
int Bootstrapper___lastMouseY;
int Bootstrapper___lastPrimaryFingerId;
double Bootstrapper___lastTime;
double Bootstrapper___startTime;

Bootstrapper__uType* Bootstrapper__typeof()
{
    static ::uStaticStrong<Bootstrapper__uType*> type;
    if (type != NULL) return type;

    type = (Bootstrapper__uType*)::uAllocClassType(sizeof(Bootstrapper__uType), "Uno.Runtime.Implementation.Internal.Bootstrapper");

    type->SetFields(6,
        ::uNewField("_fingerCount", &Bootstrapper___fingerCount, 0, ::app::Uno::Int__typeof()),
        ::uNewField("_lastMouseX", &Bootstrapper___lastMouseX, 0, ::app::Uno::Int__typeof()),
        ::uNewField("_lastMouseY", &Bootstrapper___lastMouseY, 0, ::app::Uno::Int__typeof()),
        ::uNewField("_lastPrimaryFingerId", &Bootstrapper___lastPrimaryFingerId, 0, ::app::Uno::Int__typeof()),
        ::uNewField("_lastTime", &Bootstrapper___lastTime, 0, ::app::Uno::Double__typeof()),
        ::uNewField("_startTime", &Bootstrapper___startTime, 0, ::app::Uno::Double__typeof()));

    type->SetFunctions(21,
        ::uNewFunction("get_DrawNextFrame", Bootstrapper__get_DrawNextFrame, 0, true, ::app::Uno::Bool__typeof()),
        ::uNewFunction("GetEventModifiers", Bootstrapper__GetEventModifiers, 0, true, ::app::Uno::Platform::EventModifiers__typeof(), ::app::Uno::Runtime::Implementation::PlatformWindowHandle__typeof()),
        ::uNewFunction("GetPointerScale", Bootstrapper__GetPointerScale, 0, true, ::app::Uno::Float2__typeof()),
        ::uNewFunction("IsPrimaryFinger", Bootstrapper__IsPrimaryFinger, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Runtime::Implementation::PlatformWindowHandle__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("OnDraw", Bootstrapper__OnDraw, 0, true),
        ::uNewFunction("OnKeyboardResized", Bootstrapper__OnKeyboardResized, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Runtime::Implementation::PlatformWindowHandle__typeof()),
        ::uNewFunction("OnKeyDown", Bootstrapper__OnKeyDown, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Runtime::Implementation::PlatformWindowHandle__typeof(), ::app::Uno::Platform::Key__typeof()),
        ::uNewFunction("OnKeyUp", Bootstrapper__OnKeyUp, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Runtime::Implementation::PlatformWindowHandle__typeof(), ::app::Uno::Platform::Key__typeof()),
        ::uNewFunction("OnMouseDown", Bootstrapper__OnMouseDown, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Runtime::Implementation::PlatformWindowHandle__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Platform::MouseButton__typeof()),
        ::uNewFunction("OnMouseMove", Bootstrapper__OnMouseMove, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Runtime::Implementation::PlatformWindowHandle__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("OnMouseOut", Bootstrapper__OnMouseOut, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Runtime::Implementation::PlatformWindowHandle__typeof()),
        ::uNewFunction("OnMouseUp", Bootstrapper__OnMouseUp, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Runtime::Implementation::PlatformWindowHandle__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Platform::MouseButton__typeof()),
        ::uNewFunction("OnMouseWheel", Bootstrapper__OnMouseWheel, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Runtime::Implementation::PlatformWindowHandle__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("OnTextInput", Bootstrapper__OnTextInput, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Runtime::Implementation::PlatformWindowHandle__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("OnTouchDown", Bootstrapper__OnTouchDown, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Runtime::Implementation::PlatformWindowHandle__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("OnTouchMove", Bootstrapper__OnTouchMove, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Runtime::Implementation::PlatformWindowHandle__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("OnTouchUp", Bootstrapper__OnTouchUp, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Runtime::Implementation::PlatformWindowHandle__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("OnUpdate", Bootstrapper__OnUpdate, 0, true),
        ::uNewFunctionVoid("OnWindowClosed", Bootstrapper__OnWindowClosed, 0, true, ::app::Uno::Runtime::Implementation::PlatformWindowHandle__typeof()),
        ::uNewFunction("OnWindowClosing", Bootstrapper__OnWindowClosing, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Runtime::Implementation::PlatformWindowHandle__typeof()),
        ::uNewFunctionVoid("OnWindowSizeChanged", Bootstrapper__OnWindowSizeChanged, 0, true, ::app::Uno::Runtime::Implementation::PlatformWindowHandle__typeof()));

    ::uRegisterType(type);
    return type;
}

void Bootstrapper___TypeInit(::uStatic* __this)
{
    Bootstrapper___lastPrimaryFingerId = -1;
    double currentTime = ::app::Uno::Runtime::Implementation::ClockImpl__GetSeconds(NULL);
    Bootstrapper___startTime = currentTime;
    Bootstrapper___lastTime = currentTime;
}

bool Bootstrapper__get_DrawNextFrame(::uStatic* __this)
{
    return ::uPtr< ::app::Uno::Application*>(::app::Uno::Application__get_Current(NULL))->DrawNextFrame();
}

int Bootstrapper__GetEventModifiers(::uStatic* __this, ::Xli::Window* handle)
{
    return ((((((::app::Uno::Runtime::Implementation::PlatformWindowImpl__GetKeyState(NULL, handle, 17) ? 2 : 0) | (::app::Uno::Runtime::Implementation::PlatformWindowImpl__GetKeyState(NULL, handle, 16) ? 4 : 0)) | (::app::Uno::Runtime::Implementation::PlatformWindowImpl__GetKeyState(NULL, handle, 18) ? 8 : 0)) | (::app::Uno::Runtime::Implementation::PlatformWindowImpl__GetKeyState(NULL, handle, 203) ? 1 : 0)) | (::app::Uno::Runtime::Implementation::PlatformWindowImpl__GetMouseButtonState(NULL, handle, 1) ? 16 : 0)) | (::app::Uno::Runtime::Implementation::PlatformWindowImpl__GetMouseButtonState(NULL, handle, 2) ? 32 : 0)) | (::app::Uno::Runtime::Implementation::PlatformWindowImpl__GetMouseButtonState(NULL, handle, 3) ? 64 : 0);
}

::app::Uno::Float2 Bootstrapper__GetPointerScale(::uStatic* __this)
{
    {
        return ::app::Uno::Float2__New_2(NULL, 1.0f, 1.0f);
    }
}

bool Bootstrapper__IsPrimaryFinger(::uStatic* __this, ::Xli::Window* handle, int fingerId)
{
    return (Bootstrapper___lastPrimaryFingerId == fingerId) && true;
}

void Bootstrapper__OnDraw(::uStatic* __this)
{
    ::app::Uno::Application* app = ::app::Uno::Application__get_Current(NULL);
    ::app::Uno::Graphics::GraphicsContext* gc = ::uPtr< ::app::Uno::Application*>(app)->GraphicsContext();
    ::uPtr< ::app::Uno::Graphics::GraphicsContext*>(gc)->SetRenderTarget(::uPtr< ::app::Uno::Graphics::GraphicsContext*>(gc)->Backbuffer());
    gc->Clear(app->ClearColor(), app->ClearDepth());
    app->Draw();
}

bool Bootstrapper__OnKeyboardResized(::uStatic* __this, ::Xli::Window* handle)
{
    ::app::Uno::Application* app = ::app::Uno::Application__get_Current(NULL);

    if (app == NULL)
    {
        return false;
    }

    ::uPtr< ::app::Uno::Platform::Window*>(::uPtr< ::app::Uno::Application*>(app)->Window())->OnKeyboardResized();
    return true;
}

bool Bootstrapper__OnKeyDown(::uStatic* __this, ::Xli::Window* handle, int key)
{
    ::app::Uno::Application* app = ::app::Uno::Application__get_Current(NULL);

    if (app == NULL)
    {
        return false;
    }

    ::app::Uno::Platform::KeyEventArgs* args = ::app::Uno::Platform::KeyEventArgs__New_2(NULL, key, Bootstrapper__GetEventModifiers(NULL, handle));
    ::uPtr< ::app::Uno::Platform::Window*>(::uPtr< ::app::Uno::Application*>(app)->Window())->OnKeyPressed(args);
    return ::uPtr< ::app::Uno::Platform::KeyEventArgs*>(args)->Handled();
}

bool Bootstrapper__OnKeyUp(::uStatic* __this, ::Xli::Window* handle, int key)
{
    ::app::Uno::Application* app = ::app::Uno::Application__get_Current(NULL);

    if (app == NULL)
    {
        return false;
    }

    ::app::Uno::Platform::KeyEventArgs* args = ::app::Uno::Platform::KeyEventArgs__New_2(NULL, key, Bootstrapper__GetEventModifiers(NULL, handle));
    ::uPtr< ::app::Uno::Platform::Window*>(::uPtr< ::app::Uno::Application*>(app)->Window())->OnKeyReleased(args);
    return ::uPtr< ::app::Uno::Platform::KeyEventArgs*>(args)->Handled();
}

bool Bootstrapper__OnMouseDown(::uStatic* __this, ::Xli::Window* handle, int x, int y, int button)
{
    ::app::Uno::Application* app = ::app::Uno::Application__get_Current(NULL);

    if (app == NULL)
    {
        return false;
    }

    ::app::Uno::Platform::PointerEventArgs* args = ::app::Uno::Platform::PointerEventArgs__New_2(NULL, 1, Bootstrapper__GetEventModifiers(NULL, handle), button == 1, ::app::Uno::Float2__op_Multiply_2(NULL, ::app::Uno::Float2__New_2(NULL, (float)x, (float)y), Bootstrapper__GetPointerScale(NULL)), 0, button, ::app::Uno::Float2__New_2(NULL, 0.0f, 0.0f), 0);
    ::uPtr< ::app::Uno::Platform::Window*>(::uPtr< ::app::Uno::Application*>(app)->Window())->OnPointerPressed(args);
    return ::uPtr< ::app::Uno::Platform::PointerEventArgs*>(args)->Handled();
}

bool Bootstrapper__OnMouseMove(::uStatic* __this, ::Xli::Window* handle, int x, int y)
{
    ::app::Uno::Application* app = ::app::Uno::Application__get_Current(NULL);

    if (app == NULL)
    {
        return false;
    }

    int modifiers = Bootstrapper__GetEventModifiers(NULL, handle);
    ::app::Uno::Platform::PointerEventArgs* args = ::app::Uno::Platform::PointerEventArgs__New_2(NULL, 1, modifiers, (modifiers & 16) == 16, ::app::Uno::Float2__op_Multiply_2(NULL, ::app::Uno::Float2__New_2(NULL, (float)x, (float)y), Bootstrapper__GetPointerScale(NULL)), 0, 0, ::app::Uno::Float2__New_2(NULL, 0.0f, 0.0f), 0);
    ::uPtr< ::app::Uno::Platform::Window*>(::uPtr< ::app::Uno::Application*>(app)->Window())->OnPointerMoved(args);
    Bootstrapper___lastMouseX = x;
    Bootstrapper___lastMouseY = y;
    return ::uPtr< ::app::Uno::Platform::PointerEventArgs*>(args)->Handled();
}

bool Bootstrapper__OnMouseOut(::uStatic* __this, ::Xli::Window* handle)
{
    ::app::Uno::Application* app = ::app::Uno::Application__get_Current(NULL);

    if (app == NULL)
    {
        return false;
    }

    int modifiers = Bootstrapper__GetEventModifiers(NULL, handle);
    ::app::Uno::Platform::PointerEventArgs* args = ::app::Uno::Platform::PointerEventArgs__New_2(NULL, 1, modifiers, (modifiers & 16) == 16, ::app::Uno::Float2__New_2(NULL, 0.0f, 0.0f), 0, 0, ::app::Uno::Float2__New_2(NULL, 0.0f, 0.0f), 0);
    ::uPtr< ::app::Uno::Platform::Window*>(::uPtr< ::app::Uno::Application*>(app)->Window())->OnPointerLeft(args);
    return ::uPtr< ::app::Uno::Platform::PointerEventArgs*>(args)->Handled();
}

bool Bootstrapper__OnMouseUp(::uStatic* __this, ::Xli::Window* handle, int x, int y, int button)
{
    ::app::Uno::Application* app = ::app::Uno::Application__get_Current(NULL);

    if (app == NULL)
    {
        return false;
    }

    ::app::Uno::Platform::PointerEventArgs* args = ::app::Uno::Platform::PointerEventArgs__New_2(NULL, 1, Bootstrapper__GetEventModifiers(NULL, handle), button == 1, ::app::Uno::Float2__op_Multiply_2(NULL, ::app::Uno::Float2__New_2(NULL, (float)x, (float)y), Bootstrapper__GetPointerScale(NULL)), 0, button, ::app::Uno::Float2__New_2(NULL, 0.0f, 0.0f), 0);
    ::uPtr< ::app::Uno::Platform::Window*>(::uPtr< ::app::Uno::Application*>(app)->Window())->OnPointerReleased(args);
    return ::uPtr< ::app::Uno::Platform::PointerEventArgs*>(args)->Handled();
}

bool Bootstrapper__OnMouseWheel(::uStatic* __this, ::Xli::Window* handle, float dHori, float dVert, int wheelDeltaMode)
{
    ::app::Uno::Application* app = ::app::Uno::Application__get_Current(NULL);

    if (app == NULL)
    {
        return false;
    }

    ::app::Uno::Platform::PointerEventArgs* args = ::app::Uno::Platform::PointerEventArgs__New_2(NULL, 1, Bootstrapper__GetEventModifiers(NULL, handle), false, ::app::Uno::Float2__op_Multiply_2(NULL, ::app::Uno::Float2__New_2(NULL, (float)Bootstrapper___lastMouseX, (float)Bootstrapper___lastMouseY), Bootstrapper__GetPointerScale(NULL)), 0, 0, ::app::Uno::Float2__New_2(NULL, dHori, dVert), wheelDeltaMode);
    ::uPtr< ::app::Uno::Platform::Window*>(::uPtr< ::app::Uno::Application*>(app)->Window())->OnPointerWheelChanged(args);
    return ::uPtr< ::app::Uno::Platform::PointerEventArgs*>(args)->Handled();
}

bool Bootstrapper__OnTextInput(::uStatic* __this, ::Xli::Window* handle, ::uString* text)
{
    ::app::Uno::Application* app = ::app::Uno::Application__get_Current(NULL);

    if (app == NULL)
    {
        return false;
    }

    ::app::Uno::Platform::TextInputEventArgs* args = ::app::Uno::Platform::TextInputEventArgs__New_2(NULL, text, Bootstrapper__GetEventModifiers(NULL, handle));
    ::uPtr< ::app::Uno::Platform::Window*>(::uPtr< ::app::Uno::Application*>(app)->Window())->OnTextInput(args);
    return ::uPtr< ::app::Uno::Platform::TextInputEventArgs*>(args)->Handled();
}

bool Bootstrapper__OnTouchDown(::uStatic* __this, ::Xli::Window* handle, float x, float y, int id)
{
    ::app::Uno::Application* app = ::app::Uno::Application__get_Current(NULL);
    Bootstrapper___fingerCount++;

    if (Bootstrapper___fingerCount == 1)
    {
        Bootstrapper___lastPrimaryFingerId = id;
    }

    if (app == NULL)
    {
        return false;
    }

    ::app::Uno::Platform::PointerEventArgs* args = ::app::Uno::Platform::PointerEventArgs__New_2(NULL, 2, Bootstrapper__GetEventModifiers(NULL, handle), Bootstrapper__IsPrimaryFinger(NULL, handle, id), ::app::Uno::Float2__op_Multiply_2(NULL, ::app::Uno::Float2__New_2(NULL, x, y), Bootstrapper__GetPointerScale(NULL)), id, 0, ::app::Uno::Float2__New_2(NULL, 0.0f, 0.0f), 0);
    ::uPtr< ::app::Uno::Platform::Window*>(::uPtr< ::app::Uno::Application*>(app)->Window())->OnPointerPressed(args);
    return ::uPtr< ::app::Uno::Platform::PointerEventArgs*>(args)->Handled();
}

bool Bootstrapper__OnTouchMove(::uStatic* __this, ::Xli::Window* handle, float x, float y, int id)
{
    ::app::Uno::Application* app = ::app::Uno::Application__get_Current(NULL);

    if (Bootstrapper___fingerCount == 1)
    {
        Bootstrapper___lastPrimaryFingerId = id;
    }

    if (app == NULL)
    {
        return false;
    }

    ::app::Uno::Platform::PointerEventArgs* args = ::app::Uno::Platform::PointerEventArgs__New_2(NULL, 2, Bootstrapper__GetEventModifiers(NULL, handle), Bootstrapper__IsPrimaryFinger(NULL, handle, id), ::app::Uno::Float2__op_Multiply_2(NULL, ::app::Uno::Float2__New_2(NULL, x, y), Bootstrapper__GetPointerScale(NULL)), id, 0, ::app::Uno::Float2__New_2(NULL, 0.0f, 0.0f), 0);
    ::uPtr< ::app::Uno::Platform::Window*>(::uPtr< ::app::Uno::Application*>(app)->Window())->OnPointerMoved(args);
    return ::uPtr< ::app::Uno::Platform::PointerEventArgs*>(args)->Handled();
}

bool Bootstrapper__OnTouchUp(::uStatic* __this, ::Xli::Window* handle, float x, float y, int id)
{
    ::app::Uno::Application* app = ::app::Uno::Application__get_Current(NULL);
    Bootstrapper___fingerCount--;

    if (Bootstrapper___lastPrimaryFingerId == id)
    {
        Bootstrapper___lastPrimaryFingerId = -1;
    }

    if (app == NULL)
    {
        return false;
    }

    ::app::Uno::Platform::PointerEventArgs* args = ::app::Uno::Platform::PointerEventArgs__New_2(NULL, 2, Bootstrapper__GetEventModifiers(NULL, handle), Bootstrapper__IsPrimaryFinger(NULL, handle, id), ::app::Uno::Float2__op_Multiply_2(NULL, ::app::Uno::Float2__New_2(NULL, x, y), Bootstrapper__GetPointerScale(NULL)), id, 0, ::app::Uno::Float2__New_2(NULL, 0.0f, 0.0f), 0);
    ::uPtr< ::app::Uno::Platform::Window*>(::uPtr< ::app::Uno::Application*>(app)->Window())->OnPointerReleased(args);
    return ::uPtr< ::app::Uno::Platform::PointerEventArgs*>(args)->Handled();
}

void Bootstrapper__OnUpdate(::uStatic* __this)
{
    ::app::Uno::Application* app = ::app::Uno::Application__get_Current(NULL);
    ::uPtr< ::app::Uno::Platform::Window*>(::uPtr< ::app::Uno::Application*>(app)->Window())->OnUpdating(::app::Uno::EventArgs__Empty);
    app->Update();
}

void Bootstrapper__OnWindowClosed(::uStatic* __this, ::Xli::Window* handle)
{
    ::app::Uno::Application* app = ::app::Uno::Application__get_Current(NULL);

    if (app != NULL)
    {
        ::uPtr< ::app::Uno::Platform::Window*>(::uPtr< ::app::Uno::Application*>(app)->Window())->OnClosed(::app::Uno::EventArgs__Empty);
    }
}

bool Bootstrapper__OnWindowClosing(::uStatic* __this, ::Xli::Window* handle)
{
    ::app::Uno::Application* app = ::app::Uno::Application__get_Current(NULL);
    ::app::Uno::Platform::ClosingEventArgs* args = ::app::Uno::Platform::ClosingEventArgs__New_2(NULL);

    if (app != NULL)
    {
        ::uPtr< ::app::Uno::Platform::Window*>(::uPtr< ::app::Uno::Application*>(app)->Window())->OnClosing(args);
    }

    return ::uPtr< ::app::Uno::Platform::ClosingEventArgs*>(args)->Cancel();
}

void Bootstrapper__OnWindowSizeChanged(::uStatic* __this, ::Xli::Window* handle)
{
    ::app::Uno::Application* app = ::app::Uno::Application__get_Current(NULL);

    if (app != NULL)
    {
        ::uPtr< ::app::Uno::Graphics::GraphicsContext*>(::uPtr< ::app::Uno::Application*>(app)->GraphicsContext())->UpdateBackbuffer();
        ::uPtr< ::app::Uno::Platform::Window*>(app->Window())->OnResized(::app::Uno::EventArgs__Empty);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

BufferConverters__uType* BufferConverters__typeof()
{
    static ::uStaticStrong<BufferConverters__uType*> type;
    if (type != NULL) return type;

    type = (BufferConverters__uType*)::uAllocClassType(sizeof(BufferConverters__uType), "Uno.Runtime.Implementation.Internal.BufferConverters");

    type->SetFunctions(10,
        ::uNewFunction("ToBuffer", BufferConverters__ToBuffer, 0, true, ::app::Uno::Buffer__typeof(), ::uGetArrayType(::app::Uno::Float__typeof())),
        ::uNewFunction("ToBuffer", BufferConverters__ToBuffer_1, 0, true, ::app::Uno::Buffer__typeof(), ::uGetArrayType(::app::Uno::Float2__typeof())),
        ::uNewFunction("ToBuffer", BufferConverters__ToBuffer_2, 0, true, ::app::Uno::Buffer__typeof(), ::uGetArrayType(::app::Uno::Float3__typeof())),
        ::uNewFunction("ToBuffer", BufferConverters__ToBuffer_3, 0, true, ::app::Uno::Buffer__typeof(), ::uGetArrayType(::app::Uno::Float4__typeof())),
        ::uNewFunction("ToBuffer", BufferConverters__ToBuffer_4, 0, true, ::app::Uno::Buffer__typeof(), ::uGetArrayType(::app::Uno::SByte4__typeof())),
        ::uNewFunction("ToBuffer", BufferConverters__ToBuffer_5, 0, true, ::app::Uno::Buffer__typeof(), ::uGetArrayType(::app::Uno::Byte__typeof())),
        ::uNewFunction("ToBuffer", BufferConverters__ToBuffer_6, 0, true, ::app::Uno::Buffer__typeof(), ::uGetArrayType(::app::Uno::UShort__typeof())),
        ::uNewFunction("ToBuffer", BufferConverters__ToBuffer_7, 0, true, ::app::Uno::Buffer__typeof(), ::uGetArrayType(::app::Uno::UInt__typeof())),
        ::uNewFunction("ToBuffer", BufferConverters__ToBuffer_8, 0, true, ::app::Uno::Buffer__typeof(), ::uGetArrayType(::app::Uno::Byte4__typeof())),
        ::uNewFunction("ToBuffer", BufferConverters__ToBuffer_9, 0, true, ::app::Uno::Buffer__typeof(), ::uGetArrayType(::app::Uno::Short__typeof())));

    ::uRegisterType(type);
    return type;
}

::app::Uno::Buffer* BufferConverters__ToBuffer(::uStatic* __this, ::uArray* data)
{
    ::app::Uno::Buffer* result = ::app::Uno::Buffer__New_3(NULL, ::uPtr< ::uArray*>(data)->Length() * 4);

    for (int i = 0; i < data->Length(); i++)
    {
        ::uPtr< ::app::Uno::Buffer*>(result)->SetFloat(i * 4, data->Item< float>(i), true);
    }

    return result;
}

::app::Uno::Buffer* BufferConverters__ToBuffer_1(::uStatic* __this, ::uArray* data)
{
    ::app::Uno::Buffer* result = ::app::Uno::Buffer__New_3(NULL, ::uPtr< ::uArray*>(data)->Length() * 8);

    for (int i = 0; i < data->Length(); i++)
    {
        ::uPtr< ::app::Uno::Buffer*>(result)->SetFloat2(i * 8, data->Item< ::app::Uno::Float2>(i), true);
    }

    return result;
}

::app::Uno::Buffer* BufferConverters__ToBuffer_2(::uStatic* __this, ::uArray* data)
{
    ::app::Uno::Buffer* result = ::app::Uno::Buffer__New_3(NULL, ::uPtr< ::uArray*>(data)->Length() * 12);

    for (int i = 0; i < data->Length(); i++)
    {
        ::uPtr< ::app::Uno::Buffer*>(result)->SetFloat3(i * 12, data->Item< ::app::Uno::Float3>(i), true);
    }

    return result;
}

::app::Uno::Buffer* BufferConverters__ToBuffer_3(::uStatic* __this, ::uArray* data)
{
    ::app::Uno::Buffer* result = ::app::Uno::Buffer__New_3(NULL, ::uPtr< ::uArray*>(data)->Length() * 16);

    for (int i = 0; i < data->Length(); i++)
    {
        ::uPtr< ::app::Uno::Buffer*>(result)->SetFloat4(i * 16, data->Item< ::app::Uno::Float4>(i), true);
    }

    return result;
}

::app::Uno::Buffer* BufferConverters__ToBuffer_4(::uStatic* __this, ::uArray* data)
{
    ::app::Uno::Buffer* result = ::app::Uno::Buffer__New_3(NULL, ::uPtr< ::uArray*>(data)->Length() * 4);

    for (int i = 0; i < data->Length(); i++)
    {
        ::uPtr< ::app::Uno::Buffer*>(result)->SetSByte4(i * 4, data->Item< ::app::Uno::SByte4>(i));
    }

    return result;
}

::app::Uno::Buffer* BufferConverters__ToBuffer_5(::uStatic* __this, ::uArray* data)
{
    ::app::Uno::Buffer* result = ::app::Uno::Buffer__New_3(NULL, ::uPtr< ::uArray*>(data)->Length());

    for (int i = 0; i < data->Length(); i++)
    {
        ::uPtr< ::app::Uno::Buffer*>(result)->SetByte(i, data->Item< ::uByte>(i));
    }

    return result;
}

::app::Uno::Buffer* BufferConverters__ToBuffer_6(::uStatic* __this, ::uArray* data)
{
    ::app::Uno::Buffer* result = ::app::Uno::Buffer__New_3(NULL, ::uPtr< ::uArray*>(data)->Length() * 2);

    for (int i = 0; i < data->Length(); i++)
    {
        ::uPtr< ::app::Uno::Buffer*>(result)->SetUShort(i * 2, data->Item< ::uUShort>(i), true);
    }

    return result;
}

::app::Uno::Buffer* BufferConverters__ToBuffer_7(::uStatic* __this, ::uArray* data)
{
    ::app::Uno::Buffer* result = ::app::Uno::Buffer__New_3(NULL, ::uPtr< ::uArray*>(data)->Length() * 4);

    for (int i = 0; i < data->Length(); i++)
    {
        ::uPtr< ::app::Uno::Buffer*>(result)->SetUInt(i * 4, data->Item< ::uUInt>(i), true);
    }

    return result;
}

::app::Uno::Buffer* BufferConverters__ToBuffer_8(::uStatic* __this, ::uArray* data)
{
    ::app::Uno::Buffer* result = ::app::Uno::Buffer__New_3(NULL, ::uPtr< ::uArray*>(data)->Length() * 4);

    for (int i = 0; i < data->Length(); i++)
    {
        ::uPtr< ::app::Uno::Buffer*>(result)->SetByte4(i * 4, data->Item< ::app::Uno::Byte4>(i));
    }

    return result;
}

::app::Uno::Buffer* BufferConverters__ToBuffer_9(::uStatic* __this, ::uArray* data)
{
    ::app::Uno::Buffer* result = ::app::Uno::Buffer__New_3(NULL, ::uPtr< ::uArray*>(data)->Length() * 2);

    for (int i = 0; i < data->Length(); i++)
    {
        ::uPtr< ::app::Uno::Buffer*>(result)->SetShort(i * 2, data->Item< ::uShort>(i), true);
    }

    return result;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

BufferReader__uType* BufferReader__typeof()
{
    static ::uStaticStrong<BufferReader__uType*> type;
    if (type != NULL) return type;

    type = (BufferReader__uType*)::uAllocClassType(sizeof(BufferReader__uType), "Uno.Runtime.Implementation.Internal.BufferReader", false, 0, 1, 0);

    type->SetStrongRefs(
        "_buffer", offsetof(BufferReader, _buffer));

    type->SetFields(2,
        ::uNewField("_buffer", NULL, offsetof(BufferReader, _buffer), ::app::Uno::Buffer__typeof()),
        ::uNewField("_position", NULL, offsetof(BufferReader, _position), ::app::Uno::Int__typeof()));

    type->SetFunctions(54,
        ::uNewFunction("get_Length", BufferReader__get_Length, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Position", BufferReader__get_Position, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction(".ctor", BufferReader__New_1, 0, true, BufferReader__typeof(), ::app::Uno::Buffer__typeof()),
        ::uNewFunction("ReadArray", BufferReader__ReadArray__float4x4, 0, true, ::uGetArrayType(::app::Uno::Float4x4__typeof()), BufferReader__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Func__Uno_Runtime_Implementation_Internal_BufferReader__float4x4__typeof()),
        ::uNewFunction("ReadArray", BufferReader__ReadArray__Uno_Content_Splines_KeyframedSpline2_Key_float4x4_float4x4_, 0, true, ::uGetArrayType(::app::Uno::Content::Splines::KeyframedSpline2_Key__float4x4__float4x4__typeof()), BufferReader__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Func__Uno_Runtime_Implementation_Internal_BufferReader__Uno_Content_Splines_KeyframedSpline2_Key_float4x4_float4x4___typeof()),
        ::uNewFunction("ReadByte", BufferReader__ReadByte, 0, false, ::app::Uno::Byte__typeof()),
        ::uNewFunction("ReadByte", BufferReader__ReadByte_1, 0, true, ::app::Uno::Byte__typeof(), BufferReader__typeof()),
        ::uNewFunction("ReadByte2", BufferReader__ReadByte2, 0, false, ::app::Uno::Byte2__typeof()),
        ::uNewFunction("ReadByte4", BufferReader__ReadByte4, 0, false, ::app::Uno::Byte4__typeof()),
        ::uNewFunction("ReadByte4", BufferReader__ReadByte4_1, 0, true, ::app::Uno::Byte4__typeof(), BufferReader__typeof()),
        ::uNewFunction("ReadBytes", BufferReader__ReadBytes, 0, false, ::uGetArrayType(::app::Uno::Byte__typeof()), ::app::Uno::Int__typeof()),
        ::uNewFunction("ReadCompressedInt", BufferReader__ReadCompressedInt, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("ReadDouble", BufferReader__ReadDouble, 0, false, ::app::Uno::Double__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunction("ReadFloat", BufferReader__ReadFloat, 0, false, ::app::Uno::Float__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunction("ReadFloat", BufferReader__ReadFloat_1, 0, true, ::app::Uno::Float__typeof(), BufferReader__typeof()),
        ::uNewFunction("ReadFloat2", BufferReader__ReadFloat2, 0, false, ::app::Uno::Float2__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunction("ReadFloat2", BufferReader__ReadFloat2_1, 0, true, ::app::Uno::Float2__typeof(), BufferReader__typeof()),
        ::uNewFunction("ReadFloat3", BufferReader__ReadFloat3, 0, false, ::app::Uno::Float3__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunction("ReadFloat3", BufferReader__ReadFloat3_1, 0, true, ::app::Uno::Float3__typeof(), BufferReader__typeof()),
        ::uNewFunction("ReadFloat3x3", BufferReader__ReadFloat3x3, 0, false, ::app::Uno::Float3x3__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunction("ReadFloat4", BufferReader__ReadFloat4, 0, false, ::app::Uno::Float4__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunction("ReadFloat4", BufferReader__ReadFloat4_1, 0, true, ::app::Uno::Float4__typeof(), BufferReader__typeof()),
        ::uNewFunction("ReadFloat4x4", BufferReader__ReadFloat4x4, 0, false, ::app::Uno::Float4x4__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunction("ReadFloat4x4", BufferReader__ReadFloat4x4_1, 0, true, ::app::Uno::Float4x4__typeof(), BufferReader__typeof()),
        ::uNewFunction("ReadFloat4x4Key", BufferReader__ReadFloat4x4Key, 0, true, ::app::Uno::Content::Splines::KeyframedSpline2_Key__float4x4__float4x4__typeof(), BufferReader__typeof()),
        ::uNewFunction("ReadInt", BufferReader__ReadInt, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunction("ReadInt", BufferReader__ReadInt_1, 0, true, ::app::Uno::Int__typeof(), BufferReader__typeof()),
        ::uNewFunction("ReadInt2", BufferReader__ReadInt2, 0, false, ::app::Uno::Int2__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunction("ReadInt2", BufferReader__ReadInt2_1, 0, true, ::app::Uno::Int2__typeof(), BufferReader__typeof()),
        ::uNewFunction("ReadInt3", BufferReader__ReadInt3, 0, false, ::app::Uno::Int3__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunction("ReadInt3", BufferReader__ReadInt3_1, 0, true, ::app::Uno::Int3__typeof(), BufferReader__typeof()),
        ::uNewFunction("ReadInt4", BufferReader__ReadInt4, 0, false, ::app::Uno::Int4__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunction("ReadInt4", BufferReader__ReadInt4_1, 0, true, ::app::Uno::Int4__typeof(), BufferReader__typeof()),
        ::uNewFunction("ReadSByte", BufferReader__ReadSByte, 0, false, ::app::Uno::SByte__typeof()),
        ::uNewFunction("ReadSByte", BufferReader__ReadSByte_1, 0, true, ::app::Uno::SByte__typeof(), BufferReader__typeof()),
        ::uNewFunction("ReadSByte2", BufferReader__ReadSByte2, 0, false, ::app::Uno::SByte2__typeof()),
        ::uNewFunction("ReadSByte4", BufferReader__ReadSByte4, 0, false, ::app::Uno::SByte4__typeof()),
        ::uNewFunction("ReadSByte4", BufferReader__ReadSByte4_1, 0, true, ::app::Uno::SByte4__typeof(), BufferReader__typeof()),
        ::uNewFunction("ReadShort", BufferReader__ReadShort, 0, false, ::app::Uno::Short__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunction("ReadShort", BufferReader__ReadShort_1, 0, true, ::app::Uno::Short__typeof(), BufferReader__typeof()),
        ::uNewFunction("ReadShort2", BufferReader__ReadShort2, 0, false, ::app::Uno::Short2__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunction("ReadShort2", BufferReader__ReadShort2_1, 0, true, ::app::Uno::Short2__typeof(), BufferReader__typeof()),
        ::uNewFunction("ReadShort4", BufferReader__ReadShort4, 0, false, ::app::Uno::Short4__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunction("ReadShort4", BufferReader__ReadShort4_1, 0, true, ::app::Uno::Short4__typeof(), BufferReader__typeof()),
        ::uNewFunction("ReadString", BufferReader__ReadString, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("ReadUInt", BufferReader__ReadUInt, 0, false, ::app::Uno::UInt__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunction("ReadUInt", BufferReader__ReadUInt_1, 0, true, ::app::Uno::UInt__typeof(), BufferReader__typeof()),
        ::uNewFunction("ReadUShort", BufferReader__ReadUShort, 0, false, ::app::Uno::UShort__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunction("ReadUShort", BufferReader__ReadUShort_1, 0, true, ::app::Uno::UShort__typeof(), BufferReader__typeof()),
        ::uNewFunction("ReadUShort2", BufferReader__ReadUShort2, 0, false, ::app::Uno::UShort2__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunction("ReadUShort2", BufferReader__ReadUShort2_1, 0, true, ::app::Uno::UShort2__typeof(), BufferReader__typeof()),
        ::uNewFunction("ReadUShort4", BufferReader__ReadUShort4, 0, false, ::app::Uno::UShort4__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunction("ReadUShort4", BufferReader__ReadUShort4_1, 0, true, ::app::Uno::UShort4__typeof(), BufferReader__typeof()),
        ::uNewFunctionVoid("set_Position", BufferReader__set_Position, 0, false, ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

void BufferReader___ObjInit(BufferReader* __this, ::app::Uno::Buffer* buffer)
{
    __this->_buffer = buffer;
}

int BufferReader__get_Length(BufferReader* __this)
{
    return ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->SizeInBytes();
}

int BufferReader__get_Position(BufferReader* __this)
{
    return __this->_position;
}

BufferReader* BufferReader__New_1(::uStatic* __this, ::app::Uno::Buffer* buffer)
{
    BufferReader* inst = (BufferReader*)::uAllocObject(sizeof(BufferReader), BufferReader__typeof());
    inst->_ObjInit(buffer);
    return inst;
}

::uArray* BufferReader__ReadArray__float4x4(::uStatic* __this, BufferReader* r, int count, ::uDelegate* readElement)
{
    ::uArray* result = ::uNewArray(::app::Uno::Float4x4__typeof(), count);

    for (int i = 0; i < count; i++)
    {
        result->Item< ::app::Uno::Float4x4>(i) = ::uPtr< ::uDelegate*>(readElement)->Invoke< ::app::Uno::Float4x4, BufferReader*>(r);
    }

    return result;
}

::uArray* BufferReader__ReadArray__Uno_Content_Splines_KeyframedSpline2_Key_float4x4_float4x4_(::uStatic* __this, BufferReader* r, int count, ::uDelegate* readElement)
{
    ::uArray* result = ::uNewArray(::app::Uno::Content::Splines::KeyframedSpline2_Key__float4x4__float4x4__typeof(), count);

    for (int i = 0; i < count; i++)
    {
        result->Item< ::app::Uno::Content::Splines::KeyframedSpline2_Key__float4x4__float4x4>(i) = ::uPtr< ::uDelegate*>(readElement)->Invoke< ::app::Uno::Content::Splines::KeyframedSpline2_Key__float4x4__float4x4, BufferReader*>(r);
    }

    return result;
}

::uByte BufferReader__ReadByte(BufferReader* __this)
{
    __this->_position = __this->_position + 1;
    return ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->GetByte(__this->_position - 1);
}

::uByte BufferReader__ReadByte_1(::uStatic* __this, BufferReader* r)
{
    return ::uPtr< BufferReader*>(r)->ReadByte();
}

::app::Uno::Byte2 BufferReader__ReadByte2(BufferReader* __this)
{
    __this->_position = __this->_position + 2;
    return ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->GetByte2(__this->_position - 2);
}

::app::Uno::Byte4 BufferReader__ReadByte4(BufferReader* __this)
{
    __this->_position = __this->_position + 4;
    return ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->GetByte4(__this->_position - 4);
}

::app::Uno::Byte4 BufferReader__ReadByte4_1(::uStatic* __this, BufferReader* r)
{
    return ::uPtr< BufferReader*>(r)->ReadByte4();
}

::uArray* BufferReader__ReadBytes(BufferReader* __this, int count)
{
    ::uArray* result = ::uNewArray(::app::Uno::Byte__typeof(), count);

    for (int i = 0; i < count; i++)
    {
        result->Item< ::uByte>(i) = __this->ReadByte();
    }

    return result;
}

int BufferReader__ReadCompressedInt(BufferReader* __this)
{
    int count = 0;
    int shift = 0;

    while (shift != 35)
    {
        ::uByte b = __this->ReadByte();
        count = count | ((b & 127) << shift);
        shift = shift + 7;

        if ((b & 128) == 0)
        {
            return count;
        }
    }

    U_THROW(::app::Uno::FormatException__New_3(NULL, ::uGetConstString("Invalid 7 bit encoded int")));
}

double BufferReader__ReadDouble(BufferReader* __this, bool littleEndian)
{
    __this->_position = __this->_position + 8;
    return ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->GetDouble(__this->_position - 8, littleEndian);
}

float BufferReader__ReadFloat(BufferReader* __this, bool littleEndian)
{
    __this->_position = __this->_position + 4;
    return ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->GetFloat(__this->_position - 4, littleEndian);
}

float BufferReader__ReadFloat_1(::uStatic* __this, BufferReader* r)
{
    return ::uPtr< BufferReader*>(r)->ReadFloat(true);
}

::app::Uno::Float2 BufferReader__ReadFloat2(BufferReader* __this, bool littleEndian)
{
    __this->_position = __this->_position + 8;
    return ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->GetFloat2(__this->_position - 8, littleEndian);
}

::app::Uno::Float2 BufferReader__ReadFloat2_1(::uStatic* __this, BufferReader* r)
{
    return ::uPtr< BufferReader*>(r)->ReadFloat2(true);
}

::app::Uno::Float3 BufferReader__ReadFloat3(BufferReader* __this, bool littleEndian)
{
    __this->_position = __this->_position + 12;
    return ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->GetFloat3(__this->_position - 12, littleEndian);
}

::app::Uno::Float3 BufferReader__ReadFloat3_1(::uStatic* __this, BufferReader* r)
{
    return ::uPtr< BufferReader*>(r)->ReadFloat3(true);
}

::app::Uno::Float3x3 BufferReader__ReadFloat3x3(BufferReader* __this, bool littleEndian)
{
    __this->_position = __this->_position + 36;
    return ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->GetFloat3x3(__this->_position - 36, littleEndian);
}

::app::Uno::Float4 BufferReader__ReadFloat4(BufferReader* __this, bool littleEndian)
{
    __this->_position = __this->_position + 16;
    return ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->GetFloat4(__this->_position - 16, littleEndian);
}

::app::Uno::Float4 BufferReader__ReadFloat4_1(::uStatic* __this, BufferReader* r)
{
    return ::uPtr< BufferReader*>(r)->ReadFloat4(true);
}

::app::Uno::Float4x4 BufferReader__ReadFloat4x4(BufferReader* __this, bool littleEndian)
{
    __this->_position = __this->_position + 64;
    return ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->GetFloat4x4(__this->_position - 64, littleEndian);
}

::app::Uno::Float4x4 BufferReader__ReadFloat4x4_1(::uStatic* __this, BufferReader* r)
{
    return ::uPtr< BufferReader*>(r)->ReadFloat4x4(true);
}

::app::Uno::Content::Splines::KeyframedSpline2_Key__float4x4__float4x4 BufferReader__ReadFloat4x4Key(::uStatic* __this, BufferReader* r)
{
    double time = ::uPtr< BufferReader*>(r)->ReadDouble(true);
    ::app::Uno::Float4x4 value = r->ReadFloat4x4(true);
    return ::app::Uno::Content::Splines::KeyframedSpline2_Key__float4x4__float4x4__New_1(NULL, time, value);
}

int BufferReader__ReadInt(BufferReader* __this, bool littleEndian)
{
    __this->_position = __this->_position + 4;
    return ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->GetInt(__this->_position - 4, littleEndian);
}

int BufferReader__ReadInt_1(::uStatic* __this, BufferReader* r)
{
    return ::uPtr< BufferReader*>(r)->ReadInt(true);
}

::app::Uno::Int2 BufferReader__ReadInt2(BufferReader* __this, bool littleEndian)
{
    __this->_position = __this->_position + 8;
    return ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->GetInt2(__this->_position - 8, littleEndian);
}

::app::Uno::Int2 BufferReader__ReadInt2_1(::uStatic* __this, BufferReader* r)
{
    return ::uPtr< BufferReader*>(r)->ReadInt2(true);
}

::app::Uno::Int3 BufferReader__ReadInt3(BufferReader* __this, bool littleEndian)
{
    __this->_position = __this->_position + 12;
    return ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->GetInt3(__this->_position - 12, littleEndian);
}

::app::Uno::Int3 BufferReader__ReadInt3_1(::uStatic* __this, BufferReader* r)
{
    return ::uPtr< BufferReader*>(r)->ReadInt3(true);
}

::app::Uno::Int4 BufferReader__ReadInt4(BufferReader* __this, bool littleEndian)
{
    __this->_position = __this->_position + 16;
    return ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->GetInt4(__this->_position - 16, littleEndian);
}

::app::Uno::Int4 BufferReader__ReadInt4_1(::uStatic* __this, BufferReader* r)
{
    return ::uPtr< BufferReader*>(r)->ReadInt4(true);
}

::uSByte BufferReader__ReadSByte(BufferReader* __this)
{
    __this->_position = __this->_position + 1;
    return ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->GetSByte(__this->_position - 1);
}

::uSByte BufferReader__ReadSByte_1(::uStatic* __this, BufferReader* r)
{
    return ::uPtr< BufferReader*>(r)->ReadSByte();
}

::app::Uno::SByte2 BufferReader__ReadSByte2(BufferReader* __this)
{
    __this->_position = __this->_position + 2;
    return ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->GetSByte2(__this->_position - 2);
}

::app::Uno::SByte4 BufferReader__ReadSByte4(BufferReader* __this)
{
    __this->_position = __this->_position + 4;
    return ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->GetSByte4(__this->_position - 4);
}

::app::Uno::SByte4 BufferReader__ReadSByte4_1(::uStatic* __this, BufferReader* r)
{
    return ::uPtr< BufferReader*>(r)->ReadSByte4();
}

::uShort BufferReader__ReadShort(BufferReader* __this, bool littleEndian)
{
    __this->_position = __this->_position + 2;
    return ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->GetShort(__this->_position - 2, littleEndian);
}

::uShort BufferReader__ReadShort_1(::uStatic* __this, BufferReader* r)
{
    return ::uPtr< BufferReader*>(r)->ReadShort(true);
}

::app::Uno::Short2 BufferReader__ReadShort2(BufferReader* __this, bool littleEndian)
{
    __this->_position = __this->_position + 4;
    return ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->GetShort2(__this->_position - 4, littleEndian);
}

::app::Uno::Short2 BufferReader__ReadShort2_1(::uStatic* __this, BufferReader* r)
{
    return ::uPtr< BufferReader*>(r)->ReadShort2(true);
}

::app::Uno::Short4 BufferReader__ReadShort4(BufferReader* __this, bool littleEndian)
{
    __this->_position = __this->_position + 8;
    return ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->GetShort4(__this->_position - 8, littleEndian);
}

::app::Uno::Short4 BufferReader__ReadShort4_1(::uStatic* __this, BufferReader* r)
{
    return ::uPtr< BufferReader*>(r)->ReadShort4(true);
}

::uString* BufferReader__ReadString(BufferReader* __this)
{
    return ::app::Uno::Runtime::Implementation::TextEncodingImpl__DecodeUtf8(NULL, __this->ReadBytes(__this->ReadCompressedInt()));
}

::uUInt BufferReader__ReadUInt(BufferReader* __this, bool littleEndian)
{
    __this->_position = __this->_position + 4;
    return ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->GetUInt(__this->_position - 4, littleEndian);
}

::uUInt BufferReader__ReadUInt_1(::uStatic* __this, BufferReader* r)
{
    return ::uPtr< BufferReader*>(r)->ReadUInt(true);
}

::uUShort BufferReader__ReadUShort(BufferReader* __this, bool littleEndian)
{
    __this->_position = __this->_position + 2;
    return ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->GetUShort(__this->_position - 2, littleEndian);
}

::uUShort BufferReader__ReadUShort_1(::uStatic* __this, BufferReader* r)
{
    return ::uPtr< BufferReader*>(r)->ReadUShort(true);
}

::app::Uno::UShort2 BufferReader__ReadUShort2(BufferReader* __this, bool littleEndian)
{
    __this->_position = __this->_position + 4;
    return ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->GetUShort2(__this->_position - 4, littleEndian);
}

::app::Uno::UShort2 BufferReader__ReadUShort2_1(::uStatic* __this, BufferReader* r)
{
    return ::uPtr< BufferReader*>(r)->ReadUShort2(true);
}

::app::Uno::UShort4 BufferReader__ReadUShort4(BufferReader* __this, bool littleEndian)
{
    __this->_position = __this->_position + 8;
    return ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->GetUShort4(__this->_position - 8, littleEndian);
}

::app::Uno::UShort4 BufferReader__ReadUShort4_1(::uStatic* __this, BufferReader* r)
{
    return ::uPtr< BufferReader*>(r)->ReadUShort4(true);
}

void BufferReader__set_Position(BufferReader* __this, int value)
{
    __this->_position = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

BundleFileFactory__uType* BundleFileFactory__typeof()
{
    static ::uStaticStrong<BundleFileFactory__uType*> type;
    if (type != NULL) return type;

    type = (BundleFileFactory__uType*)::uAllocClassType(sizeof(BundleFileFactory__uType), "Uno.Runtime.Implementation.Internal.BundleFileFactory");

    type->SetFunctions(1,
        ::uNewFunction("Create", BundleFileFactory__Create, 0, true, ::app::Uno::BundleFile__typeof(), ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

::app::Uno::BundleFile* BundleFileFactory__Create(::uStatic* __this, ::uString* name)
{
    return ::app::Uno::BundleFile__New_1(NULL, name);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::uArray*> BundleRegistry___data;

BundleRegistry__uType* BundleRegistry__typeof()
{
    static ::uStaticStrong<BundleRegistry__uType*> type;
    if (type != NULL) return type;

    type = (BundleRegistry__uType*)::uAllocClassType(sizeof(BundleRegistry__uType), "Uno.Runtime.Implementation.Internal.BundleRegistry");

    type->SetFields(1,
        ::uNewField("_data", &BundleRegistry___data, 0, ::uGetArrayType(::uObject__typeof())));

    type->SetFunctions(10,
        ::uNewFunction("Get", BundleRegistry__Get, 0, true, ::uObject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("Init", BundleRegistry__Init, 0, true, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("Register", BundleRegistry__Register, 0, true, ::app::Uno::Int__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("RegisterBuffer", BundleRegistry__RegisterBuffer, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("RegisterBundleFile", BundleRegistry__RegisterBundleFile, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("RegisterFontFace", BundleRegistry__RegisterFontFace, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("RegisterIndexBuffer", BundleRegistry__RegisterIndexBuffer, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("RegisterTexture2D", BundleRegistry__RegisterTexture2D, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("RegisterTextureCube", BundleRegistry__RegisterTextureCube, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("RegisterVertexBuffer", BundleRegistry__RegisterVertexBuffer, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

::uObject* BundleRegistry__Get(::uStatic* __this, int index)
{
    return ::uPtr< ::uArray*>(BundleRegistry___data)->Item< ::uObject*>(index);
}

void BundleRegistry__Init(::uStatic* __this, int resourceCount)
{
    BundleRegistry___data = ::uNewArray(::uObject__typeof(), resourceCount);
}

void BundleRegistry__Register(::uStatic* __this, int index, ::uObject* data)
{
    ::uPtr< ::uArray*>(BundleRegistry___data)->ItemStrong< ::uObject*>(index) = data;
}

void BundleRegistry__RegisterBuffer(::uStatic* __this, int index, ::uString* filename)
{
    ::uPtr< ::uArray*>(BundleRegistry___data)->ItemStrong< ::uObject*>(index) = (::uObject*)::app::Uno::Buffer__Load(NULL, ::app::Uno::BundleFile__New_1(NULL, filename));
}

void BundleRegistry__RegisterBundleFile(::uStatic* __this, int index, ::uString* filename)
{
    ::uPtr< ::uArray*>(BundleRegistry___data)->ItemStrong< ::uObject*>(index) = (::uObject*)::app::Uno::BundleFile__New_1(NULL, filename);
}

void BundleRegistry__RegisterFontFace(::uStatic* __this, int index, ::uString* filename)
{
    ::uPtr< ::uArray*>(BundleRegistry___data)->ItemStrong< ::uObject*>(index) = (::uObject*)::app::Uno::Content::Fonts::FontFace__Load(NULL, ::app::Uno::BundleFile__New_1(NULL, filename));
}

void BundleRegistry__RegisterIndexBuffer(::uStatic* __this, int index, ::uString* filename)
{
    ::uPtr< ::uArray*>(BundleRegistry___data)->ItemStrong< ::uObject*>(index) = (::uObject*)::app::Uno::Graphics::IndexBuffer__New_1(NULL, ::app::Uno::Buffer__Load(NULL, ::app::Uno::BundleFile__New_1(NULL, filename)), 0);
}

void BundleRegistry__RegisterTexture2D(::uStatic* __this, int index, ::uString* filename)
{
    ::uPtr< ::uArray*>(BundleRegistry___data)->ItemStrong< ::uObject*>(index) = (::uObject*)::app::Uno::Graphics::Texture2D__Load(NULL, ::app::Uno::BundleFile__New_1(NULL, filename));
}

void BundleRegistry__RegisterTextureCube(::uStatic* __this, int index, ::uString* filename)
{
    ::uPtr< ::uArray*>(BundleRegistry___data)->ItemStrong< ::uObject*>(index) = (::uObject*)::app::Uno::Graphics::TextureCube__Load(NULL, ::app::Uno::BundleFile__New_1(NULL, filename));
}

void BundleRegistry__RegisterVertexBuffer(::uStatic* __this, int index, ::uString* filename)
{
    ::uPtr< ::uArray*>(BundleRegistry___data)->ItemStrong< ::uObject*>(index) = (::uObject*)::app::Uno::Graphics::VertexBuffer__New_1(NULL, ::app::Uno::Buffer__Load(NULL, ::app::Uno::BundleFile__New_1(NULL, filename)), 0);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* FormatSpecifier__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Uno.Runtime.Implementation.Internal.FormatSpecifier", ::app::Uno::Int__typeof(), 8);

    type->SetLiterals(
        "Decimal", 0LL,
        "FixedPoint", 1LL,
        "Hexadecimal", 2LL,
        "Exponential", 3LL,
        "General", 4LL,
        "Percent", 5LL,
        "Number", 6LL,
        "Custom", 7LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

FormatStringItem__uType* FormatStringItem__typeof()
{
    static ::uStaticStrong<FormatStringItem__uType*> type;
    if (type != NULL) return type;

    type = (FormatStringItem__uType*)::uAllocClassType(sizeof(FormatStringItem__uType), "Uno.Runtime.Implementation.Internal.FormatStringItem", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Runtime::Implementation::Internal::FormatStringToken__typeof());
    type->__fp_Equals = (bool(*)(::uObject*, ::uObject*))FormatStringItem__Equals;
    type->__fp_GetHashCode = (int(*)(::uObject*))FormatStringItem__GetHashCode;
    type->__fp_ToString_1 = (::uString*(*)(::app::Uno::Runtime::Implementation::Internal::FormatStringToken*, ::uArray*))FormatStringItem__ToString_1;

    type->SetFunctions(3,
        ::uNewFunction("get_FormatString", FormatStringItem__get_FormatString, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("get_Number", FormatStringItem__get_Number, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction(".ctor", FormatStringItem__New_1, 0, true, FormatStringItem__typeof(), ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void FormatStringItem___ObjInit_1(FormatStringItem* __this, ::uString* lexeme)
{
    ::app::Uno::Runtime::Implementation::Internal::FormatStringToken___ObjInit(__this, lexeme);
}

bool FormatStringItem__Equals(FormatStringItem* __this, ::uObject* obj)
{
    if (obj == NULL)
    {
        return false;
    }

    FormatStringItem* token = ::uAs< FormatStringItem*>(obj, FormatStringItem__typeof());

    if (token == NULL)
    {
        return false;
    }

    return ::app::Uno::String__op_Equality(NULL, __this->Lexeme(), ::uPtr< FormatStringItem*>(token)->Lexeme());
}

::uString* FormatStringItem__get_FormatString(FormatStringItem* __this)
{
    int colon = ::app::Uno::String::IndexOf(::uPtr< ::uString*>(__this->Lexeme()), ':', 0);

    if (colon == -1)
    {
        return NULL;
    }

    int end = ::app::Uno::String::IndexOf(::uPtr< ::uString*>(__this->Lexeme()), '}', 0);

    if (end == -1)
    {
        U_THROW(::app::Uno::FormatException__New_3(NULL, ::uGetConstString("Format specifier was invalid")));
    }

    return ::app::Uno::String::Substring_1(::uPtr< ::uString*>(__this->Lexeme()), colon + 1, (end - colon) - 1);
}

int FormatStringItem__get_Number(FormatStringItem* __this)
{
    int index = ::app::Uno::String::IndexOf(::uPtr< ::uString*>(__this->Lexeme()), ',', 0);

    if (index == -1)
    {
        index = ::app::Uno::String::IndexOf(::uPtr< ::uString*>(__this->Lexeme()), ':', 0);
    }

    if (index == -1)
    {
        index = ::app::Uno::String::IndexOf(::uPtr< ::uString*>(__this->Lexeme()), '}', 0);
    }

    return ::app::Uno::Int__Parse(NULL, ::app::Uno::String::Substring_1(::uPtr< ::uString*>(__this->Lexeme()), 1, index - 1));
}

int FormatStringItem__GetHashCode(FormatStringItem* __this)
{
    return ::uPtr< ::uString*>(__this->Lexeme())->GetHashCode();
}

FormatStringItem* FormatStringItem__New_1(::uStatic* __this, ::uString* lexeme)
{
    FormatStringItem* inst = (FormatStringItem*)::uAllocObject(sizeof(FormatStringItem), FormatStringItem__typeof());
    inst->_ObjInit_1(lexeme);
    return inst;
}

::uString* FormatStringItem__ToString_1(FormatStringItem* __this, ::uArray* objs)
{
    if ((__this->Number() < 0) || (__this->Number() > (::uPtr< ::uArray*>(objs)->Length() - 1)))
    {
        U_THROW(::app::Uno::FormatException__New_3(NULL, ::uGetConstString("Index (zero based) must be greater than or equal to zero and less than the size of the argument list.")));
    }

    ::uObject* o = ::uPtr< ::uArray*>(objs)->Item< ::uObject*>(__this->Number());
    ::uString* formatString = __this->FormatString();

    if (::app::Uno::String__IsNullOrEmpty(NULL, formatString))
    {
        return ::app::Uno::Object::ToString(::uPtr< ::uObject*>(o));
    }
    else
    {
        if (::uIs(o, ::app::Uno::Bool__typeof()))
        {
            return ::app::Uno::Runtime::Implementation::Internal::NumericFormatter__Format(NULL, formatString, ::uUnbox< bool>(::app::Uno::Bool__typeof(), o));
        }

        if (::uIs(o, ::app::Uno::Char__typeof()))
        {
            return ::app::Uno::Runtime::Implementation::Internal::NumericFormatter__Format_3(NULL, formatString, (int)::uUnbox< ::uChar>(::app::Uno::Char__typeof(), o));
        }

        if (::uIs(o, ::app::Uno::SByte__typeof()))
        {
            return ::app::Uno::Runtime::Implementation::Internal::NumericFormatter__Format_5(NULL, formatString, ::uUnbox< ::uSByte>(::app::Uno::SByte__typeof(), o));
        }

        if (::uIs(o, ::app::Uno::Byte__typeof()))
        {
            return ::app::Uno::Runtime::Implementation::Internal::NumericFormatter__Format_6(NULL, formatString, (::uShort)::uUnbox< ::uByte>(::app::Uno::Byte__typeof(), o));
        }

        if (::uIs(o, ::app::Uno::Short__typeof()))
        {
            return ::app::Uno::Runtime::Implementation::Internal::NumericFormatter__Format_6(NULL, formatString, ::uUnbox< ::uShort>(::app::Uno::Short__typeof(), o));
        }

        if (::uIs(o, ::app::Uno::UShort__typeof()))
        {
            return ::app::Uno::Runtime::Implementation::Internal::NumericFormatter__Format_3(NULL, formatString, (int)::uUnbox< ::uUShort>(::app::Uno::UShort__typeof(), o));
        }

        if (::uIs(o, ::app::Uno::Int__typeof()))
        {
            return ::app::Uno::Runtime::Implementation::Internal::NumericFormatter__Format_3(NULL, formatString, ::uUnbox< int>(::app::Uno::Int__typeof(), o));
        }

        if (::uIs(o, ::app::Uno::UInt__typeof()))
        {
            return ::app::Uno::Runtime::Implementation::Internal::NumericFormatter__Format_4(NULL, formatString, (::uLong)::uUnbox< ::uUInt>(::app::Uno::UInt__typeof(), o));
        }

        if (::uIs(o, ::app::Uno::Long__typeof()))
        {
            return ::app::Uno::Runtime::Implementation::Internal::NumericFormatter__Format_4(NULL, formatString, ::uUnbox< ::uLong>(::app::Uno::Long__typeof(), o));
        }

        if (::uIs(o, ::app::Uno::ULong__typeof()))
        {
            return ::app::Uno::Runtime::Implementation::Internal::NumericFormatter__Format_7(NULL, formatString, ::uUnbox< ::uULong>(::app::Uno::ULong__typeof(), o));
        }

        if (::uIs(o, ::app::Uno::Float__typeof()))
        {
            return ::app::Uno::Runtime::Implementation::Internal::NumericFormatter__Format_2(NULL, formatString, ::uUnbox< float>(::app::Uno::Float__typeof(), o));
        }

        if (::uIs(o, ::app::Uno::Double__typeof()))
        {
            return ::app::Uno::Runtime::Implementation::Internal::NumericFormatter__Format_1(NULL, formatString, ::uUnbox< double>(::app::Uno::Double__typeof(), o));
        }
    }

    return ::app::Uno::Object::ToString(::uPtr< ::uObject*>(o));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

FormatStringLiteral__uType* FormatStringLiteral__typeof()
{
    static ::uStaticStrong<FormatStringLiteral__uType*> type;
    if (type != NULL) return type;

    type = (FormatStringLiteral__uType*)::uAllocClassType(sizeof(FormatStringLiteral__uType), "Uno.Runtime.Implementation.Internal.FormatStringLiteral", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Runtime::Implementation::Internal::FormatStringToken__typeof());
    type->__fp_Equals = (bool(*)(::uObject*, ::uObject*))FormatStringLiteral__Equals;
    type->__fp_GetHashCode = (int(*)(::uObject*))FormatStringLiteral__GetHashCode;
    type->__fp_ToString_1 = (::uString*(*)(::app::Uno::Runtime::Implementation::Internal::FormatStringToken*, ::uArray*))FormatStringLiteral__ToString_1;

    type->SetFunctions(1,
        ::uNewFunction(".ctor", FormatStringLiteral__New_1, 0, true, FormatStringLiteral__typeof(), ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void FormatStringLiteral___ObjInit_1(FormatStringLiteral* __this, ::uString* lexeme)
{
    ::app::Uno::Runtime::Implementation::Internal::FormatStringToken___ObjInit(__this, lexeme);
}

bool FormatStringLiteral__Equals(FormatStringLiteral* __this, ::uObject* obj)
{
    if (obj == NULL)
    {
        return false;
    }

    FormatStringLiteral* token = ::uAs< FormatStringLiteral*>(obj, FormatStringLiteral__typeof());

    if (token == NULL)
    {
        return false;
    }

    return ::app::Uno::String__op_Equality(NULL, __this->Lexeme(), ::uPtr< FormatStringLiteral*>(token)->Lexeme());
}

int FormatStringLiteral__GetHashCode(FormatStringLiteral* __this)
{
    return ::uPtr< ::uString*>(__this->Lexeme())->GetHashCode();
}

FormatStringLiteral* FormatStringLiteral__New_1(::uStatic* __this, ::uString* lexeme)
{
    FormatStringLiteral* inst = (FormatStringLiteral*)::uAllocObject(sizeof(FormatStringLiteral), FormatStringLiteral__typeof());
    inst->_ObjInit_1(lexeme);
    return inst;
}

::uString* FormatStringLiteral__ToString_1(FormatStringLiteral* __this, ::uArray* objs)
{
    return __this->Lexeme();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

FormatStringToken__uType* FormatStringToken__typeof()
{
    static ::uStaticStrong<FormatStringToken__uType*> type;
    if (type != NULL) return type;

    type = (FormatStringToken__uType*)::uAllocClassType(sizeof(FormatStringToken__uType), "Uno.Runtime.Implementation.Internal.FormatStringToken", false, 0, 1, 0);

    type->SetStrongRefs(
        "_Lexeme", offsetof(FormatStringToken, _Lexeme));

    type->SetFunctions(3,
        ::uNewFunction("get_Lexeme", FormatStringToken__get_Lexeme, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_Lexeme", FormatStringToken__set_Lexeme, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("ToString", type->__fp_ToString_1, offsetof(FormatStringToken__uType, __fp_ToString_1), false, ::app::Uno::String__typeof(), ::uGetArrayType(::uObject__typeof())));

    ::uRegisterType(type);
    return type;
}

void FormatStringToken___ObjInit(FormatStringToken* __this, ::uString* lexeme)
{
    __this->Lexeme(lexeme);
}

::uString* FormatStringToken__get_Lexeme(FormatStringToken* __this)
{
    return __this->_Lexeme;
}

void FormatStringToken__set_Lexeme(FormatStringToken* __this, ::uString* value)
{
    __this->_Lexeme = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

FormatStringTokenizer__uType* FormatStringTokenizer__typeof()
{
    static ::uStaticStrong<FormatStringTokenizer__uType*> type;
    if (type != NULL) return type;

    type = (FormatStringTokenizer__uType*)::uAllocClassType(sizeof(FormatStringTokenizer__uType), "Uno.Runtime.Implementation.Internal.FormatStringTokenizer", false, 0, 2, 0);

    type->SetStrongRefs(
        "_format", offsetof(FormatStringTokenizer, _format),
        "_tokens", offsetof(FormatStringTokenizer, _tokens));

    type->SetFields(5,
        ::uNewField("_format", NULL, offsetof(FormatStringTokenizer, _format), ::app::Uno::String__typeof()),
        ::uNewField("_index", NULL, offsetof(FormatStringTokenizer, _index), ::app::Uno::Int__typeof()),
        ::uNewField("_prevIndex", NULL, offsetof(FormatStringTokenizer, _prevIndex), ::app::Uno::Int__typeof()),
        ::uNewField("_state", NULL, offsetof(FormatStringTokenizer, _state), ::app::Uno::Runtime::Implementation::Internal::FormatStringTokenizer_State__typeof()),
        ::uNewField("_tokens", NULL, offsetof(FormatStringTokenizer, _tokens), ::app::Uno::Collections::List__Uno_Runtime_Implementation_Internal_FormatStringToken__typeof()));

    type->SetFunctions(8,
        ::uNewFunctionVoid("AddFormatItemAndGoTo", FormatStringTokenizer__AddFormatItemAndGoTo, 0, false, ::app::Uno::Runtime::Implementation::Internal::FormatStringTokenizer_State__typeof()),
        ::uNewFunctionVoid("AddLiteralAndGoTo", FormatStringTokenizer__AddLiteralAndGoTo, 0, false, ::app::Uno::Runtime::Implementation::Internal::FormatStringTokenizer_State__typeof()),
        ::uNewFunction("AtEnd", FormatStringTokenizer__AtEnd, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("DiscardCharacterAndGoTo", FormatStringTokenizer__DiscardCharacterAndGoTo, 0, false, ::app::Uno::Runtime::Implementation::Internal::FormatStringTokenizer_State__typeof()),
        ::uNewFunction(".ctor", FormatStringTokenizer__New_1, 0, true, FormatStringTokenizer__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("Throw", FormatStringTokenizer__Throw, 0, false),
        ::uNewFunction("TokenizeFormatString", FormatStringTokenizer__TokenizeFormatString, 0, true, ::app::Uno::Collections::List__Uno_Runtime_Implementation_Internal_FormatStringToken__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("TokenizeFormatStringInternal", FormatStringTokenizer__TokenizeFormatStringInternal, 0, false, ::app::Uno::Collections::List__Uno_Runtime_Implementation_Internal_FormatStringToken__typeof()));

    ::uRegisterType(type);
    return type;
}

void FormatStringTokenizer___ObjInit(FormatStringTokenizer* __this, ::uString* format)
{
    __this->_format = format;
}

void FormatStringTokenizer__AddFormatItemAndGoTo(FormatStringTokenizer* __this, int state)
{
    ::uPtr< ::app::Uno::Collections::List__Uno_Runtime_Implementation_Internal_FormatStringToken*>(__this->_tokens)->Add((::app::Uno::Runtime::Implementation::Internal::FormatStringToken*)::app::Uno::Runtime::Implementation::Internal::FormatStringItem__New_1(NULL, ::app::Uno::String::Substring_1(::uPtr< ::uString*>(__this->_format), __this->_prevIndex, (__this->_index - __this->_prevIndex) + 1)));
    __this->_prevIndex = __this->_index + 1;
    __this->_state = state;
}

void FormatStringTokenizer__AddLiteralAndGoTo(FormatStringTokenizer* __this, int state)
{
    ::uPtr< ::app::Uno::Collections::List__Uno_Runtime_Implementation_Internal_FormatStringToken*>(__this->_tokens)->Add((::app::Uno::Runtime::Implementation::Internal::FormatStringToken*)::app::Uno::Runtime::Implementation::Internal::FormatStringLiteral__New_1(NULL, ::app::Uno::String::Substring_1(::uPtr< ::uString*>(__this->_format), __this->_prevIndex, __this->_index - __this->_prevIndex)));
    __this->_prevIndex = __this->_index;
    __this->_state = state;
}

bool FormatStringTokenizer__AtEnd(FormatStringTokenizer* __this)
{
    return __this->_index == ::uPtr< ::uString*>(__this->_format)->Length();
}

void FormatStringTokenizer__DiscardCharacterAndGoTo(FormatStringTokenizer* __this, int state)
{
    __this->_prevIndex++;
    __this->_state = state;
}

FormatStringTokenizer* FormatStringTokenizer__New_1(::uStatic* __this, ::uString* format)
{
    FormatStringTokenizer* inst = (FormatStringTokenizer*)::uAllocObject(sizeof(FormatStringTokenizer), FormatStringTokenizer__typeof());
    inst->_ObjInit(format);
    return inst;
}

void FormatStringTokenizer__Throw(FormatStringTokenizer* __this)
{
    U_THROW(::app::Uno::FormatException__New_3(NULL, ::uGetConstString("Input string was not in a correct format")));
}

::app::Uno::Collections::List__Uno_Runtime_Implementation_Internal_FormatStringToken* FormatStringTokenizer__TokenizeFormatString(::uStatic* __this, ::uString* format)
{
    return ::uPtr< FormatStringTokenizer*>(FormatStringTokenizer__New_1(NULL, format))->TokenizeFormatStringInternal();
}

::app::Uno::Collections::List__Uno_Runtime_Implementation_Internal_FormatStringToken* FormatStringTokenizer__TokenizeFormatStringInternal(FormatStringTokenizer* __this)
{
    __this->_index = 0;
    __this->_prevIndex = 0;
    __this->_state = 0;
    __this->_tokens = ::app::Uno::Collections::List__Uno_Runtime_Implementation_Internal_FormatStringToken__New_1(NULL);

    while (__this->_index <= ::uPtr< ::uString*>(__this->_format)->Length())
    {
        switch (__this->_state)
        {
            case 0:
            {
                if (__this->AtEnd())
                {
                    __this->_state = 4;
                }
                else if (::uPtr< ::uString*>(__this->_format)->Item(__this->_index) == '{')
                {
                    __this->_state = 2;
                }
                else if (::uPtr< ::uString*>(__this->_format)->Item(__this->_index) == '}')
                {
                    __this->Throw();
                }
                else
                {
                    __this->_state = 1;
                }

                break;
            }
            case 2:
            {
                if (__this->AtEnd())
                {
                    __this->Throw();
                }
                else if (::uPtr< ::uString*>(__this->_format)->Item(__this->_index) == '{')
                {
                    __this->DiscardCharacterAndGoTo(1);
                }
                else if (::uPtr< ::uString*>(__this->_format)->Item(__this->_index) == '}')
                {
                    __this->Throw();
                }
                else
                {
                    __this->_state = 3;
                }

                break;
            }
            case 3:
            {
                if (__this->AtEnd())
                {
                    __this->Throw();
                }
                else if (::uPtr< ::uString*>(__this->_format)->Item(__this->_index) == '}')
                {
                    __this->AddFormatItemAndGoTo(0);
                }
                else if (::uPtr< ::uString*>(__this->_format)->Item(__this->_index) == '{')
                {
                    __this->Throw();
                }

                break;
            }
            case 1:
            {
                if (__this->AtEnd())
                {
                    __this->AddLiteralAndGoTo(4);
                }
                else if (::uPtr< ::uString*>(__this->_format)->Item(__this->_index) == '{')
                {
                    __this->AddLiteralAndGoTo(2);
                }
                else if (::uPtr< ::uString*>(__this->_format)->Item(__this->_index) == '}')
                {
                    __this->Throw();
                }

                break;
            }
        }

        __this->_index++;
    }

    return __this->_tokens;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* FormatStringTokenizer_State__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Uno.Runtime.Implementation.Internal.FormatStringTokenizer.State", ::app::Uno::Int__typeof(), 5);

    type->SetLiterals(
        "Beginning", 0LL,
        "Literal", 1LL,
        "FirstCurly", 2LL,
        "FormatItem", 3LL,
        "End", 4LL);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::uString*> NumericFormatter___decimalPoint;
int NumericFormatter__ExponentialDigits;
int NumericFormatter__NumberDecimalDigits;

NumericFormatter__uType* NumericFormatter__typeof()
{
    static ::uStaticStrong<NumericFormatter__uType*> type;
    if (type != NULL) return type;

    type = (NumericFormatter__uType*)::uAllocClassType(sizeof(NumericFormatter__uType), "Uno.Runtime.Implementation.Internal.NumericFormatter");

    type->SetFields(3,
        ::uNewField("_decimalPoint", &NumericFormatter___decimalPoint, 0, ::app::Uno::String__typeof()),
        ::uNewField("ExponentialDigits", &NumericFormatter__ExponentialDigits, 0, ::app::Uno::Int__typeof()),
        ::uNewField("NumberDecimalDigits", &NumericFormatter__NumberDecimalDigits, 0, ::app::Uno::Int__typeof()));

    type->SetFunctions(37,
        ::uNewFunctionVoid("CalculateExponential", NumericFormatter__CalculateExponential, 0, true, ::app::Uno::Double__typeof(), ::app::Uno::Double__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("Digits", NumericFormatter__Digits, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("DoFormatHex", NumericFormatter__DoFormatHex, 0, true, ::app::Uno::String__typeof(), ::app::Uno::String__typeof(), ::app::Uno::ULong__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("Format", NumericFormatter__Format, 0, true, ::app::Uno::String__typeof(), ::app::Uno::String__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunction("Format", NumericFormatter__Format_1, 0, true, ::app::Uno::String__typeof(), ::app::Uno::String__typeof(), ::app::Uno::Double__typeof()),
        ::uNewFunction("Format", NumericFormatter__Format_2, 0, true, ::app::Uno::String__typeof(), ::app::Uno::String__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction("Format", NumericFormatter__Format_3, 0, true, ::app::Uno::String__typeof(), ::app::Uno::String__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("Format", NumericFormatter__Format_4, 0, true, ::app::Uno::String__typeof(), ::app::Uno::String__typeof(), ::app::Uno::Long__typeof()),
        ::uNewFunction("Format", NumericFormatter__Format_5, 0, true, ::app::Uno::String__typeof(), ::app::Uno::String__typeof(), ::app::Uno::SByte__typeof()),
        ::uNewFunction("Format", NumericFormatter__Format_6, 0, true, ::app::Uno::String__typeof(), ::app::Uno::String__typeof(), ::app::Uno::Short__typeof()),
        ::uNewFunction("Format", NumericFormatter__Format_7, 0, true, ::app::Uno::String__typeof(), ::app::Uno::String__typeof(), ::app::Uno::ULong__typeof()),
        ::uNewFunction("FormatCustom", NumericFormatter__FormatCustom, 0, true, ::app::Uno::String__typeof(), ::app::Uno::String__typeof(), ::app::Uno::Double__typeof()),
        ::uNewFunction("FormatCustom", NumericFormatter__FormatCustom_1, 0, true, ::app::Uno::String__typeof(), ::app::Uno::String__typeof(), ::app::Uno::ULong__typeof()),
        ::uNewFunction("FormatCustomDoublePart", NumericFormatter__FormatCustomDoublePart, 0, true, ::app::Uno::String__typeof(), ::app::Uno::String__typeof(), ::app::Uno::Double__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunction("FormatCustomIntegerPart", NumericFormatter__FormatCustomIntegerPart, 0, true, ::app::Uno::String__typeof(), ::app::Uno::String__typeof(), ::app::Uno::ULong__typeof()),
        ::uNewFunction("FormatDecimal", NumericFormatter__FormatDecimal, 0, true, ::app::Uno::String__typeof(), ::app::Uno::String__typeof(), ::app::Uno::ULong__typeof()),
        ::uNewFunction("FormatExponential", NumericFormatter__FormatExponential, 0, true, ::app::Uno::String__typeof(), ::app::Uno::String__typeof(), ::app::Uno::Double__typeof()),
        ::uNewFunction("FormatFixedPoint", NumericFormatter__FormatFixedPoint, 0, true, ::app::Uno::String__typeof(), ::app::Uno::String__typeof(), ::app::Uno::Double__typeof()),
        ::uNewFunction("FormatFixedPoint", NumericFormatter__FormatFixedPoint_1, 0, true, ::app::Uno::String__typeof(), ::app::Uno::String__typeof(), ::app::Uno::ULong__typeof()),
        ::uNewFunction("FormatFloatGeneral", NumericFormatter__FormatFloatGeneral, 0, true, ::app::Uno::String__typeof(), ::app::Uno::String__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction("FormatGeneral", NumericFormatter__FormatGeneral, 0, true, ::app::Uno::String__typeof(), ::app::Uno::String__typeof(), ::app::Uno::Double__typeof()),
        ::uNewFunction("FormatGeneral", NumericFormatter__FormatGeneral_1, 0, true, ::app::Uno::String__typeof(), ::app::Uno::String__typeof(), ::app::Uno::ULong__typeof()),
        ::uNewFunction("FormatHex", NumericFormatter__FormatHex, 0, true, ::app::Uno::String__typeof(), ::app::Uno::String__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("FormatHex", NumericFormatter__FormatHex_1, 0, true, ::app::Uno::String__typeof(), ::app::Uno::String__typeof(), ::app::Uno::Long__typeof()),
        ::uNewFunction("FormatHex", NumericFormatter__FormatHex_2, 0, true, ::app::Uno::String__typeof(), ::app::Uno::String__typeof(), ::app::Uno::SByte__typeof()),
        ::uNewFunction("FormatHex", NumericFormatter__FormatHex_3, 0, true, ::app::Uno::String__typeof(), ::app::Uno::String__typeof(), ::app::Uno::Short__typeof()),
        ::uNewFunction("FormatHex", NumericFormatter__FormatHex_4, 0, true, ::app::Uno::String__typeof(), ::app::Uno::String__typeof(), ::app::Uno::ULong__typeof()),
        ::uNewFunction("FormatNumber", NumericFormatter__FormatNumber, 0, true, ::app::Uno::String__typeof(), ::app::Uno::Double__typeof()),
        ::uNewFunction("FormatNumber", NumericFormatter__FormatNumber_1, 0, true, ::app::Uno::String__typeof(), ::app::Uno::String__typeof(), ::app::Uno::Double__typeof()),
        ::uNewFunction("FormatNumber", NumericFormatter__FormatNumber_2, 0, true, ::app::Uno::String__typeof(), ::app::Uno::String__typeof(), ::app::Uno::ULong__typeof()),
        ::uNewFunction("FormatNumber", NumericFormatter__FormatNumber_3, 0, true, ::app::Uno::String__typeof(), ::app::Uno::ULong__typeof()),
        ::uNewFunction("get_DecimalPoint", NumericFormatter__get_DecimalPoint, 0, true, ::app::Uno::String__typeof()),
        ::uNewFunction("GetFormatSpecifier", NumericFormatter__GetFormatSpecifier, 0, true, ::app::Uno::Runtime::Implementation::Internal::FormatSpecifier__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("GetStandartFormat", NumericFormatter__GetStandartFormat, 0, true, ::app::Uno::Runtime::Implementation::Internal::FormatSpecifier__typeof(), ::app::Uno::Char__typeof()),
        ::uNewFunction("IsLetter", NumericFormatter__IsLetter, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Char__typeof()),
        ::uNewFunction("Pad", NumericFormatter__Pad, 0, true, ::app::Uno::String__typeof(), ::app::Uno::String__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("Padding", NumericFormatter__Padding, 0, true, ::app::Uno::String__typeof(), ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

void NumericFormatter___TypeInit(::uStatic* __this)
{
    NumericFormatter__NumberDecimalDigits = 2;
    NumericFormatter__ExponentialDigits = 6;
}

void NumericFormatter__CalculateExponential(::uStatic* __this, double d, double* significand, int* exponent)
{
    *significand = d;
    *exponent = 0;

    while (*significand < 1.0)
    {
        *exponent = *exponent - 1;
        *significand = *significand * 10.0;
    }

    while (*significand >= 10.0)
    {
        *exponent = *exponent + 1;
        *significand = *significand / 10.0;
    }
}

int NumericFormatter__Digits(::uStatic* __this, ::uString* formatString)
{
    return ::app::Uno::Int__Parse(NULL, ::app::Uno::String::Substring(::uPtr< ::uString*>(formatString), 1));
}

::uString* NumericFormatter__DoFormatHex(::uStatic* __this, ::uString* formatString, ::uULong l, int maxLength)
{
    ::uArray* array_123;

    if (l == 0ull)
    {
        return NumericFormatter__Pad(NULL, ::uGetConstString("0"), formatString);
    }

    array_123 = ::uNewArray(::app::Uno::Char__typeof(), 16);
    ::uPtr< ::uArray*>(array_123)->Item< ::uChar>(0) = '0';
    ::uPtr< ::uArray*>(array_123)->Item< ::uChar>(1) = '1';
    ::uPtr< ::uArray*>(array_123)->Item< ::uChar>(2) = '2';
    ::uPtr< ::uArray*>(array_123)->Item< ::uChar>(3) = '3';
    ::uPtr< ::uArray*>(array_123)->Item< ::uChar>(4) = '4';
    ::uPtr< ::uArray*>(array_123)->Item< ::uChar>(5) = '5';
    ::uPtr< ::uArray*>(array_123)->Item< ::uChar>(6) = '6';
    ::uPtr< ::uArray*>(array_123)->Item< ::uChar>(7) = '7';
    ::uPtr< ::uArray*>(array_123)->Item< ::uChar>(8) = '8';
    ::uPtr< ::uArray*>(array_123)->Item< ::uChar>(9) = '9';
    ::uPtr< ::uArray*>(array_123)->Item< ::uChar>(10) = 'A';
    ::uPtr< ::uArray*>(array_123)->Item< ::uChar>(11) = 'B';
    ::uPtr< ::uArray*>(array_123)->Item< ::uChar>(12) = 'C';
    ::uPtr< ::uArray*>(array_123)->Item< ::uChar>(13) = 'D';
    ::uPtr< ::uArray*>(array_123)->Item< ::uChar>(14) = 'E';
    ::uPtr< ::uArray*>(array_123)->Item< ::uChar>(15) = 'F';
    ::uArray* hexChars = array_123;
    ::uArray* buffer = ::uNewArray(::app::Uno::Char__typeof(), maxLength);
    int index = maxLength;

    while (l != 0ull)
    {
        ::uPtr< ::uArray*>(buffer)->Item< ::uChar>(--index) = ::uPtr< ::uArray*>(hexChars)->Item< ::uChar>((int)(l % 16ull));
        l = l / 16ull;
    }

    ::uArray* result = ::uNewArray(::app::Uno::Char__typeof(), maxLength - index);

    for (int i = 0; i < result->Length(); i++)
    {
        result->Item< ::uChar>(i) = buffer->Item< ::uChar>(i + index);
    }

    ::uString* returnString = ::uNewStringFromArray(result);

    if (::uPtr< ::uString*>(formatString)->Item(0) == 'x')
    {
        returnString = ::app::Uno::String::ToLower(::uPtr< ::uString*>(returnString));
    }

    return NumericFormatter__Pad(NULL, returnString, formatString);
}

::uString* NumericFormatter__Format(::uStatic* __this, ::uString* formatString, bool i)
{
    return ::app::Uno::Bool::ToString(i);
}

::uString* NumericFormatter__Format_1(::uStatic* __this, ::uString* formatString, double d)
{
    switch (NumericFormatter__GetFormatSpecifier(NULL, formatString))
    {
        case 1:
        {
            return NumericFormatter__FormatFixedPoint(NULL, formatString, d);
        }
        case 3:
        {
            return NumericFormatter__FormatExponential(NULL, formatString, d);
        }
        case 4:
        {
            return NumericFormatter__FormatGeneral(NULL, formatString, d);
        }
        case 5:
        {
            return ::app::Uno::String__op_Addition_2(NULL, NumericFormatter__FormatNumber_1(NULL, formatString, 100.0 * d), ::uGetConstString(" %"));
        }
        case 6:
        {
            return NumericFormatter__FormatNumber_1(NULL, formatString, d);
        }
        case 7:
        {
            return NumericFormatter__FormatCustom(NULL, formatString, d);
        }
        default:
        {
            U_THROW(::app::Uno::FormatException__New_3(NULL, ::uGetConstString("Format specifier was invalid")));
        }
    }
}

::uString* NumericFormatter__Format_2(::uStatic* __this, ::uString* formatString, float f)
{
    if (NumericFormatter__GetFormatSpecifier(NULL, formatString) == 4)
    {
        return NumericFormatter__FormatFloatGeneral(NULL, formatString, f);
    }

    return NumericFormatter__Format_1(NULL, formatString, (double)f);
}

::uString* NumericFormatter__Format_3(::uStatic* __this, ::uString* formatString, int i)
{
    if (NumericFormatter__GetFormatSpecifier(NULL, formatString) == 2)
    {
        return NumericFormatter__FormatHex(NULL, formatString, i);
    }

    return NumericFormatter__Format_4(NULL, formatString, (::uLong)i);
}

::uString* NumericFormatter__Format_4(::uStatic* __this, ::uString* formatString, ::uLong i)
{
    if (NumericFormatter__GetFormatSpecifier(NULL, formatString) == 2)
    {
        return NumericFormatter__FormatHex_1(NULL, formatString, i);
    }
    else if (i >= 0ll)
    {
        return NumericFormatter__Format_7(NULL, formatString, (::uULong)i);
    }
    else
    {
        return ::app::Uno::String__op_Addition_2(NULL, ::uGetConstString("-"), NumericFormatter__Format_7(NULL, formatString, (::uULong)(i * -1ll)));
    }
}

::uString* NumericFormatter__Format_5(::uStatic* __this, ::uString* formatString, ::uSByte b)
{
    if (NumericFormatter__GetFormatSpecifier(NULL, formatString) == 2)
    {
        return NumericFormatter__FormatHex_2(NULL, formatString, b);
    }

    return NumericFormatter__Format_4(NULL, formatString, (::uLong)b);
}

::uString* NumericFormatter__Format_6(::uStatic* __this, ::uString* formatString, ::uShort s)
{
    if (NumericFormatter__GetFormatSpecifier(NULL, formatString) == 2)
    {
        return NumericFormatter__FormatHex_3(NULL, formatString, s);
    }

    return NumericFormatter__Format_4(NULL, formatString, (::uLong)s);
}

::uString* NumericFormatter__Format_7(::uStatic* __this, ::uString* formatString, ::uULong i)
{
    switch (NumericFormatter__GetFormatSpecifier(NULL, formatString))
    {
        case 0:
        {
            return NumericFormatter__FormatDecimal(NULL, formatString, i);
        }
        case 1:
        {
            return NumericFormatter__FormatFixedPoint_1(NULL, formatString, i);
        }
        case 2:
        {
            return NumericFormatter__FormatHex_4(NULL, formatString, i);
        }
        case 3:
        {
            return NumericFormatter__FormatExponential(NULL, formatString, (double)i);
        }
        case 4:
        {
            return NumericFormatter__FormatGeneral_1(NULL, formatString, i);
        }
        case 5:
        {
            return ::app::Uno::String__op_Addition_2(NULL, NumericFormatter__FormatNumber_2(NULL, formatString, 100ull * i), ::uGetConstString(" %"));
        }
        case 6:
        {
            return NumericFormatter__FormatNumber_2(NULL, formatString, i);
        }
        default:
        {
            return NumericFormatter__FormatCustom_1(NULL, formatString, i);
        }
    }
}

::uString* NumericFormatter__FormatCustom(::uStatic* __this, ::uString* formatString, double value)
{
    double absoluteValue = ::app::Uno::Math__Abs(NULL, value);
    int decimalPoint = ::app::Uno::String::IndexOf(::uPtr< ::uString*>(formatString), '.', 0);

    if (decimalPoint == -1)
    {
        return NumericFormatter__FormatCustomIntegerPart(NULL, formatString, (::uULong)absoluteValue);
    }

    bool hasDecimalPoint = bool();
    ::uString* integerPart = NumericFormatter__FormatCustomIntegerPart(NULL, ::app::Uno::String::Substring_1(formatString, 0, decimalPoint), (::uULong)absoluteValue);
    ::uString* doublePart = NumericFormatter__FormatCustomDoublePart(NULL, ::app::Uno::String::Substring(formatString, decimalPoint + 1), absoluteValue, &hasDecimalPoint);
    return ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, (value < 0.0) ? ::uGetConstString("-") : ::app::Uno::String__Empty, integerPart), hasDecimalPoint ? ::uGetConstString(".") : ::app::Uno::String__Empty), doublePart);
}

::uString* NumericFormatter__FormatCustom_1(::uStatic* __this, ::uString* formatString, ::uULong value)
{
    int decimalPoint = ::app::Uno::String::IndexOf(::uPtr< ::uString*>(formatString), '.', 0);

    if (decimalPoint == -1)
    {
        return NumericFormatter__FormatCustomIntegerPart(NULL, formatString, value);
    }

    bool hasDecimalPoint = bool();
    ::uString* integerPart = NumericFormatter__FormatCustomIntegerPart(NULL, ::app::Uno::String::Substring_1(formatString, 0, decimalPoint), value);
    ::uString* doublePart = NumericFormatter__FormatCustomDoublePart(NULL, ::app::Uno::String::Substring(formatString, decimalPoint + 1), 0.0, &hasDecimalPoint);
    return ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, integerPart, hasDecimalPoint ? ::uGetConstString(".") : ::app::Uno::String__Empty), doublePart);
}

::uString* NumericFormatter__FormatCustomDoublePart(::uStatic* __this, ::uString* doubleFormat, double d, bool* decimalPoint)
{
    int precision = 0;
    bool hasZero = false;
    ::uArray* processedFormat = ::app::Uno::String::ToCharArray(::uPtr< ::uString*>(doubleFormat));

    for (int i = ::uPtr< ::uArray*>(processedFormat)->Length() - 1; i >= 0; i--)
    {
        if (::uPtr< ::uArray*>(processedFormat)->Item< ::uChar>(i) == '0')
        {
            hasZero = true;
        }

        if ((::uPtr< ::uArray*>(processedFormat)->Item< ::uChar>(i) == '0') || (::uPtr< ::uArray*>(processedFormat)->Item< ::uChar>(i) == '#'))
        {
            ::uPtr< ::uArray*>(processedFormat)->Item< ::uChar>(i) = hasZero ? '0' : ::uPtr< ::uArray*>(processedFormat)->Item< ::uChar>(i);
            precision++;
        }
    }

    ::uString* raw = ::app::Uno::Double::ToString(::app::Uno::Math__Round_1(NULL, d, precision));
    int index = ::app::Uno::String::IndexOf_1(::uPtr< ::uString*>(raw), NumericFormatter__get_DecimalPoint(NULL), 0) + 1;
    *decimalPoint = (index != 0) || hasZero;

    if (index == 0)
    {
        index = raw->Length();
    }

    ::app::Uno::Collections::List__char* formatted = ::app::Uno::Collections::List__char__New_2(NULL, processedFormat->Length());

    for (int i = 0; i < processedFormat->Length(); i++)
    {
        switch (::uPtr< ::uArray*>(processedFormat)->Item< ::uChar>(i))
        {
            case '0':
            {
                ::uPtr< ::app::Uno::Collections::List__char*>(formatted)->Add((index >= ::uPtr< ::uString*>(raw)->Length()) ? '0' : ::uPtr< ::uString*>(raw)->Item(index++));
                break;
            }
            case '#':
            {
                if (index < ::uPtr< ::uString*>(raw)->Length())
                {
                    ::uPtr< ::app::Uno::Collections::List__char*>(formatted)->Add(::uPtr< ::uString*>(raw)->Item(index++));
                }

                break;
            }
            case '.':
            {
                break;
            }
            default:
            {
                ::uPtr< ::app::Uno::Collections::List__char*>(formatted)->Add(::uPtr< ::uArray*>(processedFormat)->Item< ::uChar>(i));
                break;
            }
        }
    }

    return ::uNewStringFromArray(::uPtr< ::app::Uno::Collections::List__char*>(formatted)->ToArray());
}

::uString* NumericFormatter__FormatCustomIntegerPart(::uStatic* __this, ::uString* integerFormat, ::uULong value)
{
    ::uString* raw = ::app::Uno::ULong::ToString(value);
    int rawIndex = (value == 0ull) ? -1 : (::uPtr< ::uString*>(raw)->Length() - 1);
    ::uArray* formatted = ::uNewArray(::app::Uno::Char__typeof(), ::uPtr< ::uString*>(integerFormat)->Length());
    int index = integerFormat->Length() - 1;
    int lastNumber = 0;

    for (int i = integerFormat->Length() - 1; i >= 0; i--)
    {
        switch (::uPtr< ::uString*>(integerFormat)->Item(i))
        {
            case '0':
            {
                lastNumber = i;
                ::uPtr< ::uArray*>(formatted)->Item< ::uChar>(index--) = (rawIndex < 0) ? '0' : ::uPtr< ::uString*>(raw)->Item(rawIndex--);
                break;
            }
            case '#':
            {
                lastNumber = i;

                if (rawIndex >= 0)
                {
                    ::uPtr< ::uArray*>(formatted)->Item< ::uChar>(index--) = ::uPtr< ::uString*>(raw)->Item(rawIndex--);
                }

                break;
            }
            default:
            {
                ::uPtr< ::uArray*>(formatted)->Item< ::uChar>(index--) = ::uPtr< ::uString*>(integerFormat)->Item(i);
                break;
            }
        }
    }

    ::uString* formattedString = ::uNewStringFromArray(formatted);

    if (index != -1)
    {
        formattedString = ::app::Uno::String::Substring(::uPtr< ::uString*>(formattedString), index + 1);
    }

    if (rawIndex >= 0)
    {
        return ::app::Uno::String::Insert(formattedString, lastNumber, ::app::Uno::String::Substring_1(raw, 0, rawIndex + 1));
    }

    return formattedString;
}

::uString* NumericFormatter__FormatDecimal(::uStatic* __this, ::uString* formatString, ::uULong l)
{
    return NumericFormatter__Pad(NULL, ::app::Uno::ULong::ToString(l), formatString);
}

::uString* NumericFormatter__FormatExponential(::uStatic* __this, ::uString* formatString, double d)
{
    double raw = double();
    int offset = int();
    NumericFormatter__CalculateExponential(NULL, d, &raw, &offset);
    int desiredDigits = (::uPtr< ::uString*>(formatString)->Length() > 1) ? NumericFormatter__Digits(NULL, formatString) : NumericFormatter__ExponentialDigits;
    ::uString* rounded = ::app::Uno::Double::ToString(::app::Uno::Math__Round_1(NULL, raw, desiredDigits));

    if (::app::Uno::String::IndexOf_1(::uPtr< ::uString*>(rounded), NumericFormatter__get_DecimalPoint(NULL), 0) == -1)
    {
        rounded = ::app::Uno::String__op_Addition_2(NULL, rounded, NumericFormatter__get_DecimalPoint(NULL));
    }

    ::uString* padding = NumericFormatter__Padding(NULL, (desiredDigits + 2) - ::uPtr< ::uString*>(rounded)->Length());
    ::uString* exponent = ::app::Uno::Int::ToString(::app::Uno::Math__Abs_5(NULL, offset));
    return ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, rounded, padding), ::uGetConstString("E")), (offset < 0) ? ::uGetConstString("-") : ::uGetConstString("+")), NumericFormatter__Padding(NULL, 3 - ::uPtr< ::uString*>(exponent)->Length())), exponent);
}

::uString* NumericFormatter__FormatFixedPoint(::uStatic* __this, ::uString* formatString, double d)
{
    int desiredDigits = (::uPtr< ::uString*>(formatString)->Length() > 1) ? NumericFormatter__Digits(NULL, formatString) : NumericFormatter__NumberDecimalDigits;
    ::uString* rounded = ::app::Uno::Double::ToString(::app::Uno::Math__Round_1(NULL, d, desiredDigits));
    int decimalPointPos = ::uPtr< ::uString*>(::app::Uno::Int::ToString((int)d))->Length();
    int actualDigits = ::app::Uno::Math__Max_8(NULL, (::uPtr< ::uString*>(rounded)->Length() - decimalPointPos) - 1, 0);

    if (desiredDigits <= actualDigits)
    {
        return rounded;
    }

    ::uString* padding = NumericFormatter__Padding(NULL, desiredDigits - actualDigits);
    bool hasDecimalPoint = ::app::Uno::String::IndexOf_1(rounded, NumericFormatter__get_DecimalPoint(NULL), 0) != -1;
    return ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, rounded, hasDecimalPoint ? ::uGetConstString("") : NumericFormatter__get_DecimalPoint(NULL)), padding);
}

::uString* NumericFormatter__FormatFixedPoint_1(::uStatic* __this, ::uString* formatString, ::uULong d)
{
    return ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::ULong::ToString(d), NumericFormatter__get_DecimalPoint(NULL)), NumericFormatter__Padding(NULL, (::uPtr< ::uString*>(formatString)->Length() > 1) ? NumericFormatter__Digits(NULL, formatString) : NumericFormatter__NumberDecimalDigits));
}

::uString* NumericFormatter__FormatFloatGeneral(::uStatic* __this, ::uString* formatString, float f)
{
    if (::uPtr< ::uString*>(formatString)->Length() == 1)
    {
        return ::app::Uno::Float::ToString(f);
    }

    return NumericFormatter__FormatGeneral(NULL, formatString, (double)f);
}

::uString* NumericFormatter__FormatGeneral(::uStatic* __this, ::uString* formatString, double d)
{
    if (::uPtr< ::uString*>(formatString)->Length() == 1)
    {
        return ::app::Uno::Double::ToString(d);
    }

    int desiredDigits = NumericFormatter__Digits(NULL, formatString);
    ::uString* str = ::app::Uno::Double::ToString(d);

    if ((desiredDigits >= ::uPtr< ::uString*>(str)->Length()) || (desiredDigits == 0))
    {
        return str;
    }

    double significand = double();
    int exponent = int();
    NumericFormatter__CalculateExponential(NULL, ::app::Uno::Math__Abs(NULL, d), &significand, &exponent);
    significand = ::app::Uno::Math__Round_1(NULL, significand, desiredDigits - 1);

    if (exponent > desiredDigits)
    {
        return ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::Double::ToString(significand), ::uGetConstString("E+")), NumericFormatter__Padding(NULL, 2 - ::uPtr< ::uString*>(::app::Uno::Int::ToString(exponent))->Length())), ::app::Uno::Int::ToString(exponent));
    }

    return ::app::Uno::String__op_Addition_2(NULL, (d < 0.0) ? ::uGetConstString("-") : ::app::Uno::String__Empty, ::app::Uno::Double::ToString(significand * (double)::app::Uno::Math__Pow_1(NULL, 10.0f, (float)exponent)));
}

::uString* NumericFormatter__FormatGeneral_1(::uStatic* __this, ::uString* formatString, ::uULong i)
{
    if (::uPtr< ::uString*>(formatString)->Length() == 1)
    {
        return ::app::Uno::ULong::ToString(i);
    }

    int desiredDigits = NumericFormatter__Digits(NULL, formatString);
    ::uString* str = ::app::Uno::ULong::ToString(i);

    if ((desiredDigits >= ::uPtr< ::uString*>(str)->Length()) || (desiredDigits == 0))
    {
        return str;
    }

    ::uString* rounded = ::app::Uno::Double::ToString(::app::Uno::Math__Round_1(NULL, (double)i / (double)::app::Uno::Math__Pow_1(NULL, 10.0f, (float)(::uPtr< ::uString*>(str)->Length() - 1)), desiredDigits - 1));
    ::uString* exponent = ::app::Uno::Int::ToString(str->Length() - 1);
    return ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, rounded, ::uGetConstString("E+")), NumericFormatter__Padding(NULL, 2 - ::uPtr< ::uString*>(exponent)->Length())), exponent);
}

::uString* NumericFormatter__FormatHex(::uStatic* __this, ::uString* formatString, int i)
{
    if (i < 0)
    {
        return NumericFormatter__DoFormatHex(NULL, formatString, (::uULong)((4294967295u - (::uUInt)-i) + 1u), 8);
    }

    return NumericFormatter__DoFormatHex(NULL, formatString, (::uULong)i, 8);
}

::uString* NumericFormatter__FormatHex_1(::uStatic* __this, ::uString* formatString, ::uLong l)
{
    if (l == (-9223372036854775807ll - 1))
    {
        return ::uGetConstString("8000000000000000");
    }

    if (l < 0ll)
    {
        return NumericFormatter__DoFormatHex(NULL, formatString, (18446744073709551615ull - (::uULong)-l) + 1ull, 16);
    }

    return NumericFormatter__DoFormatHex(NULL, formatString, (::uULong)l, 16);
}

::uString* NumericFormatter__FormatHex_2(::uStatic* __this, ::uString* formatString, ::uSByte b)
{
    if (b < 0)
    {
        return NumericFormatter__DoFormatHex(NULL, formatString, (::uULong)((255 - (::uByte)-b) + 1), 8);
    }

    return NumericFormatter__DoFormatHex(NULL, formatString, (::uULong)b, 8);
}

::uString* NumericFormatter__FormatHex_3(::uStatic* __this, ::uString* formatString, ::uShort s)
{
    if (s < 0)
    {
        return NumericFormatter__DoFormatHex(NULL, formatString, (::uULong)((65535 - (::uUShort)-s) + 1), 8);
    }

    return NumericFormatter__DoFormatHex(NULL, formatString, (::uULong)s, 8);
}

::uString* NumericFormatter__FormatHex_4(::uStatic* __this, ::uString* formatString, ::uULong l)
{
    return NumericFormatter__DoFormatHex(NULL, formatString, l, 16);
}

::uString* NumericFormatter__FormatNumber(::uStatic* __this, double d)
{
    if (d < 0.0)
    {
        return ::app::Uno::String__op_Addition_2(NULL, ::uGetConstString("-"), NumericFormatter__FormatNumber_3(NULL, (::uULong)-d));
    }

    return NumericFormatter__FormatNumber_3(NULL, (::uULong)d);
}

::uString* NumericFormatter__FormatNumber_1(::uStatic* __this, ::uString* formatString, double d)
{
    int desiredDigits = (::uPtr< ::uString*>(formatString)->Length() > 1) ? NumericFormatter__Digits(NULL, formatString) : NumericFormatter__NumberDecimalDigits;
    double rounded = ::app::Uno::Math__Round_1(NULL, d, desiredDigits);

    if (desiredDigits == 0)
    {
        return NumericFormatter__FormatNumber(NULL, rounded);
    }

    ::uString* str = ::app::Uno::Double::ToString(rounded);
    ::uString* residue = (::app::Uno::String::IndexOf_1(::uPtr< ::uString*>(str), NumericFormatter__get_DecimalPoint(NULL), 0) == -1) ? ::app::Uno::String__Empty : ::app::Uno::String::Substring(::uPtr< ::uString*>(str), ::app::Uno::String::IndexOf_1(::uPtr< ::uString*>(str), NumericFormatter__get_DecimalPoint(NULL), 0) + 1);
    return ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, NumericFormatter__FormatNumber(NULL, rounded), NumericFormatter__get_DecimalPoint(NULL)), residue), NumericFormatter__Padding(NULL, desiredDigits - ::uPtr< ::uString*>(residue)->Length()));
}

::uString* NumericFormatter__FormatNumber_2(::uStatic* __this, ::uString* formatString, ::uULong i)
{
    int desiredDigits = (::uPtr< ::uString*>(formatString)->Length() > 1) ? NumericFormatter__Digits(NULL, formatString) : NumericFormatter__NumberDecimalDigits;

    if (desiredDigits == 0)
    {
        return NumericFormatter__FormatNumber_3(NULL, i);
    }

    return ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, NumericFormatter__FormatNumber_3(NULL, i), ::uGetConstString(".")), NumericFormatter__Padding(NULL, desiredDigits));
}

::uString* NumericFormatter__FormatNumber_3(::uStatic* __this, ::uULong i)
{
    ::uString* str = ::app::Uno::ULong::ToString(i);

    if (::uPtr< ::uString*>(str)->Length() <= 3)
    {
        return str;
    }

    int start = ((::uPtr< ::uString*>(str)->Length() % 3) == 0) ? 3 : (::uPtr< ::uString*>(str)->Length() % 3);
    ::app::Uno::Text::StringBuilder* result = ::app::Uno::Text::StringBuilder__New_1(NULL);
    ::uPtr< ::app::Uno::Text::StringBuilder*>(result)->Append_1(::app::Uno::String::Substring_1(str, 0, start));

    for (int index = start; index < str->Length(); index = index + 3)
    {
        ::uPtr< ::app::Uno::Text::StringBuilder*>(result)->Append_1(::uGetConstString(","));
        result->Append_1(::app::Uno::String::Substring_1(::uPtr< ::uString*>(str), index, 3));
    }

    return result->ToString();
}

::uString* NumericFormatter__get_DecimalPoint(::uStatic* __this)
{
    if (::app::Uno::String__op_Equality(NULL, NumericFormatter___decimalPoint, NULL))
    {
        NumericFormatter___decimalPoint = ::app::Uno::Char::ToString(::uPtr< ::uString*>(::app::Uno::Double::ToString(1.1))->Item(1));
    }

    return NumericFormatter___decimalPoint;
}

int NumericFormatter__GetFormatSpecifier(::uStatic* __this, ::uString* formatString)
{
    ::uArray* array_124;
    ::uChar symbol = ::app::Uno::Char__ToUpper(NULL, ::uPtr< ::uString*>(formatString)->Item(0));

    if ((formatString->Length() == 1) && NumericFormatter__IsLetter(NULL, symbol))
    {
        return NumericFormatter__GetStandartFormat(NULL, symbol);
    }

    try
    {
        int decimals = NumericFormatter__Digits(NULL, formatString);

        if (decimals > 99)
        {
            return 7;
        }

        if (::uPtr< ::uString*>(::app::Uno::String::Trim_1(::uPtr< ::uString*>(formatString), (array_124 = ::uNewArray(::app::Uno::Char__typeof(), 1), ::uPtr< ::uArray*>(array_124)->Item< ::uChar>(0) = '0', array_124)))->Length() == 0)
        {
            return 7;
        }
    }
    catch (const ::uThrowable& __t)
    {
        if (::uIs(__t.Exception, ::app::Uno::Exception__typeof()))
        {
            ::app::Uno::Exception* __exception = (::app::Uno::Exception*)__t.Exception;
            return 7;
        }
        else
        {
            throw __t;
        }
    }

    return NumericFormatter__GetStandartFormat(NULL, symbol);
}

int NumericFormatter__GetStandartFormat(::uStatic* __this, ::uChar symbol)
{
    switch (symbol)
    {
        case 'X':
        {
            return 2;
        }
        case 'D':
        {
            return 0;
        }
        case 'F':
        {
            return 1;
        }
        case 'G':
        {
            return 4;
        }
        case 'N':
        {
            return 6;
        }
        case 'E':
        {
            return 3;
        }
        case 'P':
        {
            return 5;
        }
        default:
        {
            U_THROW(::app::Uno::FormatException__New_3(NULL, ::uGetConstString("Format specifier was invalid")));
        }
    }
}

bool NumericFormatter__IsLetter(::uStatic* __this, ::uChar symbol)
{
    return (symbol >= 'A') && (symbol <= 'Z');
}

::uString* NumericFormatter__Pad(::uStatic* __this, ::uString* unmodified, ::uString* formatString)
{
    int actualLength = ::uPtr< ::uString*>(unmodified)->Length();
    int desiredLength = (::uPtr< ::uString*>(formatString)->Length() > 1) ? NumericFormatter__Digits(NULL, formatString) : actualLength;

    if (desiredLength <= actualLength)
    {
        return unmodified;
    }

    ::uString* padding = NumericFormatter__Padding(NULL, desiredLength - actualLength);
    return ::app::Uno::String__op_Addition_2(NULL, padding, unmodified);
}

::uString* NumericFormatter__Padding(::uStatic* __this, int length)
{
    if (length <= 0)
    {
        return ::uGetConstString("");
    }

    ::uArray* padding = ::uNewArray(::app::Uno::Char__typeof(), length);

    for (int i = 0; i < length; i++)
    {
        padding->Item< ::uChar>(i) = '0';
    }

    return ::uNewStringFromArray(padding);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StringEnumerable__uType* StringEnumerable__typeof()
{
    static ::uStaticStrong<StringEnumerable__uType*> type;
    if (type != NULL) return type;

    type = (StringEnumerable__uType*)::uAllocClassType(sizeof(StringEnumerable__uType), "Uno.Runtime.Implementation.Internal.StringEnumerable", false, 1, 1, 0);

    type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))StringEnumerable__GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__char__typeof(), offsetof(StringEnumerable__uType, __interface_0));

    type->SetStrongRefs(
        "_source", offsetof(StringEnumerable, _source));

    type->SetFields(1,
        ::uNewField("_source", NULL, offsetof(StringEnumerable, _source), ::app::Uno::String__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("GetEnumerator", StringEnumerable__GetEnumerator, 0, false, ::app::Uno::Collections::IEnumerator__char__typeof()),
        ::uNewFunction(".ctor", StringEnumerable__New_1, 0, true, StringEnumerable__typeof(), ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void StringEnumerable___ObjInit(StringEnumerable* __this, ::uString* source)
{
    __this->_source = source;
}

::uObject* StringEnumerable__GetEnumerator(StringEnumerable* __this)
{
    return (::uObject*)::app::Uno::Runtime::Implementation::Internal::StringEnumerator__New_1(NULL, __this->_source);
}

StringEnumerable* StringEnumerable__New_1(::uStatic* __this, ::uString* source)
{
    StringEnumerable* inst = (StringEnumerable*)::uAllocObject(sizeof(StringEnumerable), StringEnumerable__typeof());
    inst->_ObjInit(source);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StringEnumerator__uType* StringEnumerator__typeof()
{
    static ::uStaticStrong<StringEnumerator__uType*> type;
    if (type != NULL) return type;

    type = (StringEnumerator__uType*)::uAllocClassType(sizeof(StringEnumerator__uType), "Uno.Runtime.Implementation.Internal.StringEnumerator", false, 3, 1, 0);

    type->__interface_0.__fp_get_Current = (::uChar(*)(void*))StringEnumerator__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))StringEnumerator__Dispose;
    type->__interface_2.__fp_Reset = (void(*)(void*))StringEnumerator__Reset;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))StringEnumerator__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__char__typeof(), offsetof(StringEnumerator__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(StringEnumerator__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(StringEnumerator__uType, __interface_2));

    type->SetStrongRefs(
        "_source", offsetof(StringEnumerator, _source));

    type->SetFields(3,
        ::uNewField("_current", NULL, offsetof(StringEnumerator, _current), ::app::Uno::Char__typeof()),
        ::uNewField("_iterator", NULL, offsetof(StringEnumerator, _iterator), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(StringEnumerator, _source), ::app::Uno::String__typeof()));

    type->SetFunctions(5,
        ::uNewFunctionVoid("Dispose", StringEnumerator__Dispose, 0, false),
        ::uNewFunction("get_Current", StringEnumerator__get_Current, 0, false, ::app::Uno::Char__typeof()),
        ::uNewFunction("MoveNext", StringEnumerator__MoveNext, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction(".ctor", StringEnumerator__New_1, 0, true, StringEnumerator__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("Reset", StringEnumerator__Reset, 0, false));

    ::uRegisterType(type);
    return type;
}

void StringEnumerator___ObjInit(StringEnumerator* __this, ::uString* source)
{
    __this->_source = source;
    __this->_iterator = -1;
}

void StringEnumerator__Dispose(StringEnumerator* __this)
{
}

::uChar StringEnumerator__get_Current(StringEnumerator* __this)
{
    return __this->_current;
}

bool StringEnumerator__MoveNext(StringEnumerator* __this)
{
    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::uString*>(__this->_source)->Length())
    {
        __this->_current = ::uPtr< ::uString*>(__this->_source)->Item(__this->_iterator);
        return true;
    }

    return false;
}

StringEnumerator* StringEnumerator__New_1(::uStatic* __this, ::uString* source)
{
    StringEnumerator* inst = (StringEnumerator*)::uAllocObject(sizeof(StringEnumerator), StringEnumerator__typeof());
    inst->_ObjInit(source);
    return inst;
}

void StringEnumerator__Reset(StringEnumerator* __this)
{
    __this->_iterator = -1;
    __this->_current = 0;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

WindowHelpers__uType* WindowHelpers__typeof()
{
    static ::uStaticStrong<WindowHelpers__uType*> type;
    if (type != NULL) return type;

    type = (WindowHelpers__uType*)::uAllocClassType(sizeof(WindowHelpers__uType), "Uno.Runtime.Implementation.Internal.WindowHelpers");

    type->SetFunctions(1,
        ::uNewFunction("GetPlatformWindowHandle", WindowHelpers__GetPlatformWindowHandle, 0, true, ::app::Uno::Runtime::Implementation::PlatformWindowHandle__typeof(), ::app::Uno::Platform::Window__typeof()));

    ::uRegisterType(type);
    return type;
}

::Xli::Window* WindowHelpers__GetPlatformWindowHandle(::uStatic* __this, ::app::Uno::Platform::Window* wnd)
{
    return ::uPtr< ::app::Uno::Platform::Window*>(wnd)->_handle;
}

}}}}}
