// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_HASH_SET1_ENUMERATOR__STRING_H__
#define __APP_UNO_COLLECTIONS_HASH_SET1_ENUMERATOR__STRING_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__string.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__string__bool; } } }

namespace app {
namespace Uno {
namespace Collections {

struct HashSet1_Enumerator__string;

struct HashSet1_Enumerator__string__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__string __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

HashSet1_Enumerator__string__uType* HashSet1_Enumerator__string__typeof();

void HashSet1_Enumerator__string___ObjInit(HashSet1_Enumerator__string* __this, ::app::Uno::Collections::Dictionary__string__bool* source);
void HashSet1_Enumerator__string__Dispose(HashSet1_Enumerator__string* __this);
::uString* HashSet1_Enumerator__string__get_Current(HashSet1_Enumerator__string* __this);
bool HashSet1_Enumerator__string__MoveNext(HashSet1_Enumerator__string* __this);
HashSet1_Enumerator__string HashSet1_Enumerator__string__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__string__bool* source);
void HashSet1_Enumerator__string__Uno_Collections_IEnumerator_Reset(HashSet1_Enumerator__string* __this);

struct HashSet1_Enumerator__string
{
    ::uStrong< ::app::Uno::Collections::Dictionary__string__bool*> _source;
    ::uStrong< ::uString*> _current;
    int _iterator;
    int _version;

    void _ObjInit(::app::Uno::Collections::Dictionary__string__bool* source) { HashSet1_Enumerator__string___ObjInit(this, source); }
    void Dispose() { HashSet1_Enumerator__string__Dispose(this); }
    ::uString* Current() { return HashSet1_Enumerator__string__get_Current(this); }
    bool MoveNext() { return HashSet1_Enumerator__string__MoveNext(this); }
};

}}}


#endif
