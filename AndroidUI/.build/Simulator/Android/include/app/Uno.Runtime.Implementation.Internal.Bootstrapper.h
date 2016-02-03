// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_BOOTSTRAPPER_H__
#define __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_BOOTSTRAPPER_H__

#include <Uno.h>
namespace app { namespace Uno { struct Float2; } }
namespace Xli { class Window; }

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {
namespace Internal {

extern int Bootstrapper___fingerCount;
extern int Bootstrapper___lastMouseX;
extern int Bootstrapper___lastMouseY;
extern int Bootstrapper___lastPrimaryFingerId;
extern double Bootstrapper___lastTime;
extern double Bootstrapper___startTime;

struct Bootstrapper__uType : ::uClassType
{
};

Bootstrapper__uType* Bootstrapper__typeof();

void Bootstrapper___TypeInit(::uStatic* __this);
bool Bootstrapper__get_DrawNextFrame(::uStatic* __this);
int Bootstrapper__GetEventModifiers(::uStatic* __this, ::Xli::Window* handle);
::app::Uno::Float2 Bootstrapper__GetPointerScale(::uStatic* __this);
bool Bootstrapper__IsPrimaryFinger(::uStatic* __this, ::Xli::Window* handle, int fingerId);
void Bootstrapper__OnDraw(::uStatic* __this);
bool Bootstrapper__OnKeyboardResized(::uStatic* __this, ::Xli::Window* handle);
bool Bootstrapper__OnKeyDown(::uStatic* __this, ::Xli::Window* handle, int key);
bool Bootstrapper__OnKeyUp(::uStatic* __this, ::Xli::Window* handle, int key);
bool Bootstrapper__OnMouseDown(::uStatic* __this, ::Xli::Window* handle, int x, int y, int button);
bool Bootstrapper__OnMouseMove(::uStatic* __this, ::Xli::Window* handle, int x, int y);
bool Bootstrapper__OnMouseOut(::uStatic* __this, ::Xli::Window* handle);
bool Bootstrapper__OnMouseUp(::uStatic* __this, ::Xli::Window* handle, int x, int y, int button);
bool Bootstrapper__OnMouseWheel(::uStatic* __this, ::Xli::Window* handle, float dHori, float dVert, int wheelDeltaMode);
bool Bootstrapper__OnTextInput(::uStatic* __this, ::Xli::Window* handle, ::uString* text);
bool Bootstrapper__OnTouchDown(::uStatic* __this, ::Xli::Window* handle, float x, float y, int id);
bool Bootstrapper__OnTouchMove(::uStatic* __this, ::Xli::Window* handle, float x, float y, int id);
bool Bootstrapper__OnTouchUp(::uStatic* __this, ::Xli::Window* handle, float x, float y, int id);
void Bootstrapper__OnUpdate(::uStatic* __this);
void Bootstrapper__OnWindowClosed(::uStatic* __this, ::Xli::Window* handle);
bool Bootstrapper__OnWindowClosing(::uStatic* __this, ::Xli::Window* handle);
void Bootstrapper__OnWindowSizeChanged(::uStatic* __this, ::Xli::Window* handle);

}}}}}


#endif
