// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_X_RESOURCE_H__
#define __APP_UNO_U_X_RESOURCE_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__string__Uno_Collections_List_object_; } } }

namespace app {
namespace Uno {
namespace UX {

struct Resource;

extern ::uStaticStrong< ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_object_*> Resource___globals;

struct Resource__uType : ::uClassType
{
};

Resource__uType* Resource__typeof();

void Resource___ObjInit(Resource* __this, ::uString* key, ::uObject* value);
::uString* Resource__get_Key(Resource* __this);
::uObject* Resource__get_Value(Resource* __this);
::uString* Resource__GetGlobalKey(::uStatic* __this, ::uObject* obj);
Resource* Resource__New_1(::uStatic* __this, ::uString* key, ::uObject* value);
void Resource__set_Key(Resource* __this, ::uString* value);
void Resource__set_Value(Resource* __this, ::uObject* value);
void Resource__SetGlobalKey(::uStatic* __this, ::uObject* obj, ::uString* key);
bool Resource__TryFindGlobal(::uStatic* __this, ::uString* key, ::uDelegate* acceptor, ::uObject** res);

struct Resource : ::uObject
{
    ::uStrong< ::uString*> _Key;
    ::uStrong< ::uObject*> _Value;

    void _ObjInit(::uString* key, ::uObject* value) { Resource___ObjInit(this, key, value); }
    ::uString* Key() { return Resource__get_Key(this); }
    ::uObject* Value() { return Resource__get_Value(this); }
    void Key(::uString* value) { Resource__set_Key(this, value); }
    void Value(::uObject* value) { Resource__set_Value(this, value); }
};

}}}


#endif
