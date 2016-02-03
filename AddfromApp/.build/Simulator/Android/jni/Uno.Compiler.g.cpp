// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.Compiler.CallerFilePathAttribute.h>
#include <Uno.Compiler.CallerLineNumberAttribute.h>
#include <Uno.Compiler.CallerMemberNameAttribute.h>
#include <Uno.Compiler.HideFromCodeCompleterAttribute.h>
#include <Uno.Compiler.IgnoreMainClassAttribute.h>
#include <Uno.Compiler.MainClassAttribute.h>
#include <Uno.Compiler.UxGeneratedAttribute.h>

namespace g{
namespace Uno{
namespace Compiler{

// C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Source\Uno\Compiler\$.uno(9)
// -----------------------------------------------------------------------

// public sealed class CallerFilePathAttribute :9
// {
uType* CallerFilePathAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(CallerFilePathAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Compiler.CallerFilePathAttribute", options);
    type->SetBase(::g::Uno::Attribute_typeof());
    type->fp_ctor_ = (void*)CallerFilePathAttribute__New1_fn;
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)CallerFilePathAttribute__New1_fn, 0, true, CallerFilePathAttribute_typeof(), 0));
    return type;
}

// public generated CallerFilePathAttribute() :9
void CallerFilePathAttribute__ctor_1_fn(CallerFilePathAttribute* __this)
{
    __this->ctor_1();
}

// public generated CallerFilePathAttribute New() :9
void CallerFilePathAttribute__New1_fn(CallerFilePathAttribute** __retval)
{
    *__retval = CallerFilePathAttribute::New1();
}

// public generated CallerFilePathAttribute() [instance] :9
void CallerFilePathAttribute::ctor_1()
{
    ctor_();
}

// public generated CallerFilePathAttribute New() [static] :9
CallerFilePathAttribute* CallerFilePathAttribute::New1()
{
    CallerFilePathAttribute* obj1 = (CallerFilePathAttribute*)uNew(CallerFilePathAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Source\Uno\Compiler\$.uno(22)
// ------------------------------------------------------------------------

// public sealed class CallerLineNumberAttribute :22
// {
uType* CallerLineNumberAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(CallerLineNumberAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Compiler.CallerLineNumberAttribute", options);
    type->SetBase(::g::Uno::Attribute_typeof());
    type->fp_ctor_ = (void*)CallerLineNumberAttribute__New1_fn;
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)CallerLineNumberAttribute__New1_fn, 0, true, CallerLineNumberAttribute_typeof(), 0));
    return type;
}

// public generated CallerLineNumberAttribute() :22
void CallerLineNumberAttribute__ctor_1_fn(CallerLineNumberAttribute* __this)
{
    __this->ctor_1();
}

// public generated CallerLineNumberAttribute New() :22
void CallerLineNumberAttribute__New1_fn(CallerLineNumberAttribute** __retval)
{
    *__retval = CallerLineNumberAttribute::New1();
}

// public generated CallerLineNumberAttribute() [instance] :22
void CallerLineNumberAttribute::ctor_1()
{
    ctor_();
}

// public generated CallerLineNumberAttribute New() [static] :22
CallerLineNumberAttribute* CallerLineNumberAttribute::New1()
{
    CallerLineNumberAttribute* obj1 = (CallerLineNumberAttribute*)uNew(CallerLineNumberAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Source\Uno\Compiler\$.uno(35)
// ------------------------------------------------------------------------

// public sealed class CallerMemberNameAttribute :35
// {
uType* CallerMemberNameAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(CallerMemberNameAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Compiler.CallerMemberNameAttribute", options);
    type->SetBase(::g::Uno::Attribute_typeof());
    type->fp_ctor_ = (void*)CallerMemberNameAttribute__New1_fn;
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)CallerMemberNameAttribute__New1_fn, 0, true, CallerMemberNameAttribute_typeof(), 0));
    return type;
}

// public generated CallerMemberNameAttribute() :35
void CallerMemberNameAttribute__ctor_1_fn(CallerMemberNameAttribute* __this)
{
    __this->ctor_1();
}

// public generated CallerMemberNameAttribute New() :35
void CallerMemberNameAttribute__New1_fn(CallerMemberNameAttribute** __retval)
{
    *__retval = CallerMemberNameAttribute::New1();
}

// public generated CallerMemberNameAttribute() [instance] :35
void CallerMemberNameAttribute::ctor_1()
{
    ctor_();
}

// public generated CallerMemberNameAttribute New() [static] :35
CallerMemberNameAttribute* CallerMemberNameAttribute::New1()
{
    CallerMemberNameAttribute* obj1 = (CallerMemberNameAttribute*)uNew(CallerMemberNameAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Source\Uno\Compiler\$.uno(60)
// ------------------------------------------------------------------------

// public sealed class HideFromCodeCompleterAttribute :60
// {
uType* HideFromCodeCompleterAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(HideFromCodeCompleterAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Compiler.HideFromCodeCompleterAttribute", options);
    type->SetBase(::g::Uno::Attribute_typeof());
    type->fp_ctor_ = (void*)HideFromCodeCompleterAttribute__New1_fn;
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)HideFromCodeCompleterAttribute__New1_fn, 0, true, HideFromCodeCompleterAttribute_typeof(), 0));
    return type;
}

// public generated HideFromCodeCompleterAttribute() :60
void HideFromCodeCompleterAttribute__ctor_1_fn(HideFromCodeCompleterAttribute* __this)
{
    __this->ctor_1();
}

// public generated HideFromCodeCompleterAttribute New() :60
void HideFromCodeCompleterAttribute__New1_fn(HideFromCodeCompleterAttribute** __retval)
{
    *__retval = HideFromCodeCompleterAttribute::New1();
}

// public generated HideFromCodeCompleterAttribute() [instance] :60
void HideFromCodeCompleterAttribute::ctor_1()
{
    ctor_();
}

// public generated HideFromCodeCompleterAttribute New() [static] :60
HideFromCodeCompleterAttribute* HideFromCodeCompleterAttribute::New1()
{
    HideFromCodeCompleterAttribute* obj1 = (HideFromCodeCompleterAttribute*)uNew(HideFromCodeCompleterAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Source\Uno\Compiler\$.uno(70)
// ------------------------------------------------------------------------

// public sealed class IgnoreMainClassAttribute :70
// {
uType* IgnoreMainClassAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(IgnoreMainClassAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Compiler.IgnoreMainClassAttribute", options);
    type->SetBase(::g::Uno::Attribute_typeof());
    type->fp_ctor_ = (void*)IgnoreMainClassAttribute__New1_fn;
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)IgnoreMainClassAttribute__New1_fn, 0, true, IgnoreMainClassAttribute_typeof(), 0));
    return type;
}

// public generated IgnoreMainClassAttribute() :70
void IgnoreMainClassAttribute__ctor_1_fn(IgnoreMainClassAttribute* __this)
{
    __this->ctor_1();
}

// public generated IgnoreMainClassAttribute New() :70
void IgnoreMainClassAttribute__New1_fn(IgnoreMainClassAttribute** __retval)
{
    *__retval = IgnoreMainClassAttribute::New1();
}

// public generated IgnoreMainClassAttribute() [instance] :70
void IgnoreMainClassAttribute::ctor_1()
{
    ctor_();
}

// public generated IgnoreMainClassAttribute New() [static] :70
IgnoreMainClassAttribute* IgnoreMainClassAttribute::New1()
{
    IgnoreMainClassAttribute* obj1 = (IgnoreMainClassAttribute*)uNew(IgnoreMainClassAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Source\Uno\Compiler\$.uno(80)
// ------------------------------------------------------------------------

// public sealed class MainClassAttribute :80
// {
uType* MainClassAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(MainClassAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Compiler.MainClassAttribute", options);
    type->SetBase(::g::Uno::Attribute_typeof());
    type->fp_ctor_ = (void*)MainClassAttribute__New1_fn;
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MainClassAttribute__New1_fn, 0, true, MainClassAttribute_typeof(), 0));
    return type;
}

// public generated MainClassAttribute() :80
void MainClassAttribute__ctor_1_fn(MainClassAttribute* __this)
{
    __this->ctor_1();
}

// public generated MainClassAttribute New() :80
void MainClassAttribute__New1_fn(MainClassAttribute** __retval)
{
    *__retval = MainClassAttribute::New1();
}

// public generated MainClassAttribute() [instance] :80
void MainClassAttribute::ctor_1()
{
    ctor_();
}

// public generated MainClassAttribute New() [static] :80
MainClassAttribute* MainClassAttribute::New1()
{
    MainClassAttribute* obj1 = (MainClassAttribute*)uNew(MainClassAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Source\Uno\Compiler\$.uno(90)
// ------------------------------------------------------------------------

// public sealed class UxGeneratedAttribute :90
// {
uType* UxGeneratedAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(UxGeneratedAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Compiler.UxGeneratedAttribute", options);
    type->SetBase(::g::Uno::Attribute_typeof());
    type->fp_ctor_ = (void*)UxGeneratedAttribute__New1_fn;
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)UxGeneratedAttribute__New1_fn, 0, true, UxGeneratedAttribute_typeof(), 0));
    return type;
}

// public generated UxGeneratedAttribute() :90
void UxGeneratedAttribute__ctor_1_fn(UxGeneratedAttribute* __this)
{
    __this->ctor_1();
}

// public generated UxGeneratedAttribute New() :90
void UxGeneratedAttribute__New1_fn(UxGeneratedAttribute** __retval)
{
    *__retval = UxGeneratedAttribute::New1();
}

// public generated UxGeneratedAttribute() [instance] :90
void UxGeneratedAttribute::ctor_1()
{
    ctor_();
}

// public generated UxGeneratedAttribute New() [static] :90
UxGeneratedAttribute* UxGeneratedAttribute::New1()
{
    UxGeneratedAttribute* obj1 = (UxGeneratedAttribute*)uNew(UxGeneratedAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

}}} // ::g::Uno::Compiler
