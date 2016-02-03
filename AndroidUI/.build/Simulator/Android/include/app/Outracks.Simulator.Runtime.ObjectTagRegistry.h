// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_RUNTIME_OBJECT_TAG_REGISTRY_H__
#define __APP_OUTRACKS_SIMULATOR_RUNTIME_OBJECT_TAG_REGISTRY_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { struct WeakDictionary__object__string; }

namespace app {
namespace Outracks {
namespace Simulator {
namespace Runtime {

struct ObjectTagRegistry;

extern ::uStaticStrong< ::app::WeakDictionary__object__string*> ObjectTagRegistry__Objects;

struct ObjectTagRegistry__uType : ::uClassType
{
};

ObjectTagRegistry__uType* ObjectTagRegistry__typeof();

void ObjectTagRegistry___ObjInit(ObjectTagRegistry* __this);
void ObjectTagRegistry___TypeInit(::uStatic* __this);
void ObjectTagRegistry__Clear(::uStatic* __this);
::uObject* ObjectTagRegistry__GetFirstObjectWithTag(::uStatic* __this, ::uString* tag);
::uObject* ObjectTagRegistry__GetObjectsWithTag(::uStatic* __this, ::uString* tag);
void ObjectTagRegistry__GetObjectsWithTag_1(::uStatic* __this, ::uString* tag, ::uDelegate* action);
::uString* ObjectTagRegistry__GetTagHash(::uStatic* __this, ::uObject* obj);
ObjectTagRegistry* ObjectTagRegistry__New_1(::uStatic* __this);
::uObject* ObjectTagRegistry__RegisterObjectTag(::uStatic* __this, ::uObject* obj, ::uString* tagHash);

struct ObjectTagRegistry : ::uObject
{
    void _ObjInit() { ObjectTagRegistry___ObjInit(this); }
};

}}}}


#endif
