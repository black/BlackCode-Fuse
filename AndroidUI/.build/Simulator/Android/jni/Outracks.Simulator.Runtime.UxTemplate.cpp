// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\Preamble\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Outracks.Simulator.Runtime.UxTemplate.h>
#include <Uno.Bool.h>
#include <Uno.Func-2.h>
static uType* TYPES[2];

namespace g{
namespace Outracks{
namespace Simulator{
namespace Runtime{

// public sealed class UxTemplate :89
// {
UxTemplate_type* UxTemplate_typeof()
{
    static uSStrong<UxTemplate_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(UxTemplate);
    options.TypeSize = sizeof(UxTemplate_type);
    type = (UxTemplate_type*)uClassType::New("Outracks.Simulator.Runtime.UxTemplate", options);
    type->interface0.fp_Apply = (void(*)(uObject*, uObject*, bool*))UxTemplate__Apply_fn;
    ::TYPES[0] = ::g::Uno::Bool_typeof();
    ::TYPES[1] = ::g::Uno::Func1_typeof()->MakeType(uObject_typeof(), uObject_typeof());
    type->SetInterfaces(
        ::g::Uno::UX::ITemplate_typeof(), offsetof(UxTemplate_type, interface0));
    type->SetFields(0,
        ::g::Uno::Func1_typeof()->MakeType(uObject_typeof(), uObject_typeof()), offsetof(::g::Outracks::Simulator::Runtime::UxTemplate, _apply), 0,
        ::g::Uno::Func1_typeof()->MakeType(uObject_typeof(), uObject_typeof()), offsetof(::g::Outracks::Simulator::Runtime::UxTemplate, _matches), 0);
    type->Reflection.SetFunctions(2,
        new uFunction("Apply", NULL, (void*)UxTemplate__Apply_fn, 0, false, ::g::Uno::Bool_typeof(), 1, uObject_typeof()),
        new uFunction(".ctor", NULL, (void*)UxTemplate__New1_fn, 0, true, UxTemplate_typeof(), 2, ::g::Uno::Func1_typeof()->MakeType(uObject_typeof(), uObject_typeof()), ::g::Uno::Func1_typeof()->MakeType(uObject_typeof(), uObject_typeof())));
    return type;
}

// public UxTemplate(Uno.Func<object, object> matches, Uno.Func<object, object> applyMethod) :94
void UxTemplate__ctor__fn(UxTemplate* __this, uDelegate* matches, uDelegate* applyMethod)
{
    __this->ctor_(matches, applyMethod);
}

// public bool Apply(object obj) :101
void UxTemplate__Apply_fn(UxTemplate* __this, uObject* obj, bool* __retval)
{
    *__retval = __this->Apply(obj);
}

// public UxTemplate New(Uno.Func<object, object> matches, Uno.Func<object, object> applyMethod) :94
void UxTemplate__New1_fn(uDelegate* matches, uDelegate* applyMethod, UxTemplate** __retval)
{
    *__retval = UxTemplate::New1(matches, applyMethod);
}

// public UxTemplate(Uno.Func<object, object> matches, Uno.Func<object, object> applyMethod) [instance] :94
void UxTemplate::ctor_(uDelegate* matches, uDelegate* applyMethod)
{
    _matches = matches;
    _apply = applyMethod;
}

// public bool Apply(object obj) [instance] :101
bool UxTemplate::Apply(uObject* obj)
{
    if (!uUnbox<bool>(::TYPES[0/*bool*/], uPtr(_matches)->Invoke(1, obj)))
        return true;

    return uUnbox<bool>(::TYPES[0/*bool*/], uPtr(_apply)->Invoke(1, obj));
}

// public UxTemplate New(Uno.Func<object, object> matches, Uno.Func<object, object> applyMethod) [static] :94
UxTemplate* UxTemplate::New1(uDelegate* matches, uDelegate* applyMethod)
{
    UxTemplate* obj1 = (UxTemplate*)uNew(UxTemplate_typeof());
    obj1->ctor_(matches, applyMethod);
    return obj1;
}
// }

}}}} // ::g::Outracks::Simulator::Runtime
