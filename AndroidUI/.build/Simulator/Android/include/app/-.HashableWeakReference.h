// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP___HASHABLE_WEAK_REFERENCE_H__
#define __APP___HASHABLE_WEAK_REFERENCE_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { struct WeakReference__object; } }

namespace app {

struct HashableWeakReference;

struct HashableWeakReference__uType : ::uClassType
{
};

HashableWeakReference__uType* HashableWeakReference__typeof();

void HashableWeakReference___ObjInit(HashableWeakReference* __this, ::app::Uno::WeakReference__object* reference);
bool HashableWeakReference__Equals(HashableWeakReference* __this, ::uObject* that);
int HashableWeakReference__GetHashCode(HashableWeakReference* __this);
HashableWeakReference* HashableWeakReference__New_1(::uStatic* __this, ::app::Uno::WeakReference__object* reference);
bool HashableWeakReference__TryGetTarget(HashableWeakReference* __this, ::uObject** obj);

struct HashableWeakReference : ::uObject
{
    ::uStrong< ::app::Uno::WeakReference__object*> _reference;

    void _ObjInit(::app::Uno::WeakReference__object* reference) { HashableWeakReference___ObjInit(this, reference); }
    bool TryGetTarget(::uObject** obj) { return HashableWeakReference__TryGetTarget(this, obj); }
};

}


#endif
