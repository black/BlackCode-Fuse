// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_X_PROPERTY__CHAR_H__
#define __APP_UNO_U_X_PROPERTY__CHAR_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace UX {

struct Property__char;

struct Property__char__uType : ::uClassType
{
    void(*__fp_OnAddListener)(Property__char*, ::uDelegate*);
    ::uChar(*__fp_OnGet)(Property__char*);
    void(*__fp_OnRemoveListener)(Property__char*, ::uDelegate*);
    void(*__fp_OnSet)(Property__char*, ::uChar, ::uObject*);
};

Property__char__uType* Property__char__typeof();

void Property__char___ObjInit(Property__char* __this);
void Property__char__add_ValueChanged(Property__char* __this, ::uDelegate* value);
::uChar Property__char__Get(Property__char* __this);
::uChar Property__char__GetRestState(Property__char* __this);
void Property__char__OnAddListener(Property__char* __this, ::uDelegate* listener);
::uChar Property__char__OnGet(Property__char* __this);
void Property__char__OnRemoveListener(Property__char* __this, ::uDelegate* listener);
void Property__char__OnSet(Property__char* __this, ::uChar value, ::uObject* origin);
void Property__char__remove_ValueChanged(Property__char* __this, ::uDelegate* value);
void Property__char__RetainRestState(Property__char* __this);
void Property__char__Set(Property__char* __this, ::uChar value, ::uObject* origin);
void Property__char__SetRestState(Property__char* __this, ::uChar value, ::uObject* origin);

struct Property__char : ::uObject
{
    bool _hasRestState;
    ::uChar _restState;

    void _ObjInit() { Property__char___ObjInit(this); }
    void add_ValueChanged(::uDelegate* value) { Property__char__add_ValueChanged(this, value); }
    ::uChar Get() { return Property__char__Get(this); }
    ::uChar GetRestState() { return Property__char__GetRestState(this); }
    void OnAddListener(::uDelegate* listener) { (((Property__char__uType*)this->__obj_type)->__fp_OnAddListener)(this, listener); }
    ::uChar OnGet() { return (((Property__char__uType*)this->__obj_type)->__fp_OnGet)(this); }
    void OnRemoveListener(::uDelegate* listener) { (((Property__char__uType*)this->__obj_type)->__fp_OnRemoveListener)(this, listener); }
    void OnSet(::uChar value, ::uObject* origin) { (((Property__char__uType*)this->__obj_type)->__fp_OnSet)(this, value, origin); }
    void remove_ValueChanged(::uDelegate* value) { Property__char__remove_ValueChanged(this, value); }
    void RetainRestState() { Property__char__RetainRestState(this); }
    void Set(::uChar value, ::uObject* origin) { Property__char__Set(this, value, origin); }
    void SetRestState(::uChar value, ::uObject* origin) { Property__char__SetRestState(this, value, origin); }
};

}}}


#endif
