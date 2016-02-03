// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__FUSE_FONT__FUSE_CONTROLS_INTERNAL_6652B2A4_H__
#define __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__FUSE_FONT__FUSE_CONTROLS_INTERNAL_6652B2A4_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { namespace Internal { struct DefaultTextRenderer; } } } }
namespace app { namespace Fuse { struct Font; } }

namespace app {
namespace Uno {
namespace Collections {

struct KeyValuePair__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer;

struct KeyValuePair__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__uType : ::uStructType
{
};

KeyValuePair__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__uType* KeyValuePair__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__typeof();

void KeyValuePair__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer___ObjInit(KeyValuePair__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer* __this, ::app::Fuse::Font* key, ::app::Fuse::Controls::Internal::DefaultTextRenderer* value);
::app::Fuse::Font* KeyValuePair__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__get_Key(KeyValuePair__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer* __this);
::app::Fuse::Controls::Internal::DefaultTextRenderer* KeyValuePair__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__get_Value(KeyValuePair__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer* __this);
KeyValuePair__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer KeyValuePair__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__New_1(::uStatic* __this, ::app::Fuse::Font* key, ::app::Fuse::Controls::Internal::DefaultTextRenderer* value);

struct KeyValuePair__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer
{
    ::uStrong< ::app::Fuse::Font*> _key;
    ::uStrong< ::app::Fuse::Controls::Internal::DefaultTextRenderer*> _value;

    void _ObjInit(::app::Fuse::Font* key, ::app::Fuse::Controls::Internal::DefaultTextRenderer* value) { KeyValuePair__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer___ObjInit(this, key, value); }
    ::app::Fuse::Font* Key() { return KeyValuePair__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__get_Key(this); }
    ::app::Fuse::Controls::Internal::DefaultTextRenderer* Value() { return KeyValuePair__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__get_Value(this); }
};

}}}


#endif
