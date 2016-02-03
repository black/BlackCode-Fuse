// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace UX{struct Property;}}}

namespace g{
namespace Uno{
namespace UX{

// public abstract class Property<T> :231
// {
struct Property_type : uType
{
    void(*fp_OnAddListener)(::g::Uno::UX::Property*, uDelegate*);
    void(*fp_OnGet)(::g::Uno::UX::Property*, uTRef);
    void(*fp_OnRemoveListener)(::g::Uno::UX::Property*, uDelegate*);
    void(*fp_OnSet)(::g::Uno::UX::Property*, void*, uObject*);
};

Property_type* Property_typeof();
void Property__ctor__fn(Property* __this);
void Property__Get_fn(Property* __this, uTRef __retval);
void Property__GetRestState_fn(Property* __this, uTRef __retval);
void Property__OnAddListener_fn(Property* __this, uDelegate* listener);
void Property__OnGet_fn(Property* __this, uTRef __retval);
void Property__OnRemoveListener_fn(Property* __this, uDelegate* listener);
void Property__OnSet_fn(Property* __this, void* value, uObject* origin);
void Property__RetainRestState_fn(Property* __this);
void Property__Set_fn(Property* __this, void* value, uObject* origin);
void Property__SetRestState_fn(Property* __this, void* value, uObject* origin);
void Property__add_ValueChanged_fn(Property* __this, uDelegate* value);
void Property__remove_ValueChanged_fn(Property* __this, uDelegate* value);

struct Property : uObject
{
    bool _hasRestState;
    uTField _restState() { return __type->Field(this, 1); }

    void ctor_();
    template<class T>
    T Get() { T __retval; return Property__Get_fn(this, &__retval), __retval; }
    template<class T>
    T GetRestState() { T __retval; return Property__GetRestState_fn(this, &__retval), __retval; }
    void OnAddListener(uDelegate* listener) { (((Property_type*)__type)->fp_OnAddListener)(this, listener); }
    template<class T>
    T OnGet() { T __retval; return (((Property_type*)__type)->fp_OnGet)(this, &__retval), __retval; }
    void OnGet_ex(uTRef __retval) { (((Property_type*)__type)->fp_OnGet)(this, __retval); }
    void OnRemoveListener(uDelegate* listener) { (((Property_type*)__type)->fp_OnRemoveListener)(this, listener); }
    template<class T>
    void OnSet(T value, uObject* origin) { (((Property_type*)__type)->fp_OnSet)(this, uConstrain(__type->GetBase(Property_typeof())->T(0), value), origin); }
    void OnSet_ex(void* value, uObject* origin) { (((Property_type*)__type)->fp_OnSet)(this, value, origin); }
    void RetainRestState();
    template<class T>
    void Set(T value, uObject* origin) { Property__Set_fn(this, uConstrain(__type->GetBase(Property_typeof())->T(0), value), origin); }
    template<class T>
    void SetRestState(T value, uObject* origin) { Property__SetRestState_fn(this, uConstrain(__type->GetBase(Property_typeof())->T(0), value), origin); }
    void add_ValueChanged(uDelegate* value);
    void remove_ValueChanged(uDelegate* value);
    static void OnAddListener(Property* __this, uDelegate* listener) { Property__OnAddListener_fn(__this, listener); }
    template<class T>
    static T OnGet(Property* __this) { T __retval; return Property__OnGet_fn(__this, &__retval), __retval; }
    static void OnRemoveListener(Property* __this, uDelegate* listener) { Property__OnRemoveListener_fn(__this, listener); }
    template<class T>
    static void OnSet(Property* __this, T value, uObject* origin) { Property__OnSet_fn(__this, uConstrain(__this->__type->GetBase(Property_typeof())->T(0), value), origin); }
};
// }

}}} // ::g::Uno::UX
