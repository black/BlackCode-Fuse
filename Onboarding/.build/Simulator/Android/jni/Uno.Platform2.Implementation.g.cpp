// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.Platform2.Implementation.InvokedFromNativeCodeAttribute.h>

namespace g{
namespace Uno{
namespace Platform2{
namespace Implementation{

// C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Source\Uno\Platform2\Implementation\$.uno(6)
// ---------------------------------------------------------------------------------------

// public sealed class InvokedFromNativeCodeAttribute :6
// {
uType* InvokedFromNativeCodeAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(InvokedFromNativeCodeAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Platform2.Implementation.InvokedFromNativeCodeAttribute", options);
    type->SetBase(::g::Uno::Attribute_typeof());
    type->fp_ctor_ = (void*)InvokedFromNativeCodeAttribute__New1_fn;
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)InvokedFromNativeCodeAttribute__New1_fn, 0, true, InvokedFromNativeCodeAttribute_typeof(), 0));
    return type;
}

// public generated InvokedFromNativeCodeAttribute() :6
void InvokedFromNativeCodeAttribute__ctor_1_fn(InvokedFromNativeCodeAttribute* __this)
{
    __this->ctor_1();
}

// public generated InvokedFromNativeCodeAttribute New() :6
void InvokedFromNativeCodeAttribute__New1_fn(InvokedFromNativeCodeAttribute** __retval)
{
    *__retval = InvokedFromNativeCodeAttribute::New1();
}

// public generated InvokedFromNativeCodeAttribute() [instance] :6
void InvokedFromNativeCodeAttribute::ctor_1()
{
    ctor_();
}

// public generated InvokedFromNativeCodeAttribute New() [static] :6
InvokedFromNativeCodeAttribute* InvokedFromNativeCodeAttribute::New1()
{
    InvokedFromNativeCodeAttribute* obj1 = (InvokedFromNativeCodeAttribute*)uNew(InvokedFromNativeCodeAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

}}}} // ::g::Uno::Platform2::Implementation
