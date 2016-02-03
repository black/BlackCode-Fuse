// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\Preamble\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Outracks.Simulator.Runtime.UxFactory.h>
#include <Uno.Func-1.h>
static uType* TYPES[1];

namespace g{
namespace Outracks{
namespace Simulator{
namespace Runtime{

// public sealed class UxFactory :10
// {
UxFactory_type* UxFactory_typeof()
{
    static uSStrong<UxFactory_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(UxFactory);
    options.TypeSize = sizeof(UxFactory_type);
    type = (UxFactory_type*)uClassType::New("Outracks.Simulator.Runtime.UxFactory", options);
    type->interface0.fp_New1 = (void(*)(uObject*, uObject**))UxFactory__New1_fn;
    ::TYPES[0] = ::g::Uno::Func_typeof()->MakeType(uObject_typeof());
    type->SetInterfaces(
        ::g::Uno::UX::IFactory_typeof(), offsetof(UxFactory_type, interface0));
    type->SetFields(0,
        ::g::Uno::Func_typeof()->MakeType(uObject_typeof()), offsetof(::g::Outracks::Simulator::Runtime::UxFactory, _create), 0);
    type->Reflection.SetFunctions(2,
        new uFunction("New", NULL, (void*)UxFactory__New1_fn, 0, false, uObject_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)UxFactory__New2_fn, 0, true, UxFactory_typeof(), 1, ::g::Uno::Func_typeof()->MakeType(uObject_typeof())));
    return type;
}

// public UxFactory(Uno.Func<object> create) :13
void UxFactory__ctor__fn(UxFactory* __this, uDelegate* create)
{
    __this->ctor_(create);
}

// public object New() :19
void UxFactory__New1_fn(UxFactory* __this, uObject** __retval)
{
    *__retval = __this->New1();
}

// public UxFactory New(Uno.Func<object> create) :13
void UxFactory__New2_fn(uDelegate* create, UxFactory** __retval)
{
    *__retval = UxFactory::New2(create);
}

// public UxFactory(Uno.Func<object> create) [instance] :13
void UxFactory::ctor_(uDelegate* create)
{
    _create = create;
}

// public object New() [instance] :19
uObject* UxFactory::New1()
{
    return uPtr(_create)->Invoke();
}

// public UxFactory New(Uno.Func<object> create) [static] :13
UxFactory* UxFactory::New2(uDelegate* create)
{
    UxFactory* obj1 = (UxFactory*)uNew(UxFactory_typeof());
    obj1->ctor_(create);
    return obj1;
}
// }

}}}} // ::g::Outracks::Simulator::Runtime
