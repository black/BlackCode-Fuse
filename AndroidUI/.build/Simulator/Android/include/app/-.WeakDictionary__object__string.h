// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP___WEAK_DICTIONARY__OBJECT__STRING_H__
#define __APP___WEAK_DICTIONARY__OBJECT__STRING_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__HashableWeakReference__string; } } }
namespace app { struct HashableWeakReference; }

namespace app {

struct WeakDictionary__object__string;

struct WeakDictionary__object__string__uType : ::uClassType
{
};

WeakDictionary__object__string__uType* WeakDictionary__object__string__typeof();

void WeakDictionary__object__string___ObjInit(WeakDictionary__object__string* __this);
::uObject* WeakDictionary__object__string__AsEnumerable(WeakDictionary__object__string* __this);
void WeakDictionary__object__string__Clear(WeakDictionary__object__string* __this);
::uString* WeakDictionary__object__string__get_Item(WeakDictionary__object__string* __this, ::uObject* key);
::app::HashableWeakReference* WeakDictionary__object__string__GetKey(::uStatic* __this, ::uObject* obj);
WeakDictionary__object__string* WeakDictionary__object__string__New_1(::uStatic* __this);
void WeakDictionary__object__string__set_Item(WeakDictionary__object__string* __this, ::uObject* key, ::uString* value);
bool WeakDictionary__object__string__TryGetValue(WeakDictionary__object__string* __this, ::uObject* key, ::uString** value);

struct WeakDictionary__object__string : ::uObject
{
    ::uStrong< ::app::Uno::Collections::Dictionary__HashableWeakReference__string*> _dictionary;

    void _ObjInit() { WeakDictionary__object__string___ObjInit(this); }
    ::uObject* AsEnumerable() { return WeakDictionary__object__string__AsEnumerable(this); }
    void Clear() { WeakDictionary__object__string__Clear(this); }
    ::uString* Item(::uObject* key) { return WeakDictionary__object__string__get_Item(this, key); }
    void Item(::uObject* key, ::uString* value) { WeakDictionary__object__string__set_Item(this, key, value); }
    bool TryGetValue(::uObject* key, ::uString** value) { return WeakDictionary__object__string__TryGetValue(this, key, value); }
};

}


#endif
