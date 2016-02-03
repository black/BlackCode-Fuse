#include <app/Fuse.Controls.PropertyBinding__bool.h>
#include <app/Fuse.Controls.PropertyBinding__string.h>
#include <app/Fuse.Node.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Object.h>
#include <app/Uno.String.h>
#include <app/Uno.UX.Property__bool.h>
#include <app/Uno.UX.Property__string.h>
#include <app/Uno.UX.ValueChangedArgs__bool.h>
#include <app/Uno.UX.ValueChangedArgs__string.h>
#include <app/Uno.UX.ValueChangedHandler__bool.h>
#include <app/Uno.UX.ValueChangedHandler__string.h>

namespace app {
namespace Fuse {
namespace Controls {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PropertyBinding__bool__uType* PropertyBinding__bool__typeof()
{
    static ::uStaticStrong<PropertyBinding__bool__uType*> type;
    if (type != NULL) return type;

    type = (PropertyBinding__bool__uType*)::uAllocClassType(sizeof(PropertyBinding__bool__uType), "Fuse.Controls.PropertyBinding<bool>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Behavior__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))PropertyBinding__bool__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))PropertyBinding__bool__OnUnrooted;

    type->SetStrongRefs(
        "_Source", offsetof(PropertyBinding__bool, _Source),
        "_Target", offsetof(PropertyBinding__bool, _Target));

    type->SetFunctions(5,
        ::uNewFunction("get_Source", PropertyBinding__bool__get_Source, 0, false, ::app::Uno::UX::Property__bool__typeof()),
        ::uNewFunction("get_Target", PropertyBinding__bool__get_Target, 0, false, ::app::Uno::UX::Property__bool__typeof()),
        ::uNewFunction(".ctor", PropertyBinding__bool__New_1, 0, true, PropertyBinding__bool__typeof(), ::app::Uno::UX::Property__bool__typeof(), ::app::Uno::UX::Property__bool__typeof()),
        ::uNewFunctionVoid("set_Source", PropertyBinding__bool__set_Source, 0, false, ::app::Uno::UX::Property__bool__typeof()),
        ::uNewFunctionVoid("set_Target", PropertyBinding__bool__set_Target, 0, false, ::app::Uno::UX::Property__bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void PropertyBinding__bool___ObjInit_1(PropertyBinding__bool* __this, ::app::Uno::UX::Property__bool* target, ::app::Uno::UX::Property__bool* source)
{
    ::app::Fuse::Behavior___ObjInit(__this);
    __this->Target(target);
    __this->Source(source);
}

::app::Uno::UX::Property__bool* PropertyBinding__bool__get_Source(PropertyBinding__bool* __this)
{
    return __this->_Source;
}

::app::Uno::UX::Property__bool* PropertyBinding__bool__get_Target(PropertyBinding__bool* __this)
{
    return __this->_Target;
}

PropertyBinding__bool* PropertyBinding__bool__New_1(::uStatic* __this, ::app::Uno::UX::Property__bool* target, ::app::Uno::UX::Property__bool* source)
{
    PropertyBinding__bool* inst = (PropertyBinding__bool*)::uAllocObject(sizeof(PropertyBinding__bool), PropertyBinding__bool__typeof());
    inst->_ObjInit_1(target, source);
    return inst;
}

void PropertyBinding__bool__OnRooted(PropertyBinding__bool* __this, ::app::Fuse::Node* n)
{
    ::uPtr< ::app::Uno::UX::Property__bool*>(__this->Source())->add_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__bool__typeof(), (const void*)PropertyBinding__bool__OnValueChanged, __this));
    ::uPtr< ::app::Uno::UX::Property__bool*>(__this->Target())->SetRestState(::uPtr< ::app::Uno::UX::Property__bool*>(__this->Source())->Get(), (::uObject*)__this);
}

void PropertyBinding__bool__OnUnrooted(PropertyBinding__bool* __this, ::app::Fuse::Node* n)
{
    ::uPtr< ::app::Uno::UX::Property__bool*>(__this->Source())->remove_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__bool__typeof(), (const void*)PropertyBinding__bool__OnValueChanged, __this));
}

void PropertyBinding__bool__OnValueChanged(PropertyBinding__bool* __this, ::uObject* s, ::app::Uno::UX::ValueChangedArgs__bool* args)
{
    ::uPtr< ::app::Uno::UX::Property__bool*>(__this->Target())->SetRestState(::uPtr< ::app::Uno::UX::ValueChangedArgs__bool*>(args)->Value(), (::uObject*)__this);
}

void PropertyBinding__bool__set_Source(PropertyBinding__bool* __this, ::app::Uno::UX::Property__bool* value)
{
    __this->_Source = value;
}

void PropertyBinding__bool__set_Target(PropertyBinding__bool* __this, ::app::Uno::UX::Property__bool* value)
{
    __this->_Target = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PropertyBinding__string__uType* PropertyBinding__string__typeof()
{
    static ::uStaticStrong<PropertyBinding__string__uType*> type;
    if (type != NULL) return type;

    type = (PropertyBinding__string__uType*)::uAllocClassType(sizeof(PropertyBinding__string__uType), "Fuse.Controls.PropertyBinding<string>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Behavior__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))PropertyBinding__string__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))PropertyBinding__string__OnUnrooted;

    type->SetStrongRefs(
        "_Source", offsetof(PropertyBinding__string, _Source),
        "_Target", offsetof(PropertyBinding__string, _Target));

    type->SetFunctions(5,
        ::uNewFunction("get_Source", PropertyBinding__string__get_Source, 0, false, ::app::Uno::UX::Property__string__typeof()),
        ::uNewFunction("get_Target", PropertyBinding__string__get_Target, 0, false, ::app::Uno::UX::Property__string__typeof()),
        ::uNewFunction(".ctor", PropertyBinding__string__New_1, 0, true, PropertyBinding__string__typeof(), ::app::Uno::UX::Property__string__typeof(), ::app::Uno::UX::Property__string__typeof()),
        ::uNewFunctionVoid("set_Source", PropertyBinding__string__set_Source, 0, false, ::app::Uno::UX::Property__string__typeof()),
        ::uNewFunctionVoid("set_Target", PropertyBinding__string__set_Target, 0, false, ::app::Uno::UX::Property__string__typeof()));

    ::uRegisterType(type);
    return type;
}

void PropertyBinding__string___ObjInit_1(PropertyBinding__string* __this, ::app::Uno::UX::Property__string* target, ::app::Uno::UX::Property__string* source)
{
    ::app::Fuse::Behavior___ObjInit(__this);
    __this->Target(target);
    __this->Source(source);
}

::app::Uno::UX::Property__string* PropertyBinding__string__get_Source(PropertyBinding__string* __this)
{
    return __this->_Source;
}

::app::Uno::UX::Property__string* PropertyBinding__string__get_Target(PropertyBinding__string* __this)
{
    return __this->_Target;
}

PropertyBinding__string* PropertyBinding__string__New_1(::uStatic* __this, ::app::Uno::UX::Property__string* target, ::app::Uno::UX::Property__string* source)
{
    PropertyBinding__string* inst = (PropertyBinding__string*)::uAllocObject(sizeof(PropertyBinding__string), PropertyBinding__string__typeof());
    inst->_ObjInit_1(target, source);
    return inst;
}

void PropertyBinding__string__OnRooted(PropertyBinding__string* __this, ::app::Fuse::Node* n)
{
    ::uPtr< ::app::Uno::UX::Property__string*>(__this->Source())->add_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__string__typeof(), (const void*)PropertyBinding__string__OnValueChanged, __this));
    ::uPtr< ::app::Uno::UX::Property__string*>(__this->Target())->SetRestState(::uPtr< ::app::Uno::UX::Property__string*>(__this->Source())->Get(), (::uObject*)__this);
}

void PropertyBinding__string__OnUnrooted(PropertyBinding__string* __this, ::app::Fuse::Node* n)
{
    ::uPtr< ::app::Uno::UX::Property__string*>(__this->Source())->remove_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__string__typeof(), (const void*)PropertyBinding__string__OnValueChanged, __this));
}

void PropertyBinding__string__OnValueChanged(PropertyBinding__string* __this, ::uObject* s, ::app::Uno::UX::ValueChangedArgs__string* args)
{
    ::uPtr< ::app::Uno::UX::Property__string*>(__this->Target())->SetRestState(::uPtr< ::app::Uno::UX::ValueChangedArgs__string*>(args)->Value(), (::uObject*)__this);
}

void PropertyBinding__string__set_Source(PropertyBinding__string* __this, ::app::Uno::UX::Property__string* value)
{
    __this->_Source = value;
}

void PropertyBinding__string__set_Target(PropertyBinding__string* __this, ::app::Uno::UX::Property__string* value)
{
    __this->_Target = value;
}

}}}
