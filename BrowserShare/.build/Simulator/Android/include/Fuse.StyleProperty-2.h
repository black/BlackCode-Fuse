// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.StyleProperty.h>
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct PropertyHandle;}}
namespace g{namespace Fuse{struct StyleProperty1;}}

namespace g{
namespace Fuse{

// public class StyleProperty<TOwner, T> :5449
// {
::g::Fuse::StyleProperty_type* StyleProperty1_typeof();
void StyleProperty1__ctor_1_fn(StyleProperty1* __this, void* defaultValue, uDelegate* changedCallback);
void StyleProperty1__ctor_2_fn(StyleProperty1* __this, void* defaultValue, uDelegate* changedCallback, uDelegate* setter, uDelegate* getter);
void StyleProperty1__get_DefaultValue_fn(StyleProperty1* __this, uTRef __retval);
void StyleProperty1__Get_fn(StyleProperty1* __this, void* owner, uTRef __retval);
void StyleProperty1__HasValue_fn(StyleProperty1* __this, void* owner, bool* __retval);
void StyleProperty1__HasValueFor_fn(StyleProperty1* __this, uObject* owner, bool* __retval);
void StyleProperty1__IsEqual_fn(StyleProperty1* __this, void* value, void* oldValue, bool* __retval);
void StyleProperty1__New1_fn(uType* __type, void* defaultValue, uDelegate* changedCallback, StyleProperty1** __retval);
void StyleProperty1__New2_fn(uType* __type, void* defaultValue, uDelegate* changedCallback, uDelegate* setter, uDelegate* getter, StyleProperty1** __retval);
void StyleProperty1__OnChanged_fn(StyleProperty1* __this, void* owner);
void StyleProperty1__Reset_fn(StyleProperty1* __this, void* owner, bool* __retval);
void StyleProperty1__ResetFor_fn(StyleProperty1* __this, ::g::Fuse::Node* n);
void StyleProperty1__ResetStyle_fn(StyleProperty1* __this, void* owner, bool* __retval);
void StyleProperty1__ResetStyleFor_fn(StyleProperty1* __this, ::g::Fuse::Node* n);
void StyleProperty1__Set_fn(StyleProperty1* __this, void* owner, void* value, bool* __retval);
void StyleProperty1__SetLocalState_fn(StyleProperty1* __this, void* owner);
void StyleProperty1__SetStyle_fn(StyleProperty1* __this, void* owner, void* value, bool* __retval);

struct StyleProperty1 : ::g::Fuse::StyleProperty
{
    uStrong<uDelegate*> _changedCallback;
    uTField _defaultValue() { return __type->Field(this, 1); }
    uStrong<uDelegate*> _getter;
    uStrong< ::g::Fuse::PropertyHandle*> _handle;
    int _id;
    uStrong<uDelegate*> _setter;

    template<class T>
    void ctor_1(T defaultValue, uDelegate* changedCallback) { StyleProperty1__ctor_1_fn(this, uConstrain(__type->GetBase(StyleProperty1_typeof())->T(1), defaultValue), changedCallback); }
    template<class T>
    void ctor_2(T defaultValue, uDelegate* changedCallback, uDelegate* setter, uDelegate* getter) { StyleProperty1__ctor_2_fn(this, uConstrain(__type->GetBase(StyleProperty1_typeof())->T(1), defaultValue), changedCallback, setter, getter); }
    template<class T>
    T DefaultValue() { T __retval; return StyleProperty1__get_DefaultValue_fn(this, &__retval), __retval; }
    template<class TOwner, class T>
    T Get(TOwner owner) { T __retval; return StyleProperty1__Get_fn(this, uConstrain(__type->GetBase(StyleProperty1_typeof())->T(0), owner), &__retval), __retval; }
    template<class TOwner>
    bool HasValue(TOwner owner) { bool __retval; return StyleProperty1__HasValue_fn(this, uConstrain(__type->GetBase(StyleProperty1_typeof())->T(0), owner), &__retval), __retval; }
    template<class T>
    bool IsEqual(T value, T oldValue) { bool __retval; return StyleProperty1__IsEqual_fn(this, uConstrain(__type->GetBase(StyleProperty1_typeof())->T(1), value), uConstrain(__type->GetBase(StyleProperty1_typeof())->T(1), oldValue), &__retval), __retval; }
    template<class TOwner>
    void OnChanged(TOwner owner) { StyleProperty1__OnChanged_fn(this, uConstrain(__type->GetBase(StyleProperty1_typeof())->T(0), owner)); }
    template<class TOwner>
    bool Reset(TOwner owner) { bool __retval; return StyleProperty1__Reset_fn(this, uConstrain(__type->GetBase(StyleProperty1_typeof())->T(0), owner), &__retval), __retval; }
    template<class TOwner>
    bool ResetStyle(TOwner owner) { bool __retval; return StyleProperty1__ResetStyle_fn(this, uConstrain(__type->GetBase(StyleProperty1_typeof())->T(0), owner), &__retval), __retval; }
    template<class TOwner, class T>
    bool Set(TOwner owner, T value) { bool __retval; return StyleProperty1__Set_fn(this, uConstrain(__type->GetBase(StyleProperty1_typeof())->T(0), owner), uConstrain(__type->GetBase(StyleProperty1_typeof())->T(1), value), &__retval), __retval; }
    template<class TOwner>
    void SetLocalState(TOwner owner) { StyleProperty1__SetLocalState_fn(this, uConstrain(__type->GetBase(StyleProperty1_typeof())->T(0), owner)); }
    template<class TOwner, class T>
    bool SetStyle(TOwner owner, T value) { bool __retval; return StyleProperty1__SetStyle_fn(this, uConstrain(__type->GetBase(StyleProperty1_typeof())->T(0), owner), uConstrain(__type->GetBase(StyleProperty1_typeof())->T(1), value), &__retval), __retval; }
    template<class T>
    static StyleProperty1* New1(uType* __type, T defaultValue, uDelegate* changedCallback) { StyleProperty1* __retval; return StyleProperty1__New1_fn(__type, uConstrain(__type->GetBase(StyleProperty1_typeof())->T(1), defaultValue), changedCallback, &__retval), __retval; }
    template<class T>
    static StyleProperty1* New2(uType* __type, T defaultValue, uDelegate* changedCallback, uDelegate* setter, uDelegate* getter) { StyleProperty1* __retval; return StyleProperty1__New2_fn(__type, uConstrain(__type->GetBase(StyleProperty1_typeof())->T(1), defaultValue), changedCallback, setter, getter, &__retval), __retval; }
};
// }

}} // ::g::Fuse
