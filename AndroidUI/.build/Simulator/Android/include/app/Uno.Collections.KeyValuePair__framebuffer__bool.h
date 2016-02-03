// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__FRAMEBUFFER__BOOL_H__
#define __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__FRAMEBUFFER__BOOL_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Graphics { struct Framebuffer; } } }

namespace app {
namespace Uno {
namespace Collections {

struct KeyValuePair__framebuffer__bool;

struct KeyValuePair__framebuffer__bool__uType : ::uStructType
{
};

KeyValuePair__framebuffer__bool__uType* KeyValuePair__framebuffer__bool__typeof();

void KeyValuePair__framebuffer__bool___ObjInit(KeyValuePair__framebuffer__bool* __this, ::app::Uno::Graphics::Framebuffer* key, bool value);
::app::Uno::Graphics::Framebuffer* KeyValuePair__framebuffer__bool__get_Key(KeyValuePair__framebuffer__bool* __this);
bool KeyValuePair__framebuffer__bool__get_Value(KeyValuePair__framebuffer__bool* __this);
KeyValuePair__framebuffer__bool KeyValuePair__framebuffer__bool__New_1(::uStatic* __this, ::app::Uno::Graphics::Framebuffer* key, bool value);

struct KeyValuePair__framebuffer__bool
{
    ::uStrong< ::app::Uno::Graphics::Framebuffer*> _key;
    bool _value;

    void _ObjInit(::app::Uno::Graphics::Framebuffer* key, bool value) { KeyValuePair__framebuffer__bool___ObjInit(this, key, value); }
    ::app::Uno::Graphics::Framebuffer* Key() { return KeyValuePair__framebuffer__bool__get_Key(this); }
    bool Value() { return KeyValuePair__framebuffer__bool__get_Value(this); }
};

}}}


#endif
