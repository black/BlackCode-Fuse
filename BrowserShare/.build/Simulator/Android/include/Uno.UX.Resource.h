// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace UX{struct Resource;}}}

namespace g{
namespace Uno{
namespace UX{

// public sealed class Resource :294
// {
uType* Resource_typeof();
void Resource__ctor__fn(Resource* __this, uString* key, uObject* value);
void Resource__AddGlobalKeyListener_fn(uDelegate* listener);
void Resource__GetGlobalKey_fn(uObject* obj, uString** __retval);
void Resource__get_Key_fn(Resource* __this, uString** __retval);
void Resource__set_Key_fn(Resource* __this, uString* value);
void Resource__New1_fn(uString* key, uObject* value, Resource** __retval);
void Resource__SetGlobalKey_fn(uObject* obj, uString* key);
void Resource__TryFindGlobal_fn(uString* key, uDelegate* acceptor, uObject** res, bool* __retval);
void Resource__get_Value_fn(Resource* __this, uObject** __retval);
void Resource__set_Value_fn(Resource* __this, uObject* value);

struct Resource : uObject
{
    static uSStrong< ::g::Uno::Collections::Dictionary*> _globals_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& _globals() { return _globals_; }
    static uSStrong< ::g::Uno::Collections::List*> _listeners_;
    static uSStrong< ::g::Uno::Collections::List*>& _listeners() { return _listeners_; }
    uStrong<uString*> _Key;
    uStrong<uObject*> _Value;

    void ctor_(uString* key, uObject* value);
    uString* Key();
    void Key(uString* value);
    uObject* Value();
    void Value(uObject* value);
    static void AddGlobalKeyListener(uDelegate* listener);
    static uString* GetGlobalKey(uObject* obj);
    static Resource* New1(uString* key, uObject* value);
    static void SetGlobalKey(uObject* obj, uString* key);
    static bool TryFindGlobal(uString* key, uDelegate* acceptor, uObject** res);
};
// }

}}} // ::g::Uno::UX
