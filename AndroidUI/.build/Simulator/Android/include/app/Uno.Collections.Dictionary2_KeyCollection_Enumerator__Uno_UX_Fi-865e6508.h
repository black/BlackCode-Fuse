// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_KEY_COLLECTION_ENUMERATOR__UNO_U_X_FI_865E6508_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_KEY_COLLECTION_ENUMERATOR__UNO_U_X_FI_865E6508_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Uno_UX_FileSource.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_; } } }
namespace app { namespace Uno { namespace UX { struct FileSource; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_;

struct Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Uno_UX_FileSource __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___uType* Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___typeof();

void Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl____ObjInit(Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_* __this, ::app::Uno::Collections::Dictionary__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_* source);
void Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___Dispose(Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_* __this);
::app::Uno::UX::FileSource* Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___get_Current(Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_* __this);
bool Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___MoveNext(Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_* __this);
Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_ Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_* source);
void Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___Uno_Collections_IEnumerator_Reset(Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_* __this);

struct Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_
{
    ::uStrong< ::app::Uno::Collections::Dictionary__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_*> _source;
    ::uStrong< ::app::Uno::UX::FileSource*> _current;
    int _iterator;
    int _version;

    void _ObjInit(::app::Uno::Collections::Dictionary__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_* source) { Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl____ObjInit(this, source); }
    void Dispose() { Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___Dispose(this); }
    ::app::Uno::UX::FileSource* Current() { return Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___get_Current(this); }
    bool MoveNext() { return Dictionary2_KeyCollection_Enumerator__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___MoveNext(this); }
};

}}}


#endif
