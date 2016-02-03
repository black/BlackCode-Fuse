#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Elements.SizeUnit.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.Properties.h>
#include <app/Fuse.PropertyHandle.h>
#include <app/Fuse.PropertyState.h>
#include <app/Fuse.StyleProperty.h>
#include <app/Fuse.StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_-d8fcbdc5.h>
#include <app/Fuse.StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse-c6472f5a.h>
#include <app/Uno.Action__Fuse_Elements_Element.h>
#include <app/Uno.Action__Fuse_Elements_Element__float.h>
#include <app/Uno.Action__Fuse_Elements_Element__float2.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Float.h>
#include <app/Uno.Func__Fuse_Elements_Element__float.h>
#include <app/Uno.Func__Fuse_Elements_Element__float2.h>
#include <app/Uno.Int.h>
#include <app/Uno.Object.h>

namespace app {
namespace Fuse {

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit__uType* StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit__typeof()
{
    static ::uStaticStrong<StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit__uType*> type;
    if (type != NULL) return type;

    type = (StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit__uType*)::uAllocClassType(sizeof(StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit__uType), "Fuse.StylePropertyWithUnit<Fuse.Elements.Element,float,Fuse.Elements.SizeUnit>", false, 0, 1, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__Fuse_Elements_Element__float__typeof());
    type->__fp_ResetFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit__ResetFor;

    type->SetStrongRefs(
        "_unitHandle", offsetof(StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit, _unitHandle));

    type->SetFields(3,
        ::uNewField("_defaultUnit", NULL, offsetof(StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit, _defaultUnit), ::app::Fuse::Elements::SizeUnit__typeof()),
        ::uNewField("_unitHandle", NULL, offsetof(StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit, _unitHandle), ::app::Fuse::PropertyHandle__typeof()),
        ::uNewField("_unitId", NULL, offsetof(StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit, _unitId), ::app::Uno::Int__typeof()));

    type->SetFunctions(6,
        ::uNewFunction("GetUnit", StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit__GetUnit, 0, false, ::app::Fuse::Elements::SizeUnit__typeof(), ::app::Fuse::Elements::Element__typeof()),
        ::uNewFunction(".ctor", StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit__New_3, 0, true, StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit__typeof(), ::app::Uno::Float__typeof(), ::app::Fuse::Elements::SizeUnit__typeof(), ::app::Uno::Action__Fuse_Elements_Element__typeof()),
        ::uNewFunction(".ctor", StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit__New_4, 0, true, StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit__typeof(), ::app::Uno::Float__typeof(), ::app::Fuse::Elements::SizeUnit__typeof(), ::app::Uno::Action__Fuse_Elements_Element__typeof(), ::app::Uno::Action__Fuse_Elements_Element__float__typeof(), ::app::Uno::Func__Fuse_Elements_Element__float__typeof()),
        ::uNewFunction("Reset", StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit__Reset_1, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Elements::Element__typeof()),
        ::uNewFunction("Set", StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit__Set_1, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Elements::Element__typeof(), ::app::Uno::Float__typeof(), ::app::Fuse::Elements::SizeUnit__typeof()),
        ::uNewFunction("SetStyle", StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit__SetStyle_1, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Elements::Element__typeof(), ::app::Uno::Float__typeof(), ::app::Fuse::Elements::SizeUnit__typeof()));

    ::uRegisterType(type);
    return type;
}

void StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit___ObjInit_3(StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit* __this, float defaultValue, int defaultUnit, ::uDelegate* changedCallback)
{
    __this->_unitHandle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty__Fuse_Elements_Element__float___ObjInit_2(__this, defaultValue, changedCallback, NULL, NULL);
    __this->_unitId = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultUnit = defaultUnit;
}

void StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit___ObjInit_4(StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit* __this, float defaultValue, int defaultUnit, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    __this->_unitHandle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty__Fuse_Elements_Element__float___ObjInit_2(__this, defaultValue, changedCallback, setter, getter);
    __this->_unitId = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultUnit = defaultUnit;
}

int StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit__GetUnit(StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit* __this, ::app::Fuse::Elements::Element* owner)
{
    ::app::Fuse::Node* n = (::app::Fuse::Node*)owner;

    if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_unitId) == 0)
    {
        return __this->_defaultUnit;
    }
    else
    {
        ::uObject* res;
        ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_unitHandle, &res);
        return ::uUnbox< int>(::app::Fuse::Elements::SizeUnit__typeof(), res);
    }
}

StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit* StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit__New_3(::uStatic* __this, float defaultValue, int defaultUnit, ::uDelegate* changedCallback)
{
    StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit* inst = (StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*)::uAllocObject(sizeof(StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit), StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit__typeof());
    inst->_ObjInit_3(defaultValue, defaultUnit, changedCallback);
    return inst;
}

StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit* StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit__New_4(::uStatic* __this, float defaultValue, int defaultUnit, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit* inst = (StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*)::uAllocObject(sizeof(StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit), StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit__typeof());
    inst->_ObjInit_4(defaultValue, defaultUnit, changedCallback, setter, getter);
    return inst;
}

bool StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit__Reset_1(StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit* __this, ::app::Fuse::Elements::Element* owner)
{
    ::app::Fuse::Node* n = (::app::Fuse::Node*)owner;

    if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_unitId) != 0)
    {
        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_unitId, 0);
        ::uPtr< ::app::Fuse::Properties*>(n->Properties())->Clear(__this->_unitHandle);

        if (!::app::Fuse::StyleProperty__Fuse_Elements_Element__float__Reset(__this, owner))
        {
            __this->OnChanged(owner);
        }

        return true;
    }
    else
    {
        return ::app::Fuse::StyleProperty__Fuse_Elements_Element__float__Reset(__this, owner);
    }
}

void StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit__ResetFor(StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Elements::Element__typeof()))
    {
        __this->Reset_1(::uCast< ::app::Fuse::Elements::Element*>(n, ::app::Fuse::Elements::Element__typeof()));
    }
}

bool StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit__Set_1(StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit* __this, ::app::Fuse::Elements::Element* owner, float value, int unit)
{
    ::app::Fuse::Node* n = (::app::Fuse::Node*)owner;

    if (!::app::Uno::Object::Equals(::uBox< int>(::app::Fuse::Elements::SizeUnit__typeof(), unit), ::uBox< int>(::app::Fuse::Elements::SizeUnit__typeof(), __this->GetUnit(owner))))
    {
        ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_unitHandle, ::uBox< int>(::app::Fuse::Elements::SizeUnit__typeof(), unit));
        n->SetPropertyState(__this->_unitId, 2);

        if (!__this->Set(owner, value))
        {
            __this->OnChanged(owner);
        }

        return true;
    }
    else
    {
        return __this->Set(owner, value);
    }
}

bool StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit__SetStyle_1(StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit* __this, ::app::Fuse::Elements::Element* owner, float value, int unit)
{
    if (!__this->HasValue(owner))
    {
        ::app::Fuse::Node* n = (::app::Fuse::Node*)owner;

        if (!::app::Uno::Object::Equals(::uBox< int>(::app::Fuse::Elements::SizeUnit__typeof(), unit), ::uBox< int>(::app::Fuse::Elements::SizeUnit__typeof(), __this->GetUnit(owner))))
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_unitHandle, ::uBox< int>(::app::Fuse::Elements::SizeUnit__typeof(), unit));
            n->SetPropertyState(__this->_unitId, 1);

            if (!__this->SetStyle(owner, value))
            {
                __this->OnChanged(owner);
            }

            return true;
        }
        else
        {
            return __this->SetStyle(owner, value);
        }
    }

    return false;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit__uType* StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit__typeof()
{
    static ::uStaticStrong<StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit__uType*> type;
    if (type != NULL) return type;

    type = (StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit__uType*)::uAllocClassType(sizeof(StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit__uType), "Fuse.StylePropertyWithUnit<Fuse.Elements.Element,float2,Fuse.Elements.SizeUnit>", false, 0, 1, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__Fuse_Elements_Element__float2__typeof());
    type->__fp_ResetFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit__ResetFor;

    type->SetStrongRefs(
        "_unitHandle", offsetof(StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit, _unitHandle));

    type->SetFields(3,
        ::uNewField("_defaultUnit", NULL, offsetof(StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit, _defaultUnit), ::app::Fuse::Elements::SizeUnit__typeof()),
        ::uNewField("_unitHandle", NULL, offsetof(StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit, _unitHandle), ::app::Fuse::PropertyHandle__typeof()),
        ::uNewField("_unitId", NULL, offsetof(StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit, _unitId), ::app::Uno::Int__typeof()));

    type->SetFunctions(6,
        ::uNewFunction("GetUnit", StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit__GetUnit, 0, false, ::app::Fuse::Elements::SizeUnit__typeof(), ::app::Fuse::Elements::Element__typeof()),
        ::uNewFunction(".ctor", StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit__New_3, 0, true, StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit__typeof(), ::app::Uno::Float2__typeof(), ::app::Fuse::Elements::SizeUnit__typeof(), ::app::Uno::Action__Fuse_Elements_Element__typeof()),
        ::uNewFunction(".ctor", StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit__New_4, 0, true, StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit__typeof(), ::app::Uno::Float2__typeof(), ::app::Fuse::Elements::SizeUnit__typeof(), ::app::Uno::Action__Fuse_Elements_Element__typeof(), ::app::Uno::Action__Fuse_Elements_Element__float2__typeof(), ::app::Uno::Func__Fuse_Elements_Element__float2__typeof()),
        ::uNewFunction("Reset", StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit__Reset_1, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Elements::Element__typeof()),
        ::uNewFunction("Set", StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit__Set_1, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Elements::Element__typeof(), ::app::Uno::Float2__typeof(), ::app::Fuse::Elements::SizeUnit__typeof()),
        ::uNewFunction("SetStyle", StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit__SetStyle_1, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Elements::Element__typeof(), ::app::Uno::Float2__typeof(), ::app::Fuse::Elements::SizeUnit__typeof()));

    ::uRegisterType(type);
    return type;
}

void StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit___ObjInit_3(StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit* __this, ::app::Uno::Float2 defaultValue, int defaultUnit, ::uDelegate* changedCallback)
{
    __this->_unitHandle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty__Fuse_Elements_Element__float2___ObjInit_2(__this, defaultValue, changedCallback, NULL, NULL);
    __this->_unitId = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultUnit = defaultUnit;
}

void StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit___ObjInit_4(StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit* __this, ::app::Uno::Float2 defaultValue, int defaultUnit, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    __this->_unitHandle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty__Fuse_Elements_Element__float2___ObjInit_2(__this, defaultValue, changedCallback, setter, getter);
    __this->_unitId = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultUnit = defaultUnit;
}

int StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit__GetUnit(StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit* __this, ::app::Fuse::Elements::Element* owner)
{
    ::app::Fuse::Node* n = (::app::Fuse::Node*)owner;

    if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_unitId) == 0)
    {
        return __this->_defaultUnit;
    }
    else
    {
        ::uObject* res;
        ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_unitHandle, &res);
        return ::uUnbox< int>(::app::Fuse::Elements::SizeUnit__typeof(), res);
    }
}

StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit* StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit__New_3(::uStatic* __this, ::app::Uno::Float2 defaultValue, int defaultUnit, ::uDelegate* changedCallback)
{
    StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit* inst = (StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit*)::uAllocObject(sizeof(StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit), StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit__typeof());
    inst->_ObjInit_3(defaultValue, defaultUnit, changedCallback);
    return inst;
}

StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit* StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit__New_4(::uStatic* __this, ::app::Uno::Float2 defaultValue, int defaultUnit, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit* inst = (StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit*)::uAllocObject(sizeof(StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit), StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit__typeof());
    inst->_ObjInit_4(defaultValue, defaultUnit, changedCallback, setter, getter);
    return inst;
}

bool StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit__Reset_1(StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit* __this, ::app::Fuse::Elements::Element* owner)
{
    ::app::Fuse::Node* n = (::app::Fuse::Node*)owner;

    if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_unitId) != 0)
    {
        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_unitId, 0);
        ::uPtr< ::app::Fuse::Properties*>(n->Properties())->Clear(__this->_unitHandle);

        if (!::app::Fuse::StyleProperty__Fuse_Elements_Element__float2__Reset(__this, owner))
        {
            __this->OnChanged(owner);
        }

        return true;
    }
    else
    {
        return ::app::Fuse::StyleProperty__Fuse_Elements_Element__float2__Reset(__this, owner);
    }
}

void StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit__ResetFor(StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Elements::Element__typeof()))
    {
        __this->Reset_1(::uCast< ::app::Fuse::Elements::Element*>(n, ::app::Fuse::Elements::Element__typeof()));
    }
}

bool StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit__Set_1(StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit* __this, ::app::Fuse::Elements::Element* owner, ::app::Uno::Float2 value, int unit)
{
    ::app::Fuse::Node* n = (::app::Fuse::Node*)owner;

    if (!::app::Uno::Object::Equals(::uBox< int>(::app::Fuse::Elements::SizeUnit__typeof(), unit), ::uBox< int>(::app::Fuse::Elements::SizeUnit__typeof(), __this->GetUnit(owner))))
    {
        ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_unitHandle, ::uBox< int>(::app::Fuse::Elements::SizeUnit__typeof(), unit));
        n->SetPropertyState(__this->_unitId, 2);

        if (!__this->Set(owner, value))
        {
            __this->OnChanged(owner);
        }

        return true;
    }
    else
    {
        return __this->Set(owner, value);
    }
}

bool StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit__SetStyle_1(StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit* __this, ::app::Fuse::Elements::Element* owner, ::app::Uno::Float2 value, int unit)
{
    if (!__this->HasValue(owner))
    {
        ::app::Fuse::Node* n = (::app::Fuse::Node*)owner;

        if (!::app::Uno::Object::Equals(::uBox< int>(::app::Fuse::Elements::SizeUnit__typeof(), unit), ::uBox< int>(::app::Fuse::Elements::SizeUnit__typeof(), __this->GetUnit(owner))))
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_unitHandle, ::uBox< int>(::app::Fuse::Elements::SizeUnit__typeof(), unit));
            n->SetPropertyState(__this->_unitId, 1);

            if (!__this->SetStyle(owner, value))
            {
                __this->OnChanged(owner);
            }

            return true;
        }
        else
        {
            return __this->SetStyle(owner, value);
        }
    }

    return false;
}

}}
