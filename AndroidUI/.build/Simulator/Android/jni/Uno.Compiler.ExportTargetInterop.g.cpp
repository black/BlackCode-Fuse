// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.Compiler.ExportTargetInterop.DontCopyStructAttribute.h>
#include <Uno.Compiler.ExportTargetInterop.DontExportAttribute.h>
#include <Uno.Compiler.ExportTargetInterop.OptionalAttribute.h>
#include <Uno.Compiler.ExportTargetInterop.StaticAttribute.h>
#include <Uno.Compiler.ExportTargetInterop.TargetSpecificImplementationAttribute.h>
#include <Uno.Compiler.ExportTargetInterop.TargetSpecificTypeAttribute.h>

namespace g{
namespace Uno{
namespace Compiler{
namespace ExportTargetInterop{

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\Compiler\ExportTargetInterop\$.uno(6)
// -------------------------------------------------------------------------------------------

// public sealed class DontCopyStructAttribute :6
// {
uType* DontCopyStructAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(DontCopyStructAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Compiler.ExportTargetInterop.DontCopyStructAttribute", options);
    type->SetBase(::g::Uno::Attribute_typeof());
    type->fp_ctor_ = (void*)DontCopyStructAttribute__New1_fn;
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)DontCopyStructAttribute__New1_fn, 0, true, DontCopyStructAttribute_typeof(), 0));
    return type;
}

// public generated DontCopyStructAttribute() :6
void DontCopyStructAttribute__ctor_1_fn(DontCopyStructAttribute* __this)
{
    __this->ctor_1();
}

// public generated DontCopyStructAttribute New() :6
void DontCopyStructAttribute__New1_fn(DontCopyStructAttribute** __retval)
{
    *__retval = DontCopyStructAttribute::New1();
}

// public generated DontCopyStructAttribute() [instance] :6
void DontCopyStructAttribute::ctor_1()
{
    ctor_();
}

// public generated DontCopyStructAttribute New() [static] :6
DontCopyStructAttribute* DontCopyStructAttribute::New1()
{
    DontCopyStructAttribute* obj1 = (DontCopyStructAttribute*)uNew(DontCopyStructAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\Compiler\ExportTargetInterop\$.uno(16)
// --------------------------------------------------------------------------------------------

// public sealed class DontExportAttribute :16
// {
uType* DontExportAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(DontExportAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Compiler.ExportTargetInterop.DontExportAttribute", options);
    type->SetBase(::g::Uno::Attribute_typeof());
    type->fp_ctor_ = (void*)DontExportAttribute__New1_fn;
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)DontExportAttribute__New1_fn, 0, true, DontExportAttribute_typeof(), 0));
    return type;
}

// public generated DontExportAttribute() :16
void DontExportAttribute__ctor_1_fn(DontExportAttribute* __this)
{
    __this->ctor_1();
}

// public generated DontExportAttribute New() :16
void DontExportAttribute__New1_fn(DontExportAttribute** __retval)
{
    *__retval = DontExportAttribute::New1();
}

// public generated DontExportAttribute() [instance] :16
void DontExportAttribute::ctor_1()
{
    ctor_();
}

// public generated DontExportAttribute New() [static] :16
DontExportAttribute* DontExportAttribute::New1()
{
    DontExportAttribute* obj1 = (DontExportAttribute*)uNew(DontExportAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\Compiler\ExportTargetInterop\$.uno(111)
// ---------------------------------------------------------------------------------------------

// public sealed class OptionalAttribute :111
// {
uType* OptionalAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(OptionalAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Compiler.ExportTargetInterop.OptionalAttribute", options);
    type->SetBase(::g::Uno::Attribute_typeof());
    type->fp_ctor_ = (void*)OptionalAttribute__New1_fn;
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)OptionalAttribute__New1_fn, 0, true, OptionalAttribute_typeof(), 0));
    return type;
}

// public generated OptionalAttribute() :111
void OptionalAttribute__ctor_1_fn(OptionalAttribute* __this)
{
    __this->ctor_1();
}

// public generated OptionalAttribute New() :111
void OptionalAttribute__New1_fn(OptionalAttribute** __retval)
{
    *__retval = OptionalAttribute::New1();
}

// public generated OptionalAttribute() [instance] :111
void OptionalAttribute::ctor_1()
{
    ctor_();
}

// public generated OptionalAttribute New() [static] :111
OptionalAttribute* OptionalAttribute::New1()
{
    OptionalAttribute* obj1 = (OptionalAttribute*)uNew(OptionalAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\Compiler\ExportTargetInterop\$.uno(121)
// ---------------------------------------------------------------------------------------------

// public sealed class StaticAttribute :121
// {
uType* StaticAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(StaticAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Compiler.ExportTargetInterop.StaticAttribute", options);
    type->SetBase(::g::Uno::Attribute_typeof());
    type->fp_ctor_ = (void*)StaticAttribute__New1_fn;
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)StaticAttribute__New1_fn, 0, true, StaticAttribute_typeof(), 0));
    return type;
}

// public generated StaticAttribute() :121
void StaticAttribute__ctor_1_fn(StaticAttribute* __this)
{
    __this->ctor_1();
}

// public generated StaticAttribute New() :121
void StaticAttribute__New1_fn(StaticAttribute** __retval)
{
    *__retval = StaticAttribute::New1();
}

// public generated StaticAttribute() [instance] :121
void StaticAttribute::ctor_1()
{
    ctor_();
}

// public generated StaticAttribute New() [static] :121
StaticAttribute* StaticAttribute::New1()
{
    StaticAttribute* obj1 = (StaticAttribute*)uNew(StaticAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\Compiler\ExportTargetInterop\$.uno(131)
// ---------------------------------------------------------------------------------------------

// public sealed class TargetSpecificImplementationAttribute :131
// {
uType* TargetSpecificImplementationAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(TargetSpecificImplementationAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Compiler.ExportTargetInterop.TargetSpecificImplementationAttribute", options);
    type->SetBase(::g::Uno::Attribute_typeof());
    type->fp_ctor_ = (void*)TargetSpecificImplementationAttribute__New1_fn;
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)TargetSpecificImplementationAttribute__New1_fn, 0, true, TargetSpecificImplementationAttribute_typeof(), 0));
    return type;
}

// public generated TargetSpecificImplementationAttribute() :131
void TargetSpecificImplementationAttribute__ctor_1_fn(TargetSpecificImplementationAttribute* __this)
{
    __this->ctor_1();
}

// public generated TargetSpecificImplementationAttribute New() :131
void TargetSpecificImplementationAttribute__New1_fn(TargetSpecificImplementationAttribute** __retval)
{
    *__retval = TargetSpecificImplementationAttribute::New1();
}

// public generated TargetSpecificImplementationAttribute() [instance] :131
void TargetSpecificImplementationAttribute::ctor_1()
{
    ctor_();
}

// public generated TargetSpecificImplementationAttribute New() [static] :131
TargetSpecificImplementationAttribute* TargetSpecificImplementationAttribute::New1()
{
    TargetSpecificImplementationAttribute* obj1 = (TargetSpecificImplementationAttribute*)uNew(TargetSpecificImplementationAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\Compiler\ExportTargetInterop\$.uno(141)
// ---------------------------------------------------------------------------------------------

// public sealed class TargetSpecificTypeAttribute :141
// {
uType* TargetSpecificTypeAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(TargetSpecificTypeAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Compiler.ExportTargetInterop.TargetSpecificTypeAttribute", options);
    type->SetBase(::g::Uno::Attribute_typeof());
    type->fp_ctor_ = (void*)TargetSpecificTypeAttribute__New1_fn;
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)TargetSpecificTypeAttribute__New1_fn, 0, true, TargetSpecificTypeAttribute_typeof(), 0));
    return type;
}

// public generated TargetSpecificTypeAttribute() :141
void TargetSpecificTypeAttribute__ctor_1_fn(TargetSpecificTypeAttribute* __this)
{
    __this->ctor_1();
}

// public generated TargetSpecificTypeAttribute New() :141
void TargetSpecificTypeAttribute__New1_fn(TargetSpecificTypeAttribute** __retval)
{
    *__retval = TargetSpecificTypeAttribute::New1();
}

// public generated TargetSpecificTypeAttribute() [instance] :141
void TargetSpecificTypeAttribute::ctor_1()
{
    ctor_();
}

// public generated TargetSpecificTypeAttribute New() [static] :141
TargetSpecificTypeAttribute* TargetSpecificTypeAttribute::New1()
{
    TargetSpecificTypeAttribute* obj1 = (TargetSpecificTypeAttribute*)uNew(TargetSpecificTypeAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

}}}} // ::g::Uno::Compiler::ExportTargetInterop
