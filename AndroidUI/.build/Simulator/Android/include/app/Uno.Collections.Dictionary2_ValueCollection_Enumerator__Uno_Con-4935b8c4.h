// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION_ENUMERATOR__UNO_CON_4935B8C4_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION_ENUMERATOR__UNO_CON_4935B8C4_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_ValueCollection_Enumerator__Uno_Content_Fonts_BitmapFont_CharPair__float;

struct Dictionary2_ValueCollection_Enumerator__Uno_Content_Fonts_BitmapFont_CharPair__float__uType : ::uStructType
{
    ::app::Uno::IDisposable __interface_0;
    ::app::Uno::Collections::IEnumerator __interface_1;
};

Dictionary2_ValueCollection_Enumerator__Uno_Content_Fonts_BitmapFont_CharPair__float__uType* Dictionary2_ValueCollection_Enumerator__Uno_Content_Fonts_BitmapFont_CharPair__float__typeof();

void Dictionary2_ValueCollection_Enumerator__Uno_Content_Fonts_BitmapFont_CharPair__float___ObjInit(Dictionary2_ValueCollection_Enumerator__Uno_Content_Fonts_BitmapFont_CharPair__float* __this, ::app::Uno::Collections::Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float* source);
void Dictionary2_ValueCollection_Enumerator__Uno_Content_Fonts_BitmapFont_CharPair__float__Dispose(Dictionary2_ValueCollection_Enumerator__Uno_Content_Fonts_BitmapFont_CharPair__float* __this);
bool Dictionary2_ValueCollection_Enumerator__Uno_Content_Fonts_BitmapFont_CharPair__float__MoveNext(Dictionary2_ValueCollection_Enumerator__Uno_Content_Fonts_BitmapFont_CharPair__float* __this);
Dictionary2_ValueCollection_Enumerator__Uno_Content_Fonts_BitmapFont_CharPair__float Dictionary2_ValueCollection_Enumerator__Uno_Content_Fonts_BitmapFont_CharPair__float__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float* source);
void Dictionary2_ValueCollection_Enumerator__Uno_Content_Fonts_BitmapFont_CharPair__float__Uno_Collections_IEnumerator_Reset(Dictionary2_ValueCollection_Enumerator__Uno_Content_Fonts_BitmapFont_CharPair__float* __this);

struct Dictionary2_ValueCollection_Enumerator__Uno_Content_Fonts_BitmapFont_CharPair__float
{
    ::uStrong< ::app::Uno::Collections::Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float*> _source;
    float _current;
    int _iterator;
    int _version;

    void _ObjInit(::app::Uno::Collections::Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float* source) { Dictionary2_ValueCollection_Enumerator__Uno_Content_Fonts_BitmapFont_CharPair__float___ObjInit(this, source); }
    void Dispose() { Dictionary2_ValueCollection_Enumerator__Uno_Content_Fonts_BitmapFont_CharPair__float__Dispose(this); }
    bool MoveNext() { return Dictionary2_ValueCollection_Enumerator__Uno_Content_Fonts_BitmapFont_CharPair__float__MoveNext(this); }
};

}}}


#endif
