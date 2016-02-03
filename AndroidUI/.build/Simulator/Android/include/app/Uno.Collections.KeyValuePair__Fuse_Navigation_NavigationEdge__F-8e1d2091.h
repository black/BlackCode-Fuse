// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__FUSE_NAVIGATION_NAVIGATION_EDGE__F_8E1D2091_H__
#define __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__FUSE_NAVIGATION_NAVIGATION_EDGE__F_8E1D2091_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Gestures { namespace Internal { struct EdgeSwiper; } } } }

namespace app {
namespace Uno {
namespace Collections {

struct KeyValuePair__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper;

struct KeyValuePair__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__uType : ::uStructType
{
};

KeyValuePair__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__uType* KeyValuePair__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__typeof();

void KeyValuePair__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper___ObjInit(KeyValuePair__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper* __this, int key, ::app::Fuse::Gestures::Internal::EdgeSwiper* value);
int KeyValuePair__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__get_Key(KeyValuePair__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper* __this);
::app::Fuse::Gestures::Internal::EdgeSwiper* KeyValuePair__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__get_Value(KeyValuePair__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper* __this);
KeyValuePair__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper KeyValuePair__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__New_1(::uStatic* __this, int key, ::app::Fuse::Gestures::Internal::EdgeSwiper* value);

struct KeyValuePair__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper
{
    int _key;
    ::uStrong< ::app::Fuse::Gestures::Internal::EdgeSwiper*> _value;

    void _ObjInit(int key, ::app::Fuse::Gestures::Internal::EdgeSwiper* value) { KeyValuePair__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper___ObjInit(this, key, value); }
    int Key() { return KeyValuePair__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__get_Key(this); }
    ::app::Fuse::Gestures::Internal::EdgeSwiper* Value() { return KeyValuePair__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__get_Value(this); }
};

}}}


#endif
