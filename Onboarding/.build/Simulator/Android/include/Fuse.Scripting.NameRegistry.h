// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Scripting\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Scripting{struct NameRegistry;}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// public static class NameRegistry :18
// {
uClassType* NameRegistry_typeof();
void NameRegistry__AddListener_fn(uString* name, uObject* listener);
void NameRegistry__ClearName_fn(uObject* obj);
void NameRegistry__GetName_fn(uObject* obj, uString** __retval);
void NameRegistry__NotifyNameChanged_fn(uObject* obj, uString* name);
void NameRegistry__RemoveListener_fn(uObject* listener);
void NameRegistry__SetName_fn(uObject* obj, uString* name);

struct NameRegistry : uObject
{
    static uSStrong< ::g::Uno::Collections::Dictionary*> _listeners_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& _listeners() { return NameRegistry_typeof()->Init(), _listeners_; }
    static uSStrong< ::g::Uno::Collections::Dictionary*> _names_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& _names() { return NameRegistry_typeof()->Init(), _names_; }

    static void AddListener(uString* name, uObject* listener);
    static void ClearName(uObject* obj);
    static uString* GetName(uObject* obj);
    static void NotifyNameChanged(uObject* obj, uString* name);
    static void RemoveListener(uObject* listener);
    static void SetName(uObject* obj, uString* name);
};
// }

}}} // ::g::Fuse::Scripting
