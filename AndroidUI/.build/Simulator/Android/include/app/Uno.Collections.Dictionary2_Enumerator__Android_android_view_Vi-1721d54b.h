// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_ENUMERATOR__ANDROID_ANDROID_VIEW_VI_1721D54B_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_ENUMERATOR__ANDROID_ANDROID_VIEW_VI_1721D54B_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Uno_Collections_KeyValuePair_Andro-4cc6590c.h>
#include <app/Uno.Collections.KeyValuePair__Android_android_view_View__Fuse_Node.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__Android_android_view_View__Fuse_Node; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_Enumerator__Android_android_view_View__Fuse_Node;

struct Dictionary2_Enumerator__Android_android_view_View__Fuse_Node__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Uno_Collections_KeyValuePair_Android_android_view_View_Fuse_Node_ __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

Dictionary2_Enumerator__Android_android_view_View__Fuse_Node__uType* Dictionary2_Enumerator__Android_android_view_View__Fuse_Node__typeof();

void Dictionary2_Enumerator__Android_android_view_View__Fuse_Node___ObjInit(Dictionary2_Enumerator__Android_android_view_View__Fuse_Node* __this, ::app::Uno::Collections::Dictionary__Android_android_view_View__Fuse_Node* source);
void Dictionary2_Enumerator__Android_android_view_View__Fuse_Node__Dispose(Dictionary2_Enumerator__Android_android_view_View__Fuse_Node* __this);
::app::Uno::Collections::KeyValuePair__Android_android_view_View__Fuse_Node Dictionary2_Enumerator__Android_android_view_View__Fuse_Node__get_Current(Dictionary2_Enumerator__Android_android_view_View__Fuse_Node* __this);
bool Dictionary2_Enumerator__Android_android_view_View__Fuse_Node__MoveNext(Dictionary2_Enumerator__Android_android_view_View__Fuse_Node* __this);
Dictionary2_Enumerator__Android_android_view_View__Fuse_Node Dictionary2_Enumerator__Android_android_view_View__Fuse_Node__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Android_android_view_View__Fuse_Node* source);
void Dictionary2_Enumerator__Android_android_view_View__Fuse_Node__Uno_Collections_IEnumerator_Reset(Dictionary2_Enumerator__Android_android_view_View__Fuse_Node* __this);

struct Dictionary2_Enumerator__Android_android_view_View__Fuse_Node
{
    ::uStrong< ::app::Uno::Collections::Dictionary__Android_android_view_View__Fuse_Node*> _source;
    ::app::Uno::Collections::KeyValuePair__Android_android_view_View__Fuse_Node _current;
    int _iterator;
    int _version;

    void _ObjInit(::app::Uno::Collections::Dictionary__Android_android_view_View__Fuse_Node* source) { Dictionary2_Enumerator__Android_android_view_View__Fuse_Node___ObjInit(this, source); }
    void Dispose() { Dictionary2_Enumerator__Android_android_view_View__Fuse_Node__Dispose(this); }
    ::app::Uno::Collections::KeyValuePair__Android_android_view_View__Fuse_Node Current() { return Dictionary2_Enumerator__Android_android_view_View__Fuse_Node__get_Current(this); }
    bool MoveNext() { return Dictionary2_Enumerator__Android_android_view_View__Fuse_Node__MoveNext(this); }
};

}}}


#endif
