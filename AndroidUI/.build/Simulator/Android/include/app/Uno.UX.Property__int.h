// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_X_PROPERTY__INT_H__
#define __APP_UNO_U_X_PROPERTY__INT_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace UX {

struct Property__int;

struct Property__int__uType : ::uClassType
{
    void(*__fp_OnAddListener)(Property__int*, ::uDelegate*);
    int(*__fp_OnGet)(Property__int*);
    void(*__fp_OnRemoveListener)(Property__int*, ::uDelegate*);
    void(*__fp_OnSet)(Property__int*, int, ::uObject*);
};

Property__int__uType* Property__int__typeof();

void Property__int___ObjInit(Property__int* __this);
void Property__int__add_ValueChanged(Property__int* __this, ::uDelegate* value);
int Property__int__Get(Property__int* __this);
int Property__int__GetRestState(Property__int* __this);
void Property__int__OnAddListener(Property__int* __this, ::uDelegate* listener);
int Property__int__OnGet(Property__int* __this);
void Property__int__OnRemoveListener(Property__int* __this, ::uDelegate* listener);
void Property__int__OnSet(Property__int* __this, int value, ::uObject* origin);
void Property__int__remove_ValueChanged(Property__int* __this, ::uDelegate* value);
void Property__int__RetainRestState(Property__int* __this);
void Property__int__Set(Property__int* __this, int value, ::uObject* origin);
void Property__int__SetRestState(Property__int* __this, int value, ::uObject* origin);

struct Property__int : ::uObject
{
    bool _hasRestState;
    int _restState;

    void _ObjInit() { Property__int___ObjInit(this); }
    void add_ValueChanged(::uDelegate* value) { Property__int__add_ValueChanged(this, value); }
    int Get() { return Property__int__Get(this); }
    int GetRestState() { return Property__int__GetRestState(this); }
    void OnAddListener(::uDelegate* listener) { (((Property__int__uType*)this->__obj_type)->__fp_OnAddListener)(this, listener); }
    int OnGet() { return (((Property__int__uType*)this->__obj_type)->__fp_OnGet)(this); }
    void OnRemoveListener(::uDelegate* listener) { (((Property__int__uType*)this->__obj_type)->__fp_OnRemoveListener)(this, listener); }
    void OnSet(int value, ::uObject* origin) { (((Property__int__uType*)this->__obj_type)->__fp_OnSet)(this, value, origin); }
    void remove_ValueChanged(::uDelegate* value) { Property__int__remove_ValueChanged(this, value); }
    void RetainRestState() { Property__int__RetainRestState(this); }
    void Set(int value, ::uObject* origin) { Property__int__Set(this, value, origin); }
    void SetRestState(int value, ::uObject* origin) { Property__int__SetRestState(this, value, origin); }
};

}}}


#endif
