// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__FRAMEBUFFER__INT_H__
#define __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__FRAMEBUFFER__INT_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Graphics { struct Framebuffer; } } }

namespace app {
namespace Uno {
namespace Collections {

struct KeyValuePair__framebuffer__int;

struct KeyValuePair__framebuffer__int__uType : ::uStructType
{
};

KeyValuePair__framebuffer__int__uType* KeyValuePair__framebuffer__int__typeof();

void KeyValuePair__framebuffer__int___ObjInit(KeyValuePair__framebuffer__int* __this, ::app::Uno::Graphics::Framebuffer* key, int value);
::app::Uno::Graphics::Framebuffer* KeyValuePair__framebuffer__int__get_Key(KeyValuePair__framebuffer__int* __this);
int KeyValuePair__framebuffer__int__get_Value(KeyValuePair__framebuffer__int* __this);
KeyValuePair__framebuffer__int KeyValuePair__framebuffer__int__New_1(::uStatic* __this, ::app::Uno::Graphics::Framebuffer* key, int value);

struct KeyValuePair__framebuffer__int
{
    ::uStrong< ::app::Uno::Graphics::Framebuffer*> _key;
    int _value;

    void _ObjInit(::app::Uno::Graphics::Framebuffer* key, int value) { KeyValuePair__framebuffer__int___ObjInit(this, key, value); }
    ::app::Uno::Graphics::Framebuffer* Key() { return KeyValuePair__framebuffer__int__get_Key(this); }
    int Value() { return KeyValuePair__framebuffer__int__get_Value(this); }
};

}}}


#endif
