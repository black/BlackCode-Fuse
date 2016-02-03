// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_HASH_SET1_ENUMERATOR__INT_H__
#define __APP_UNO_COLLECTIONS_HASH_SET1_ENUMERATOR__INT_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__int.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__int__bool; } } }

namespace app {
namespace Uno {
namespace Collections {

struct HashSet1_Enumerator__int;

struct HashSet1_Enumerator__int__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__int __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

HashSet1_Enumerator__int__uType* HashSet1_Enumerator__int__typeof();

void HashSet1_Enumerator__int___ObjInit(HashSet1_Enumerator__int* __this, ::app::Uno::Collections::Dictionary__int__bool* source);
void HashSet1_Enumerator__int__Dispose(HashSet1_Enumerator__int* __this);
int HashSet1_Enumerator__int__get_Current(HashSet1_Enumerator__int* __this);
bool HashSet1_Enumerator__int__MoveNext(HashSet1_Enumerator__int* __this);
HashSet1_Enumerator__int HashSet1_Enumerator__int__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__int__bool* source);
void HashSet1_Enumerator__int__Uno_Collections_IEnumerator_Reset(HashSet1_Enumerator__int* __this);

struct HashSet1_Enumerator__int
{
    ::uStrong< ::app::Uno::Collections::Dictionary__int__bool*> _source;
    int _current;
    int _iterator;
    int _version;

    void _ObjInit(::app::Uno::Collections::Dictionary__int__bool* source) { HashSet1_Enumerator__int___ObjInit(this, source); }
    void Dispose() { HashSet1_Enumerator__int__Dispose(this); }
    int Current() { return HashSet1_Enumerator__int__get_Current(this); }
    bool MoveNext() { return HashSet1_Enumerator__int__MoveNext(this); }
};

}}}


#endif
