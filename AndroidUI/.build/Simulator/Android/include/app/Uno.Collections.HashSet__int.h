// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_HASH_SET__INT_H__
#define __APP_UNO_COLLECTIONS_HASH_SET__INT_H__

#include <app/Uno.Collections.IEnumerable__int.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__int__bool; } } }
namespace app { namespace Uno { namespace Collections { struct HashSet1_Enumerator__int; } } }

namespace app {
namespace Uno {
namespace Collections {

struct HashSet__int;

struct HashSet__int__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__int __interface_0;
};

HashSet__int__uType* HashSet__int__typeof();

::uObject* HashSet__int__GetEnumerator_boxed(HashSet__int* __this);
void HashSet__int___ObjInit(HashSet__int* __this);
void HashSet__int___ObjInit_1(HashSet__int* __this, ::uObject* items);
bool HashSet__int__Add(HashSet__int* __this, int item);
void HashSet__int__Clear(HashSet__int* __this);
bool HashSet__int__Contains(HashSet__int* __this, int item);
int HashSet__int__get_Count(HashSet__int* __this);
::app::Uno::Collections::HashSet1_Enumerator__int HashSet__int__GetEnumerator(HashSet__int* __this);
HashSet__int* HashSet__int__New_1(::uStatic* __this);
HashSet__int* HashSet__int__New_2(::uStatic* __this, ::uObject* items);
bool HashSet__int__Remove(HashSet__int* __this, int item);
bool HashSet__int__SetEquals(HashSet__int* __this, ::uObject* that);

struct HashSet__int : ::uObject
{
    ::uStrong< ::app::Uno::Collections::Dictionary__int__bool*> _map;

    ::uObject* GetEnumerator_boxed() { return HashSet__int__GetEnumerator_boxed(this); }
    void _ObjInit() { HashSet__int___ObjInit(this); }
    void _ObjInit_1(::uObject* items) { HashSet__int___ObjInit_1(this, items); }
    bool Add(int item) { return HashSet__int__Add(this, item); }
    void Clear() { HashSet__int__Clear(this); }
    bool Contains(int item) { return HashSet__int__Contains(this, item); }
    int Count() { return HashSet__int__get_Count(this); }
    ::app::Uno::Collections::HashSet1_Enumerator__int GetEnumerator();
    bool Remove(int item) { return HashSet__int__Remove(this, item); }
    bool SetEquals(::uObject* that) { return HashSet__int__SetEquals(this, that); }
};

}}}

#include <app/Uno.Collections.HashSet1_Enumerator__int.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::HashSet1_Enumerator__int HashSet__int::GetEnumerator() { return HashSet__int__GetEnumerator(this); }

}}}


#endif
