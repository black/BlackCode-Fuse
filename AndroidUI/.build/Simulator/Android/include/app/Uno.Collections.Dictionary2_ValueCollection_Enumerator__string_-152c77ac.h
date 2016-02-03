// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION_ENUMERATOR__STRING__152C77AC_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION_ENUMERATOR__STRING__152C77AC_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_; } } }
namespace app { namespace Uno { struct WeakReference__Fuse_Resources_HttpImageSourceImpl; } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_ValueCollection_Enumerator__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_;

struct Dictionary2_ValueCollection_Enumerator__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___uType : ::uStructType
{
    ::app::Uno::IDisposable __interface_0;
    ::app::Uno::Collections::IEnumerator __interface_1;
};

Dictionary2_ValueCollection_Enumerator__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___uType* Dictionary2_ValueCollection_Enumerator__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___typeof();

void Dictionary2_ValueCollection_Enumerator__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl____ObjInit(Dictionary2_ValueCollection_Enumerator__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_* __this, ::app::Uno::Collections::Dictionary__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_* source);
void Dictionary2_ValueCollection_Enumerator__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___Dispose(Dictionary2_ValueCollection_Enumerator__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_* __this);
bool Dictionary2_ValueCollection_Enumerator__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___MoveNext(Dictionary2_ValueCollection_Enumerator__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_* __this);
Dictionary2_ValueCollection_Enumerator__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_ Dictionary2_ValueCollection_Enumerator__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_* source);
void Dictionary2_ValueCollection_Enumerator__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___Uno_Collections_IEnumerator_Reset(Dictionary2_ValueCollection_Enumerator__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_* __this);

struct Dictionary2_ValueCollection_Enumerator__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_
{
    ::uStrong< ::app::Uno::Collections::Dictionary__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_*> _source;
    ::uStrong< ::app::Uno::WeakReference__Fuse_Resources_HttpImageSourceImpl*> _current;
    int _iterator;
    int _version;

    void _ObjInit(::app::Uno::Collections::Dictionary__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_* source) { Dictionary2_ValueCollection_Enumerator__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl____ObjInit(this, source); }
    void Dispose() { Dictionary2_ValueCollection_Enumerator__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___Dispose(this); }
    bool MoveNext() { return Dictionary2_ValueCollection_Enumerator__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___MoveNext(this); }
};

}}}


#endif
