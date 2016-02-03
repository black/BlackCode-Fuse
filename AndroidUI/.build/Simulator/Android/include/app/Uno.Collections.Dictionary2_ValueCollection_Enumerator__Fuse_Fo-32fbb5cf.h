// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION_ENUMERATOR__FUSE_FO_32FBB5CF_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION_ENUMERATOR__FUSE_FO_32FBB5CF_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { namespace Internal { struct DefaultTextRenderer; } } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_ValueCollection_Enumerator__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer;

struct Dictionary2_ValueCollection_Enumerator__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__uType : ::uStructType
{
    ::app::Uno::IDisposable __interface_0;
    ::app::Uno::Collections::IEnumerator __interface_1;
};

Dictionary2_ValueCollection_Enumerator__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__uType* Dictionary2_ValueCollection_Enumerator__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__typeof();

void Dictionary2_ValueCollection_Enumerator__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer___ObjInit(Dictionary2_ValueCollection_Enumerator__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer* __this, ::app::Uno::Collections::Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer* source);
void Dictionary2_ValueCollection_Enumerator__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__Dispose(Dictionary2_ValueCollection_Enumerator__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer* __this);
bool Dictionary2_ValueCollection_Enumerator__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__MoveNext(Dictionary2_ValueCollection_Enumerator__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer* __this);
Dictionary2_ValueCollection_Enumerator__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer Dictionary2_ValueCollection_Enumerator__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer* source);
void Dictionary2_ValueCollection_Enumerator__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__Uno_Collections_IEnumerator_Reset(Dictionary2_ValueCollection_Enumerator__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer* __this);

struct Dictionary2_ValueCollection_Enumerator__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer
{
    ::uStrong< ::app::Uno::Collections::Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer*> _source;
    ::uStrong< ::app::Fuse::Controls::Internal::DefaultTextRenderer*> _current;
    int _iterator;
    int _version;

    void _ObjInit(::app::Uno::Collections::Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer* source) { Dictionary2_ValueCollection_Enumerator__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer___ObjInit(this, source); }
    void Dispose() { Dictionary2_ValueCollection_Enumerator__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__Dispose(this); }
    bool MoveNext() { return Dictionary2_ValueCollection_Enumerator__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__MoveNext(this); }
};

}}}


#endif
