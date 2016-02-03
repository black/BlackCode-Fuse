// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_X_PROPERTY__DOUBLE_H__
#define __APP_UNO_U_X_PROPERTY__DOUBLE_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace UX {

struct Property__double;

struct Property__double__uType : ::uClassType
{
    void(*__fp_OnAddListener)(Property__double*, ::uDelegate*);
    double(*__fp_OnGet)(Property__double*);
    void(*__fp_OnRemoveListener)(Property__double*, ::uDelegate*);
    void(*__fp_OnSet)(Property__double*, double, ::uObject*);
};

Property__double__uType* Property__double__typeof();

void Property__double___ObjInit(Property__double* __this);
void Property__double__add_ValueChanged(Property__double* __this, ::uDelegate* value);
double Property__double__Get(Property__double* __this);
double Property__double__GetRestState(Property__double* __this);
void Property__double__OnAddListener(Property__double* __this, ::uDelegate* listener);
double Property__double__OnGet(Property__double* __this);
void Property__double__OnRemoveListener(Property__double* __this, ::uDelegate* listener);
void Property__double__OnSet(Property__double* __this, double value, ::uObject* origin);
void Property__double__remove_ValueChanged(Property__double* __this, ::uDelegate* value);
void Property__double__RetainRestState(Property__double* __this);
void Property__double__Set(Property__double* __this, double value, ::uObject* origin);
void Property__double__SetRestState(Property__double* __this, double value, ::uObject* origin);

struct Property__double : ::uObject
{
    bool _hasRestState;
    double _restState;

    void _ObjInit() { Property__double___ObjInit(this); }
    void add_ValueChanged(::uDelegate* value) { Property__double__add_ValueChanged(this, value); }
    double Get() { return Property__double__Get(this); }
    double GetRestState() { return Property__double__GetRestState(this); }
    void OnAddListener(::uDelegate* listener) { (((Property__double__uType*)this->__obj_type)->__fp_OnAddListener)(this, listener); }
    double OnGet() { return (((Property__double__uType*)this->__obj_type)->__fp_OnGet)(this); }
    void OnRemoveListener(::uDelegate* listener) { (((Property__double__uType*)this->__obj_type)->__fp_OnRemoveListener)(this, listener); }
    void OnSet(double value, ::uObject* origin) { (((Property__double__uType*)this->__obj_type)->__fp_OnSet)(this, value, origin); }
    void remove_ValueChanged(::uDelegate* value) { Property__double__remove_ValueChanged(this, value); }
    void RetainRestState() { Property__double__RetainRestState(this); }
    void Set(double value, ::uObject* origin) { Property__double__Set(this, value, origin); }
    void SetRestState(double value, ::uObject* origin) { Property__double__SetRestState(this, value, origin); }
};

}}}


#endif
