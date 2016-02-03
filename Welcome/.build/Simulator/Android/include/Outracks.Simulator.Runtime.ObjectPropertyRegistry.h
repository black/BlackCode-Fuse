// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\Runtime\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Outracks{namespace Simulator{namespace Runtime{struct ObjectPropertyRegistry;}}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{struct WeakDictionary;}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Runtime{

// public static class ObjectPropertyRegistry :368
// {
uClassType* ObjectPropertyRegistry_typeof();
void ObjectPropertyRegistry__Clear_fn();
void ObjectPropertyRegistry__GetProperty_fn(uObject* obj, uString* property, uObject** __retval);
void ObjectPropertyRegistry__RegisterProperty_fn(uObject* obj, uString* property, uObject* propertyObject);

struct ObjectPropertyRegistry : uObject
{
    static uSStrong< ::g::WeakDictionary*> Objects_;
    static uSStrong< ::g::WeakDictionary*>& Objects() { return ObjectPropertyRegistry_typeof()->Init(), Objects_; }

    static void Clear();
    static uObject* GetProperty(uObject* obj, uString* property);
    static void RegisterProperty(uObject* obj, uString* property, uObject* propertyObject);
};
// }

}}}} // ::g::Outracks::Simulator::Runtime
