// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_HASH_SET__STRING_H__
#define __APP_UNO_COLLECTIONS_HASH_SET__STRING_H__

#include <app/Uno.Collections.IEnumerable__string.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__string__bool; } } }
namespace app { namespace Uno { namespace Collections { struct HashSet1_Enumerator__string; } } }

namespace app {
namespace Uno {
namespace Collections {

struct HashSet__string;

struct HashSet__string__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__string __interface_0;
};

HashSet__string__uType* HashSet__string__typeof();

::uObject* HashSet__string__GetEnumerator_boxed(HashSet__string* __this);
void HashSet__string___ObjInit(HashSet__string* __this);
void HashSet__string___ObjInit_1(HashSet__string* __this, ::uObject* items);
bool HashSet__string__Add(HashSet__string* __this, ::uString* item);
void HashSet__string__Clear(HashSet__string* __this);
bool HashSet__string__Contains(HashSet__string* __this, ::uString* item);
int HashSet__string__get_Count(HashSet__string* __this);
::app::Uno::Collections::HashSet1_Enumerator__string HashSet__string__GetEnumerator(HashSet__string* __this);
HashSet__string* HashSet__string__New_1(::uStatic* __this);
HashSet__string* HashSet__string__New_2(::uStatic* __this, ::uObject* items);
bool HashSet__string__Remove(HashSet__string* __this, ::uString* item);
bool HashSet__string__SetEquals(HashSet__string* __this, ::uObject* that);

struct HashSet__string : ::uObject
{
    ::uStrong< ::app::Uno::Collections::Dictionary__string__bool*> _map;

    ::uObject* GetEnumerator_boxed() { return HashSet__string__GetEnumerator_boxed(this); }
    void _ObjInit() { HashSet__string___ObjInit(this); }
    void _ObjInit_1(::uObject* items) { HashSet__string___ObjInit_1(this, items); }
    bool Add(::uString* item) { return HashSet__string__Add(this, item); }
    void Clear() { HashSet__string__Clear(this); }
    bool Contains(::uString* item) { return HashSet__string__Contains(this, item); }
    int Count() { return HashSet__string__get_Count(this); }
    ::app::Uno::Collections::HashSet1_Enumerator__string GetEnumerator();
    bool Remove(::uString* item) { return HashSet__string__Remove(this, item); }
    bool SetEquals(::uObject* that) { return HashSet__string__SetEquals(this, that); }
};

}}}

#include <app/Uno.Collections.HashSet1_Enumerator__string.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::HashSet1_Enumerator__string HashSet__string::GetEnumerator() { return HashSet__string__GetEnumerator(this); }

}}}


#endif
