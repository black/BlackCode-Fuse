#include <app/Uno.Compiler.CallerFilePathAttribute.h>
#include <app/Uno.Compiler.CallerLineNumberAttribute.h>
#include <app/Uno.Compiler.CallerMemberNameAttribute.h>
#include <app/Uno.Compiler.FeatureLevelAttribute.h>
#include <app/Uno.Compiler.HideFromCodeCompleterAttribute.h>
#include <app/Uno.Compiler.IgnoreMainClassAttribute.h>
#include <app/Uno.Compiler.MainClassAttribute.h>
#include <app/Uno.Compiler.UxGeneratedAttribute.h>
#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Compiler {

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Compiler\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

CallerFilePathAttribute__uType* CallerFilePathAttribute__typeof()
{
    static ::uStaticStrong<CallerFilePathAttribute__uType*> type;
    if (type != NULL) return type;

    type = (CallerFilePathAttribute__uType*)::uAllocClassType(sizeof(CallerFilePathAttribute__uType), "Uno.Compiler.CallerFilePathAttribute", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    type->SetFunctions(1,
        ::uNewFunction(".ctor", CallerFilePathAttribute__New_1, 0, true, CallerFilePathAttribute__typeof()));

    ::uRegisterType(type);
    return type;
}

void CallerFilePathAttribute___ObjInit_1(CallerFilePathAttribute* __this)
{
    ::app::Uno::Attribute___ObjInit(__this);
}

CallerFilePathAttribute* CallerFilePathAttribute__New_1(::uStatic* __this)
{
    CallerFilePathAttribute* inst = (CallerFilePathAttribute*)::uAllocObject(sizeof(CallerFilePathAttribute), CallerFilePathAttribute__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Compiler\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

CallerLineNumberAttribute__uType* CallerLineNumberAttribute__typeof()
{
    static ::uStaticStrong<CallerLineNumberAttribute__uType*> type;
    if (type != NULL) return type;

    type = (CallerLineNumberAttribute__uType*)::uAllocClassType(sizeof(CallerLineNumberAttribute__uType), "Uno.Compiler.CallerLineNumberAttribute", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    type->SetFunctions(1,
        ::uNewFunction(".ctor", CallerLineNumberAttribute__New_1, 0, true, CallerLineNumberAttribute__typeof()));

    ::uRegisterType(type);
    return type;
}

void CallerLineNumberAttribute___ObjInit_1(CallerLineNumberAttribute* __this)
{
    ::app::Uno::Attribute___ObjInit(__this);
}

CallerLineNumberAttribute* CallerLineNumberAttribute__New_1(::uStatic* __this)
{
    CallerLineNumberAttribute* inst = (CallerLineNumberAttribute*)::uAllocObject(sizeof(CallerLineNumberAttribute), CallerLineNumberAttribute__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Compiler\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

CallerMemberNameAttribute__uType* CallerMemberNameAttribute__typeof()
{
    static ::uStaticStrong<CallerMemberNameAttribute__uType*> type;
    if (type != NULL) return type;

    type = (CallerMemberNameAttribute__uType*)::uAllocClassType(sizeof(CallerMemberNameAttribute__uType), "Uno.Compiler.CallerMemberNameAttribute", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    type->SetFunctions(1,
        ::uNewFunction(".ctor", CallerMemberNameAttribute__New_1, 0, true, CallerMemberNameAttribute__typeof()));

    ::uRegisterType(type);
    return type;
}

void CallerMemberNameAttribute___ObjInit_1(CallerMemberNameAttribute* __this)
{
    ::app::Uno::Attribute___ObjInit(__this);
}

CallerMemberNameAttribute* CallerMemberNameAttribute__New_1(::uStatic* __this)
{
    CallerMemberNameAttribute* inst = (CallerMemberNameAttribute*)::uAllocObject(sizeof(CallerMemberNameAttribute), CallerMemberNameAttribute__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Compiler\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

FeatureLevelAttribute__uType* FeatureLevelAttribute__typeof()
{
    static ::uStaticStrong<FeatureLevelAttribute__uType*> type;
    if (type != NULL) return type;

    type = (FeatureLevelAttribute__uType*)::uAllocClassType(sizeof(FeatureLevelAttribute__uType), "Uno.Compiler.FeatureLevelAttribute", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    type->SetFunctions(3,
        ::uNewFunction("get_Value", FeatureLevelAttribute__get_Value, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction(".ctor", FeatureLevelAttribute__New_1, 0, true, FeatureLevelAttribute__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("set_Value", FeatureLevelAttribute__set_Value, 0, false, ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

void FeatureLevelAttribute___ObjInit_1(FeatureLevelAttribute* __this, int value)
{
    ::app::Uno::Attribute___ObjInit(__this);
    __this->Value(value);
}

int FeatureLevelAttribute__get_Value(FeatureLevelAttribute* __this)
{
    return __this->_Value;
}

FeatureLevelAttribute* FeatureLevelAttribute__New_1(::uStatic* __this, int value)
{
    FeatureLevelAttribute* inst = (FeatureLevelAttribute*)::uAllocObject(sizeof(FeatureLevelAttribute), FeatureLevelAttribute__typeof());
    inst->_ObjInit_1(value);
    return inst;
}

void FeatureLevelAttribute__set_Value(FeatureLevelAttribute* __this, int value)
{
    __this->_Value = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Compiler\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

HideFromCodeCompleterAttribute__uType* HideFromCodeCompleterAttribute__typeof()
{
    static ::uStaticStrong<HideFromCodeCompleterAttribute__uType*> type;
    if (type != NULL) return type;

    type = (HideFromCodeCompleterAttribute__uType*)::uAllocClassType(sizeof(HideFromCodeCompleterAttribute__uType), "Uno.Compiler.HideFromCodeCompleterAttribute", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    type->SetFunctions(1,
        ::uNewFunction(".ctor", HideFromCodeCompleterAttribute__New_1, 0, true, HideFromCodeCompleterAttribute__typeof()));

    ::uRegisterType(type);
    return type;
}

void HideFromCodeCompleterAttribute___ObjInit_1(HideFromCodeCompleterAttribute* __this)
{
    ::app::Uno::Attribute___ObjInit(__this);
}

HideFromCodeCompleterAttribute* HideFromCodeCompleterAttribute__New_1(::uStatic* __this)
{
    HideFromCodeCompleterAttribute* inst = (HideFromCodeCompleterAttribute*)::uAllocObject(sizeof(HideFromCodeCompleterAttribute), HideFromCodeCompleterAttribute__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Compiler\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

IgnoreMainClassAttribute__uType* IgnoreMainClassAttribute__typeof()
{
    static ::uStaticStrong<IgnoreMainClassAttribute__uType*> type;
    if (type != NULL) return type;

    type = (IgnoreMainClassAttribute__uType*)::uAllocClassType(sizeof(IgnoreMainClassAttribute__uType), "Uno.Compiler.IgnoreMainClassAttribute", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    type->SetFunctions(1,
        ::uNewFunction(".ctor", IgnoreMainClassAttribute__New_1, 0, true, IgnoreMainClassAttribute__typeof()));

    ::uRegisterType(type);
    return type;
}

void IgnoreMainClassAttribute___ObjInit_1(IgnoreMainClassAttribute* __this)
{
    ::app::Uno::Attribute___ObjInit(__this);
}

IgnoreMainClassAttribute* IgnoreMainClassAttribute__New_1(::uStatic* __this)
{
    IgnoreMainClassAttribute* inst = (IgnoreMainClassAttribute*)::uAllocObject(sizeof(IgnoreMainClassAttribute), IgnoreMainClassAttribute__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Compiler\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MainClassAttribute__uType* MainClassAttribute__typeof()
{
    static ::uStaticStrong<MainClassAttribute__uType*> type;
    if (type != NULL) return type;

    type = (MainClassAttribute__uType*)::uAllocClassType(sizeof(MainClassAttribute__uType), "Uno.Compiler.MainClassAttribute", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    type->SetFunctions(1,
        ::uNewFunction(".ctor", MainClassAttribute__New_1, 0, true, MainClassAttribute__typeof()));

    ::uRegisterType(type);
    return type;
}

void MainClassAttribute___ObjInit_1(MainClassAttribute* __this)
{
    ::app::Uno::Attribute___ObjInit(__this);
}

MainClassAttribute* MainClassAttribute__New_1(::uStatic* __this)
{
    MainClassAttribute* inst = (MainClassAttribute*)::uAllocObject(sizeof(MainClassAttribute), MainClassAttribute__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Compiler\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UxGeneratedAttribute__uType* UxGeneratedAttribute__typeof()
{
    static ::uStaticStrong<UxGeneratedAttribute__uType*> type;
    if (type != NULL) return type;

    type = (UxGeneratedAttribute__uType*)::uAllocClassType(sizeof(UxGeneratedAttribute__uType), "Uno.Compiler.UxGeneratedAttribute", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    type->SetFunctions(1,
        ::uNewFunction(".ctor", UxGeneratedAttribute__New_1, 0, true, UxGeneratedAttribute__typeof()));

    ::uRegisterType(type);
    return type;
}

void UxGeneratedAttribute___ObjInit_1(UxGeneratedAttribute* __this)
{
    ::app::Uno::Attribute___ObjInit(__this);
}

UxGeneratedAttribute* UxGeneratedAttribute__New_1(::uStatic* __this)
{
    UxGeneratedAttribute* inst = (UxGeneratedAttribute*)::uAllocObject(sizeof(UxGeneratedAttribute), UxGeneratedAttribute__typeof());
    inst->_ObjInit_1();
    return inst;
}

}}}
