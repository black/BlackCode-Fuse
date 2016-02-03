// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_HASH_SET1_ENUMERATOR__FUSE_I_FLUSH_H__
#define __APP_UNO_COLLECTIONS_HASH_SET1_ENUMERATOR__FUSE_I_FLUSH_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_IFlush.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__Fuse_IFlush__bool; } } }

namespace app {
namespace Uno {
namespace Collections {

struct HashSet1_Enumerator__Fuse_IFlush;

struct HashSet1_Enumerator__Fuse_IFlush__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Fuse_IFlush __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

HashSet1_Enumerator__Fuse_IFlush__uType* HashSet1_Enumerator__Fuse_IFlush__typeof();

void HashSet1_Enumerator__Fuse_IFlush___ObjInit(HashSet1_Enumerator__Fuse_IFlush* __this, ::app::Uno::Collections::Dictionary__Fuse_IFlush__bool* source);
void HashSet1_Enumerator__Fuse_IFlush__Dispose(HashSet1_Enumerator__Fuse_IFlush* __this);
::uObject* HashSet1_Enumerator__Fuse_IFlush__get_Current(HashSet1_Enumerator__Fuse_IFlush* __this);
bool HashSet1_Enumerator__Fuse_IFlush__MoveNext(HashSet1_Enumerator__Fuse_IFlush* __this);
HashSet1_Enumerator__Fuse_IFlush HashSet1_Enumerator__Fuse_IFlush__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Fuse_IFlush__bool* source);
void HashSet1_Enumerator__Fuse_IFlush__Uno_Collections_IEnumerator_Reset(HashSet1_Enumerator__Fuse_IFlush* __this);

struct HashSet1_Enumerator__Fuse_IFlush
{
    ::uStrong< ::app::Uno::Collections::Dictionary__Fuse_IFlush__bool*> _source;
    ::uStrong< ::uObject*> _current;
    int _iterator;
    int _version;

    void _ObjInit(::app::Uno::Collections::Dictionary__Fuse_IFlush__bool* source) { HashSet1_Enumerator__Fuse_IFlush___ObjInit(this, source); }
    void Dispose() { HashSet1_Enumerator__Fuse_IFlush__Dispose(this); }
    ::uObject* Current() { return HashSet1_Enumerator__Fuse_IFlush__get_Current(this); }
    bool MoveNext() { return HashSet1_Enumerator__Fuse_IFlush__MoveNext(this); }
};

}}}


#endif
