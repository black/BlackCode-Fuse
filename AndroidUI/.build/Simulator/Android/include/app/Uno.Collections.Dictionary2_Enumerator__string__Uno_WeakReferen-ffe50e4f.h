// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_ENUMERATOR__STRING__UNO_WEAK_REFEREN_FFE50E4F_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_ENUMERATOR__STRING__UNO_WEAK_REFEREN_FFE50E4F_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Uno_Collections_KeyValuePair_strin-e39dfac.h>
#include <app/Uno.Collections.KeyValuePair__string__Uno_WeakReference_Fuse_Re-e9892c74.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_Enumerator__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_;

struct Dictionary2_Enumerator__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Uno_Collections_KeyValuePair_string_Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl__ __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

Dictionary2_Enumerator__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___uType* Dictionary2_Enumerator__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___typeof();

void Dictionary2_Enumerator__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl____ObjInit(Dictionary2_Enumerator__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_* __this, ::app::Uno::Collections::Dictionary__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_* source);
void Dictionary2_Enumerator__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___Dispose(Dictionary2_Enumerator__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_* __this);
::app::Uno::Collections::KeyValuePair__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_ Dictionary2_Enumerator__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___get_Current(Dictionary2_Enumerator__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_* __this);
bool Dictionary2_Enumerator__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___MoveNext(Dictionary2_Enumerator__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_* __this);
Dictionary2_Enumerator__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_ Dictionary2_Enumerator__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_* source);
void Dictionary2_Enumerator__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___Uno_Collections_IEnumerator_Reset(Dictionary2_Enumerator__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_* __this);

struct Dictionary2_Enumerator__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_
{
    ::uStrong< ::app::Uno::Collections::Dictionary__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_*> _source;
    ::app::Uno::Collections::KeyValuePair__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_ _current;
    int _iterator;
    int _version;

    void _ObjInit(::app::Uno::Collections::Dictionary__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_* source) { Dictionary2_Enumerator__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl____ObjInit(this, source); }
    void Dispose() { Dictionary2_Enumerator__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___Dispose(this); }
    ::app::Uno::Collections::KeyValuePair__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_ Current() { return Dictionary2_Enumerator__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___get_Current(this); }
    bool MoveNext() { return Dictionary2_Enumerator__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___MoveNext(this); }
};

}}}


#endif
