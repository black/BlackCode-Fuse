// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_KEY_COLLECTION_ENUMERATOR__ANDROID_A_209590A9_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_KEY_COLLECTION_ENUMERATOR__ANDROID_A_209590A9_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace view { struct View; } } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__Android_android_view_View__Fuse_Node; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_KeyCollection_Enumerator__Android_android_view_View__Fuse_Node;

struct Dictionary2_KeyCollection_Enumerator__Android_android_view_View__Fuse_Node__uType : ::uStructType
{
    ::app::Uno::IDisposable __interface_0;
    ::app::Uno::Collections::IEnumerator __interface_1;
};

Dictionary2_KeyCollection_Enumerator__Android_android_view_View__Fuse_Node__uType* Dictionary2_KeyCollection_Enumerator__Android_android_view_View__Fuse_Node__typeof();

void Dictionary2_KeyCollection_Enumerator__Android_android_view_View__Fuse_Node___ObjInit(Dictionary2_KeyCollection_Enumerator__Android_android_view_View__Fuse_Node* __this, ::app::Uno::Collections::Dictionary__Android_android_view_View__Fuse_Node* source);
void Dictionary2_KeyCollection_Enumerator__Android_android_view_View__Fuse_Node__Dispose(Dictionary2_KeyCollection_Enumerator__Android_android_view_View__Fuse_Node* __this);
bool Dictionary2_KeyCollection_Enumerator__Android_android_view_View__Fuse_Node__MoveNext(Dictionary2_KeyCollection_Enumerator__Android_android_view_View__Fuse_Node* __this);
Dictionary2_KeyCollection_Enumerator__Android_android_view_View__Fuse_Node Dictionary2_KeyCollection_Enumerator__Android_android_view_View__Fuse_Node__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Android_android_view_View__Fuse_Node* source);
void Dictionary2_KeyCollection_Enumerator__Android_android_view_View__Fuse_Node__Uno_Collections_IEnumerator_Reset(Dictionary2_KeyCollection_Enumerator__Android_android_view_View__Fuse_Node* __this);

struct Dictionary2_KeyCollection_Enumerator__Android_android_view_View__Fuse_Node
{
    ::uStrong< ::app::Uno::Collections::Dictionary__Android_android_view_View__Fuse_Node*> _source;
    ::uStrong< ::app::Android::android::view::View*> _current;
    int _iterator;
    int _version;

    void _ObjInit(::app::Uno::Collections::Dictionary__Android_android_view_View__Fuse_Node* source) { Dictionary2_KeyCollection_Enumerator__Android_android_view_View__Fuse_Node___ObjInit(this, source); }
    void Dispose() { Dictionary2_KeyCollection_Enumerator__Android_android_view_View__Fuse_Node__Dispose(this); }
    bool MoveNext() { return Dictionary2_KeyCollection_Enumerator__Android_android_view_View__Fuse_Node__MoveNext(this); }
};

}}}


#endif
