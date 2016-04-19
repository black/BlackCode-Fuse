// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Node.h>
#include <Fuse.StyleProperty-2.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{struct PropertyHandle;}}
namespace g{namespace Fuse{struct StylePropertyWithUnit;}}

namespace g{
namespace Fuse{

// public sealed class StylePropertyWithUnit<TOwner, T, TUnit> :5637
// {
::g::Fuse::StyleProperty_type* StylePropertyWithUnit_typeof();
void StylePropertyWithUnit__ctor_3_fn(StylePropertyWithUnit* __this, void* defaultValue, void* defaultUnit, uDelegate* changedCallback);
void StylePropertyWithUnit__ctor_4_fn(StylePropertyWithUnit* __this, void* defaultValue, void* defaultUnit, uDelegate* changedCallback, uDelegate* setter, uDelegate* getter);
void StylePropertyWithUnit__GetUnit_fn(StylePropertyWithUnit* __this, ::g::Fuse::Node* owner, uTRef __retval);
void StylePropertyWithUnit__New3_fn(uType* __type, void* defaultValue, void* defaultUnit, uDelegate* changedCallback, StylePropertyWithUnit** __retval);
void StylePropertyWithUnit__New4_fn(uType* __type, void* defaultValue, void* defaultUnit, uDelegate* changedCallback, uDelegate* setter, uDelegate* getter, StylePropertyWithUnit** __retval);
void StylePropertyWithUnit__Set1_fn(StylePropertyWithUnit* __this, ::g::Fuse::Node* owner, void* value, void* unit, bool* __retval);
void StylePropertyWithUnit__SetStyle1_fn(StylePropertyWithUnit* __this, ::g::Fuse::Node* owner, void* value, void* unit, bool* __retval);

struct StylePropertyWithUnit : ::g::Fuse::StyleProperty1
{
    uTField _defaultUnit() { return __type->Field(this, 6); }
    uStrong< ::g::Fuse::PropertyHandle*> _unitHandle;
    int _unitId;

    template<class T, class TUnit>
    void ctor_3(T defaultValue, TUnit defaultUnit, uDelegate* changedCallback) { StylePropertyWithUnit__ctor_3_fn(this, uConstrain(__type->T(1), defaultValue), uConstrain(__type->T(2), defaultUnit), changedCallback); }
    template<class T, class TUnit>
    void ctor_4(T defaultValue, TUnit defaultUnit, uDelegate* changedCallback, uDelegate* setter, uDelegate* getter) { StylePropertyWithUnit__ctor_4_fn(this, uConstrain(__type->T(1), defaultValue), uConstrain(__type->T(2), defaultUnit), changedCallback, setter, getter); }
    template<class TUnit>
    TUnit GetUnit(::g::Fuse::Node* owner) { TUnit __retval; return StylePropertyWithUnit__GetUnit_fn(this, owner, &__retval), __retval; }
    template<class T, class TUnit>
    bool Set1(::g::Fuse::Node* owner, T value, TUnit unit) { bool __retval; return StylePropertyWithUnit__Set1_fn(this, owner, uConstrain(__type->T(1), value), uConstrain(__type->T(2), unit), &__retval), __retval; }
    template<class T, class TUnit>
    bool SetStyle1(::g::Fuse::Node* owner, T value, TUnit unit) { bool __retval; return StylePropertyWithUnit__SetStyle1_fn(this, owner, uConstrain(__type->T(1), value), uConstrain(__type->T(2), unit), &__retval), __retval; }
    template<class T, class TUnit>
    static StylePropertyWithUnit* New3(uType* __type, T defaultValue, TUnit defaultUnit, uDelegate* changedCallback) { StylePropertyWithUnit* __retval; return StylePropertyWithUnit__New3_fn(__type, uConstrain(__type->T(1), defaultValue), uConstrain(__type->T(2), defaultUnit), changedCallback, &__retval), __retval; }
    template<class T, class TUnit>
    static StylePropertyWithUnit* New4(uType* __type, T defaultValue, TUnit defaultUnit, uDelegate* changedCallback, uDelegate* setter, uDelegate* getter) { StylePropertyWithUnit* __retval; return StylePropertyWithUnit__New4_fn(__type, uConstrain(__type->T(1), defaultValue), uConstrain(__type->T(2), defaultUnit), changedCallback, setter, getter, &__retval), __retval; }
};
// }

}} // ::g::Fuse
