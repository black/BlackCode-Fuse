// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_KEY_COLLECTION_ENUMERATOR__UNO_U_X_FI_2EBC0074_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_KEY_COLLECTION_ENUMERATOR__UNO_U_X_FI_2EBC0074_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Uno_UX_FileSource.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace; } } }
namespace app { namespace Uno { namespace UX { struct FileSource; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_Content_Fonts_FontFace;

struct Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Uno_UX_FileSource __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__uType* Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__typeof();

void Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_Content_Fonts_FontFace___ObjInit(Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_Content_Fonts_FontFace* __this, ::app::Uno::Collections::Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace* source);
void Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__Dispose(Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_Content_Fonts_FontFace* __this);
::app::Uno::UX::FileSource* Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__get_Current(Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_Content_Fonts_FontFace* __this);
bool Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__MoveNext(Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_Content_Fonts_FontFace* __this);
Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_Content_Fonts_FontFace Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace* source);
void Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__Uno_Collections_IEnumerator_Reset(Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_Content_Fonts_FontFace* __this);

struct Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_Content_Fonts_FontFace
{
    ::uStrong< ::app::Uno::Collections::Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace*> _source;
    ::uStrong< ::app::Uno::UX::FileSource*> _current;
    int _iterator;
    int _version;

    void _ObjInit(::app::Uno::Collections::Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace* source) { Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_Content_Fonts_FontFace___ObjInit(this, source); }
    void Dispose() { Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__Dispose(this); }
    ::app::Uno::UX::FileSource* Current() { return Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__get_Current(this); }
    bool MoveNext() { return Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__MoveNext(this); }
};

}}}


#endif
