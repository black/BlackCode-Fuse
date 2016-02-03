// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION__ANDROID_ANDROID_VI_DC48AABC_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION__ANDROID_ANDROID_VI_DC48AABC_H__

#include <app/Uno.Collections.ICollection__Fuse_Node.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Node.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__Android_android_view_View__Fuse_Node; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_ValueCollection_Enumerator__Android_android_view_View__Fuse_Node; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_ValueCollection__Android_android_view_View__Fuse_Node;

struct Dictionary2_ValueCollection__Android_android_view_View__Fuse_Node__uType : ::uClassType
{
    ::app::Uno::Collections::ICollection__Fuse_Node __interface_0;
    ::app::Uno::Collections::IEnumerable__Fuse_Node __interface_1;
};

Dictionary2_ValueCollection__Android_android_view_View__Fuse_Node__uType* Dictionary2_ValueCollection__Android_android_view_View__Fuse_Node__typeof();

::uObject* Dictionary2_ValueCollection__Android_android_view_View__Fuse_Node__GetEnumerator_boxed(Dictionary2_ValueCollection__Android_android_view_View__Fuse_Node* __this);
void Dictionary2_ValueCollection__Android_android_view_View__Fuse_Node___ObjInit(Dictionary2_ValueCollection__Android_android_view_View__Fuse_Node* __this, ::app::Uno::Collections::Dictionary__Android_android_view_View__Fuse_Node* source);
int Dictionary2_ValueCollection__Android_android_view_View__Fuse_Node__get_Count(Dictionary2_ValueCollection__Android_android_view_View__Fuse_Node* __this);
::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__Android_android_view_View__Fuse_Node Dictionary2_ValueCollection__Android_android_view_View__Fuse_Node__GetEnumerator(Dictionary2_ValueCollection__Android_android_view_View__Fuse_Node* __this);
Dictionary2_ValueCollection__Android_android_view_View__Fuse_Node* Dictionary2_ValueCollection__Android_android_view_View__Fuse_Node__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Android_android_view_View__Fuse_Node* source);
void Dictionary2_ValueCollection__Android_android_view_View__Fuse_Node__Uno_Collections_ICollection_Add(Dictionary2_ValueCollection__Android_android_view_View__Fuse_Node* __this, ::app::Fuse::Node* item);
void Dictionary2_ValueCollection__Android_android_view_View__Fuse_Node__Uno_Collections_ICollection_Clear(Dictionary2_ValueCollection__Android_android_view_View__Fuse_Node* __this);
bool Dictionary2_ValueCollection__Android_android_view_View__Fuse_Node__Uno_Collections_ICollection_Contains(Dictionary2_ValueCollection__Android_android_view_View__Fuse_Node* __this, ::app::Fuse::Node* item);
bool Dictionary2_ValueCollection__Android_android_view_View__Fuse_Node__Uno_Collections_ICollection_Remove(Dictionary2_ValueCollection__Android_android_view_View__Fuse_Node* __this, ::app::Fuse::Node* item);

struct Dictionary2_ValueCollection__Android_android_view_View__Fuse_Node : ::uObject
{
    ::uStrong< ::app::Uno::Collections::Dictionary__Android_android_view_View__Fuse_Node*> _source;

    ::uObject* GetEnumerator_boxed() { return Dictionary2_ValueCollection__Android_android_view_View__Fuse_Node__GetEnumerator_boxed(this); }
    void _ObjInit(::app::Uno::Collections::Dictionary__Android_android_view_View__Fuse_Node* source) { Dictionary2_ValueCollection__Android_android_view_View__Fuse_Node___ObjInit(this, source); }
    int Count() { return Dictionary2_ValueCollection__Android_android_view_View__Fuse_Node__get_Count(this); }
    ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__Android_android_view_View__Fuse_Node GetEnumerator();
};

}}}

#include <app/Uno.Collections.Dictionary2_ValueCollection_Enumerator__Android-57eb61fb.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__Android_android_view_View__Fuse_Node Dictionary2_ValueCollection__Android_android_view_View__Fuse_Node::GetEnumerator() { return Dictionary2_ValueCollection__Android_android_view_View__Fuse_Node__GetEnumerator(this); }

}}}


#endif
