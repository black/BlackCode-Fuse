// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__ANDROID_ANDROID_VIEW_VIEW__FUSE_NODE_H__
#define __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__ANDROID_ANDROID_VIEW_VIEW__FUSE_NODE_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace view { struct View; } } } }
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Uno {
namespace Collections {

struct KeyValuePair__Android_android_view_View__Fuse_Node;

struct KeyValuePair__Android_android_view_View__Fuse_Node__uType : ::uStructType
{
};

KeyValuePair__Android_android_view_View__Fuse_Node__uType* KeyValuePair__Android_android_view_View__Fuse_Node__typeof();

void KeyValuePair__Android_android_view_View__Fuse_Node___ObjInit(KeyValuePair__Android_android_view_View__Fuse_Node* __this, ::app::Android::android::view::View* key, ::app::Fuse::Node* value);
::app::Android::android::view::View* KeyValuePair__Android_android_view_View__Fuse_Node__get_Key(KeyValuePair__Android_android_view_View__Fuse_Node* __this);
::app::Fuse::Node* KeyValuePair__Android_android_view_View__Fuse_Node__get_Value(KeyValuePair__Android_android_view_View__Fuse_Node* __this);
KeyValuePair__Android_android_view_View__Fuse_Node KeyValuePair__Android_android_view_View__Fuse_Node__New_1(::uStatic* __this, ::app::Android::android::view::View* key, ::app::Fuse::Node* value);

struct KeyValuePair__Android_android_view_View__Fuse_Node
{
    ::uStrong< ::app::Android::android::view::View*> _key;
    ::uStrong< ::app::Fuse::Node*> _value;

    void _ObjInit(::app::Android::android::view::View* key, ::app::Fuse::Node* value) { KeyValuePair__Android_android_view_View__Fuse_Node___ObjInit(this, key, value); }
    ::app::Android::android::view::View* Key() { return KeyValuePair__Android_android_view_View__Fuse_Node__get_Key(this); }
    ::app::Fuse::Node* Value() { return KeyValuePair__Android_android_view_View__Fuse_Node__get_Value(this); }
};

}}}


#endif
