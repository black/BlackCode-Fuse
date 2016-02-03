#include <app/Fuse.Designer.AdvancedAttribute.h>
#include <app/Fuse.Designer.ChildExtensionAttribute.h>
#include <app/Fuse.Designer.ColorAttribute.h>
#include <app/Fuse.Designer.ComponentOfAttribute.h>
#include <app/Fuse.Designer.DefaultComponentAttribute.h>
#include <app/Fuse.Designer.DefaultInstanceAttribute.h>
#include <app/Fuse.Designer.DesignerNameAttribute.h>
#include <app/Fuse.Designer.DragDropPriorityAttribute.h>
#include <app/Fuse.Designer.ExtensionAttribute.h>
#include <app/Fuse.Designer.GroupAttribute.h>
#include <app/Fuse.Designer.HideAttribute.h>
#include <app/Fuse.Designer.HidesAttribute.h>
#include <app/Fuse.Designer.IconAttribute.h>
#include <app/Fuse.Designer.InlineAttribute.h>
#include <app/Fuse.Designer.IntervalAttribute.h>
#include <app/Fuse.Designer.OptionalHideAttribute.h>
#include <app/Fuse.Designer.PriorityAttribute.h>
#include <app/Fuse.Designer.RangeAttribute.h>
#include <app/Fuse.Designer.RecursionSafeAttribute.h>
#include <app/Fuse.Designer.RequiredComponentAttribute.h>
#include <app/Fuse.Designer.SpawnableAttribute.h>
#include <app/Fuse.Designer.SpawnsAttribute.h>
#include <app/Fuse.Designer.ThicknessAttribute.h>
#include <app/Fuse.Designer.TransitionAttribute.h>
#include <app/Uno.Float.h>
#include <app/Uno.Int.h>
#include <app/Uno.String.h>

namespace app {
namespace Fuse {
namespace Designer {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Designer\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

AdvancedAttribute__uType* AdvancedAttribute__typeof()
{
    static ::uStaticStrong<AdvancedAttribute__uType*> type;
    if (type != NULL) return type;

    type = (AdvancedAttribute__uType*)::uAllocClassType(sizeof(AdvancedAttribute__uType), "Fuse.Designer.AdvancedAttribute", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    type->SetFunctions(1,
        ::uNewFunction(".ctor", AdvancedAttribute__New_1, 0, true, AdvancedAttribute__typeof()));

    ::uRegisterType(type);
    return type;
}

void AdvancedAttribute___ObjInit_1(AdvancedAttribute* __this)
{
    ::app::Uno::Attribute___ObjInit(__this);
}

AdvancedAttribute* AdvancedAttribute__New_1(::uStatic* __this)
{
    AdvancedAttribute* inst = (AdvancedAttribute*)::uAllocObject(sizeof(AdvancedAttribute), AdvancedAttribute__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Designer\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ChildExtensionAttribute__uType* ChildExtensionAttribute__typeof()
{
    static ::uStaticStrong<ChildExtensionAttribute__uType*> type;
    if (type != NULL) return type;

    type = (ChildExtensionAttribute__uType*)::uAllocClassType(sizeof(ChildExtensionAttribute__uType), "Fuse.Designer.ChildExtensionAttribute", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    type->SetFunctions(1,
        ::uNewFunction(".ctor", ChildExtensionAttribute__New_1, 0, true, ChildExtensionAttribute__typeof()));

    ::uRegisterType(type);
    return type;
}

void ChildExtensionAttribute___ObjInit_1(ChildExtensionAttribute* __this)
{
    ::app::Uno::Attribute___ObjInit(__this);
}

ChildExtensionAttribute* ChildExtensionAttribute__New_1(::uStatic* __this)
{
    ChildExtensionAttribute* inst = (ChildExtensionAttribute*)::uAllocObject(sizeof(ChildExtensionAttribute), ChildExtensionAttribute__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Designer\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ColorAttribute__uType* ColorAttribute__typeof()
{
    static ::uStaticStrong<ColorAttribute__uType*> type;
    if (type != NULL) return type;

    type = (ColorAttribute__uType*)::uAllocClassType(sizeof(ColorAttribute__uType), "Fuse.Designer.ColorAttribute", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    type->SetFunctions(1,
        ::uNewFunction(".ctor", ColorAttribute__New_1, 0, true, ColorAttribute__typeof()));

    ::uRegisterType(type);
    return type;
}

void ColorAttribute___ObjInit_1(ColorAttribute* __this)
{
    ::app::Uno::Attribute___ObjInit(__this);
}

ColorAttribute* ColorAttribute__New_1(::uStatic* __this)
{
    ColorAttribute* inst = (ColorAttribute*)::uAllocObject(sizeof(ColorAttribute), ColorAttribute__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Designer\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ComponentOfAttribute__uType* ComponentOfAttribute__typeof()
{
    static ::uStaticStrong<ComponentOfAttribute__uType*> type;
    if (type != NULL) return type;

    type = (ComponentOfAttribute__uType*)::uAllocClassType(sizeof(ComponentOfAttribute__uType), "Fuse.Designer.ComponentOfAttribute", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    type->SetStrongRefs(
        "EntityClass", offsetof(ComponentOfAttribute, EntityClass));

    type->SetFields(1,
        ::uNewField("EntityClass", NULL, offsetof(ComponentOfAttribute, EntityClass), ::app::Uno::String__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", ComponentOfAttribute__New_1, 0, true, ComponentOfAttribute__typeof(), ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void ComponentOfAttribute___ObjInit_1(ComponentOfAttribute* __this, ::uString* entityClass)
{
    ::app::Uno::Attribute___ObjInit(__this);
    __this->EntityClass = entityClass;
}

ComponentOfAttribute* ComponentOfAttribute__New_1(::uStatic* __this, ::uString* entityClass)
{
    ComponentOfAttribute* inst = (ComponentOfAttribute*)::uAllocObject(sizeof(ComponentOfAttribute), ComponentOfAttribute__typeof());
    inst->_ObjInit_1(entityClass);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Designer\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DefaultComponentAttribute__uType* DefaultComponentAttribute__typeof()
{
    static ::uStaticStrong<DefaultComponentAttribute__uType*> type;
    if (type != NULL) return type;

    type = (DefaultComponentAttribute__uType*)::uAllocClassType(sizeof(DefaultComponentAttribute__uType), "Fuse.Designer.DefaultComponentAttribute", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    type->SetStrongRefs(
        "ComponentClass", offsetof(DefaultComponentAttribute, ComponentClass));

    type->SetFields(1,
        ::uNewField("ComponentClass", NULL, offsetof(DefaultComponentAttribute, ComponentClass), ::app::Uno::String__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", DefaultComponentAttribute__New_1, 0, true, DefaultComponentAttribute__typeof(), ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void DefaultComponentAttribute___ObjInit_1(DefaultComponentAttribute* __this, ::uString* componentClass)
{
    ::app::Uno::Attribute___ObjInit(__this);
    __this->ComponentClass = componentClass;
}

DefaultComponentAttribute* DefaultComponentAttribute__New_1(::uStatic* __this, ::uString* componentClass)
{
    DefaultComponentAttribute* inst = (DefaultComponentAttribute*)::uAllocObject(sizeof(DefaultComponentAttribute), DefaultComponentAttribute__typeof());
    inst->_ObjInit_1(componentClass);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Designer\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DefaultInstanceAttribute__uType* DefaultInstanceAttribute__typeof()
{
    static ::uStaticStrong<DefaultInstanceAttribute__uType*> type;
    if (type != NULL) return type;

    type = (DefaultInstanceAttribute__uType*)::uAllocClassType(sizeof(DefaultInstanceAttribute__uType), "Fuse.Designer.DefaultInstanceAttribute", false, 0, 2, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    type->SetStrongRefs(
        "TargetProperty", offsetof(DefaultInstanceAttribute, TargetProperty),
        "Type", offsetof(DefaultInstanceAttribute, Type));

    type->SetFields(2,
        ::uNewField("TargetProperty", NULL, offsetof(DefaultInstanceAttribute, TargetProperty), ::app::Uno::String__typeof()),
        ::uNewField("Type", NULL, offsetof(DefaultInstanceAttribute, Type), ::app::Uno::String__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", DefaultInstanceAttribute__New_1, 0, true, DefaultInstanceAttribute__typeof(), ::app::Uno::String__typeof(), ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void DefaultInstanceAttribute___ObjInit_1(DefaultInstanceAttribute* __this, ::uString* targetProperty, ::uString* type)
{
    ::app::Uno::Attribute___ObjInit(__this);
    __this->TargetProperty = targetProperty;
    __this->Type = type;
}

DefaultInstanceAttribute* DefaultInstanceAttribute__New_1(::uStatic* __this, ::uString* targetProperty, ::uString* type)
{
    DefaultInstanceAttribute* inst = (DefaultInstanceAttribute*)::uAllocObject(sizeof(DefaultInstanceAttribute), DefaultInstanceAttribute__typeof());
    inst->_ObjInit_1(targetProperty, type);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Designer\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DesignerNameAttribute__uType* DesignerNameAttribute__typeof()
{
    static ::uStaticStrong<DesignerNameAttribute__uType*> type;
    if (type != NULL) return type;

    type = (DesignerNameAttribute__uType*)::uAllocClassType(sizeof(DesignerNameAttribute__uType), "Fuse.Designer.DesignerNameAttribute", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    type->SetStrongRefs(
        "Name", offsetof(DesignerNameAttribute, Name));

    type->SetFields(1,
        ::uNewField("Name", NULL, offsetof(DesignerNameAttribute, Name), ::app::Uno::String__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", DesignerNameAttribute__New_1, 0, true, DesignerNameAttribute__typeof(), ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void DesignerNameAttribute___ObjInit_1(DesignerNameAttribute* __this, ::uString* name)
{
    ::app::Uno::Attribute___ObjInit(__this);
    __this->Name = name;
}

DesignerNameAttribute* DesignerNameAttribute__New_1(::uStatic* __this, ::uString* name)
{
    DesignerNameAttribute* inst = (DesignerNameAttribute*)::uAllocObject(sizeof(DesignerNameAttribute), DesignerNameAttribute__typeof());
    inst->_ObjInit_1(name);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Designer\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DragDropPriorityAttribute__uType* DragDropPriorityAttribute__typeof()
{
    static ::uStaticStrong<DragDropPriorityAttribute__uType*> type;
    if (type != NULL) return type;

    type = (DragDropPriorityAttribute__uType*)::uAllocClassType(sizeof(DragDropPriorityAttribute__uType), "Fuse.Designer.DragDropPriorityAttribute", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    type->SetFunctions(1,
        ::uNewFunction(".ctor", DragDropPriorityAttribute__New_1, 0, true, DragDropPriorityAttribute__typeof()));

    ::uRegisterType(type);
    return type;
}

void DragDropPriorityAttribute___ObjInit_1(DragDropPriorityAttribute* __this)
{
    ::app::Uno::Attribute___ObjInit(__this);
}

DragDropPriorityAttribute* DragDropPriorityAttribute__New_1(::uStatic* __this)
{
    DragDropPriorityAttribute* inst = (DragDropPriorityAttribute*)::uAllocObject(sizeof(DragDropPriorityAttribute), DragDropPriorityAttribute__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Designer\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ExtensionAttribute__uType* ExtensionAttribute__typeof()
{
    static ::uStaticStrong<ExtensionAttribute__uType*> type;
    if (type != NULL) return type;

    type = (ExtensionAttribute__uType*)::uAllocClassType(sizeof(ExtensionAttribute__uType), "Fuse.Designer.ExtensionAttribute", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    type->SetFunctions(1,
        ::uNewFunction(".ctor", ExtensionAttribute__New_1, 0, true, ExtensionAttribute__typeof()));

    ::uRegisterType(type);
    return type;
}

void ExtensionAttribute___ObjInit_1(ExtensionAttribute* __this)
{
    ::app::Uno::Attribute___ObjInit(__this);
}

ExtensionAttribute* ExtensionAttribute__New_1(::uStatic* __this)
{
    ExtensionAttribute* inst = (ExtensionAttribute*)::uAllocObject(sizeof(ExtensionAttribute), ExtensionAttribute__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Designer\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

GroupAttribute__uType* GroupAttribute__typeof()
{
    static ::uStaticStrong<GroupAttribute__uType*> type;
    if (type != NULL) return type;

    type = (GroupAttribute__uType*)::uAllocClassType(sizeof(GroupAttribute__uType), "Fuse.Designer.GroupAttribute", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    type->SetStrongRefs(
        "Name", offsetof(GroupAttribute, Name));

    type->SetFields(2,
        ::uNewField("Name", NULL, offsetof(GroupAttribute, Name), ::app::Uno::String__typeof()),
        ::uNewField("Priority", NULL, offsetof(GroupAttribute, Priority), ::app::Uno::Int__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", GroupAttribute__New_1, 0, true, GroupAttribute__typeof(), ::app::Uno::String__typeof(), ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

void GroupAttribute___ObjInit_1(GroupAttribute* __this, ::uString* name, int priority)
{
    ::app::Uno::Attribute___ObjInit(__this);
    __this->Name = name;
    __this->Priority = priority;
}

GroupAttribute* GroupAttribute__New_1(::uStatic* __this, ::uString* name, int priority)
{
    GroupAttribute* inst = (GroupAttribute*)::uAllocObject(sizeof(GroupAttribute), GroupAttribute__typeof());
    inst->_ObjInit_1(name, priority);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Designer\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

HideAttribute__uType* HideAttribute__typeof()
{
    static ::uStaticStrong<HideAttribute__uType*> type;
    if (type != NULL) return type;

    type = (HideAttribute__uType*)::uAllocClassType(sizeof(HideAttribute__uType), "Fuse.Designer.HideAttribute", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    type->SetFunctions(1,
        ::uNewFunction(".ctor", HideAttribute__New_1, 0, true, HideAttribute__typeof()));

    ::uRegisterType(type);
    return type;
}

void HideAttribute___ObjInit_1(HideAttribute* __this)
{
    ::app::Uno::Attribute___ObjInit(__this);
}

HideAttribute* HideAttribute__New_1(::uStatic* __this)
{
    HideAttribute* inst = (HideAttribute*)::uAllocObject(sizeof(HideAttribute), HideAttribute__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Designer\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

HidesAttribute__uType* HidesAttribute__typeof()
{
    static ::uStaticStrong<HidesAttribute__uType*> type;
    if (type != NULL) return type;

    type = (HidesAttribute__uType*)::uAllocClassType(sizeof(HidesAttribute__uType), "Fuse.Designer.HidesAttribute", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    type->SetStrongRefs(
        "TargetProperty", offsetof(HidesAttribute, TargetProperty));

    type->SetFields(1,
        ::uNewField("TargetProperty", NULL, offsetof(HidesAttribute, TargetProperty), ::app::Uno::String__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", HidesAttribute__New_1, 0, true, HidesAttribute__typeof(), ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void HidesAttribute___ObjInit_1(HidesAttribute* __this, ::uString* targetProperty)
{
    ::app::Uno::Attribute___ObjInit(__this);
    __this->TargetProperty = targetProperty;
}

HidesAttribute* HidesAttribute__New_1(::uStatic* __this, ::uString* targetProperty)
{
    HidesAttribute* inst = (HidesAttribute*)::uAllocObject(sizeof(HidesAttribute), HidesAttribute__typeof());
    inst->_ObjInit_1(targetProperty);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Designer\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

IconAttribute__uType* IconAttribute__typeof()
{
    static ::uStaticStrong<IconAttribute__uType*> type;
    if (type != NULL) return type;

    type = (IconAttribute__uType*)::uAllocClassType(sizeof(IconAttribute__uType), "Fuse.Designer.IconAttribute", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    type->SetStrongRefs(
        "Path", offsetof(IconAttribute, Path));

    type->SetFields(1,
        ::uNewField("Path", NULL, offsetof(IconAttribute, Path), ::app::Uno::String__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", IconAttribute__New_1, 0, true, IconAttribute__typeof(), ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void IconAttribute___ObjInit_1(IconAttribute* __this, ::uString* path)
{
    ::app::Uno::Attribute___ObjInit(__this);
    __this->Path = path;
}

IconAttribute* IconAttribute__New_1(::uStatic* __this, ::uString* path)
{
    IconAttribute* inst = (IconAttribute*)::uAllocObject(sizeof(IconAttribute), IconAttribute__typeof());
    inst->_ObjInit_1(path);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Designer\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

InlineAttribute__uType* InlineAttribute__typeof()
{
    static ::uStaticStrong<InlineAttribute__uType*> type;
    if (type != NULL) return type;

    type = (InlineAttribute__uType*)::uAllocClassType(sizeof(InlineAttribute__uType), "Fuse.Designer.InlineAttribute", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    type->SetFunctions(1,
        ::uNewFunction(".ctor", InlineAttribute__New_1, 0, true, InlineAttribute__typeof()));

    ::uRegisterType(type);
    return type;
}

void InlineAttribute___ObjInit_1(InlineAttribute* __this)
{
    ::app::Uno::Attribute___ObjInit(__this);
}

InlineAttribute* InlineAttribute__New_1(::uStatic* __this)
{
    InlineAttribute* inst = (InlineAttribute*)::uAllocObject(sizeof(InlineAttribute), InlineAttribute__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Designer\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

IntervalAttribute__uType* IntervalAttribute__typeof()
{
    static ::uStaticStrong<IntervalAttribute__uType*> type;
    if (type != NULL) return type;

    type = (IntervalAttribute__uType*)::uAllocClassType(sizeof(IntervalAttribute__uType), "Fuse.Designer.IntervalAttribute", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    type->SetFields(1,
        ::uNewField("Interval", NULL, offsetof(IntervalAttribute, Interval), ::app::Uno::Float__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", IntervalAttribute__New_1, 0, true, IntervalAttribute__typeof(), ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void IntervalAttribute___ObjInit_1(IntervalAttribute* __this, float interval)
{
    ::app::Uno::Attribute___ObjInit(__this);
    __this->Interval = interval;
}

IntervalAttribute* IntervalAttribute__New_1(::uStatic* __this, float interval)
{
    IntervalAttribute* inst = (IntervalAttribute*)::uAllocObject(sizeof(IntervalAttribute), IntervalAttribute__typeof());
    inst->_ObjInit_1(interval);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Designer\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

OptionalHideAttribute__uType* OptionalHideAttribute__typeof()
{
    static ::uStaticStrong<OptionalHideAttribute__uType*> type;
    if (type != NULL) return type;

    type = (OptionalHideAttribute__uType*)::uAllocClassType(sizeof(OptionalHideAttribute__uType), "Fuse.Designer.OptionalHideAttribute", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    type->SetFunctions(1,
        ::uNewFunction(".ctor", OptionalHideAttribute__New_1, 0, true, OptionalHideAttribute__typeof()));

    ::uRegisterType(type);
    return type;
}

void OptionalHideAttribute___ObjInit_1(OptionalHideAttribute* __this)
{
    ::app::Uno::Attribute___ObjInit(__this);
}

OptionalHideAttribute* OptionalHideAttribute__New_1(::uStatic* __this)
{
    OptionalHideAttribute* inst = (OptionalHideAttribute*)::uAllocObject(sizeof(OptionalHideAttribute), OptionalHideAttribute__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Designer\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PriorityAttribute__uType* PriorityAttribute__typeof()
{
    static ::uStaticStrong<PriorityAttribute__uType*> type;
    if (type != NULL) return type;

    type = (PriorityAttribute__uType*)::uAllocClassType(sizeof(PriorityAttribute__uType), "Fuse.Designer.PriorityAttribute", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    type->SetFields(1,
        ::uNewField("Priority", NULL, offsetof(PriorityAttribute, Priority), ::app::Uno::Int__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", PriorityAttribute__New_1, 0, true, PriorityAttribute__typeof(), ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

void PriorityAttribute___ObjInit_1(PriorityAttribute* __this, int Priority)
{
    ::app::Uno::Attribute___ObjInit(__this);
    __this->Priority = Priority;
}

PriorityAttribute* PriorityAttribute__New_1(::uStatic* __this, int Priority)
{
    PriorityAttribute* inst = (PriorityAttribute*)::uAllocObject(sizeof(PriorityAttribute), PriorityAttribute__typeof());
    inst->_ObjInit_1(Priority);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Designer\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

RangeAttribute__uType* RangeAttribute__typeof()
{
    static ::uStaticStrong<RangeAttribute__uType*> type;
    if (type != NULL) return type;

    type = (RangeAttribute__uType*)::uAllocClassType(sizeof(RangeAttribute__uType), "Fuse.Designer.RangeAttribute", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    type->SetFields(3,
        ::uNewField("Exponent", NULL, offsetof(RangeAttribute, Exponent), ::app::Uno::Float__typeof()),
        ::uNewField("Max", NULL, offsetof(RangeAttribute, Max), ::app::Uno::Float__typeof()),
        ::uNewField("Min", NULL, offsetof(RangeAttribute, Min), ::app::Uno::Float__typeof()));

    type->SetFunctions(2,
        ::uNewFunction(".ctor", RangeAttribute__New_1, 0, true, RangeAttribute__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction(".ctor", RangeAttribute__New_2, 0, true, RangeAttribute__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void RangeAttribute___ObjInit_1(RangeAttribute* __this, float min, float max)
{
    __this->Exponent = 1.0f;
    ::app::Uno::Attribute___ObjInit(__this);
    __this->Min = min;
    __this->Max = max;
}

void RangeAttribute___ObjInit_2(RangeAttribute* __this, float min, float max, float exponent)
{
    __this->Exponent = 1.0f;
    ::app::Uno::Attribute___ObjInit(__this);
    __this->Min = min;
    __this->Max = max;
    __this->Exponent = exponent;
}

RangeAttribute* RangeAttribute__New_1(::uStatic* __this, float min, float max)
{
    RangeAttribute* inst = (RangeAttribute*)::uAllocObject(sizeof(RangeAttribute), RangeAttribute__typeof());
    inst->_ObjInit_1(min, max);
    return inst;
}

RangeAttribute* RangeAttribute__New_2(::uStatic* __this, float min, float max, float exponent)
{
    RangeAttribute* inst = (RangeAttribute*)::uAllocObject(sizeof(RangeAttribute), RangeAttribute__typeof());
    inst->_ObjInit_2(min, max, exponent);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Designer\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

RecursionSafeAttribute__uType* RecursionSafeAttribute__typeof()
{
    static ::uStaticStrong<RecursionSafeAttribute__uType*> type;
    if (type != NULL) return type;

    type = (RecursionSafeAttribute__uType*)::uAllocClassType(sizeof(RecursionSafeAttribute__uType), "Fuse.Designer.RecursionSafeAttribute", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    type->SetFunctions(1,
        ::uNewFunction(".ctor", RecursionSafeAttribute__New_1, 0, true, RecursionSafeAttribute__typeof()));

    ::uRegisterType(type);
    return type;
}

void RecursionSafeAttribute___ObjInit_1(RecursionSafeAttribute* __this)
{
    ::app::Uno::Attribute___ObjInit(__this);
}

RecursionSafeAttribute* RecursionSafeAttribute__New_1(::uStatic* __this)
{
    RecursionSafeAttribute* inst = (RecursionSafeAttribute*)::uAllocObject(sizeof(RecursionSafeAttribute), RecursionSafeAttribute__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Designer\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

RequiredComponentAttribute__uType* RequiredComponentAttribute__typeof()
{
    static ::uStaticStrong<RequiredComponentAttribute__uType*> type;
    if (type != NULL) return type;

    type = (RequiredComponentAttribute__uType*)::uAllocClassType(sizeof(RequiredComponentAttribute__uType), "Fuse.Designer.RequiredComponentAttribute", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    type->SetStrongRefs(
        "ComponentClass", offsetof(RequiredComponentAttribute, ComponentClass));

    type->SetFields(1,
        ::uNewField("ComponentClass", NULL, offsetof(RequiredComponentAttribute, ComponentClass), ::app::Uno::String__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", RequiredComponentAttribute__New_1, 0, true, RequiredComponentAttribute__typeof(), ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void RequiredComponentAttribute___ObjInit_1(RequiredComponentAttribute* __this, ::uString* componentClass)
{
    ::app::Uno::Attribute___ObjInit(__this);
    __this->ComponentClass = componentClass;
}

RequiredComponentAttribute* RequiredComponentAttribute__New_1(::uStatic* __this, ::uString* componentClass)
{
    RequiredComponentAttribute* inst = (RequiredComponentAttribute*)::uAllocObject(sizeof(RequiredComponentAttribute), RequiredComponentAttribute__typeof());
    inst->_ObjInit_1(componentClass);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Designer\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

SpawnableAttribute__uType* SpawnableAttribute__typeof()
{
    static ::uStaticStrong<SpawnableAttribute__uType*> type;
    if (type != NULL) return type;

    type = (SpawnableAttribute__uType*)::uAllocClassType(sizeof(SpawnableAttribute__uType), "Fuse.Designer.SpawnableAttribute", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    type->SetFunctions(1,
        ::uNewFunction(".ctor", SpawnableAttribute__New_1, 0, true, SpawnableAttribute__typeof()));

    ::uRegisterType(type);
    return type;
}

void SpawnableAttribute___ObjInit_1(SpawnableAttribute* __this)
{
    ::app::Uno::Attribute___ObjInit(__this);
}

SpawnableAttribute* SpawnableAttribute__New_1(::uStatic* __this)
{
    SpawnableAttribute* inst = (SpawnableAttribute*)::uAllocObject(sizeof(SpawnableAttribute), SpawnableAttribute__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Designer\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

SpawnsAttribute__uType* SpawnsAttribute__typeof()
{
    static ::uStaticStrong<SpawnsAttribute__uType*> type;
    if (type != NULL) return type;

    type = (SpawnsAttribute__uType*)::uAllocClassType(sizeof(SpawnsAttribute__uType), "Fuse.Designer.SpawnsAttribute", false, 0, 2, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    type->SetStrongRefs(
        "SourceType", offsetof(SpawnsAttribute, SourceType),
        "TargetProperty", offsetof(SpawnsAttribute, TargetProperty));

    type->SetFields(2,
        ::uNewField("SourceType", NULL, offsetof(SpawnsAttribute, SourceType), ::app::Uno::String__typeof()),
        ::uNewField("TargetProperty", NULL, offsetof(SpawnsAttribute, TargetProperty), ::app::Uno::String__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", SpawnsAttribute__New_1, 0, true, SpawnsAttribute__typeof(), ::app::Uno::String__typeof(), ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void SpawnsAttribute___ObjInit_1(SpawnsAttribute* __this, ::uString* sourceType, ::uString* targetProperty)
{
    ::app::Uno::Attribute___ObjInit(__this);
    __this->SourceType = sourceType;
    __this->TargetProperty = targetProperty;
}

SpawnsAttribute* SpawnsAttribute__New_1(::uStatic* __this, ::uString* sourceType, ::uString* targetProperty)
{
    SpawnsAttribute* inst = (SpawnsAttribute*)::uAllocObject(sizeof(SpawnsAttribute), SpawnsAttribute__typeof());
    inst->_ObjInit_1(sourceType, targetProperty);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Designer\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ThicknessAttribute__uType* ThicknessAttribute__typeof()
{
    static ::uStaticStrong<ThicknessAttribute__uType*> type;
    if (type != NULL) return type;

    type = (ThicknessAttribute__uType*)::uAllocClassType(sizeof(ThicknessAttribute__uType), "Fuse.Designer.ThicknessAttribute", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    type->SetFunctions(1,
        ::uNewFunction(".ctor", ThicknessAttribute__New_1, 0, true, ThicknessAttribute__typeof()));

    ::uRegisterType(type);
    return type;
}

void ThicknessAttribute___ObjInit_1(ThicknessAttribute* __this)
{
    ::app::Uno::Attribute___ObjInit(__this);
}

ThicknessAttribute* ThicknessAttribute__New_1(::uStatic* __this)
{
    ThicknessAttribute* inst = (ThicknessAttribute*)::uAllocObject(sizeof(ThicknessAttribute), ThicknessAttribute__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Designer\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

TransitionAttribute__uType* TransitionAttribute__typeof()
{
    static ::uStaticStrong<TransitionAttribute__uType*> type;
    if (type != NULL) return type;

    type = (TransitionAttribute__uType*)::uAllocClassType(sizeof(TransitionAttribute__uType), "Fuse.Designer.TransitionAttribute", false, 0, 3, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    type->SetStrongRefs(
        "IncomingType", offsetof(TransitionAttribute, IncomingType),
        "TargetProperty", offsetof(TransitionAttribute, TargetProperty),
        "TargetType", offsetof(TransitionAttribute, TargetType));

    type->SetFields(3,
        ::uNewField("IncomingType", NULL, offsetof(TransitionAttribute, IncomingType), ::app::Uno::String__typeof()),
        ::uNewField("TargetProperty", NULL, offsetof(TransitionAttribute, TargetProperty), ::app::Uno::String__typeof()),
        ::uNewField("TargetType", NULL, offsetof(TransitionAttribute, TargetType), ::app::Uno::String__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", TransitionAttribute__New_1, 0, true, TransitionAttribute__typeof(), ::app::Uno::String__typeof(), ::app::Uno::String__typeof(), ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void TransitionAttribute___ObjInit_1(TransitionAttribute* __this, ::uString* incomingType, ::uString* targetType, ::uString* targetProperty)
{
    ::app::Uno::Attribute___ObjInit(__this);
    __this->IncomingType = incomingType;
    __this->TargetType = targetType;
    __this->TargetProperty = targetProperty;
}

TransitionAttribute* TransitionAttribute__New_1(::uStatic* __this, ::uString* incomingType, ::uString* targetType, ::uString* targetProperty)
{
    TransitionAttribute* inst = (TransitionAttribute*)::uAllocObject(sizeof(TransitionAttribute), TransitionAttribute__typeof());
    inst->_ObjInit_1(incomingType, targetType, targetProperty);
    return inst;
}

}}}
