// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_KEY_COLLECTION__UNO_CONTENT_FONTS_BI_47F4EA43_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_KEY_COLLECTION__UNO_CONTENT_FONTS_BI_47F4EA43_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_KeyCollection_Enumerator__Uno_Content_Fonts_BitmapFont_CharPair__float; } } }
namespace app { namespace Uno { namespace Content { namespace Fonts { struct BitmapFont_CharPair; } } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_KeyCollection__Uno_Content_Fonts_BitmapFont_CharPair__float;

struct Dictionary2_KeyCollection__Uno_Content_Fonts_BitmapFont_CharPair__float__uType : ::uClassType
{
};

Dictionary2_KeyCollection__Uno_Content_Fonts_BitmapFont_CharPair__float__uType* Dictionary2_KeyCollection__Uno_Content_Fonts_BitmapFont_CharPair__float__typeof();

void Dictionary2_KeyCollection__Uno_Content_Fonts_BitmapFont_CharPair__float___ObjInit(Dictionary2_KeyCollection__Uno_Content_Fonts_BitmapFont_CharPair__float* __this, ::app::Uno::Collections::Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float* source);
int Dictionary2_KeyCollection__Uno_Content_Fonts_BitmapFont_CharPair__float__get_Count(Dictionary2_KeyCollection__Uno_Content_Fonts_BitmapFont_CharPair__float* __this);
::app::Uno::Collections::Dictionary2_KeyCollection_Enumerator__Uno_Content_Fonts_BitmapFont_CharPair__float Dictionary2_KeyCollection__Uno_Content_Fonts_BitmapFont_CharPair__float__GetEnumerator(Dictionary2_KeyCollection__Uno_Content_Fonts_BitmapFont_CharPair__float* __this);
Dictionary2_KeyCollection__Uno_Content_Fonts_BitmapFont_CharPair__float* Dictionary2_KeyCollection__Uno_Content_Fonts_BitmapFont_CharPair__float__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float* source);
void Dictionary2_KeyCollection__Uno_Content_Fonts_BitmapFont_CharPair__float__Uno_Collections_ICollection_Add(Dictionary2_KeyCollection__Uno_Content_Fonts_BitmapFont_CharPair__float* __this, ::app::Uno::Content::Fonts::BitmapFont_CharPair item);
void Dictionary2_KeyCollection__Uno_Content_Fonts_BitmapFont_CharPair__float__Uno_Collections_ICollection_Clear(Dictionary2_KeyCollection__Uno_Content_Fonts_BitmapFont_CharPair__float* __this);
bool Dictionary2_KeyCollection__Uno_Content_Fonts_BitmapFont_CharPair__float__Uno_Collections_ICollection_Contains(Dictionary2_KeyCollection__Uno_Content_Fonts_BitmapFont_CharPair__float* __this, ::app::Uno::Content::Fonts::BitmapFont_CharPair item);
bool Dictionary2_KeyCollection__Uno_Content_Fonts_BitmapFont_CharPair__float__Uno_Collections_ICollection_Remove(Dictionary2_KeyCollection__Uno_Content_Fonts_BitmapFont_CharPair__float* __this, ::app::Uno::Content::Fonts::BitmapFont_CharPair item);

struct Dictionary2_KeyCollection__Uno_Content_Fonts_BitmapFont_CharPair__float : ::uObject
{
    ::uStrong< ::app::Uno::Collections::Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float*> _source;

    void _ObjInit(::app::Uno::Collections::Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float* source) { Dictionary2_KeyCollection__Uno_Content_Fonts_BitmapFont_CharPair__float___ObjInit(this, source); }
    int Count() { return Dictionary2_KeyCollection__Uno_Content_Fonts_BitmapFont_CharPair__float__get_Count(this); }
    ::app::Uno::Collections::Dictionary2_KeyCollection_Enumerator__Uno_Content_Fonts_BitmapFont_CharPair__float GetEnumerator();
};

}}}

#include <app/Uno.Collections.Dictionary2_KeyCollection_Enumerator__Uno_Conte-51aadfd3.h>
#include <app/Uno.Content.Fonts.BitmapFont_CharPair.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_KeyCollection_Enumerator__Uno_Content_Fonts_BitmapFont_CharPair__float Dictionary2_KeyCollection__Uno_Content_Fonts_BitmapFont_CharPair__float::GetEnumerator() { return Dictionary2_KeyCollection__Uno_Content_Fonts_BitmapFont_CharPair__float__GetEnumerator(this); }

}}}


#endif
