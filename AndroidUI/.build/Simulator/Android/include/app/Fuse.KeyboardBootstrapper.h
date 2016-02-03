// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_KEYBOARD_BOOTSTRAPPER_H__
#define __APP_FUSE_KEYBOARD_BOOTSTRAPPER_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Platform { struct KeyEventArgs; } } }
namespace app { namespace Uno { namespace Platform { struct TextInputEventArgs; } } }

namespace app {
namespace Fuse {

struct KeyboardBootstrapper;

struct KeyboardBootstrapper__uType : ::uClassType
{
};

KeyboardBootstrapper__uType* KeyboardBootstrapper__typeof();

void KeyboardBootstrapper___ObjInit(KeyboardBootstrapper* __this);
KeyboardBootstrapper* KeyboardBootstrapper__New_1(::uStatic* __this);
void KeyboardBootstrapper__OnKeyPressed(::uStatic* __this, ::uObject* sender, ::app::Uno::Platform::KeyEventArgs* args);
void KeyboardBootstrapper__OnKeyReleased(::uStatic* __this, ::uObject* sender, ::app::Uno::Platform::KeyEventArgs* args);
void KeyboardBootstrapper__OnTextInput(::uStatic* __this, ::uObject* sender, ::app::Uno::Platform::TextInputEventArgs* args);

struct KeyboardBootstrapper : ::uObject
{
    void _ObjInit() { KeyboardBootstrapper___ObjInit(this); }
};

}}


#endif
