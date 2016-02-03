// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION_ENUMERATOR__FUSE_NA_1B16E10E_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION_ENUMERATOR__FUSE_NA_1B16E10E_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Gestures { namespace Internal { struct EdgeSwiper; } } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_ValueCollection_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper;

struct Dictionary2_ValueCollection_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__uType : ::uStructType
{
    ::app::Uno::IDisposable __interface_0;
    ::app::Uno::Collections::IEnumerator __interface_1;
};

Dictionary2_ValueCollection_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__uType* Dictionary2_ValueCollection_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__typeof();

void Dictionary2_ValueCollection_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper___ObjInit(Dictionary2_ValueCollection_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper* __this, ::app::Uno::Collections::Dictionary__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper* source);
void Dictionary2_ValueCollection_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__Dispose(Dictionary2_ValueCollection_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper* __this);
bool Dictionary2_ValueCollection_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__MoveNext(Dictionary2_ValueCollection_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper* __this);
Dictionary2_ValueCollection_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper Dictionary2_ValueCollection_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper* source);
void Dictionary2_ValueCollection_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__Uno_Collections_IEnumerator_Reset(Dictionary2_ValueCollection_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper* __this);

struct Dictionary2_ValueCollection_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper
{
    ::uStrong< ::app::Uno::Collections::Dictionary__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper*> _source;
    ::uStrong< ::app::Fuse::Gestures::Internal::EdgeSwiper*> _current;
    int _iterator;
    int _version;

    void _ObjInit(::app::Uno::Collections::Dictionary__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper* source) { Dictionary2_ValueCollection_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper___ObjInit(this, source); }
    void Dispose() { Dictionary2_ValueCollection_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__Dispose(this); }
    bool MoveNext() { return Dictionary2_ValueCollection_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__MoveNext(this); }
};

}}}


#endif
