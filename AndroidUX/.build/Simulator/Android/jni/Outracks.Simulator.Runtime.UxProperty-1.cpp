// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UX\.build\Simulator\Android\Preamble\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Outracks.Simulator.Runtime.UxProperty-1.h>
#include <Uno.Action-1.h>
#include <Uno.Action-2.h>
#include <Uno.Bool.h>
#include <Uno.Delegate.h>
#include <Uno.Func-1.h>
#include <Uno.UX.ValueChangedHandler-1.h>
static uType* TYPES[5];

namespace g{
namespace Outracks{
namespace Simulator{
namespace Runtime{

// public sealed class UxProperty<T> :36
// {
::g::Uno::UX::Property_type* UxProperty_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.GenericCount = 1;
    options.ObjectSize = sizeof(UxProperty);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("Outracks.Simulator.Runtime.UxProperty`1", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(type->T(0)));
    type->fp_OnAddListener = (void(*)(::g::Uno::UX::Property*, uDelegate*))UxProperty__OnAddListener_fn;
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))UxProperty__OnGet_fn;
    type->fp_OnRemoveListener = (void(*)(::g::Uno::UX::Property*, uDelegate*))UxProperty__OnRemoveListener_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))UxProperty__OnSet_fn;
    ::TYPES[0] = ::g::Uno::Delegate_typeof();
    ::TYPES[1] = ::g::Uno::Action1_typeof()->MakeType(uObject_typeof());
    ::TYPES[2] = uObject_typeof();
    ::TYPES[3] = ::g::Uno::Func_typeof()->MakeType(uObject_typeof());
    ::TYPES[4] = ::g::Uno::Action2_typeof()->MakeType(uObject_typeof(), uObject_typeof());
    type->SetFields(2,
        ::g::Uno::Action1_typeof()->MakeType(uObject_typeof()), offsetof(::g::Outracks::Simulator::Runtime::UxProperty, _adder), 0,
        ::g::Uno::Func_typeof()->MakeType(uObject_typeof()), offsetof(::g::Outracks::Simulator::Runtime::UxProperty, _getter), 0,
        ::g::Uno::Action1_typeof()->MakeType(uObject_typeof()), offsetof(::g::Outracks::Simulator::Runtime::UxProperty, _remover), 0,
        ::g::Uno::Action2_typeof()->MakeType(uObject_typeof(), uObject_typeof()), offsetof(::g::Outracks::Simulator::Runtime::UxProperty, _setter), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", type, (void*)UxProperty__New1_fn, 0, true, type, 4, ::g::Uno::Action2_typeof()->MakeType(uObject_typeof(), uObject_typeof()), ::g::Uno::Func_typeof()->MakeType(uObject_typeof()), ::g::Uno::Action1_typeof()->MakeType(uObject_typeof()), ::g::Uno::Action1_typeof()->MakeType(uObject_typeof())));
    return type;
}

// public UxProperty(Uno.Action<object, object> setter, Uno.Func<object> getter, Uno.Action<object> adder, Uno.Action<object> remover) :43
void UxProperty__ctor_1_fn(UxProperty* __this, uDelegate* setter, uDelegate* getter, uDelegate* adder, uDelegate* remover)
{
    __this->ctor_1(setter, getter, adder, remover);
}

// public UxProperty New(Uno.Action<object, object> setter, Uno.Func<object> getter, Uno.Action<object> adder, Uno.Action<object> remover) :43
void UxProperty__New1_fn(uType* __type, uDelegate* setter, uDelegate* getter, uDelegate* adder, uDelegate* remover, UxProperty** __retval)
{
    *__retval = UxProperty::New1(__type, setter, getter, adder, remover);
}

// protected override sealed void OnAddListener(Uno.UX.ValueChangedHandler<T> listener) :64
void UxProperty__OnAddListener_fn(UxProperty* __this, uDelegate* listener)
{
    if (::g::Uno::Delegate::op_Equality(__this->_adder, NULL))
        return;

    uPtr(__this->_adder)->InvokeVoid(listener);
}

// protected override sealed T OnGet() :58
void UxProperty__OnGet_fn(UxProperty* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    return __retval.Store(__types[0], uUnboxAny(__types[0], uPtr(__this->_getter)->Invoke())), void();
}

// protected override sealed void OnRemoveListener(Uno.UX.ValueChangedHandler<T> listener) :71
void UxProperty__OnRemoveListener_fn(UxProperty* __this, uDelegate* listener)
{
    if (::g::Uno::Delegate::op_Equality(__this->_remover, NULL))
        return;

    uPtr(__this->_remover)->InvokeVoid(listener);
}

// protected override sealed void OnSet(T value, object origin) :52
void UxProperty__OnSet_fn(UxProperty* __this, void* value, uObject* origin)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    uPtr(__this->_setter)->Invoke(2, uBoxPtr(__types[0], value), origin);
}

// public UxProperty(Uno.Action<object, object> setter, Uno.Func<object> getter, Uno.Action<object> adder, Uno.Action<object> remover) [instance] :43
void UxProperty::ctor_1(uDelegate* setter, uDelegate* getter, uDelegate* adder, uDelegate* remover)
{
    ctor_();
    _setter = setter;
    _getter = getter;
    _adder = adder;
    _remover = remover;
}

// public UxProperty New(Uno.Action<object, object> setter, Uno.Func<object> getter, Uno.Action<object> adder, Uno.Action<object> remover) [static] :43
UxProperty* UxProperty::New1(uType* __type, uDelegate* setter, uDelegate* getter, uDelegate* adder, uDelegate* remover)
{
    UxProperty* obj1 = (UxProperty*)uNew(__type);
    obj1->ctor_1(setter, getter, adder, remover);
    return obj1;
}
// }

}}}} // ::g::Outracks::Simulator::Runtime
