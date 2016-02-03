// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_KEY_COLLECTION__UNO_U_X_FILE_SOURCE__U_C07849CC_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_KEY_COLLECTION__UNO_U_X_FILE_SOURCE__U_C07849CC_H__

#include <app/Uno.Collections.ICollection__Uno_UX_FileSource.h>
#include <app/Uno.Collections.IEnumerable__Uno_UX_FileSource.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_Content_Fonts_FontFace; } } }
namespace app { namespace Uno { namespace UX { struct FileSource; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_KeyCollection__Uno_UX_FileSource__Uno_Content_Fonts_FontFace;

struct Dictionary2_KeyCollection__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__uType : ::uClassType
{
    ::app::Uno::Collections::ICollection__Uno_UX_FileSource __interface_0;
    ::app::Uno::Collections::IEnumerable__Uno_UX_FileSource __interface_1;
};

Dictionary2_KeyCollection__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__uType* Dictionary2_KeyCollection__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__typeof();

::uObject* Dictionary2_KeyCollection__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__GetEnumerator_boxed(Dictionary2_KeyCollection__Uno_UX_FileSource__Uno_Content_Fonts_FontFace* __this);
void Dictionary2_KeyCollection__Uno_UX_FileSource__Uno_Content_Fonts_FontFace___ObjInit(Dictionary2_KeyCollection__Uno_UX_FileSource__Uno_Content_Fonts_FontFace* __this, ::app::Uno::Collections::Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace* source);
int Dictionary2_KeyCollection__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__get_Count(Dictionary2_KeyCollection__Uno_UX_FileSource__Uno_Content_Fonts_FontFace* __this);
::app::Uno::Collections::Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_Content_Fonts_FontFace Dictionary2_KeyCollection__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__GetEnumerator(Dictionary2_KeyCollection__Uno_UX_FileSource__Uno_Content_Fonts_FontFace* __this);
Dictionary2_KeyCollection__Uno_UX_FileSource__Uno_Content_Fonts_FontFace* Dictionary2_KeyCollection__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace* source);
void Dictionary2_KeyCollection__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__Uno_Collections_ICollection_Add(Dictionary2_KeyCollection__Uno_UX_FileSource__Uno_Content_Fonts_FontFace* __this, ::app::Uno::UX::FileSource* item);
void Dictionary2_KeyCollection__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__Uno_Collections_ICollection_Clear(Dictionary2_KeyCollection__Uno_UX_FileSource__Uno_Content_Fonts_FontFace* __this);
bool Dictionary2_KeyCollection__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__Uno_Collections_ICollection_Contains(Dictionary2_KeyCollection__Uno_UX_FileSource__Uno_Content_Fonts_FontFace* __this, ::app::Uno::UX::FileSource* item);
bool Dictionary2_KeyCollection__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__Uno_Collections_ICollection_Remove(Dictionary2_KeyCollection__Uno_UX_FileSource__Uno_Content_Fonts_FontFace* __this, ::app::Uno::UX::FileSource* item);

struct Dictionary2_KeyCollection__Uno_UX_FileSource__Uno_Content_Fonts_FontFace : ::uObject
{
    ::uStrong< ::app::Uno::Collections::Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace*> _source;

    ::uObject* GetEnumerator_boxed() { return Dictionary2_KeyCollection__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__GetEnumerator_boxed(this); }
    void _ObjInit(::app::Uno::Collections::Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace* source) { Dictionary2_KeyCollection__Uno_UX_FileSource__Uno_Content_Fonts_FontFace___ObjInit(this, source); }
    int Count() { return Dictionary2_KeyCollection__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__get_Count(this); }
    ::app::Uno::Collections::Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_Content_Fonts_FontFace GetEnumerator();
};

}}}

#include <app/Uno.Collections.Dictionary2_KeyCollection_Enumerator__Uno_UX_Fi-2ebc0074.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_Content_Fonts_FontFace Dictionary2_KeyCollection__Uno_UX_FileSource__Uno_Content_Fonts_FontFace::GetEnumerator() { return Dictionary2_KeyCollection__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__GetEnumerator(this); }

}}}


#endif
