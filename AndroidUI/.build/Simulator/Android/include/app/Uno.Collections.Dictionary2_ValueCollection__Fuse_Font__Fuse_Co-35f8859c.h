// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION__FUSE_FONT__FUSE_CO_35F8859C_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION__FUSE_FONT__FUSE_CO_35F8859C_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { namespace Internal { struct DefaultTextRenderer; } } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_ValueCollection_Enumerator__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_ValueCollection__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer;

struct Dictionary2_ValueCollection__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__uType : ::uClassType
{
};

Dictionary2_ValueCollection__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__uType* Dictionary2_ValueCollection__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__typeof();

void Dictionary2_ValueCollection__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer___ObjInit(Dictionary2_ValueCollection__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer* __this, ::app::Uno::Collections::Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer* source);
int Dictionary2_ValueCollection__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__get_Count(Dictionary2_ValueCollection__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer* __this);
::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer Dictionary2_ValueCollection__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__GetEnumerator(Dictionary2_ValueCollection__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer* __this);
Dictionary2_ValueCollection__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer* Dictionary2_ValueCollection__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer* source);
void Dictionary2_ValueCollection__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__Uno_Collections_ICollection_Add(Dictionary2_ValueCollection__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer* __this, ::app::Fuse::Controls::Internal::DefaultTextRenderer* item);
void Dictionary2_ValueCollection__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__Uno_Collections_ICollection_Clear(Dictionary2_ValueCollection__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer* __this);
bool Dictionary2_ValueCollection__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__Uno_Collections_ICollection_Contains(Dictionary2_ValueCollection__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer* __this, ::app::Fuse::Controls::Internal::DefaultTextRenderer* item);
bool Dictionary2_ValueCollection__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__Uno_Collections_ICollection_Remove(Dictionary2_ValueCollection__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer* __this, ::app::Fuse::Controls::Internal::DefaultTextRenderer* item);

struct Dictionary2_ValueCollection__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer : ::uObject
{
    ::uStrong< ::app::Uno::Collections::Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer*> _source;

    void _ObjInit(::app::Uno::Collections::Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer* source) { Dictionary2_ValueCollection__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer___ObjInit(this, source); }
    int Count() { return Dictionary2_ValueCollection__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__get_Count(this); }
    ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer GetEnumerator();
};

}}}

#include <app/Uno.Collections.Dictionary2_ValueCollection_Enumerator__Fuse_Fo-32fbb5cf.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer Dictionary2_ValueCollection__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer::GetEnumerator() { return Dictionary2_ValueCollection__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__GetEnumerator(this); }

}}}


#endif
