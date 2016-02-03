// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__FUSE_FONT__FUSE_CONTROLS_INTERNAL_D_402F9C04_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__FUSE_FONT__FUSE_CONTROLS_INTERNAL_D_402F9C04_H__

#include <app/Uno.Collections.Dictionary2_Bucket__Fuse_Font__Fuse_Controls_In-49601d7d.h>
#include <app/Uno.Collections.IDictionary__Fuse_Font__Fuse_Controls_Internal_-7bf742fc.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_Fuse_-d2ddf1a9.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { namespace Internal { struct DefaultTextRenderer; } } } }
namespace app { namespace Fuse { struct Font; } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Enumerator__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_KeyCollection__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_ValueCollection__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer; } } }
namespace app { namespace Uno { namespace Collections { struct KeyValuePair__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer;

struct Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__uType : ::uClassType
{
    ::app::Uno::Collections::IDictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer __interface_0;
    ::app::Uno::Collections::IEnumerable__Uno_Collections_KeyValuePair_Fuse_Font_Fuse_Controls_Internal_DefaultTextRenderer_ __interface_1;
};

Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__uType* Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__typeof();

::uObject* Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__GetEnumerator_boxed(Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer* __this);
void Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer___ObjInit(Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer* __this);
void Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer___ObjInit_1(Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer* __this, ::uObject* dictionary);
void Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__Add(Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer* __this, ::app::Fuse::Font* key, ::app::Fuse::Controls::Internal::DefaultTextRenderer* value);
void Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__Clear(Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer* __this);
bool Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__ContainsKey(Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer* __this, ::app::Fuse::Font* key);
int Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__get_Count(Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer* __this);
::app::Fuse::Controls::Internal::DefaultTextRenderer* Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__get_Item(Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer* __this, ::app::Fuse::Font* key);
::app::Uno::Collections::Dictionary2_KeyCollection__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer* Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__get_Keys(Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer* __this);
::app::Uno::Collections::Dictionary2_ValueCollection__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer* Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__get_Values(Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer* __this);
::app::Uno::Collections::Dictionary2_Enumerator__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__GetEnumerator(Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer* __this);
Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer* Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__New_1(::uStatic* __this);
Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer* Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__New_2(::uStatic* __this, ::uObject* dictionary);
void Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__Rehash(Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer* __this);
bool Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__Remove(Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer* __this, ::app::Fuse::Font* key);
void Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__set_Item(Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer* __this, ::app::Fuse::Font* key, ::app::Fuse::Controls::Internal::DefaultTextRenderer* value);
bool Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__TryGetValue(Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer* __this, ::app::Fuse::Font* key, ::app::Fuse::Controls::Internal::DefaultTextRenderer** value);
void Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__Uno_Collections_ICollection_Add(Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer* __this, ::app::Uno::Collections::KeyValuePair__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer item);
bool Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__Uno_Collections_ICollection_Contains(Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer* __this, ::app::Uno::Collections::KeyValuePair__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer item);
bool Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__Uno_Collections_ICollection_Remove(Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer* __this, ::app::Uno::Collections::KeyValuePair__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer item);

struct Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;
    int _version;

    ::uObject* GetEnumerator_boxed() { return Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__GetEnumerator_boxed(this); }
    void _ObjInit() { Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer___ObjInit(this); }
    void _ObjInit_1(::uObject* dictionary) { Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer___ObjInit_1(this, dictionary); }
    void Add(::app::Fuse::Font* key, ::app::Fuse::Controls::Internal::DefaultTextRenderer* value) { Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__Add(this, key, value); }
    void Clear() { Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__Clear(this); }
    bool ContainsKey(::app::Fuse::Font* key) { return Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__ContainsKey(this, key); }
    int Count() { return Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__get_Count(this); }
    ::app::Fuse::Controls::Internal::DefaultTextRenderer* Item(::app::Fuse::Font* key) { return Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__get_Item(this, key); }
    ::app::Uno::Collections::Dictionary2_KeyCollection__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer* Keys() { return Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__get_Keys(this); }
    ::app::Uno::Collections::Dictionary2_ValueCollection__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer* Values() { return Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__get_Values(this); }
    ::app::Uno::Collections::Dictionary2_Enumerator__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer GetEnumerator();
    void Rehash() { Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__Rehash(this); }
    bool Remove(::app::Fuse::Font* key) { return Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__Remove(this, key); }
    void Item(::app::Fuse::Font* key, ::app::Fuse::Controls::Internal::DefaultTextRenderer* value) { Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__set_Item(this, key, value); }
    bool TryGetValue(::app::Fuse::Font* key, ::app::Fuse::Controls::Internal::DefaultTextRenderer** value) { return Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__TryGetValue(this, key, value); }
};

}}}

#include <app/Uno.Collections.Dictionary2_Enumerator__Fuse_Font__Fuse_Control-90dc7dfb.h>
#include <app/Uno.Collections.KeyValuePair__Fuse_Font__Fuse_Controls_Internal-6652b2a4.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_Enumerator__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer::GetEnumerator() { return Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__GetEnumerator(this); }

}}}


#endif
