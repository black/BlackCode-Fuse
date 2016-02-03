// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_ENUMERATOR__FUSE_NAVIGATION_NAVIGAT_8D3F4BEE_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_ENUMERATOR__FUSE_NAVIGATION_NAVIGAT_8D3F4BEE_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Uno_Collections_KeyValuePair_Fuse_-b295d630.h>
#include <app/Uno.Collections.KeyValuePair__Fuse_Navigation_NavigationEdge__F-8e1d2091.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper;

struct Dictionary2_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Uno_Collections_KeyValuePair_Fuse_Navigation_NavigationEdge_Fuse_Gestures_Internal_EdgeSwiper_ __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

Dictionary2_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__uType* Dictionary2_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__typeof();

void Dictionary2_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper___ObjInit(Dictionary2_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper* __this, ::app::Uno::Collections::Dictionary__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper* source);
void Dictionary2_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__Dispose(Dictionary2_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper* __this);
::app::Uno::Collections::KeyValuePair__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper Dictionary2_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__get_Current(Dictionary2_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper* __this);
bool Dictionary2_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__MoveNext(Dictionary2_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper* __this);
Dictionary2_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper Dictionary2_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper* source);
void Dictionary2_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__Uno_Collections_IEnumerator_Reset(Dictionary2_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper* __this);

struct Dictionary2_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper
{
    ::uStrong< ::app::Uno::Collections::Dictionary__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper*> _source;
    ::app::Uno::Collections::KeyValuePair__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper _current;
    int _iterator;
    int _version;

    void _ObjInit(::app::Uno::Collections::Dictionary__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper* source) { Dictionary2_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper___ObjInit(this, source); }
    void Dispose() { Dictionary2_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__Dispose(this); }
    ::app::Uno::Collections::KeyValuePair__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper Current() { return Dictionary2_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__get_Current(this); }
    bool MoveNext() { return Dictionary2_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__MoveNext(this); }
};

}}}


#endif
