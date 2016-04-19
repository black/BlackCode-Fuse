// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Scripting.BoolChangedArgs.h>
#include <Fuse.Scripting.DoubleChangedArgs.h>
#include <Fuse.Scripting.INameListener.h>
#include <Fuse.Scripting.NameRegistry.h>
#include <Fuse.Scripting.StringChangedArgs.h>
#include <Uno.Bool.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
static uType* TYPES[3];

namespace g{
namespace Fuse{
namespace Scripting{

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Scripting\$.uno(132)
// ----------------------------------------------------------------

// public sealed class BoolChangedArgs :132
// {
uType* BoolChangedArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(BoolChangedArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.BoolChangedArgs", options);
    type->SetBase(::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(::g::Uno::Bool_typeof()));
    type->SetFields(2);
    return type;
}

// public BoolChangedArgs(bool value, object origin) :134
void BoolChangedArgs__ctor_2_fn(BoolChangedArgs* __this, bool* value, uObject* origin)
{
    __this->ctor_2(*value, origin);
}

// public BoolChangedArgs New(bool value, object origin) :134
void BoolChangedArgs__New3_fn(bool* value, uObject* origin, BoolChangedArgs** __retval)
{
    *__retval = BoolChangedArgs::New3(*value, origin);
}

// public BoolChangedArgs(bool value, object origin) [instance] :134
void BoolChangedArgs::ctor_2(bool value, uObject* origin)
{
    ::g::Uno::UX::ValueChangedArgs__ctor_1_fn(this, uCRef(value), origin);
}

// public BoolChangedArgs New(bool value, object origin) [static] :134
BoolChangedArgs* BoolChangedArgs::New3(bool value, uObject* origin)
{
    BoolChangedArgs* obj1 = (BoolChangedArgs*)uNew(BoolChangedArgs_typeof());
    obj1->ctor_2(value, origin);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Scripting\$.uno(120)
// ----------------------------------------------------------------

// public sealed class DoubleChangedArgs :120
// {
uType* DoubleChangedArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(DoubleChangedArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.DoubleChangedArgs", options);
    type->SetBase(::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(::g::Uno::Double_typeof()));
    type->SetFields(2);
    return type;
}

// public DoubleChangedArgs(double value, object origin) :122
void DoubleChangedArgs__ctor_2_fn(DoubleChangedArgs* __this, double* value, uObject* origin)
{
    __this->ctor_2(*value, origin);
}

// public DoubleChangedArgs New(double value, object origin) :122
void DoubleChangedArgs__New3_fn(double* value, uObject* origin, DoubleChangedArgs** __retval)
{
    *__retval = DoubleChangedArgs::New3(*value, origin);
}

// public DoubleChangedArgs(double value, object origin) [instance] :122
void DoubleChangedArgs::ctor_2(double value, uObject* origin)
{
    ::g::Uno::UX::ValueChangedArgs__ctor_1_fn(this, uCRef(value), origin);
}

// public DoubleChangedArgs New(double value, object origin) [static] :122
DoubleChangedArgs* DoubleChangedArgs::New3(double value, uObject* origin)
{
    DoubleChangedArgs* obj1 = (DoubleChangedArgs*)uNew(DoubleChangedArgs_typeof());
    obj1->ctor_2(value, origin);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Scripting\$.uno(13)
// ---------------------------------------------------------------

// public abstract interface INameListener :13
// {
uInterfaceType* INameListener_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Scripting.INameListener", 0, 0);
    return type;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Scripting\$.uno(18)
// ---------------------------------------------------------------

// public static class NameRegistry :18
// {
// static NameRegistry() :18
static void NameRegistry__cctor__fn(uType* __type)
{
    NameRegistry::_names_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[0/*Uno.Collections.Dictionary<object, string>*/]));
    NameRegistry::_listeners_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[1/*Uno.Collections.Dictionary<string, Uno.Collections.List<Fuse.Scripting.INameListener>>*/]));
}

uClassType* NameRegistry_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Scripting.NameRegistry", options);
    type->fp_cctor_ = NameRegistry__cctor__fn;
    ::TYPES[0] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(uObject_typeof(), ::g::Uno::String_typeof());
    ::TYPES[1] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Scripting::INameListener_typeof()));
    ::TYPES[2] = ::g::Fuse::Scripting::INameListener_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Scripting::INameListener_typeof())), (uintptr_t)&::g::Fuse::Scripting::NameRegistry::_listeners_, uFieldFlagsStatic,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(uObject_typeof(), ::g::Uno::String_typeof()), (uintptr_t)&::g::Fuse::Scripting::NameRegistry::_names_, uFieldFlagsStatic);
    return type;
}

// public static void ClearName(object obj) :45
void NameRegistry__ClearName_fn(uObject* obj)
{
    NameRegistry::ClearName(obj);
}

// private static void NotifyNameChanged(object obj, string name) :79
void NameRegistry__NotifyNameChanged_fn(uObject* obj, uString* name)
{
    NameRegistry::NotifyNameChanged(obj, name);
}

// public static void SetName(object obj, string name) :22
void NameRegistry__SetName_fn(uObject* obj, uString* name)
{
    NameRegistry::SetName(obj, name);
}

uSStrong< ::g::Uno::Collections::Dictionary*> NameRegistry::_listeners_;
uSStrong< ::g::Uno::Collections::Dictionary*> NameRegistry::_names_;

// public static void ClearName(object obj) [static] :45
void NameRegistry::ClearName(uObject* obj)
{
    NameRegistry_typeof()->Init();
    bool ret9;
    uString* ret10;
    bool ret11;

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(NameRegistry::_names()), obj, &ret9), ret9))
    {
        uString* name = (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(NameRegistry::_names()), obj, &ret10), ret10);
        ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(NameRegistry::_names()), obj, &ret11);
        NameRegistry::NotifyNameChanged(obj, name);
    }
}

// private static void NotifyNameChanged(object obj, string name) [static] :79
void NameRegistry::NotifyNameChanged(uObject* obj, uString* name)
{
    NameRegistry_typeof()->Init();
    uArray* array2;
    int index3;
    int length4;
    bool ret14;
    ::g::Uno::Collections::List* ret15;

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(NameRegistry::_listeners()), name, &ret14), ret14))

        for (array2 = (uArray*)uPtr((::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(NameRegistry::_listeners()), name, &ret15), ret15))->ToArray(), index3 = 0, length4 = uPtr(array2)->Length(); index3 < length4; ++index3)
        {
            uObject* listener = uPtr(array2)->Strong<uObject*>(index3);
            ::g::Fuse::Scripting::INameListener::OnNameChanged(uInterface(uPtr(listener), ::g::Fuse::Scripting::INameListener_typeof()), obj, name);
        }
}

// public static void SetName(object obj, string name) [static] :22
void NameRegistry::SetName(uObject* obj, uString* name)
{
    NameRegistry_typeof()->Init();
    bool ret19;
    uString* ret20;
    uString* oldName = NULL;

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(NameRegistry::_names()), obj, &ret19), ret19))
        oldName = (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(NameRegistry::_names()), obj, &ret20), ret20);

    if (::g::Uno::String::op_Inequality(name, oldName))
    {
        if (::g::Uno::String::op_Equality(name, NULL))
            NameRegistry::ClearName(obj);
        else
        {
            ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(NameRegistry::_names()), obj, name);
            NameRegistry::NotifyNameChanged(obj, name);

            if (::g::Uno::String::op_Inequality(oldName, NULL))
                NameRegistry::NotifyNameChanged(obj, oldName);
        }
    }
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Scripting\$.uno(110)
// ----------------------------------------------------------------

// public sealed class StringChangedArgs :110
// {
uType* StringChangedArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(StringChangedArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.StringChangedArgs", options);
    type->SetBase(::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(::g::Uno::String_typeof()));
    type->SetFields(2);
    return type;
}

// public StringChangedArgs(string newValue, object origin) :112
void StringChangedArgs__ctor_2_fn(StringChangedArgs* __this, uString* newValue, uObject* origin)
{
    __this->ctor_2(newValue, origin);
}

// public StringChangedArgs New(string newValue, object origin) :112
void StringChangedArgs__New3_fn(uString* newValue, uObject* origin, StringChangedArgs** __retval)
{
    *__retval = StringChangedArgs::New3(newValue, origin);
}

// public StringChangedArgs(string newValue, object origin) [instance] :112
void StringChangedArgs::ctor_2(uString* newValue, uObject* origin)
{
    ::g::Uno::UX::ValueChangedArgs__ctor_1_fn(this, newValue, origin);
}

// public StringChangedArgs New(string newValue, object origin) [static] :112
StringChangedArgs* StringChangedArgs::New3(uString* newValue, uObject* origin)
{
    StringChangedArgs* obj1 = (StringChangedArgs*)uNew(StringChangedArgs_typeof());
    obj1->ctor_2(newValue, origin);
    return obj1;
}
// }

}}} // ::g::Fuse::Scripting
