// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_KEY_COLLECTION__ANDROID_ANDROID_VIEW_844011DE_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_KEY_COLLECTION__ANDROID_ANDROID_VIEW_844011DE_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace view { struct View; } } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__Android_android_view_View__Fuse_Node; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_KeyCollection_Enumerator__Android_android_view_View__Fuse_Node; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_KeyCollection__Android_android_view_View__Fuse_Node;

struct Dictionary2_KeyCollection__Android_android_view_View__Fuse_Node__uType : ::uClassType
{
};

Dictionary2_KeyCollection__Android_android_view_View__Fuse_Node__uType* Dictionary2_KeyCollection__Android_android_view_View__Fuse_Node__typeof();

void Dictionary2_KeyCollection__Android_android_view_View__Fuse_Node___ObjInit(Dictionary2_KeyCollection__Android_android_view_View__Fuse_Node* __this, ::app::Uno::Collections::Dictionary__Android_android_view_View__Fuse_Node* source);
int Dictionary2_KeyCollection__Android_android_view_View__Fuse_Node__get_Count(Dictionary2_KeyCollection__Android_android_view_View__Fuse_Node* __this);
::app::Uno::Collections::Dictionary2_KeyCollection_Enumerator__Android_android_view_View__Fuse_Node Dictionary2_KeyCollection__Android_android_view_View__Fuse_Node__GetEnumerator(Dictionary2_KeyCollection__Android_android_view_View__Fuse_Node* __this);
Dictionary2_KeyCollection__Android_android_view_View__Fuse_Node* Dictionary2_KeyCollection__Android_android_view_View__Fuse_Node__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Android_android_view_View__Fuse_Node* source);
void Dictionary2_KeyCollection__Android_android_view_View__Fuse_Node__Uno_Collections_ICollection_Add(Dictionary2_KeyCollection__Android_android_view_View__Fuse_Node* __this, ::app::Android::android::view::View* item);
void Dictionary2_KeyCollection__Android_android_view_View__Fuse_Node__Uno_Collections_ICollection_Clear(Dictionary2_KeyCollection__Android_android_view_View__Fuse_Node* __this);
bool Dictionary2_KeyCollection__Android_android_view_View__Fuse_Node__Uno_Collections_ICollection_Contains(Dictionary2_KeyCollection__Android_android_view_View__Fuse_Node* __this, ::app::Android::android::view::View* item);
bool Dictionary2_KeyCollection__Android_android_view_View__Fuse_Node__Uno_Collections_ICollection_Remove(Dictionary2_KeyCollection__Android_android_view_View__Fuse_Node* __this, ::app::Android::android::view::View* item);

struct Dictionary2_KeyCollection__Android_android_view_View__Fuse_Node : ::uObject
{
    ::uStrong< ::app::Uno::Collections::Dictionary__Android_android_view_View__Fuse_Node*> _source;

    void _ObjInit(::app::Uno::Collections::Dictionary__Android_android_view_View__Fuse_Node* source) { Dictionary2_KeyCollection__Android_android_view_View__Fuse_Node___ObjInit(this, source); }
    int Count() { return Dictionary2_KeyCollection__Android_android_view_View__Fuse_Node__get_Count(this); }
    ::app::Uno::Collections::Dictionary2_KeyCollection_Enumerator__Android_android_view_View__Fuse_Node GetEnumerator();
};

}}}

#include <app/Uno.Collections.Dictionary2_KeyCollection_Enumerator__Android_a-209590a9.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_KeyCollection_Enumerator__Android_android_view_View__Fuse_Node Dictionary2_KeyCollection__Android_android_view_View__Fuse_Node::GetEnumerator() { return Dictionary2_KeyCollection__Android_android_view_View__Fuse_Node__GetEnumerator(this); }

}}}


#endif
