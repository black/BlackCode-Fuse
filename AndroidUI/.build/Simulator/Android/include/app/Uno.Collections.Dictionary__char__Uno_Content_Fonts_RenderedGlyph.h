// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__CHAR__UNO_CONTENT_FONTS_RENDERED_GLYPH_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__CHAR__UNO_CONTENT_FONTS_RENDERED_GLYPH_H__

#include <app/Uno.Collections.Dictionary2_Bucket__char__Uno_Content_Fonts_Ren-41393f7e.h>
#include <app/Uno.Collections.IDictionary__char__Uno_Content_Fonts_RenderedGlyph.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_char_-47548bd3.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Enumerator__char__Uno_Content_Fonts_RenderedGlyph; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_KeyCollection__char__Uno_Content_Fonts_RenderedGlyph; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_ValueCollection__char__Uno_Content_Fonts_RenderedGlyph; } } }
namespace app { namespace Uno { namespace Collections { struct KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph; } } }
namespace app { namespace Uno { namespace Content { namespace Fonts { struct RenderedGlyph; } } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__char__Uno_Content_Fonts_RenderedGlyph;

struct Dictionary__char__Uno_Content_Fonts_RenderedGlyph__uType : ::uClassType
{
    ::app::Uno::Collections::IDictionary__char__Uno_Content_Fonts_RenderedGlyph __interface_0;
    ::app::Uno::Collections::IEnumerable__Uno_Collections_KeyValuePair_char_Uno_Content_Fonts_RenderedGlyph_ __interface_1;
};

Dictionary__char__Uno_Content_Fonts_RenderedGlyph__uType* Dictionary__char__Uno_Content_Fonts_RenderedGlyph__typeof();

::uObject* Dictionary__char__Uno_Content_Fonts_RenderedGlyph__GetEnumerator_boxed(Dictionary__char__Uno_Content_Fonts_RenderedGlyph* __this);
void Dictionary__char__Uno_Content_Fonts_RenderedGlyph___ObjInit(Dictionary__char__Uno_Content_Fonts_RenderedGlyph* __this);
void Dictionary__char__Uno_Content_Fonts_RenderedGlyph___ObjInit_1(Dictionary__char__Uno_Content_Fonts_RenderedGlyph* __this, ::uObject* dictionary);
void Dictionary__char__Uno_Content_Fonts_RenderedGlyph__Add(Dictionary__char__Uno_Content_Fonts_RenderedGlyph* __this, ::uChar key, ::app::Uno::Content::Fonts::RenderedGlyph value);
void Dictionary__char__Uno_Content_Fonts_RenderedGlyph__Clear(Dictionary__char__Uno_Content_Fonts_RenderedGlyph* __this);
bool Dictionary__char__Uno_Content_Fonts_RenderedGlyph__ContainsKey(Dictionary__char__Uno_Content_Fonts_RenderedGlyph* __this, ::uChar key);
int Dictionary__char__Uno_Content_Fonts_RenderedGlyph__get_Count(Dictionary__char__Uno_Content_Fonts_RenderedGlyph* __this);
::app::Uno::Content::Fonts::RenderedGlyph Dictionary__char__Uno_Content_Fonts_RenderedGlyph__get_Item(Dictionary__char__Uno_Content_Fonts_RenderedGlyph* __this, ::uChar key);
::app::Uno::Collections::Dictionary2_KeyCollection__char__Uno_Content_Fonts_RenderedGlyph* Dictionary__char__Uno_Content_Fonts_RenderedGlyph__get_Keys(Dictionary__char__Uno_Content_Fonts_RenderedGlyph* __this);
::app::Uno::Collections::Dictionary2_ValueCollection__char__Uno_Content_Fonts_RenderedGlyph* Dictionary__char__Uno_Content_Fonts_RenderedGlyph__get_Values(Dictionary__char__Uno_Content_Fonts_RenderedGlyph* __this);
::app::Uno::Collections::Dictionary2_Enumerator__char__Uno_Content_Fonts_RenderedGlyph Dictionary__char__Uno_Content_Fonts_RenderedGlyph__GetEnumerator(Dictionary__char__Uno_Content_Fonts_RenderedGlyph* __this);
Dictionary__char__Uno_Content_Fonts_RenderedGlyph* Dictionary__char__Uno_Content_Fonts_RenderedGlyph__New_1(::uStatic* __this);
Dictionary__char__Uno_Content_Fonts_RenderedGlyph* Dictionary__char__Uno_Content_Fonts_RenderedGlyph__New_2(::uStatic* __this, ::uObject* dictionary);
void Dictionary__char__Uno_Content_Fonts_RenderedGlyph__Rehash(Dictionary__char__Uno_Content_Fonts_RenderedGlyph* __this);
bool Dictionary__char__Uno_Content_Fonts_RenderedGlyph__Remove(Dictionary__char__Uno_Content_Fonts_RenderedGlyph* __this, ::uChar key);
void Dictionary__char__Uno_Content_Fonts_RenderedGlyph__set_Item(Dictionary__char__Uno_Content_Fonts_RenderedGlyph* __this, ::uChar key, ::app::Uno::Content::Fonts::RenderedGlyph value);
bool Dictionary__char__Uno_Content_Fonts_RenderedGlyph__TryGetValue(Dictionary__char__Uno_Content_Fonts_RenderedGlyph* __this, ::uChar key, ::app::Uno::Content::Fonts::RenderedGlyph* value);
void Dictionary__char__Uno_Content_Fonts_RenderedGlyph__Uno_Collections_ICollection_Add(Dictionary__char__Uno_Content_Fonts_RenderedGlyph* __this, ::app::Uno::Collections::KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph item);
bool Dictionary__char__Uno_Content_Fonts_RenderedGlyph__Uno_Collections_ICollection_Contains(Dictionary__char__Uno_Content_Fonts_RenderedGlyph* __this, ::app::Uno::Collections::KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph item);
bool Dictionary__char__Uno_Content_Fonts_RenderedGlyph__Uno_Collections_ICollection_Remove(Dictionary__char__Uno_Content_Fonts_RenderedGlyph* __this, ::app::Uno::Collections::KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph item);

struct Dictionary__char__Uno_Content_Fonts_RenderedGlyph : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;
    int _version;

    ::uObject* GetEnumerator_boxed() { return Dictionary__char__Uno_Content_Fonts_RenderedGlyph__GetEnumerator_boxed(this); }
    void _ObjInit() { Dictionary__char__Uno_Content_Fonts_RenderedGlyph___ObjInit(this); }
    void _ObjInit_1(::uObject* dictionary) { Dictionary__char__Uno_Content_Fonts_RenderedGlyph___ObjInit_1(this, dictionary); }
    void Add(::uChar key, ::app::Uno::Content::Fonts::RenderedGlyph value);
    void Clear() { Dictionary__char__Uno_Content_Fonts_RenderedGlyph__Clear(this); }
    bool ContainsKey(::uChar key) { return Dictionary__char__Uno_Content_Fonts_RenderedGlyph__ContainsKey(this, key); }
    int Count() { return Dictionary__char__Uno_Content_Fonts_RenderedGlyph__get_Count(this); }
    ::app::Uno::Content::Fonts::RenderedGlyph Item(::uChar key);
    ::app::Uno::Collections::Dictionary2_KeyCollection__char__Uno_Content_Fonts_RenderedGlyph* Keys() { return Dictionary__char__Uno_Content_Fonts_RenderedGlyph__get_Keys(this); }
    ::app::Uno::Collections::Dictionary2_ValueCollection__char__Uno_Content_Fonts_RenderedGlyph* Values() { return Dictionary__char__Uno_Content_Fonts_RenderedGlyph__get_Values(this); }
    ::app::Uno::Collections::Dictionary2_Enumerator__char__Uno_Content_Fonts_RenderedGlyph GetEnumerator();
    void Rehash() { Dictionary__char__Uno_Content_Fonts_RenderedGlyph__Rehash(this); }
    bool Remove(::uChar key) { return Dictionary__char__Uno_Content_Fonts_RenderedGlyph__Remove(this, key); }
    void Item(::uChar key, ::app::Uno::Content::Fonts::RenderedGlyph value);
    bool TryGetValue(::uChar key, ::app::Uno::Content::Fonts::RenderedGlyph* value) { return Dictionary__char__Uno_Content_Fonts_RenderedGlyph__TryGetValue(this, key, value); }
};

}}}

#include <app/Uno.Collections.Dictionary2_Enumerator__char__Uno_Content_Fonts-877d8f30.h>
#include <app/Uno.Collections.KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph.h>
#include <app/Uno.Content.Fonts.RenderedGlyph.h>

namespace app {
namespace Uno {
namespace Collections {

inline void Dictionary__char__Uno_Content_Fonts_RenderedGlyph::Add(::uChar key, ::app::Uno::Content::Fonts::RenderedGlyph value) { Dictionary__char__Uno_Content_Fonts_RenderedGlyph__Add(this, key, value); }
inline ::app::Uno::Content::Fonts::RenderedGlyph Dictionary__char__Uno_Content_Fonts_RenderedGlyph::Item(::uChar key) { return Dictionary__char__Uno_Content_Fonts_RenderedGlyph__get_Item(this, key); }
inline ::app::Uno::Collections::Dictionary2_Enumerator__char__Uno_Content_Fonts_RenderedGlyph Dictionary__char__Uno_Content_Fonts_RenderedGlyph::GetEnumerator() { return Dictionary__char__Uno_Content_Fonts_RenderedGlyph__GetEnumerator(this); }
inline void Dictionary__char__Uno_Content_Fonts_RenderedGlyph::Item(::uChar key, ::app::Uno::Content::Fonts::RenderedGlyph value) { Dictionary__char__Uno_Content_Fonts_RenderedGlyph__set_Item(this, key, value); }

}}}


#endif
