// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION__UNO_U_X_FILE_SOURCE__A44F53A_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION__UNO_U_X_FILE_SOURCE__A44F53A_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_ValueCollection_Enumerator__Uno_UX_FileSource__Uno_Content_Fonts_FontFace; } } }
namespace app { namespace Uno { namespace Content { namespace Fonts { struct FontFace; } } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_ValueCollection__Uno_UX_FileSource__Uno_Content_Fonts_FontFace;

struct Dictionary2_ValueCollection__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__uType : ::uClassType
{
};

Dictionary2_ValueCollection__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__uType* Dictionary2_ValueCollection__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__typeof();

void Dictionary2_ValueCollection__Uno_UX_FileSource__Uno_Content_Fonts_FontFace___ObjInit(Dictionary2_ValueCollection__Uno_UX_FileSource__Uno_Content_Fonts_FontFace* __this, ::app::Uno::Collections::Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace* source);
int Dictionary2_ValueCollection__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__get_Count(Dictionary2_ValueCollection__Uno_UX_FileSource__Uno_Content_Fonts_FontFace* __this);
::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__Uno_UX_FileSource__Uno_Content_Fonts_FontFace Dictionary2_ValueCollection__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__GetEnumerator(Dictionary2_ValueCollection__Uno_UX_FileSource__Uno_Content_Fonts_FontFace* __this);
Dictionary2_ValueCollection__Uno_UX_FileSource__Uno_Content_Fonts_FontFace* Dictionary2_ValueCollection__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace* source);
void Dictionary2_ValueCollection__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__Uno_Collections_ICollection_Add(Dictionary2_ValueCollection__Uno_UX_FileSource__Uno_Content_Fonts_FontFace* __this, ::app::Uno::Content::Fonts::FontFace* item);
void Dictionary2_ValueCollection__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__Uno_Collections_ICollection_Clear(Dictionary2_ValueCollection__Uno_UX_FileSource__Uno_Content_Fonts_FontFace* __this);
bool Dictionary2_ValueCollection__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__Uno_Collections_ICollection_Contains(Dictionary2_ValueCollection__Uno_UX_FileSource__Uno_Content_Fonts_FontFace* __this, ::app::Uno::Content::Fonts::FontFace* item);
bool Dictionary2_ValueCollection__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__Uno_Collections_ICollection_Remove(Dictionary2_ValueCollection__Uno_UX_FileSource__Uno_Content_Fonts_FontFace* __this, ::app::Uno::Content::Fonts::FontFace* item);

struct Dictionary2_ValueCollection__Uno_UX_FileSource__Uno_Content_Fonts_FontFace : ::uObject
{
    ::uStrong< ::app::Uno::Collections::Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace*> _source;

    void _ObjInit(::app::Uno::Collections::Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace* source) { Dictionary2_ValueCollection__Uno_UX_FileSource__Uno_Content_Fonts_FontFace___ObjInit(this, source); }
    int Count() { return Dictionary2_ValueCollection__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__get_Count(this); }
    ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__Uno_UX_FileSource__Uno_Content_Fonts_FontFace GetEnumerator();
};

}}}

#include <app/Uno.Collections.Dictionary2_ValueCollection_Enumerator__Uno_UX_-f2526981.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__Uno_UX_FileSource__Uno_Content_Fonts_FontFace Dictionary2_ValueCollection__Uno_UX_FileSource__Uno_Content_Fonts_FontFace::GetEnumerator() { return Dictionary2_ValueCollection__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__GetEnumerator(this); }

}}}


#endif
