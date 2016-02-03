// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__UNO_U_X_FILE_SOURCE__UNO_CONTENT_FO_65D16951_H__
#define __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__UNO_U_X_FILE_SOURCE__UNO_CONTENT_FO_65D16951_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Content { namespace Fonts { struct FontFace; } } } }
namespace app { namespace Uno { namespace UX { struct FileSource; } } }

namespace app {
namespace Uno {
namespace Collections {

struct KeyValuePair__Uno_UX_FileSource__Uno_Content_Fonts_FontFace;

struct KeyValuePair__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__uType : ::uStructType
{
};

KeyValuePair__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__uType* KeyValuePair__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__typeof();

void KeyValuePair__Uno_UX_FileSource__Uno_Content_Fonts_FontFace___ObjInit(KeyValuePair__Uno_UX_FileSource__Uno_Content_Fonts_FontFace* __this, ::app::Uno::UX::FileSource* key, ::app::Uno::Content::Fonts::FontFace* value);
::app::Uno::UX::FileSource* KeyValuePair__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__get_Key(KeyValuePair__Uno_UX_FileSource__Uno_Content_Fonts_FontFace* __this);
::app::Uno::Content::Fonts::FontFace* KeyValuePair__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__get_Value(KeyValuePair__Uno_UX_FileSource__Uno_Content_Fonts_FontFace* __this);
KeyValuePair__Uno_UX_FileSource__Uno_Content_Fonts_FontFace KeyValuePair__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__New_1(::uStatic* __this, ::app::Uno::UX::FileSource* key, ::app::Uno::Content::Fonts::FontFace* value);

struct KeyValuePair__Uno_UX_FileSource__Uno_Content_Fonts_FontFace
{
    ::uStrong< ::app::Uno::UX::FileSource*> _key;
    ::uStrong< ::app::Uno::Content::Fonts::FontFace*> _value;

    void _ObjInit(::app::Uno::UX::FileSource* key, ::app::Uno::Content::Fonts::FontFace* value) { KeyValuePair__Uno_UX_FileSource__Uno_Content_Fonts_FontFace___ObjInit(this, key, value); }
    ::app::Uno::UX::FileSource* Key() { return KeyValuePair__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__get_Key(this); }
    ::app::Uno::Content::Fonts::FontFace* Value() { return KeyValuePair__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__get_Value(this); }
};

}}}


#endif
