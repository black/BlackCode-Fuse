// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__UNO_U_X_FILE_SOURCE__UNO_CONTENT_FONT_ACD5257B_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__UNO_U_X_FILE_SOURCE__UNO_CONTENT_FONT_ACD5257B_H__

#include <app/Uno.Collections.Dictionary2_Bucket__Uno_UX_FileSource__Uno_Cont-ddcc3b.h>
#include <app/Uno.Collections.IDictionary__Uno_UX_FileSource__Uno_Content_Fon-385d1e83.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_Uno_U-b3bad854.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Enumerator__Uno_UX_FileSource__Uno_Content_Fonts_FontFace; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_KeyCollection__Uno_UX_FileSource__Uno_Content_Fonts_FontFace; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_ValueCollection__Uno_UX_FileSource__Uno_Content_Fonts_FontFace; } } }
namespace app { namespace Uno { namespace Collections { struct KeyValuePair__Uno_UX_FileSource__Uno_Content_Fonts_FontFace; } } }
namespace app { namespace Uno { namespace Content { namespace Fonts { struct FontFace; } } } }
namespace app { namespace Uno { namespace UX { struct FileSource; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace;

struct Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__uType : ::uClassType
{
    ::app::Uno::Collections::IDictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace __interface_0;
    ::app::Uno::Collections::IEnumerable__Uno_Collections_KeyValuePair_Uno_UX_FileSource_Uno_Content_Fonts_FontFace_ __interface_1;
};

Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__uType* Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__typeof();

::uObject* Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__GetEnumerator_boxed(Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace* __this);
void Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace___ObjInit(Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace* __this);
void Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace___ObjInit_1(Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace* __this, ::uObject* dictionary);
void Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__Add(Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace* __this, ::app::Uno::UX::FileSource* key, ::app::Uno::Content::Fonts::FontFace* value);
void Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__Clear(Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace* __this);
bool Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__ContainsKey(Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace* __this, ::app::Uno::UX::FileSource* key);
int Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__get_Count(Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace* __this);
::app::Uno::Content::Fonts::FontFace* Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__get_Item(Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace* __this, ::app::Uno::UX::FileSource* key);
::app::Uno::Collections::Dictionary2_KeyCollection__Uno_UX_FileSource__Uno_Content_Fonts_FontFace* Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__get_Keys(Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace* __this);
::app::Uno::Collections::Dictionary2_ValueCollection__Uno_UX_FileSource__Uno_Content_Fonts_FontFace* Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__get_Values(Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace* __this);
::app::Uno::Collections::Dictionary2_Enumerator__Uno_UX_FileSource__Uno_Content_Fonts_FontFace Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__GetEnumerator(Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace* __this);
Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace* Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__New_1(::uStatic* __this);
Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace* Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__New_2(::uStatic* __this, ::uObject* dictionary);
void Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__Rehash(Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace* __this);
bool Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__Remove(Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace* __this, ::app::Uno::UX::FileSource* key);
void Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__set_Item(Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace* __this, ::app::Uno::UX::FileSource* key, ::app::Uno::Content::Fonts::FontFace* value);
bool Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__TryGetValue(Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace* __this, ::app::Uno::UX::FileSource* key, ::app::Uno::Content::Fonts::FontFace** value);
void Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__Uno_Collections_ICollection_Add(Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace* __this, ::app::Uno::Collections::KeyValuePair__Uno_UX_FileSource__Uno_Content_Fonts_FontFace item);
bool Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__Uno_Collections_ICollection_Contains(Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace* __this, ::app::Uno::Collections::KeyValuePair__Uno_UX_FileSource__Uno_Content_Fonts_FontFace item);
bool Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__Uno_Collections_ICollection_Remove(Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace* __this, ::app::Uno::Collections::KeyValuePair__Uno_UX_FileSource__Uno_Content_Fonts_FontFace item);

struct Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;
    int _version;

    ::uObject* GetEnumerator_boxed() { return Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__GetEnumerator_boxed(this); }
    void _ObjInit() { Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace___ObjInit(this); }
    void _ObjInit_1(::uObject* dictionary) { Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace___ObjInit_1(this, dictionary); }
    void Add(::app::Uno::UX::FileSource* key, ::app::Uno::Content::Fonts::FontFace* value) { Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__Add(this, key, value); }
    void Clear() { Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__Clear(this); }
    bool ContainsKey(::app::Uno::UX::FileSource* key) { return Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__ContainsKey(this, key); }
    int Count() { return Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__get_Count(this); }
    ::app::Uno::Content::Fonts::FontFace* Item(::app::Uno::UX::FileSource* key) { return Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__get_Item(this, key); }
    ::app::Uno::Collections::Dictionary2_KeyCollection__Uno_UX_FileSource__Uno_Content_Fonts_FontFace* Keys() { return Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__get_Keys(this); }
    ::app::Uno::Collections::Dictionary2_ValueCollection__Uno_UX_FileSource__Uno_Content_Fonts_FontFace* Values() { return Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__get_Values(this); }
    ::app::Uno::Collections::Dictionary2_Enumerator__Uno_UX_FileSource__Uno_Content_Fonts_FontFace GetEnumerator();
    void Rehash() { Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__Rehash(this); }
    bool Remove(::app::Uno::UX::FileSource* key) { return Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__Remove(this, key); }
    void Item(::app::Uno::UX::FileSource* key, ::app::Uno::Content::Fonts::FontFace* value) { Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__set_Item(this, key, value); }
    bool TryGetValue(::app::Uno::UX::FileSource* key, ::app::Uno::Content::Fonts::FontFace** value) { return Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__TryGetValue(this, key, value); }
};

}}}

#include <app/Uno.Collections.Dictionary2_Enumerator__Uno_UX_FileSource__Uno_-9b980af2.h>
#include <app/Uno.Collections.KeyValuePair__Uno_UX_FileSource__Uno_Content_Fo-65d16951.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_Enumerator__Uno_UX_FileSource__Uno_Content_Fonts_FontFace Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace::GetEnumerator() { return Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__GetEnumerator(this); }

}}}


#endif
