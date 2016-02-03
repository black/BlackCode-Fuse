// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__FUSE_CONTROLS_INTERNAL_DEFAULT_TEX_C90E5439_H__
#define __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__FUSE_CONTROLS_INTERNAL_DEFAULT_TEX_C90E5439_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { namespace Internal { struct DefaultTextRenderer_FontKey; } } } }
namespace app { namespace Uno { namespace Content { namespace Fonts { struct BitmapFont; } } } }

namespace app {
namespace Uno {
namespace Collections {

struct KeyValuePair__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont;

struct KeyValuePair__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont__uType : ::uStructType
{
};

KeyValuePair__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont__uType* KeyValuePair__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont__typeof();

void KeyValuePair__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont___ObjInit(KeyValuePair__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont* __this, ::app::Fuse::Controls::Internal::DefaultTextRenderer_FontKey* key, ::app::Uno::Content::Fonts::BitmapFont* value);
::app::Fuse::Controls::Internal::DefaultTextRenderer_FontKey* KeyValuePair__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont__get_Key(KeyValuePair__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont* __this);
::app::Uno::Content::Fonts::BitmapFont* KeyValuePair__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont__get_Value(KeyValuePair__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont* __this);
KeyValuePair__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont KeyValuePair__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont__New_1(::uStatic* __this, ::app::Fuse::Controls::Internal::DefaultTextRenderer_FontKey* key, ::app::Uno::Content::Fonts::BitmapFont* value);

struct KeyValuePair__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont
{
    ::uStrong< ::app::Fuse::Controls::Internal::DefaultTextRenderer_FontKey*> _key;
    ::uStrong< ::app::Uno::Content::Fonts::BitmapFont*> _value;

    void _ObjInit(::app::Fuse::Controls::Internal::DefaultTextRenderer_FontKey* key, ::app::Uno::Content::Fonts::BitmapFont* value) { KeyValuePair__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont___ObjInit(this, key, value); }
    ::app::Fuse::Controls::Internal::DefaultTextRenderer_FontKey* Key() { return KeyValuePair__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont__get_Key(this); }
    ::app::Uno::Content::Fonts::BitmapFont* Value() { return KeyValuePair__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont__get_Value(this); }
};

}}}


#endif
