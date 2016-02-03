// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_PROPERTIES_H__
#define __APP_FUSE_PROPERTIES_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { struct PropertyHandle; } }

namespace app {
namespace Fuse {

struct Properties;

extern ::uStaticStrong< ::uObject*> Properties__NoValue;

struct Properties__uType : ::uClassType
{
};

Properties__uType* Properties__typeof();

void Properties___ObjInit(Properties* __this);
void Properties___TypeInit(::uStatic* __this);
void Properties__AddToList(Properties* __this, ::app::Fuse::PropertyHandle* handle, ::uObject* val);
void Properties__Clear(Properties* __this, ::app::Fuse::PropertyHandle* handle);
void Properties__Clear_1(Properties* __this, ::app::Fuse::PropertyHandle* handle, ::uObject* val, bool all);
::app::Fuse::PropertyHandle* Properties__CreateHandle(::uStatic* __this);
void Properties__ForeachInList(Properties* __this, ::app::Fuse::PropertyHandle* handle, ::uDelegate* action, ::uObject* state);
void Properties__ForeachInList_1(Properties* __this, ::app::Fuse::PropertyHandle* handle, ::uDelegate* action, ::uArray* state);
::uObject* Properties__Get(Properties* __this, ::app::Fuse::PropertyHandle* handle);
bool Properties__Has(Properties* __this, ::app::Fuse::PropertyHandle* handle);
Properties* Properties__New_1(::uStatic* __this);
void Properties__RemoveAllFromList(Properties* __this, ::app::Fuse::PropertyHandle* handle, ::uObject* val);
void Properties__RemoveFromList(Properties* __this, ::app::Fuse::PropertyHandle* handle, ::uObject* val);
void Properties__Set(Properties* __this, ::app::Fuse::PropertyHandle* handle, ::uObject* val);
::uArray* Properties__ToArray(Properties* __this, ::app::Fuse::PropertyHandle* handle);
bool Properties__TryGet(Properties* __this, ::app::Fuse::PropertyHandle* handle, ::uObject** val);

struct Properties : ::uObject
{
    ::uStrong< Properties*> _next;
    ::uStrong< ::app::Fuse::PropertyHandle*> _handle;
    ::uStrong< ::uObject*> _value;

    void _ObjInit() { Properties___ObjInit(this); }
    void AddToList(::app::Fuse::PropertyHandle* handle, ::uObject* val) { Properties__AddToList(this, handle, val); }
    void Clear(::app::Fuse::PropertyHandle* handle) { Properties__Clear(this, handle); }
    void Clear_1(::app::Fuse::PropertyHandle* handle, ::uObject* val, bool all) { Properties__Clear_1(this, handle, val, all); }
    void ForeachInList(::app::Fuse::PropertyHandle* handle, ::uDelegate* action, ::uObject* state) { Properties__ForeachInList(this, handle, action, state); }
    void ForeachInList_1(::app::Fuse::PropertyHandle* handle, ::uDelegate* action, ::uArray* state) { Properties__ForeachInList_1(this, handle, action, state); }
    ::uObject* Get(::app::Fuse::PropertyHandle* handle) { return Properties__Get(this, handle); }
    bool Has(::app::Fuse::PropertyHandle* handle) { return Properties__Has(this, handle); }
    void RemoveAllFromList(::app::Fuse::PropertyHandle* handle, ::uObject* val) { Properties__RemoveAllFromList(this, handle, val); }
    void RemoveFromList(::app::Fuse::PropertyHandle* handle, ::uObject* val) { Properties__RemoveFromList(this, handle, val); }
    void Set(::app::Fuse::PropertyHandle* handle, ::uObject* val) { Properties__Set(this, handle, val); }
    ::uArray* ToArray(::app::Fuse::PropertyHandle* handle) { return Properties__ToArray(this, handle); }
    bool TryGet(::app::Fuse::PropertyHandle* handle, ::uObject** val) { return Properties__TryGet(this, handle, val); }
};

}}


#endif
