// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__ANDROID_ANDROID_VIEW_VIEW__FUSE_NODE_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__ANDROID_ANDROID_VIEW_VIEW__FUSE_NODE_H__

#include <app/Uno.Collections.Dictionary2_Bucket__Android_android_view_View__Fuse_Node.h>
#include <app/Uno.Collections.IDictionary__Android_android_view_View__Fuse_Node.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_Andro-7924d043.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace view { struct View; } } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Enumerator__Android_android_view_View__Fuse_Node; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_KeyCollection__Android_android_view_View__Fuse_Node; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_ValueCollection__Android_android_view_View__Fuse_Node; } } }
namespace app { namespace Uno { namespace Collections { struct KeyValuePair__Android_android_view_View__Fuse_Node; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__Android_android_view_View__Fuse_Node;

struct Dictionary__Android_android_view_View__Fuse_Node__uType : ::uClassType
{
    ::app::Uno::Collections::IDictionary__Android_android_view_View__Fuse_Node __interface_0;
    ::app::Uno::Collections::IEnumerable__Uno_Collections_KeyValuePair_Android_android_view_View_Fuse_Node_ __interface_1;
};

Dictionary__Android_android_view_View__Fuse_Node__uType* Dictionary__Android_android_view_View__Fuse_Node__typeof();

::uObject* Dictionary__Android_android_view_View__Fuse_Node__GetEnumerator_boxed(Dictionary__Android_android_view_View__Fuse_Node* __this);
void Dictionary__Android_android_view_View__Fuse_Node___ObjInit(Dictionary__Android_android_view_View__Fuse_Node* __this);
void Dictionary__Android_android_view_View__Fuse_Node___ObjInit_1(Dictionary__Android_android_view_View__Fuse_Node* __this, ::uObject* dictionary);
void Dictionary__Android_android_view_View__Fuse_Node__Add(Dictionary__Android_android_view_View__Fuse_Node* __this, ::app::Android::android::view::View* key, ::app::Fuse::Node* value);
void Dictionary__Android_android_view_View__Fuse_Node__Clear(Dictionary__Android_android_view_View__Fuse_Node* __this);
bool Dictionary__Android_android_view_View__Fuse_Node__ContainsKey(Dictionary__Android_android_view_View__Fuse_Node* __this, ::app::Android::android::view::View* key);
int Dictionary__Android_android_view_View__Fuse_Node__get_Count(Dictionary__Android_android_view_View__Fuse_Node* __this);
::app::Fuse::Node* Dictionary__Android_android_view_View__Fuse_Node__get_Item(Dictionary__Android_android_view_View__Fuse_Node* __this, ::app::Android::android::view::View* key);
::app::Uno::Collections::Dictionary2_KeyCollection__Android_android_view_View__Fuse_Node* Dictionary__Android_android_view_View__Fuse_Node__get_Keys(Dictionary__Android_android_view_View__Fuse_Node* __this);
::app::Uno::Collections::Dictionary2_ValueCollection__Android_android_view_View__Fuse_Node* Dictionary__Android_android_view_View__Fuse_Node__get_Values(Dictionary__Android_android_view_View__Fuse_Node* __this);
::app::Uno::Collections::Dictionary2_Enumerator__Android_android_view_View__Fuse_Node Dictionary__Android_android_view_View__Fuse_Node__GetEnumerator(Dictionary__Android_android_view_View__Fuse_Node* __this);
Dictionary__Android_android_view_View__Fuse_Node* Dictionary__Android_android_view_View__Fuse_Node__New_1(::uStatic* __this);
Dictionary__Android_android_view_View__Fuse_Node* Dictionary__Android_android_view_View__Fuse_Node__New_2(::uStatic* __this, ::uObject* dictionary);
void Dictionary__Android_android_view_View__Fuse_Node__Rehash(Dictionary__Android_android_view_View__Fuse_Node* __this);
bool Dictionary__Android_android_view_View__Fuse_Node__Remove(Dictionary__Android_android_view_View__Fuse_Node* __this, ::app::Android::android::view::View* key);
void Dictionary__Android_android_view_View__Fuse_Node__set_Item(Dictionary__Android_android_view_View__Fuse_Node* __this, ::app::Android::android::view::View* key, ::app::Fuse::Node* value);
bool Dictionary__Android_android_view_View__Fuse_Node__TryGetValue(Dictionary__Android_android_view_View__Fuse_Node* __this, ::app::Android::android::view::View* key, ::app::Fuse::Node** value);
void Dictionary__Android_android_view_View__Fuse_Node__Uno_Collections_ICollection_Add(Dictionary__Android_android_view_View__Fuse_Node* __this, ::app::Uno::Collections::KeyValuePair__Android_android_view_View__Fuse_Node item);
bool Dictionary__Android_android_view_View__Fuse_Node__Uno_Collections_ICollection_Contains(Dictionary__Android_android_view_View__Fuse_Node* __this, ::app::Uno::Collections::KeyValuePair__Android_android_view_View__Fuse_Node item);
bool Dictionary__Android_android_view_View__Fuse_Node__Uno_Collections_ICollection_Remove(Dictionary__Android_android_view_View__Fuse_Node* __this, ::app::Uno::Collections::KeyValuePair__Android_android_view_View__Fuse_Node item);

struct Dictionary__Android_android_view_View__Fuse_Node : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;
    int _version;

    ::uObject* GetEnumerator_boxed() { return Dictionary__Android_android_view_View__Fuse_Node__GetEnumerator_boxed(this); }
    void _ObjInit() { Dictionary__Android_android_view_View__Fuse_Node___ObjInit(this); }
    void _ObjInit_1(::uObject* dictionary) { Dictionary__Android_android_view_View__Fuse_Node___ObjInit_1(this, dictionary); }
    void Add(::app::Android::android::view::View* key, ::app::Fuse::Node* value) { Dictionary__Android_android_view_View__Fuse_Node__Add(this, key, value); }
    void Clear() { Dictionary__Android_android_view_View__Fuse_Node__Clear(this); }
    bool ContainsKey(::app::Android::android::view::View* key) { return Dictionary__Android_android_view_View__Fuse_Node__ContainsKey(this, key); }
    int Count() { return Dictionary__Android_android_view_View__Fuse_Node__get_Count(this); }
    ::app::Fuse::Node* Item(::app::Android::android::view::View* key) { return Dictionary__Android_android_view_View__Fuse_Node__get_Item(this, key); }
    ::app::Uno::Collections::Dictionary2_KeyCollection__Android_android_view_View__Fuse_Node* Keys() { return Dictionary__Android_android_view_View__Fuse_Node__get_Keys(this); }
    ::app::Uno::Collections::Dictionary2_ValueCollection__Android_android_view_View__Fuse_Node* Values() { return Dictionary__Android_android_view_View__Fuse_Node__get_Values(this); }
    ::app::Uno::Collections::Dictionary2_Enumerator__Android_android_view_View__Fuse_Node GetEnumerator();
    void Rehash() { Dictionary__Android_android_view_View__Fuse_Node__Rehash(this); }
    bool Remove(::app::Android::android::view::View* key) { return Dictionary__Android_android_view_View__Fuse_Node__Remove(this, key); }
    void Item(::app::Android::android::view::View* key, ::app::Fuse::Node* value) { Dictionary__Android_android_view_View__Fuse_Node__set_Item(this, key, value); }
    bool TryGetValue(::app::Android::android::view::View* key, ::app::Fuse::Node** value) { return Dictionary__Android_android_view_View__Fuse_Node__TryGetValue(this, key, value); }
};

}}}

#include <app/Uno.Collections.Dictionary2_Enumerator__Android_android_view_Vi-1721d54b.h>
#include <app/Uno.Collections.KeyValuePair__Android_android_view_View__Fuse_Node.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_Enumerator__Android_android_view_View__Fuse_Node Dictionary__Android_android_view_View__Fuse_Node::GetEnumerator() { return Dictionary__Android_android_view_View__Fuse_Node__GetEnumerator(this); }

}}}


#endif
