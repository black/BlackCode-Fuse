// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_HASH_SET__FUSE_I_FLUSH_H__
#define __APP_UNO_COLLECTIONS_HASH_SET__FUSE_I_FLUSH_H__

#include <app/Uno.Collections.IEnumerable__Fuse_IFlush.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__Fuse_IFlush__bool; } } }
namespace app { namespace Uno { namespace Collections { struct HashSet1_Enumerator__Fuse_IFlush; } } }

namespace app {
namespace Uno {
namespace Collections {

struct HashSet__Fuse_IFlush;

struct HashSet__Fuse_IFlush__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Fuse_IFlush __interface_0;
};

HashSet__Fuse_IFlush__uType* HashSet__Fuse_IFlush__typeof();

::uObject* HashSet__Fuse_IFlush__GetEnumerator_boxed(HashSet__Fuse_IFlush* __this);
void HashSet__Fuse_IFlush___ObjInit(HashSet__Fuse_IFlush* __this);
void HashSet__Fuse_IFlush___ObjInit_1(HashSet__Fuse_IFlush* __this, ::uObject* items);
bool HashSet__Fuse_IFlush__Add(HashSet__Fuse_IFlush* __this, ::uObject* item);
void HashSet__Fuse_IFlush__Clear(HashSet__Fuse_IFlush* __this);
bool HashSet__Fuse_IFlush__Contains(HashSet__Fuse_IFlush* __this, ::uObject* item);
int HashSet__Fuse_IFlush__get_Count(HashSet__Fuse_IFlush* __this);
::app::Uno::Collections::HashSet1_Enumerator__Fuse_IFlush HashSet__Fuse_IFlush__GetEnumerator(HashSet__Fuse_IFlush* __this);
HashSet__Fuse_IFlush* HashSet__Fuse_IFlush__New_1(::uStatic* __this);
HashSet__Fuse_IFlush* HashSet__Fuse_IFlush__New_2(::uStatic* __this, ::uObject* items);
bool HashSet__Fuse_IFlush__Remove(HashSet__Fuse_IFlush* __this, ::uObject* item);
bool HashSet__Fuse_IFlush__SetEquals(HashSet__Fuse_IFlush* __this, ::uObject* that);

struct HashSet__Fuse_IFlush : ::uObject
{
    ::uStrong< ::app::Uno::Collections::Dictionary__Fuse_IFlush__bool*> _map;

    ::uObject* GetEnumerator_boxed() { return HashSet__Fuse_IFlush__GetEnumerator_boxed(this); }
    void _ObjInit() { HashSet__Fuse_IFlush___ObjInit(this); }
    void _ObjInit_1(::uObject* items) { HashSet__Fuse_IFlush___ObjInit_1(this, items); }
    bool Add(::uObject* item) { return HashSet__Fuse_IFlush__Add(this, item); }
    void Clear() { HashSet__Fuse_IFlush__Clear(this); }
    bool Contains(::uObject* item) { return HashSet__Fuse_IFlush__Contains(this, item); }
    int Count() { return HashSet__Fuse_IFlush__get_Count(this); }
    ::app::Uno::Collections::HashSet1_Enumerator__Fuse_IFlush GetEnumerator();
    bool Remove(::uObject* item) { return HashSet__Fuse_IFlush__Remove(this, item); }
    bool SetEquals(::uObject* that) { return HashSet__Fuse_IFlush__SetEquals(this, that); }
};

}}}

#include <app/Uno.Collections.HashSet1_Enumerator__Fuse_IFlush.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::HashSet1_Enumerator__Fuse_IFlush HashSet__Fuse_IFlush::GetEnumerator() { return HashSet__Fuse_IFlush__GetEnumerator(this); }

}}}


#endif
