// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__CHAR__UNO_CONTENT_FONTS_BITMAP_FONT_GLYPH_INFO_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__CHAR__UNO_CONTENT_FONTS_BITMAP_FONT_GLYPH_INFO_H__

#include <app/Uno.Collections.Dictionary2_Bucket__char__Uno_Content_Fonts_Bit-20a49f53.h>
#include <app/Uno.Collections.IDictionary__char__Uno_Content_Fonts_BitmapFont-c09bf15e.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_char_-4731b191.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Enumerator__char__Uno_Content_Fonts_BitmapFont_GlyphInfo; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_KeyCollection__char__Uno_Content_Fonts_BitmapFont_GlyphInfo; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_ValueCollection__char__Uno_Content_Fonts_BitmapFont_GlyphInfo; } } }
namespace app { namespace Uno { namespace Collections { struct KeyValuePair__char__Uno_Content_Fonts_BitmapFont_GlyphInfo; } } }
namespace app { namespace Uno { namespace Content { namespace Fonts { struct BitmapFont_GlyphInfo; } } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo;

struct Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__uType : ::uClassType
{
    ::app::Uno::Collections::IDictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo __interface_0;
    ::app::Uno::Collections::IEnumerable__Uno_Collections_KeyValuePair_char_Uno_Content_Fonts_BitmapFont_GlyphInfo_ __interface_1;
};

Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__uType* Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__typeof();

::uObject* Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__GetEnumerator_boxed(Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo* __this);
void Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo___ObjInit(Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo* __this);
void Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo___ObjInit_1(Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo* __this, ::uObject* dictionary);
void Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__Add(Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo* __this, ::uChar key, ::app::Uno::Content::Fonts::BitmapFont_GlyphInfo value);
void Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__Clear(Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo* __this);
bool Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__ContainsKey(Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo* __this, ::uChar key);
int Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__get_Count(Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo* __this);
::app::Uno::Content::Fonts::BitmapFont_GlyphInfo Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__get_Item(Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo* __this, ::uChar key);
::app::Uno::Collections::Dictionary2_KeyCollection__char__Uno_Content_Fonts_BitmapFont_GlyphInfo* Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__get_Keys(Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo* __this);
::app::Uno::Collections::Dictionary2_ValueCollection__char__Uno_Content_Fonts_BitmapFont_GlyphInfo* Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__get_Values(Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo* __this);
::app::Uno::Collections::Dictionary2_Enumerator__char__Uno_Content_Fonts_BitmapFont_GlyphInfo Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__GetEnumerator(Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo* __this);
Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo* Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__New_1(::uStatic* __this);
Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo* Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__New_2(::uStatic* __this, ::uObject* dictionary);
void Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__Rehash(Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo* __this);
bool Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__Remove(Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo* __this, ::uChar key);
void Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__set_Item(Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo* __this, ::uChar key, ::app::Uno::Content::Fonts::BitmapFont_GlyphInfo value);
bool Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__TryGetValue(Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo* __this, ::uChar key, ::app::Uno::Content::Fonts::BitmapFont_GlyphInfo* value);
void Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__Uno_Collections_ICollection_Add(Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo* __this, ::app::Uno::Collections::KeyValuePair__char__Uno_Content_Fonts_BitmapFont_GlyphInfo item);
bool Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__Uno_Collections_ICollection_Contains(Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo* __this, ::app::Uno::Collections::KeyValuePair__char__Uno_Content_Fonts_BitmapFont_GlyphInfo item);
bool Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__Uno_Collections_ICollection_Remove(Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo* __this, ::app::Uno::Collections::KeyValuePair__char__Uno_Content_Fonts_BitmapFont_GlyphInfo item);

struct Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;
    int _version;

    ::uObject* GetEnumerator_boxed() { return Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__GetEnumerator_boxed(this); }
    void _ObjInit() { Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo___ObjInit(this); }
    void _ObjInit_1(::uObject* dictionary) { Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo___ObjInit_1(this, dictionary); }
    void Add(::uChar key, ::app::Uno::Content::Fonts::BitmapFont_GlyphInfo value);
    void Clear() { Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__Clear(this); }
    bool ContainsKey(::uChar key) { return Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__ContainsKey(this, key); }
    int Count() { return Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__get_Count(this); }
    ::app::Uno::Content::Fonts::BitmapFont_GlyphInfo Item(::uChar key);
    ::app::Uno::Collections::Dictionary2_KeyCollection__char__Uno_Content_Fonts_BitmapFont_GlyphInfo* Keys() { return Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__get_Keys(this); }
    ::app::Uno::Collections::Dictionary2_ValueCollection__char__Uno_Content_Fonts_BitmapFont_GlyphInfo* Values() { return Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__get_Values(this); }
    ::app::Uno::Collections::Dictionary2_Enumerator__char__Uno_Content_Fonts_BitmapFont_GlyphInfo GetEnumerator();
    void Rehash() { Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__Rehash(this); }
    bool Remove(::uChar key) { return Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__Remove(this, key); }
    void Item(::uChar key, ::app::Uno::Content::Fonts::BitmapFont_GlyphInfo value);
    bool TryGetValue(::uChar key, ::app::Uno::Content::Fonts::BitmapFont_GlyphInfo* value) { return Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__TryGetValue(this, key, value); }
};

}}}

#include <app/Uno.Collections.Dictionary2_Enumerator__char__Uno_Content_Fonts-81726062.h>
#include <app/Uno.Collections.KeyValuePair__char__Uno_Content_Fonts_BitmapFon-48bc2940.h>
#include <app/Uno.Content.Fonts.BitmapFont_GlyphInfo.h>

namespace app {
namespace Uno {
namespace Collections {

inline void Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo::Add(::uChar key, ::app::Uno::Content::Fonts::BitmapFont_GlyphInfo value) { Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__Add(this, key, value); }
inline ::app::Uno::Content::Fonts::BitmapFont_GlyphInfo Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo::Item(::uChar key) { return Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__get_Item(this, key); }
inline ::app::Uno::Collections::Dictionary2_Enumerator__char__Uno_Content_Fonts_BitmapFont_GlyphInfo Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo::GetEnumerator() { return Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__GetEnumerator(this); }
inline void Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo::Item(::uChar key, ::app::Uno::Content::Fonts::BitmapFont_GlyphInfo value) { Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__set_Item(this, key, value); }

}}}


#endif
