// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_KEY_COLLECTION__HASHABLE_WEAK_REFERENCE__STRING_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_KEY_COLLECTION__HASHABLE_WEAK_REFERENCE__STRING_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__HashableWeakReference__string; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_KeyCollection_Enumerator__HashableWeakReference__string; } } }
namespace app { struct HashableWeakReference; }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_KeyCollection__HashableWeakReference__string;

struct Dictionary2_KeyCollection__HashableWeakReference__string__uType : ::uClassType
{
};

Dictionary2_KeyCollection__HashableWeakReference__string__uType* Dictionary2_KeyCollection__HashableWeakReference__string__typeof();

void Dictionary2_KeyCollection__HashableWeakReference__string___ObjInit(Dictionary2_KeyCollection__HashableWeakReference__string* __this, ::app::Uno::Collections::Dictionary__HashableWeakReference__string* source);
int Dictionary2_KeyCollection__HashableWeakReference__string__get_Count(Dictionary2_KeyCollection__HashableWeakReference__string* __this);
::app::Uno::Collections::Dictionary2_KeyCollection_Enumerator__HashableWeakReference__string Dictionary2_KeyCollection__HashableWeakReference__string__GetEnumerator(Dictionary2_KeyCollection__HashableWeakReference__string* __this);
Dictionary2_KeyCollection__HashableWeakReference__string* Dictionary2_KeyCollection__HashableWeakReference__string__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__HashableWeakReference__string* source);
void Dictionary2_KeyCollection__HashableWeakReference__string__Uno_Collections_ICollection_Add(Dictionary2_KeyCollection__HashableWeakReference__string* __this, ::app::HashableWeakReference* item);
void Dictionary2_KeyCollection__HashableWeakReference__string__Uno_Collections_ICollection_Clear(Dictionary2_KeyCollection__HashableWeakReference__string* __this);
bool Dictionary2_KeyCollection__HashableWeakReference__string__Uno_Collections_ICollection_Contains(Dictionary2_KeyCollection__HashableWeakReference__string* __this, ::app::HashableWeakReference* item);
bool Dictionary2_KeyCollection__HashableWeakReference__string__Uno_Collections_ICollection_Remove(Dictionary2_KeyCollection__HashableWeakReference__string* __this, ::app::HashableWeakReference* item);

struct Dictionary2_KeyCollection__HashableWeakReference__string : ::uObject
{
    ::uStrong< ::app::Uno::Collections::Dictionary__HashableWeakReference__string*> _source;

    void _ObjInit(::app::Uno::Collections::Dictionary__HashableWeakReference__string* source) { Dictionary2_KeyCollection__HashableWeakReference__string___ObjInit(this, source); }
    int Count() { return Dictionary2_KeyCollection__HashableWeakReference__string__get_Count(this); }
    ::app::Uno::Collections::Dictionary2_KeyCollection_Enumerator__HashableWeakReference__string GetEnumerator();
};

}}}

#include <app/Uno.Collections.Dictionary2_KeyCollection_Enumerator__HashableW-50ccb64f.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_KeyCollection_Enumerator__HashableWeakReference__string Dictionary2_KeyCollection__HashableWeakReference__string::GetEnumerator() { return Dictionary2_KeyCollection__HashableWeakReference__string__GetEnumerator(this); }

}}}


#endif
