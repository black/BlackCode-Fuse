// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_BUCKET__ANDROID_ANDROID_VIEW_VIEW__FUSE_NODE_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_BUCKET__ANDROID_ANDROID_VIEW_VIEW__FUSE_NODE_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace view { struct View; } } } }
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_Bucket__Android_android_view_View__Fuse_Node;

struct Dictionary2_Bucket__Android_android_view_View__Fuse_Node__uType : ::uStructType
{
};

Dictionary2_Bucket__Android_android_view_View__Fuse_Node__uType* Dictionary2_Bucket__Android_android_view_View__Fuse_Node__typeof();

struct Dictionary2_Bucket__Android_android_view_View__Fuse_Node
{
    ::uStrong< ::app::Android::android::view::View*> Key;
    ::uStrong< ::app::Fuse::Node*> Value;
    int State;
};

}}}


#endif
