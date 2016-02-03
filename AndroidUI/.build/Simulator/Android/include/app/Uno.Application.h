// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_APPLICATION_H__
#define __APP_UNO_APPLICATION_H__

#include <app/Uno.Float4.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Graphics { struct GraphicsContext; } } }
namespace app { namespace Uno { namespace Platform { struct Window; } } }

namespace app {
namespace Uno {

struct Application;

extern ::uStaticStrong< Application*> Application___Current;

struct Application__uType : ::uClassType
{
};

Application__uType* Application__typeof();

void Application___ObjInit(Application* __this);
void Application__Draw(Application* __this);
::app::Uno::Float4 Application__get_ClearColor(Application* __this);
float Application__get_ClearDepth(Application* __this);
Application* Application__get_Current(::uStatic* __this);
bool Application__get_DrawNextFrame(Application* __this);
::app::Uno::Graphics::GraphicsContext* Application__get_GraphicsContext(Application* __this);
::app::Uno::Platform::Window* Application__get_Window(Application* __this);
void Application__Load(Application* __this);
void Application__set_ClearColor(Application* __this, ::app::Uno::Float4 value);
void Application__set_ClearDepth(Application* __this, float value);
void Application__set_Current(::uStatic* __this, Application* value);
void Application__set_DrawNextFrame(Application* __this, bool value);
void Application__set_GraphicsContext(Application* __this, ::app::Uno::Graphics::GraphicsContext* value);
void Application__set_Window(Application* __this, ::app::Uno::Platform::Window* value);
void Application__Update(Application* __this);

struct Application : ::uObject
{
    ::uStrong< ::app::Uno::Platform::Window*> _Window;
    ::uStrong< ::app::Uno::Graphics::GraphicsContext*> _GraphicsContext;
    ::app::Uno::Float4 _ClearColor;
    float _ClearDepth;
    bool _DrawNextFrame;

    void _ObjInit() { Application___ObjInit(this); }
    void Draw() { Application__Draw(this); }
    ::app::Uno::Float4 ClearColor() { return Application__get_ClearColor(this); }
    float ClearDepth() { return Application__get_ClearDepth(this); }
    bool DrawNextFrame() { return Application__get_DrawNextFrame(this); }
    ::app::Uno::Graphics::GraphicsContext* GraphicsContext() { return Application__get_GraphicsContext(this); }
    ::app::Uno::Platform::Window* Window() { return Application__get_Window(this); }
    void Load() { Application__Load(this); }
    void ClearColor(::app::Uno::Float4 value) { Application__set_ClearColor(this, value); }
    void ClearDepth(float value) { Application__set_ClearDepth(this, value); }
    void DrawNextFrame(bool value) { Application__set_DrawNextFrame(this, value); }
    void GraphicsContext(::app::Uno::Graphics::GraphicsContext* value) { Application__set_GraphicsContext(this, value); }
    void Window(::app::Uno::Platform::Window* value) { Application__set_Window(this, value); }
    void Update() { Application__Update(this); }
};

}}


#endif
