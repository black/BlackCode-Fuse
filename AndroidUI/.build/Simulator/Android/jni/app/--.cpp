#include <app/-.ButtonText.h>
#include <app/-.HashableWeakReference.h>
#include <app/Fuse.BasicTheme.BasicStyle.h>
#include <app/Fuse.Controls.TextControl.h>
#include <app/Fuse.Elements.Alignment.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Elements.TextAlignment.h>
#include <app/Fuse.Elements.TextWrapping.h>
#include <app/Fuse.Font.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Int.h>
#include <app/Uno.WeakReference__object.h>

namespace app {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.BasicTheme\0.11.3\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ButtonText__uType* ButtonText__typeof()
{
    static ::uStaticStrong<ButtonText__uType*> type;
    if (type != NULL) return type;

    type = (ButtonText__uType*)::uAllocClassType(sizeof(ButtonText__uType), "ButtonText", false, 8, 0, 0);

    type->SetBaseType(::app::Fuse::Controls::TextBlock__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(ButtonText__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(ButtonText__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(ButtonText__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(ButtonText__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(ButtonText__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(ButtonText__uType, __interface_5),
        ::app::Fuse::Navigation::INavigationPanel__typeof(), offsetof(ButtonText__uType, __interface_6),
        ::app::Fuse::Triggers::IAddRemove__Fuse_Node__typeof(), offsetof(ButtonText__uType, __interface_7));

    type->SetFunctions(2,
        ::uNewFunctionVoid("InitializeUX", ButtonText__InitializeUX, 0, false),
        ::uNewFunction(".ctor", ButtonText__New_2, 0, true, ButtonText__typeof()));

    ::uRegisterType(type);
    return type;
}

void ButtonText___ObjInit_6(ButtonText* __this)
{
    ::app::Fuse::Controls::TextBlock___ObjInit_5(__this);
    __this->InitializeUX();
}

void ButtonText__InitializeUX(ButtonText* __this)
{
    __this->TextWrapping(1);
    __this->TextAlignment(1);
    __this->TextColor(::app::Uno::Float4__New_2(NULL, 1.0f, 1.0f, 1.0f, 1.0f));
    __this->Alignment(10);
    __this->Font(::app::Fuse::BasicTheme::BasicStyle__RobotoMedium);
}

ButtonText* ButtonText__New_2(::uStatic* __this)
{
    ButtonText* inst = (ButtonText*)::uAllocObject(sizeof(ButtonText), ButtonText__typeof());
    inst->_ObjInit_6();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

HashableWeakReference__uType* HashableWeakReference__typeof()
{
    static ::uStaticStrong<HashableWeakReference__uType*> type;
    if (type != NULL) return type;

    type = (HashableWeakReference__uType*)::uAllocClassType(sizeof(HashableWeakReference__uType), "HashableWeakReference", false, 0, 1, 0);

    type->__fp_Equals = (bool(*)(::uObject*, ::uObject*))HashableWeakReference__Equals;
    type->__fp_GetHashCode = (int(*)(::uObject*))HashableWeakReference__GetHashCode;

    type->SetStrongRefs(
        "_reference", offsetof(HashableWeakReference, _reference));

    type->SetFields(1,
        ::uNewField("_reference", NULL, offsetof(HashableWeakReference, _reference), ::app::Uno::WeakReference__object__typeof()));

    type->SetFunctions(2,
        ::uNewFunction(".ctor", HashableWeakReference__New_1, 0, true, HashableWeakReference__typeof(), ::app::Uno::WeakReference__object__typeof()),
        ::uNewFunction("TryGetTarget", HashableWeakReference__TryGetTarget, 0, false, ::app::Uno::Bool__typeof(), ::uObject__typeof()));

    ::uRegisterType(type);
    return type;
}

void HashableWeakReference___ObjInit(HashableWeakReference* __this, ::app::Uno::WeakReference__object* reference)
{
    __this->_reference = reference;
}

bool HashableWeakReference__Equals(HashableWeakReference* __this, ::uObject* that)
{
    if (::app::Uno::Object__ReferenceEquals(NULL, (::uObject*)__this, that))
    {
        return true;
    }

    ::uObject* a = NULL;
    ::uObject* b = NULL;

    if (!::uPtr< ::app::Uno::WeakReference__object*>(__this->_reference)->TryGetTarget(&a))
    {
        return false;
    }

    if (!::uIs(that, HashableWeakReference__typeof()) || !::uPtr< ::app::Uno::WeakReference__object*>(::uPtr< HashableWeakReference*>(::uCast< HashableWeakReference*>(that, HashableWeakReference__typeof()))->_reference)->TryGetTarget(&b))
    {
        return false;
    }

    return ::app::Uno::Object::Equals(::uPtr< ::uObject*>(a), b);
}

int HashableWeakReference__GetHashCode(HashableWeakReference* __this)
{
    ::uObject* obj;

    if (!::uPtr< ::app::Uno::WeakReference__object*>(__this->_reference)->TryGetTarget(&obj))
    {
        return 0;
    }

    return ::app::Uno::Object::GetHashCode(::uPtr< ::uObject*>(obj));
}

HashableWeakReference* HashableWeakReference__New_1(::uStatic* __this, ::app::Uno::WeakReference__object* reference)
{
    HashableWeakReference* inst = (HashableWeakReference*)::uAllocObject(sizeof(HashableWeakReference), HashableWeakReference__typeof());
    inst->_ObjInit(reference);
    return inst;
}

bool HashableWeakReference__TryGetTarget(HashableWeakReference* __this, ::uObject** obj)
{
    return ::uPtr< ::app::Uno::WeakReference__object*>(__this->_reference)->TryGetTarget(obj);
}

}
