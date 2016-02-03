// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.EventArgs.h>
namespace g{namespace Uno{namespace UX{struct ValueChangedArgs;}}}

namespace g{
namespace Uno{
namespace UX{

// public class ValueChangedArgs<T> :211
// {
uType* ValueChangedArgs_typeof();
void ValueChangedArgs__ctor_1_fn(ValueChangedArgs* __this, void* value, uObject* origin);
void ValueChangedArgs__New2_fn(uType* __type, void* value, uObject* origin, ValueChangedArgs** __retval);
void ValueChangedArgs__get_Origin_fn(ValueChangedArgs* __this, uObject** __retval);
void ValueChangedArgs__set_Origin_fn(ValueChangedArgs* __this, uObject* value);
void ValueChangedArgs__get_Value_fn(ValueChangedArgs* __this, uTRef __retval);
void ValueChangedArgs__set_Value_fn(ValueChangedArgs* __this, void* value);

struct ValueChangedArgs : ::g::Uno::EventArgs
{
    uStrong<uObject*> _Origin;
    uTField _Value() { return __type->Field(this, 1); }

    template<class T>
    void ctor_1(T value, uObject* origin) { ValueChangedArgs__ctor_1_fn(this, uConstrain(__type->GetBase(ValueChangedArgs_typeof())->T(0), value), origin); }
    uObject* Origin();
    void Origin(uObject* value);
    template<class T>
    T Value() { T __retval; return ValueChangedArgs__get_Value_fn(this, &__retval), __retval; }
    template<class T>
    void Value(T value) { ValueChangedArgs__set_Value_fn(this, uConstrain(__type->GetBase(ValueChangedArgs_typeof())->T(0), value)); }
    template<class T>
    static ValueChangedArgs* New2(uType* __type, T value, uObject* origin) { ValueChangedArgs* __retval; return ValueChangedArgs__New2_fn(__type, uConstrain(__type->GetBase(ValueChangedArgs_typeof())->T(0), value), origin, &__retval), __retval; }
};
// }

}}} // ::g::Uno::UX
