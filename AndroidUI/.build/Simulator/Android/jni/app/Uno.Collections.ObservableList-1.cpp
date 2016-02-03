#include <app/Fuse.Behavior.h>
#include <app/Fuse.Drawing.Brush.h>
#include <app/Fuse.Drawing.GradientStop.h>
#include <app/Fuse.Drawing.Stroke.h>
#include <app/Fuse.Effects.Effect.h>
#include <app/Fuse.Entities.Component.h>
#include <app/Fuse.Entities.Entity.h>
#include <app/Fuse.Layouts.Column.h>
#include <app/Fuse.Layouts.Row.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.Reactive.Case.h>
#include <app/Fuse.Resources.ImageSource.h>
#include <app/Fuse.Style.h>
#include <app/Fuse.Transform.h>
#include <app/Uno.Action__Fuse_Behavior.h>
#include <app/Uno.Action__Fuse_Drawing_Brush.h>
#include <app/Uno.Action__Fuse_Drawing_GradientStop.h>
#include <app/Uno.Action__Fuse_Drawing_Stroke.h>
#include <app/Uno.Action__Fuse_Effects_Effect.h>
#include <app/Uno.Action__Fuse_Entities_Component.h>
#include <app/Uno.Action__Fuse_Entities_Entity.h>
#include <app/Uno.Action__Fuse_Layouts_Column.h>
#include <app/Uno.Action__Fuse_Layouts_Row.h>
#include <app/Uno.Action__Fuse_Node.h>
#include <app/Uno.Action__Fuse_Reactive_Case.h>
#include <app/Uno.Action__Fuse_Resources_ImageSource.h>
#include <app/Uno.Action__Fuse_Style.h>
#include <app/Uno.Action__Fuse_Transform.h>
#include <app/Uno.Action__Uno_UX_FileSource.h>
#include <app/Uno.Action__Uno_UX_IFactory.h>
#include <app/Uno.Action__Uno_UX_ITemplate.h>
#include <app/Uno.Action__Uno_UX_Resource.h>
#include <app/Uno.ArgumentNullException.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Behavior.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Brush.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_GradientStop.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Stroke.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Effects_Effect.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Entities_Component.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Entities_Entity.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Layouts_Column.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Layouts_Row.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Node.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Reactive_Case.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Resources_ImageSource.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Style.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Transform.h>
#include <app/Uno.Collections.IEnumerator__Uno_UX_FileSource.h>
#include <app/Uno.Collections.IEnumerator__Uno_UX_IFactory.h>
#include <app/Uno.Collections.IEnumerator__Uno_UX_ITemplate.h>
#include <app/Uno.Collections.IEnumerator__Uno_UX_Resource.h>
#include <app/Uno.Collections.List__Fuse_Behavior.h>
#include <app/Uno.Collections.List__Fuse_Drawing_Brush.h>
#include <app/Uno.Collections.List__Fuse_Drawing_GradientStop.h>
#include <app/Uno.Collections.List__Fuse_Drawing_Stroke.h>
#include <app/Uno.Collections.List__Fuse_Effects_Effect.h>
#include <app/Uno.Collections.List__Fuse_Entities_Component.h>
#include <app/Uno.Collections.List__Fuse_Entities_Entity.h>
#include <app/Uno.Collections.List__Fuse_Layouts_Column.h>
#include <app/Uno.Collections.List__Fuse_Layouts_Row.h>
#include <app/Uno.Collections.List__Fuse_Node.h>
#include <app/Uno.Collections.List__Fuse_Reactive_Case.h>
#include <app/Uno.Collections.List__Fuse_Resources_ImageSource.h>
#include <app/Uno.Collections.List__Fuse_Style.h>
#include <app/Uno.Collections.List__Fuse_Transform.h>
#include <app/Uno.Collections.List__Uno_UX_FileSource.h>
#include <app/Uno.Collections.List__Uno_UX_IFactory.h>
#include <app/Uno.Collections.List__Uno_UX_ITemplate.h>
#include <app/Uno.Collections.List__Uno_UX_Resource.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Behavior.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Drawing_Brush.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Drawing_GradientStop.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Drawing_Stroke.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Effects_Effect.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Entities_Component.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Entities_Entity.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Layouts_Column.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Layouts_Row.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Node.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Reactive_Case.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Resources_ImageSource.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Style.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Transform.h>
#include <app/Uno.Collections.List1_Enumerator__Uno_UX_FileSource.h>
#include <app/Uno.Collections.List1_Enumerator__Uno_UX_IFactory.h>
#include <app/Uno.Collections.List1_Enumerator__Uno_UX_ITemplate.h>
#include <app/Uno.Collections.List1_Enumerator__Uno_UX_Resource.h>
#include <app/Uno.Collections.ObservableList__Fuse_Behavior.h>
#include <app/Uno.Collections.ObservableList__Fuse_Drawing_Brush.h>
#include <app/Uno.Collections.ObservableList__Fuse_Drawing_GradientStop.h>
#include <app/Uno.Collections.ObservableList__Fuse_Drawing_Stroke.h>
#include <app/Uno.Collections.ObservableList__Fuse_Effects_Effect.h>
#include <app/Uno.Collections.ObservableList__Fuse_Entities_Component.h>
#include <app/Uno.Collections.ObservableList__Fuse_Entities_Entity.h>
#include <app/Uno.Collections.ObservableList__Fuse_Layouts_Column.h>
#include <app/Uno.Collections.ObservableList__Fuse_Layouts_Row.h>
#include <app/Uno.Collections.ObservableList__Fuse_Node.h>
#include <app/Uno.Collections.ObservableList__Fuse_Reactive_Case.h>
#include <app/Uno.Collections.ObservableList__Fuse_Resources_ImageSource.h>
#include <app/Uno.Collections.ObservableList__Fuse_Style.h>
#include <app/Uno.Collections.ObservableList__Fuse_Transform.h>
#include <app/Uno.Collections.ObservableList__Uno_UX_FileSource.h>
#include <app/Uno.Collections.ObservableList__Uno_UX_IFactory.h>
#include <app/Uno.Collections.ObservableList__Uno_UX_ITemplate.h>
#include <app/Uno.Collections.ObservableList__Uno_UX_Resource.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.IndexOutOfRangeException.h>
#include <app/Uno.Int.h>
#include <app/Uno.String.h>
#include <app/Uno.UX.FileSource.h>
#include <app/Uno.UX.IFactory.h>
#include <app/Uno.UX.ITemplate.h>
#include <app/Uno.UX.Resource.h>

namespace app {
namespace Uno {
namespace Collections {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ObservableList__Fuse_Behavior__uType* ObservableList__Fuse_Behavior__typeof()
{
    static ::uStaticStrong<ObservableList__Fuse_Behavior__uType*> type;
    if (type != NULL) return type;

    type = (ObservableList__Fuse_Behavior__uType*)::uAllocClassType(sizeof(ObservableList__Fuse_Behavior__uType), "Uno.Collections.ObservableList<Fuse.Behavior>", false, 3, 3, 0);

    type->__interface_0.__fp_get_Item = (::app::Fuse::Behavior*(*)(void*, int))ObservableList__Fuse_Behavior__get_Item;
    type->__interface_1.__fp_Clear = (void(*)(void*))ObservableList__Fuse_Behavior__Clear;
    type->__interface_1.__fp_Add = (void(*)(void*, ::app::Fuse::Behavior*))ObservableList__Fuse_Behavior__Add;
    type->__interface_1.__fp_Remove = (bool(*)(void*, ::app::Fuse::Behavior*))ObservableList__Fuse_Behavior__Remove;
    type->__interface_1.__fp_get_Count = (int(*)(void*))ObservableList__Fuse_Behavior__get_Count;
    type->__interface_2.__fp_GetEnumerator = (::uObject*(*)(void*))ObservableList__Fuse_Behavior__GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IList__Fuse_Behavior__typeof(), offsetof(ObservableList__Fuse_Behavior__uType, __interface_0),
        ::app::Uno::Collections::ICollection__Fuse_Behavior__typeof(), offsetof(ObservableList__Fuse_Behavior__uType, __interface_1),
        ::app::Uno::Collections::IEnumerable__Fuse_Behavior__typeof(), offsetof(ObservableList__Fuse_Behavior__uType, __interface_2));

    type->SetStrongRefs(
        "added", offsetof(ObservableList__Fuse_Behavior, added),
        "items", offsetof(ObservableList__Fuse_Behavior, items),
        "removed", offsetof(ObservableList__Fuse_Behavior, removed));

    type->SetFields(3,
        ::uNewField("added", NULL, offsetof(ObservableList__Fuse_Behavior, added), ::app::Uno::Action__Fuse_Behavior__typeof()),
        ::uNewField("items", NULL, offsetof(ObservableList__Fuse_Behavior, items), ::app::Uno::Collections::List__Fuse_Behavior__typeof()),
        ::uNewField("removed", NULL, offsetof(ObservableList__Fuse_Behavior, removed), ::app::Uno::Action__Fuse_Behavior__typeof()));

    type->SetFunctions(11,
        ::uNewFunctionVoid("Add", ObservableList__Fuse_Behavior__Add, 0, false, ::app::Fuse::Behavior__typeof()),
        ::uNewFunctionVoid("Clear", ObservableList__Fuse_Behavior__Clear, 0, false),
        ::uNewFunction("Contains", ObservableList__Fuse_Behavior__Contains, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Behavior__typeof()),
        ::uNewFunction("get_Count", ObservableList__Fuse_Behavior__get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Item", ObservableList__Fuse_Behavior__get_Item, 0, false, ::app::Fuse::Behavior__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", ObservableList__Fuse_Behavior__GetEnumerator, 0, false, ::app::Uno::Collections::IEnumerator__Fuse_Behavior__typeof()),
        ::uNewFunctionVoid("Insert", ObservableList__Fuse_Behavior__Insert, 0, false, ::app::Uno::Int__typeof(), ::app::Fuse::Behavior__typeof()),
        ::uNewFunction(".ctor", ObservableList__Fuse_Behavior__New_1, 0, true, ObservableList__Fuse_Behavior__typeof(), ::app::Uno::Action__Fuse_Behavior__typeof(), ::app::Uno::Action__Fuse_Behavior__typeof()),
        ::uNewFunction("Remove", ObservableList__Fuse_Behavior__Remove, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Behavior__typeof()),
        ::uNewFunctionVoid("RemoveAt", ObservableList__Fuse_Behavior__RemoveAt, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("ReplaceAt", ObservableList__Fuse_Behavior__ReplaceAt, 0, false, ::app::Uno::Int__typeof(), ::app::Fuse::Behavior__typeof()));

    ::uRegisterType(type);
    return type;
}

void ObservableList__Fuse_Behavior___ObjInit(ObservableList__Fuse_Behavior* __this, ::uDelegate* added, ::uDelegate* removed)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)added, NULL))
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("added")));
    }

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)removed, NULL))
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("removed")));
    }

    __this->added = added;
    __this->removed = removed;
}

void ObservableList__Fuse_Behavior__Add(ObservableList__Fuse_Behavior* __this, ::app::Fuse::Behavior* item)
{
    if (__this->items == NULL)
    {
        __this->items = ::app::Uno::Collections::List__Fuse_Behavior__New_1(NULL);
    }

    ::uPtr< ::app::Uno::Collections::List__Fuse_Behavior*>(__this->items)->Add(item);
    ::uPtr< ::uDelegate*>(__this->added)->InvokeVoid< ::app::Fuse::Behavior*>(item);
}

void ObservableList__Fuse_Behavior__Clear(ObservableList__Fuse_Behavior* __this)
{
    if (__this->items != NULL)
    {
        ::app::Uno::Collections::List__Fuse_Behavior* removedItems = __this->items;
        __this->items = NULL;

        for (::app::Uno::Collections::List1_Enumerator__Fuse_Behavior enum_123 = ::uPtr< ::app::Uno::Collections::List__Fuse_Behavior*>(removedItems)->GetEnumerator(); enum_123.MoveNext(); )
        {
            ::app::Fuse::Behavior* i = enum_123.Current();
            ::uPtr< ::uDelegate*>(__this->removed)->InvokeVoid< ::app::Fuse::Behavior*>(i);
        }
    }
}

bool ObservableList__Fuse_Behavior__Contains(ObservableList__Fuse_Behavior* __this, ::app::Fuse::Behavior* item)
{
    if (__this->items == NULL)
    {
        return false;
    }

    return ::uPtr< ::app::Uno::Collections::List__Fuse_Behavior*>(__this->items)->Contains(item);
}

int ObservableList__Fuse_Behavior__get_Count(ObservableList__Fuse_Behavior* __this)
{
    return (__this->items != NULL) ? ::uPtr< ::app::Uno::Collections::List__Fuse_Behavior*>(__this->items)->Count() : 0;
}

::app::Fuse::Behavior* ObservableList__Fuse_Behavior__get_Item(ObservableList__Fuse_Behavior* __this, int index)
{
    if (__this->items == NULL)
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }

    return ::uPtr< ::app::Uno::Collections::List__Fuse_Behavior*>(__this->items)->Item(index);
}

::uObject* ObservableList__Fuse_Behavior__GetEnumerator(ObservableList__Fuse_Behavior* __this)
{
    if (__this->items == NULL)
    {
        __this->items = ::app::Uno::Collections::List__Fuse_Behavior__New_1(NULL);
    }

    return ::uBox(::app::Uno::Collections::List1_Enumerator__Fuse_Behavior__typeof(), ::uPtr< ::app::Uno::Collections::List__Fuse_Behavior*>(__this->items)->GetEnumerator());
}

void ObservableList__Fuse_Behavior__Insert(ObservableList__Fuse_Behavior* __this, int index, ::app::Fuse::Behavior* item)
{
    if (__this->items == NULL)
    {
        __this->items = ::app::Uno::Collections::List__Fuse_Behavior__New_1(NULL);
    }

    ::uPtr< ::app::Uno::Collections::List__Fuse_Behavior*>(__this->items)->Insert(index, item);
    ::uPtr< ::uDelegate*>(__this->added)->InvokeVoid< ::app::Fuse::Behavior*>(item);
}

ObservableList__Fuse_Behavior* ObservableList__Fuse_Behavior__New_1(::uStatic* __this, ::uDelegate* added, ::uDelegate* removed)
{
    ObservableList__Fuse_Behavior* inst = (ObservableList__Fuse_Behavior*)::uAllocObject(sizeof(ObservableList__Fuse_Behavior), ObservableList__Fuse_Behavior__typeof());
    inst->_ObjInit(added, removed);
    return inst;
}

bool ObservableList__Fuse_Behavior__Remove(ObservableList__Fuse_Behavior* __this, ::app::Fuse::Behavior* item)
{
    if (__this->items == NULL)
    {
        return false;
    }

    bool res = ::uPtr< ::app::Uno::Collections::List__Fuse_Behavior*>(__this->items)->Remove(item);

    if (res)
    {
        ::uPtr< ::uDelegate*>(__this->removed)->InvokeVoid< ::app::Fuse::Behavior*>(item);
    }

    return res;
}

void ObservableList__Fuse_Behavior__RemoveAt(ObservableList__Fuse_Behavior* __this, int index)
{
    if (__this->items == NULL)
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }

    __this->Remove(::uPtr< ::app::Uno::Collections::List__Fuse_Behavior*>(__this->items)->Item(index));
}

void ObservableList__Fuse_Behavior__ReplaceAt(ObservableList__Fuse_Behavior* __this, int index, ::app::Fuse::Behavior* item)
{
    if (__this->items == NULL)
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }

    ::app::Fuse::Behavior* old = ::uPtr< ::app::Uno::Collections::List__Fuse_Behavior*>(__this->items)->Item(index);
    ::uPtr< ::app::Uno::Collections::List__Fuse_Behavior*>(__this->items)->Item(index, item);
    ::uPtr< ::uDelegate*>(__this->removed)->InvokeVoid< ::app::Fuse::Behavior*>(old);
    ::uPtr< ::uDelegate*>(__this->added)->InvokeVoid< ::app::Fuse::Behavior*>(item);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ObservableList__Fuse_Drawing_Brush__uType* ObservableList__Fuse_Drawing_Brush__typeof()
{
    static ::uStaticStrong<ObservableList__Fuse_Drawing_Brush__uType*> type;
    if (type != NULL) return type;

    type = (ObservableList__Fuse_Drawing_Brush__uType*)::uAllocClassType(sizeof(ObservableList__Fuse_Drawing_Brush__uType), "Uno.Collections.ObservableList<Fuse.Drawing.Brush>", false, 3, 3, 0);

    type->__interface_0.__fp_get_Item = (::app::Fuse::Drawing::Brush*(*)(void*, int))ObservableList__Fuse_Drawing_Brush__get_Item;
    type->__interface_1.__fp_Clear = (void(*)(void*))ObservableList__Fuse_Drawing_Brush__Clear;
    type->__interface_1.__fp_Add = (void(*)(void*, ::app::Fuse::Drawing::Brush*))ObservableList__Fuse_Drawing_Brush__Add;
    type->__interface_1.__fp_Remove = (bool(*)(void*, ::app::Fuse::Drawing::Brush*))ObservableList__Fuse_Drawing_Brush__Remove;
    type->__interface_1.__fp_get_Count = (int(*)(void*))ObservableList__Fuse_Drawing_Brush__get_Count;
    type->__interface_2.__fp_GetEnumerator = (::uObject*(*)(void*))ObservableList__Fuse_Drawing_Brush__GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IList__Fuse_Drawing_Brush__typeof(), offsetof(ObservableList__Fuse_Drawing_Brush__uType, __interface_0),
        ::app::Uno::Collections::ICollection__Fuse_Drawing_Brush__typeof(), offsetof(ObservableList__Fuse_Drawing_Brush__uType, __interface_1),
        ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Brush__typeof(), offsetof(ObservableList__Fuse_Drawing_Brush__uType, __interface_2));

    type->SetStrongRefs(
        "added", offsetof(ObservableList__Fuse_Drawing_Brush, added),
        "items", offsetof(ObservableList__Fuse_Drawing_Brush, items),
        "removed", offsetof(ObservableList__Fuse_Drawing_Brush, removed));

    type->SetFields(3,
        ::uNewField("added", NULL, offsetof(ObservableList__Fuse_Drawing_Brush, added), ::app::Uno::Action__Fuse_Drawing_Brush__typeof()),
        ::uNewField("items", NULL, offsetof(ObservableList__Fuse_Drawing_Brush, items), ::app::Uno::Collections::List__Fuse_Drawing_Brush__typeof()),
        ::uNewField("removed", NULL, offsetof(ObservableList__Fuse_Drawing_Brush, removed), ::app::Uno::Action__Fuse_Drawing_Brush__typeof()));

    type->SetFunctions(11,
        ::uNewFunctionVoid("Add", ObservableList__Fuse_Drawing_Brush__Add, 0, false, ::app::Fuse::Drawing::Brush__typeof()),
        ::uNewFunctionVoid("Clear", ObservableList__Fuse_Drawing_Brush__Clear, 0, false),
        ::uNewFunction("Contains", ObservableList__Fuse_Drawing_Brush__Contains, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Drawing::Brush__typeof()),
        ::uNewFunction("get_Count", ObservableList__Fuse_Drawing_Brush__get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Item", ObservableList__Fuse_Drawing_Brush__get_Item, 0, false, ::app::Fuse::Drawing::Brush__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", ObservableList__Fuse_Drawing_Brush__GetEnumerator, 0, false, ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Brush__typeof()),
        ::uNewFunctionVoid("Insert", ObservableList__Fuse_Drawing_Brush__Insert, 0, false, ::app::Uno::Int__typeof(), ::app::Fuse::Drawing::Brush__typeof()),
        ::uNewFunction(".ctor", ObservableList__Fuse_Drawing_Brush__New_1, 0, true, ObservableList__Fuse_Drawing_Brush__typeof(), ::app::Uno::Action__Fuse_Drawing_Brush__typeof(), ::app::Uno::Action__Fuse_Drawing_Brush__typeof()),
        ::uNewFunction("Remove", ObservableList__Fuse_Drawing_Brush__Remove, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Drawing::Brush__typeof()),
        ::uNewFunctionVoid("RemoveAt", ObservableList__Fuse_Drawing_Brush__RemoveAt, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("ReplaceAt", ObservableList__Fuse_Drawing_Brush__ReplaceAt, 0, false, ::app::Uno::Int__typeof(), ::app::Fuse::Drawing::Brush__typeof()));

    ::uRegisterType(type);
    return type;
}

void ObservableList__Fuse_Drawing_Brush___ObjInit(ObservableList__Fuse_Drawing_Brush* __this, ::uDelegate* added, ::uDelegate* removed)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)added, NULL))
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("added")));
    }

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)removed, NULL))
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("removed")));
    }

    __this->added = added;
    __this->removed = removed;
}

void ObservableList__Fuse_Drawing_Brush__Add(ObservableList__Fuse_Drawing_Brush* __this, ::app::Fuse::Drawing::Brush* item)
{
    if (__this->items == NULL)
    {
        __this->items = ::app::Uno::Collections::List__Fuse_Drawing_Brush__New_1(NULL);
    }

    ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Brush*>(__this->items)->Add(item);
    ::uPtr< ::uDelegate*>(__this->added)->InvokeVoid< ::app::Fuse::Drawing::Brush*>(item);
}

void ObservableList__Fuse_Drawing_Brush__Clear(ObservableList__Fuse_Drawing_Brush* __this)
{
    if (__this->items != NULL)
    {
        ::app::Uno::Collections::List__Fuse_Drawing_Brush* removedItems = __this->items;
        __this->items = NULL;

        for (::app::Uno::Collections::List1_Enumerator__Fuse_Drawing_Brush enum_123 = ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Brush*>(removedItems)->GetEnumerator(); enum_123.MoveNext(); )
        {
            ::app::Fuse::Drawing::Brush* i = enum_123.Current();
            ::uPtr< ::uDelegate*>(__this->removed)->InvokeVoid< ::app::Fuse::Drawing::Brush*>(i);
        }
    }
}

bool ObservableList__Fuse_Drawing_Brush__Contains(ObservableList__Fuse_Drawing_Brush* __this, ::app::Fuse::Drawing::Brush* item)
{
    if (__this->items == NULL)
    {
        return false;
    }

    return ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Brush*>(__this->items)->Contains(item);
}

int ObservableList__Fuse_Drawing_Brush__get_Count(ObservableList__Fuse_Drawing_Brush* __this)
{
    return (__this->items != NULL) ? ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Brush*>(__this->items)->Count() : 0;
}

::app::Fuse::Drawing::Brush* ObservableList__Fuse_Drawing_Brush__get_Item(ObservableList__Fuse_Drawing_Brush* __this, int index)
{
    if (__this->items == NULL)
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }

    return ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Brush*>(__this->items)->Item(index);
}

::uObject* ObservableList__Fuse_Drawing_Brush__GetEnumerator(ObservableList__Fuse_Drawing_Brush* __this)
{
    if (__this->items == NULL)
    {
        __this->items = ::app::Uno::Collections::List__Fuse_Drawing_Brush__New_1(NULL);
    }

    return ::uBox(::app::Uno::Collections::List1_Enumerator__Fuse_Drawing_Brush__typeof(), ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Brush*>(__this->items)->GetEnumerator());
}

void ObservableList__Fuse_Drawing_Brush__Insert(ObservableList__Fuse_Drawing_Brush* __this, int index, ::app::Fuse::Drawing::Brush* item)
{
    if (__this->items == NULL)
    {
        __this->items = ::app::Uno::Collections::List__Fuse_Drawing_Brush__New_1(NULL);
    }

    ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Brush*>(__this->items)->Insert(index, item);
    ::uPtr< ::uDelegate*>(__this->added)->InvokeVoid< ::app::Fuse::Drawing::Brush*>(item);
}

ObservableList__Fuse_Drawing_Brush* ObservableList__Fuse_Drawing_Brush__New_1(::uStatic* __this, ::uDelegate* added, ::uDelegate* removed)
{
    ObservableList__Fuse_Drawing_Brush* inst = (ObservableList__Fuse_Drawing_Brush*)::uAllocObject(sizeof(ObservableList__Fuse_Drawing_Brush), ObservableList__Fuse_Drawing_Brush__typeof());
    inst->_ObjInit(added, removed);
    return inst;
}

bool ObservableList__Fuse_Drawing_Brush__Remove(ObservableList__Fuse_Drawing_Brush* __this, ::app::Fuse::Drawing::Brush* item)
{
    if (__this->items == NULL)
    {
        return false;
    }

    bool res = ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Brush*>(__this->items)->Remove(item);

    if (res)
    {
        ::uPtr< ::uDelegate*>(__this->removed)->InvokeVoid< ::app::Fuse::Drawing::Brush*>(item);
    }

    return res;
}

void ObservableList__Fuse_Drawing_Brush__RemoveAt(ObservableList__Fuse_Drawing_Brush* __this, int index)
{
    if (__this->items == NULL)
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }

    __this->Remove(::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Brush*>(__this->items)->Item(index));
}

void ObservableList__Fuse_Drawing_Brush__ReplaceAt(ObservableList__Fuse_Drawing_Brush* __this, int index, ::app::Fuse::Drawing::Brush* item)
{
    if (__this->items == NULL)
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }

    ::app::Fuse::Drawing::Brush* old = ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Brush*>(__this->items)->Item(index);
    ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Brush*>(__this->items)->Item(index, item);
    ::uPtr< ::uDelegate*>(__this->removed)->InvokeVoid< ::app::Fuse::Drawing::Brush*>(old);
    ::uPtr< ::uDelegate*>(__this->added)->InvokeVoid< ::app::Fuse::Drawing::Brush*>(item);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ObservableList__Fuse_Drawing_GradientStop__uType* ObservableList__Fuse_Drawing_GradientStop__typeof()
{
    static ::uStaticStrong<ObservableList__Fuse_Drawing_GradientStop__uType*> type;
    if (type != NULL) return type;

    type = (ObservableList__Fuse_Drawing_GradientStop__uType*)::uAllocClassType(sizeof(ObservableList__Fuse_Drawing_GradientStop__uType), "Uno.Collections.ObservableList<Fuse.Drawing.GradientStop>", false, 2, 3, 0);

    type->__interface_1.__fp_GetEnumerator = (::uObject*(*)(void*))ObservableList__Fuse_Drawing_GradientStop__GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IList__Fuse_Drawing_GradientStop__typeof(), offsetof(ObservableList__Fuse_Drawing_GradientStop__uType, __interface_0),
        ::app::Uno::Collections::IEnumerable__Fuse_Drawing_GradientStop__typeof(), offsetof(ObservableList__Fuse_Drawing_GradientStop__uType, __interface_1));

    type->SetStrongRefs(
        "added", offsetof(ObservableList__Fuse_Drawing_GradientStop, added),
        "items", offsetof(ObservableList__Fuse_Drawing_GradientStop, items),
        "removed", offsetof(ObservableList__Fuse_Drawing_GradientStop, removed));

    type->SetFields(3,
        ::uNewField("added", NULL, offsetof(ObservableList__Fuse_Drawing_GradientStop, added), ::app::Uno::Action__Fuse_Drawing_GradientStop__typeof()),
        ::uNewField("items", NULL, offsetof(ObservableList__Fuse_Drawing_GradientStop, items), ::app::Uno::Collections::List__Fuse_Drawing_GradientStop__typeof()),
        ::uNewField("removed", NULL, offsetof(ObservableList__Fuse_Drawing_GradientStop, removed), ::app::Uno::Action__Fuse_Drawing_GradientStop__typeof()));

    type->SetFunctions(11,
        ::uNewFunctionVoid("Add", ObservableList__Fuse_Drawing_GradientStop__Add, 0, false, ::app::Fuse::Drawing::GradientStop__typeof()),
        ::uNewFunctionVoid("Clear", ObservableList__Fuse_Drawing_GradientStop__Clear, 0, false),
        ::uNewFunction("Contains", ObservableList__Fuse_Drawing_GradientStop__Contains, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Drawing::GradientStop__typeof()),
        ::uNewFunction("get_Count", ObservableList__Fuse_Drawing_GradientStop__get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Item", ObservableList__Fuse_Drawing_GradientStop__get_Item, 0, false, ::app::Fuse::Drawing::GradientStop__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", ObservableList__Fuse_Drawing_GradientStop__GetEnumerator, 0, false, ::app::Uno::Collections::IEnumerator__Fuse_Drawing_GradientStop__typeof()),
        ::uNewFunctionVoid("Insert", ObservableList__Fuse_Drawing_GradientStop__Insert, 0, false, ::app::Uno::Int__typeof(), ::app::Fuse::Drawing::GradientStop__typeof()),
        ::uNewFunction(".ctor", ObservableList__Fuse_Drawing_GradientStop__New_1, 0, true, ObservableList__Fuse_Drawing_GradientStop__typeof(), ::app::Uno::Action__Fuse_Drawing_GradientStop__typeof(), ::app::Uno::Action__Fuse_Drawing_GradientStop__typeof()),
        ::uNewFunction("Remove", ObservableList__Fuse_Drawing_GradientStop__Remove, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Drawing::GradientStop__typeof()),
        ::uNewFunctionVoid("RemoveAt", ObservableList__Fuse_Drawing_GradientStop__RemoveAt, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("ReplaceAt", ObservableList__Fuse_Drawing_GradientStop__ReplaceAt, 0, false, ::app::Uno::Int__typeof(), ::app::Fuse::Drawing::GradientStop__typeof()));

    ::uRegisterType(type);
    return type;
}

void ObservableList__Fuse_Drawing_GradientStop___ObjInit(ObservableList__Fuse_Drawing_GradientStop* __this, ::uDelegate* added, ::uDelegate* removed)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)added, NULL))
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("added")));
    }

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)removed, NULL))
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("removed")));
    }

    __this->added = added;
    __this->removed = removed;
}

void ObservableList__Fuse_Drawing_GradientStop__Add(ObservableList__Fuse_Drawing_GradientStop* __this, ::app::Fuse::Drawing::GradientStop* item)
{
    if (__this->items == NULL)
    {
        __this->items = ::app::Uno::Collections::List__Fuse_Drawing_GradientStop__New_1(NULL);
    }

    ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_GradientStop*>(__this->items)->Add(item);
    ::uPtr< ::uDelegate*>(__this->added)->InvokeVoid< ::app::Fuse::Drawing::GradientStop*>(item);
}

void ObservableList__Fuse_Drawing_GradientStop__Clear(ObservableList__Fuse_Drawing_GradientStop* __this)
{
    if (__this->items != NULL)
    {
        ::app::Uno::Collections::List__Fuse_Drawing_GradientStop* removedItems = __this->items;
        __this->items = NULL;

        for (::app::Uno::Collections::List1_Enumerator__Fuse_Drawing_GradientStop enum_123 = ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_GradientStop*>(removedItems)->GetEnumerator(); enum_123.MoveNext(); )
        {
            ::app::Fuse::Drawing::GradientStop* i = enum_123.Current();
            ::uPtr< ::uDelegate*>(__this->removed)->InvokeVoid< ::app::Fuse::Drawing::GradientStop*>(i);
        }
    }
}

bool ObservableList__Fuse_Drawing_GradientStop__Contains(ObservableList__Fuse_Drawing_GradientStop* __this, ::app::Fuse::Drawing::GradientStop* item)
{
    if (__this->items == NULL)
    {
        return false;
    }

    return ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_GradientStop*>(__this->items)->Contains(item);
}

int ObservableList__Fuse_Drawing_GradientStop__get_Count(ObservableList__Fuse_Drawing_GradientStop* __this)
{
    return (__this->items != NULL) ? ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_GradientStop*>(__this->items)->Count() : 0;
}

::app::Fuse::Drawing::GradientStop* ObservableList__Fuse_Drawing_GradientStop__get_Item(ObservableList__Fuse_Drawing_GradientStop* __this, int index)
{
    if (__this->items == NULL)
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }

    return ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_GradientStop*>(__this->items)->Item(index);
}

::uObject* ObservableList__Fuse_Drawing_GradientStop__GetEnumerator(ObservableList__Fuse_Drawing_GradientStop* __this)
{
    if (__this->items == NULL)
    {
        __this->items = ::app::Uno::Collections::List__Fuse_Drawing_GradientStop__New_1(NULL);
    }

    return ::uBox(::app::Uno::Collections::List1_Enumerator__Fuse_Drawing_GradientStop__typeof(), ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_GradientStop*>(__this->items)->GetEnumerator());
}

void ObservableList__Fuse_Drawing_GradientStop__Insert(ObservableList__Fuse_Drawing_GradientStop* __this, int index, ::app::Fuse::Drawing::GradientStop* item)
{
    if (__this->items == NULL)
    {
        __this->items = ::app::Uno::Collections::List__Fuse_Drawing_GradientStop__New_1(NULL);
    }

    ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_GradientStop*>(__this->items)->Insert(index, item);
    ::uPtr< ::uDelegate*>(__this->added)->InvokeVoid< ::app::Fuse::Drawing::GradientStop*>(item);
}

ObservableList__Fuse_Drawing_GradientStop* ObservableList__Fuse_Drawing_GradientStop__New_1(::uStatic* __this, ::uDelegate* added, ::uDelegate* removed)
{
    ObservableList__Fuse_Drawing_GradientStop* inst = (ObservableList__Fuse_Drawing_GradientStop*)::uAllocObject(sizeof(ObservableList__Fuse_Drawing_GradientStop), ObservableList__Fuse_Drawing_GradientStop__typeof());
    inst->_ObjInit(added, removed);
    return inst;
}

bool ObservableList__Fuse_Drawing_GradientStop__Remove(ObservableList__Fuse_Drawing_GradientStop* __this, ::app::Fuse::Drawing::GradientStop* item)
{
    if (__this->items == NULL)
    {
        return false;
    }

    bool res = ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_GradientStop*>(__this->items)->Remove(item);

    if (res)
    {
        ::uPtr< ::uDelegate*>(__this->removed)->InvokeVoid< ::app::Fuse::Drawing::GradientStop*>(item);
    }

    return res;
}

void ObservableList__Fuse_Drawing_GradientStop__RemoveAt(ObservableList__Fuse_Drawing_GradientStop* __this, int index)
{
    if (__this->items == NULL)
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }

    __this->Remove(::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_GradientStop*>(__this->items)->Item(index));
}

void ObservableList__Fuse_Drawing_GradientStop__ReplaceAt(ObservableList__Fuse_Drawing_GradientStop* __this, int index, ::app::Fuse::Drawing::GradientStop* item)
{
    if (__this->items == NULL)
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }

    ::app::Fuse::Drawing::GradientStop* old = ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_GradientStop*>(__this->items)->Item(index);
    ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_GradientStop*>(__this->items)->Item(index, item);
    ::uPtr< ::uDelegate*>(__this->removed)->InvokeVoid< ::app::Fuse::Drawing::GradientStop*>(old);
    ::uPtr< ::uDelegate*>(__this->added)->InvokeVoid< ::app::Fuse::Drawing::GradientStop*>(item);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ObservableList__Fuse_Drawing_Stroke__uType* ObservableList__Fuse_Drawing_Stroke__typeof()
{
    static ::uStaticStrong<ObservableList__Fuse_Drawing_Stroke__uType*> type;
    if (type != NULL) return type;

    type = (ObservableList__Fuse_Drawing_Stroke__uType*)::uAllocClassType(sizeof(ObservableList__Fuse_Drawing_Stroke__uType), "Uno.Collections.ObservableList<Fuse.Drawing.Stroke>", false, 3, 3, 0);

    type->__interface_0.__fp_get_Item = (::app::Fuse::Drawing::Stroke*(*)(void*, int))ObservableList__Fuse_Drawing_Stroke__get_Item;
    type->__interface_1.__fp_Clear = (void(*)(void*))ObservableList__Fuse_Drawing_Stroke__Clear;
    type->__interface_1.__fp_Add = (void(*)(void*, ::app::Fuse::Drawing::Stroke*))ObservableList__Fuse_Drawing_Stroke__Add;
    type->__interface_1.__fp_Remove = (bool(*)(void*, ::app::Fuse::Drawing::Stroke*))ObservableList__Fuse_Drawing_Stroke__Remove;
    type->__interface_1.__fp_get_Count = (int(*)(void*))ObservableList__Fuse_Drawing_Stroke__get_Count;
    type->__interface_2.__fp_GetEnumerator = (::uObject*(*)(void*))ObservableList__Fuse_Drawing_Stroke__GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IList__Fuse_Drawing_Stroke__typeof(), offsetof(ObservableList__Fuse_Drawing_Stroke__uType, __interface_0),
        ::app::Uno::Collections::ICollection__Fuse_Drawing_Stroke__typeof(), offsetof(ObservableList__Fuse_Drawing_Stroke__uType, __interface_1),
        ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Stroke__typeof(), offsetof(ObservableList__Fuse_Drawing_Stroke__uType, __interface_2));

    type->SetStrongRefs(
        "added", offsetof(ObservableList__Fuse_Drawing_Stroke, added),
        "items", offsetof(ObservableList__Fuse_Drawing_Stroke, items),
        "removed", offsetof(ObservableList__Fuse_Drawing_Stroke, removed));

    type->SetFields(3,
        ::uNewField("added", NULL, offsetof(ObservableList__Fuse_Drawing_Stroke, added), ::app::Uno::Action__Fuse_Drawing_Stroke__typeof()),
        ::uNewField("items", NULL, offsetof(ObservableList__Fuse_Drawing_Stroke, items), ::app::Uno::Collections::List__Fuse_Drawing_Stroke__typeof()),
        ::uNewField("removed", NULL, offsetof(ObservableList__Fuse_Drawing_Stroke, removed), ::app::Uno::Action__Fuse_Drawing_Stroke__typeof()));

    type->SetFunctions(11,
        ::uNewFunctionVoid("Add", ObservableList__Fuse_Drawing_Stroke__Add, 0, false, ::app::Fuse::Drawing::Stroke__typeof()),
        ::uNewFunctionVoid("Clear", ObservableList__Fuse_Drawing_Stroke__Clear, 0, false),
        ::uNewFunction("Contains", ObservableList__Fuse_Drawing_Stroke__Contains, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Drawing::Stroke__typeof()),
        ::uNewFunction("get_Count", ObservableList__Fuse_Drawing_Stroke__get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Item", ObservableList__Fuse_Drawing_Stroke__get_Item, 0, false, ::app::Fuse::Drawing::Stroke__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", ObservableList__Fuse_Drawing_Stroke__GetEnumerator, 0, false, ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Stroke__typeof()),
        ::uNewFunctionVoid("Insert", ObservableList__Fuse_Drawing_Stroke__Insert, 0, false, ::app::Uno::Int__typeof(), ::app::Fuse::Drawing::Stroke__typeof()),
        ::uNewFunction(".ctor", ObservableList__Fuse_Drawing_Stroke__New_1, 0, true, ObservableList__Fuse_Drawing_Stroke__typeof(), ::app::Uno::Action__Fuse_Drawing_Stroke__typeof(), ::app::Uno::Action__Fuse_Drawing_Stroke__typeof()),
        ::uNewFunction("Remove", ObservableList__Fuse_Drawing_Stroke__Remove, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Drawing::Stroke__typeof()),
        ::uNewFunctionVoid("RemoveAt", ObservableList__Fuse_Drawing_Stroke__RemoveAt, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("ReplaceAt", ObservableList__Fuse_Drawing_Stroke__ReplaceAt, 0, false, ::app::Uno::Int__typeof(), ::app::Fuse::Drawing::Stroke__typeof()));

    ::uRegisterType(type);
    return type;
}

void ObservableList__Fuse_Drawing_Stroke___ObjInit(ObservableList__Fuse_Drawing_Stroke* __this, ::uDelegate* added, ::uDelegate* removed)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)added, NULL))
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("added")));
    }

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)removed, NULL))
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("removed")));
    }

    __this->added = added;
    __this->removed = removed;
}

void ObservableList__Fuse_Drawing_Stroke__Add(ObservableList__Fuse_Drawing_Stroke* __this, ::app::Fuse::Drawing::Stroke* item)
{
    if (__this->items == NULL)
    {
        __this->items = ::app::Uno::Collections::List__Fuse_Drawing_Stroke__New_1(NULL);
    }

    ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Stroke*>(__this->items)->Add(item);
    ::uPtr< ::uDelegate*>(__this->added)->InvokeVoid< ::app::Fuse::Drawing::Stroke*>(item);
}

void ObservableList__Fuse_Drawing_Stroke__Clear(ObservableList__Fuse_Drawing_Stroke* __this)
{
    if (__this->items != NULL)
    {
        ::app::Uno::Collections::List__Fuse_Drawing_Stroke* removedItems = __this->items;
        __this->items = NULL;

        for (::app::Uno::Collections::List1_Enumerator__Fuse_Drawing_Stroke enum_123 = ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Stroke*>(removedItems)->GetEnumerator(); enum_123.MoveNext(); )
        {
            ::app::Fuse::Drawing::Stroke* i = enum_123.Current();
            ::uPtr< ::uDelegate*>(__this->removed)->InvokeVoid< ::app::Fuse::Drawing::Stroke*>(i);
        }
    }
}

bool ObservableList__Fuse_Drawing_Stroke__Contains(ObservableList__Fuse_Drawing_Stroke* __this, ::app::Fuse::Drawing::Stroke* item)
{
    if (__this->items == NULL)
    {
        return false;
    }

    return ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Stroke*>(__this->items)->Contains(item);
}

int ObservableList__Fuse_Drawing_Stroke__get_Count(ObservableList__Fuse_Drawing_Stroke* __this)
{
    return (__this->items != NULL) ? ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Stroke*>(__this->items)->Count() : 0;
}

::app::Fuse::Drawing::Stroke* ObservableList__Fuse_Drawing_Stroke__get_Item(ObservableList__Fuse_Drawing_Stroke* __this, int index)
{
    if (__this->items == NULL)
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }

    return ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Stroke*>(__this->items)->Item(index);
}

::uObject* ObservableList__Fuse_Drawing_Stroke__GetEnumerator(ObservableList__Fuse_Drawing_Stroke* __this)
{
    if (__this->items == NULL)
    {
        __this->items = ::app::Uno::Collections::List__Fuse_Drawing_Stroke__New_1(NULL);
    }

    return ::uBox(::app::Uno::Collections::List1_Enumerator__Fuse_Drawing_Stroke__typeof(), ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Stroke*>(__this->items)->GetEnumerator());
}

void ObservableList__Fuse_Drawing_Stroke__Insert(ObservableList__Fuse_Drawing_Stroke* __this, int index, ::app::Fuse::Drawing::Stroke* item)
{
    if (__this->items == NULL)
    {
        __this->items = ::app::Uno::Collections::List__Fuse_Drawing_Stroke__New_1(NULL);
    }

    ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Stroke*>(__this->items)->Insert(index, item);
    ::uPtr< ::uDelegate*>(__this->added)->InvokeVoid< ::app::Fuse::Drawing::Stroke*>(item);
}

ObservableList__Fuse_Drawing_Stroke* ObservableList__Fuse_Drawing_Stroke__New_1(::uStatic* __this, ::uDelegate* added, ::uDelegate* removed)
{
    ObservableList__Fuse_Drawing_Stroke* inst = (ObservableList__Fuse_Drawing_Stroke*)::uAllocObject(sizeof(ObservableList__Fuse_Drawing_Stroke), ObservableList__Fuse_Drawing_Stroke__typeof());
    inst->_ObjInit(added, removed);
    return inst;
}

bool ObservableList__Fuse_Drawing_Stroke__Remove(ObservableList__Fuse_Drawing_Stroke* __this, ::app::Fuse::Drawing::Stroke* item)
{
    if (__this->items == NULL)
    {
        return false;
    }

    bool res = ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Stroke*>(__this->items)->Remove(item);

    if (res)
    {
        ::uPtr< ::uDelegate*>(__this->removed)->InvokeVoid< ::app::Fuse::Drawing::Stroke*>(item);
    }

    return res;
}

void ObservableList__Fuse_Drawing_Stroke__RemoveAt(ObservableList__Fuse_Drawing_Stroke* __this, int index)
{
    if (__this->items == NULL)
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }

    __this->Remove(::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Stroke*>(__this->items)->Item(index));
}

void ObservableList__Fuse_Drawing_Stroke__ReplaceAt(ObservableList__Fuse_Drawing_Stroke* __this, int index, ::app::Fuse::Drawing::Stroke* item)
{
    if (__this->items == NULL)
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }

    ::app::Fuse::Drawing::Stroke* old = ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Stroke*>(__this->items)->Item(index);
    ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Stroke*>(__this->items)->Item(index, item);
    ::uPtr< ::uDelegate*>(__this->removed)->InvokeVoid< ::app::Fuse::Drawing::Stroke*>(old);
    ::uPtr< ::uDelegate*>(__this->added)->InvokeVoid< ::app::Fuse::Drawing::Stroke*>(item);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ObservableList__Fuse_Effects_Effect__uType* ObservableList__Fuse_Effects_Effect__typeof()
{
    static ::uStaticStrong<ObservableList__Fuse_Effects_Effect__uType*> type;
    if (type != NULL) return type;

    type = (ObservableList__Fuse_Effects_Effect__uType*)::uAllocClassType(sizeof(ObservableList__Fuse_Effects_Effect__uType), "Uno.Collections.ObservableList<Fuse.Effects.Effect>", false, 3, 3, 0);

    type->__interface_0.__fp_get_Item = (::app::Fuse::Effects::Effect*(*)(void*, int))ObservableList__Fuse_Effects_Effect__get_Item;
    type->__interface_1.__fp_Add = (void(*)(void*, ::app::Fuse::Effects::Effect*))ObservableList__Fuse_Effects_Effect__Add;
    type->__interface_1.__fp_get_Count = (int(*)(void*))ObservableList__Fuse_Effects_Effect__get_Count;
    type->__interface_2.__fp_GetEnumerator = (::uObject*(*)(void*))ObservableList__Fuse_Effects_Effect__GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IList__Fuse_Effects_Effect__typeof(), offsetof(ObservableList__Fuse_Effects_Effect__uType, __interface_0),
        ::app::Uno::Collections::ICollection__Fuse_Effects_Effect__typeof(), offsetof(ObservableList__Fuse_Effects_Effect__uType, __interface_1),
        ::app::Uno::Collections::IEnumerable__Fuse_Effects_Effect__typeof(), offsetof(ObservableList__Fuse_Effects_Effect__uType, __interface_2));

    type->SetStrongRefs(
        "added", offsetof(ObservableList__Fuse_Effects_Effect, added),
        "items", offsetof(ObservableList__Fuse_Effects_Effect, items),
        "removed", offsetof(ObservableList__Fuse_Effects_Effect, removed));

    type->SetFields(3,
        ::uNewField("added", NULL, offsetof(ObservableList__Fuse_Effects_Effect, added), ::app::Uno::Action__Fuse_Effects_Effect__typeof()),
        ::uNewField("items", NULL, offsetof(ObservableList__Fuse_Effects_Effect, items), ::app::Uno::Collections::List__Fuse_Effects_Effect__typeof()),
        ::uNewField("removed", NULL, offsetof(ObservableList__Fuse_Effects_Effect, removed), ::app::Uno::Action__Fuse_Effects_Effect__typeof()));

    type->SetFunctions(11,
        ::uNewFunctionVoid("Add", ObservableList__Fuse_Effects_Effect__Add, 0, false, ::app::Fuse::Effects::Effect__typeof()),
        ::uNewFunctionVoid("Clear", ObservableList__Fuse_Effects_Effect__Clear, 0, false),
        ::uNewFunction("Contains", ObservableList__Fuse_Effects_Effect__Contains, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Effects::Effect__typeof()),
        ::uNewFunction("get_Count", ObservableList__Fuse_Effects_Effect__get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Item", ObservableList__Fuse_Effects_Effect__get_Item, 0, false, ::app::Fuse::Effects::Effect__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", ObservableList__Fuse_Effects_Effect__GetEnumerator, 0, false, ::app::Uno::Collections::IEnumerator__Fuse_Effects_Effect__typeof()),
        ::uNewFunctionVoid("Insert", ObservableList__Fuse_Effects_Effect__Insert, 0, false, ::app::Uno::Int__typeof(), ::app::Fuse::Effects::Effect__typeof()),
        ::uNewFunction(".ctor", ObservableList__Fuse_Effects_Effect__New_1, 0, true, ObservableList__Fuse_Effects_Effect__typeof(), ::app::Uno::Action__Fuse_Effects_Effect__typeof(), ::app::Uno::Action__Fuse_Effects_Effect__typeof()),
        ::uNewFunction("Remove", ObservableList__Fuse_Effects_Effect__Remove, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Effects::Effect__typeof()),
        ::uNewFunctionVoid("RemoveAt", ObservableList__Fuse_Effects_Effect__RemoveAt, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("ReplaceAt", ObservableList__Fuse_Effects_Effect__ReplaceAt, 0, false, ::app::Uno::Int__typeof(), ::app::Fuse::Effects::Effect__typeof()));

    ::uRegisterType(type);
    return type;
}

void ObservableList__Fuse_Effects_Effect___ObjInit(ObservableList__Fuse_Effects_Effect* __this, ::uDelegate* added, ::uDelegate* removed)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)added, NULL))
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("added")));
    }

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)removed, NULL))
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("removed")));
    }

    __this->added = added;
    __this->removed = removed;
}

void ObservableList__Fuse_Effects_Effect__Add(ObservableList__Fuse_Effects_Effect* __this, ::app::Fuse::Effects::Effect* item)
{
    if (__this->items == NULL)
    {
        __this->items = ::app::Uno::Collections::List__Fuse_Effects_Effect__New_1(NULL);
    }

    ::uPtr< ::app::Uno::Collections::List__Fuse_Effects_Effect*>(__this->items)->Add(item);
    ::uPtr< ::uDelegate*>(__this->added)->InvokeVoid< ::app::Fuse::Effects::Effect*>(item);
}

void ObservableList__Fuse_Effects_Effect__Clear(ObservableList__Fuse_Effects_Effect* __this)
{
    if (__this->items != NULL)
    {
        ::app::Uno::Collections::List__Fuse_Effects_Effect* removedItems = __this->items;
        __this->items = NULL;

        for (::app::Uno::Collections::List1_Enumerator__Fuse_Effects_Effect enum_123 = ::uPtr< ::app::Uno::Collections::List__Fuse_Effects_Effect*>(removedItems)->GetEnumerator(); enum_123.MoveNext(); )
        {
            ::app::Fuse::Effects::Effect* i = enum_123.Current();
            ::uPtr< ::uDelegate*>(__this->removed)->InvokeVoid< ::app::Fuse::Effects::Effect*>(i);
        }
    }
}

bool ObservableList__Fuse_Effects_Effect__Contains(ObservableList__Fuse_Effects_Effect* __this, ::app::Fuse::Effects::Effect* item)
{
    if (__this->items == NULL)
    {
        return false;
    }

    return ::uPtr< ::app::Uno::Collections::List__Fuse_Effects_Effect*>(__this->items)->Contains(item);
}

int ObservableList__Fuse_Effects_Effect__get_Count(ObservableList__Fuse_Effects_Effect* __this)
{
    return (__this->items != NULL) ? ::uPtr< ::app::Uno::Collections::List__Fuse_Effects_Effect*>(__this->items)->Count() : 0;
}

::app::Fuse::Effects::Effect* ObservableList__Fuse_Effects_Effect__get_Item(ObservableList__Fuse_Effects_Effect* __this, int index)
{
    if (__this->items == NULL)
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }

    return ::uPtr< ::app::Uno::Collections::List__Fuse_Effects_Effect*>(__this->items)->Item(index);
}

::uObject* ObservableList__Fuse_Effects_Effect__GetEnumerator(ObservableList__Fuse_Effects_Effect* __this)
{
    if (__this->items == NULL)
    {
        __this->items = ::app::Uno::Collections::List__Fuse_Effects_Effect__New_1(NULL);
    }

    return ::uBox(::app::Uno::Collections::List1_Enumerator__Fuse_Effects_Effect__typeof(), ::uPtr< ::app::Uno::Collections::List__Fuse_Effects_Effect*>(__this->items)->GetEnumerator());
}

void ObservableList__Fuse_Effects_Effect__Insert(ObservableList__Fuse_Effects_Effect* __this, int index, ::app::Fuse::Effects::Effect* item)
{
    if (__this->items == NULL)
    {
        __this->items = ::app::Uno::Collections::List__Fuse_Effects_Effect__New_1(NULL);
    }

    ::uPtr< ::app::Uno::Collections::List__Fuse_Effects_Effect*>(__this->items)->Insert(index, item);
    ::uPtr< ::uDelegate*>(__this->added)->InvokeVoid< ::app::Fuse::Effects::Effect*>(item);
}

ObservableList__Fuse_Effects_Effect* ObservableList__Fuse_Effects_Effect__New_1(::uStatic* __this, ::uDelegate* added, ::uDelegate* removed)
{
    ObservableList__Fuse_Effects_Effect* inst = (ObservableList__Fuse_Effects_Effect*)::uAllocObject(sizeof(ObservableList__Fuse_Effects_Effect), ObservableList__Fuse_Effects_Effect__typeof());
    inst->_ObjInit(added, removed);
    return inst;
}

bool ObservableList__Fuse_Effects_Effect__Remove(ObservableList__Fuse_Effects_Effect* __this, ::app::Fuse::Effects::Effect* item)
{
    if (__this->items == NULL)
    {
        return false;
    }

    bool res = ::uPtr< ::app::Uno::Collections::List__Fuse_Effects_Effect*>(__this->items)->Remove(item);

    if (res)
    {
        ::uPtr< ::uDelegate*>(__this->removed)->InvokeVoid< ::app::Fuse::Effects::Effect*>(item);
    }

    return res;
}

void ObservableList__Fuse_Effects_Effect__RemoveAt(ObservableList__Fuse_Effects_Effect* __this, int index)
{
    if (__this->items == NULL)
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }

    __this->Remove(::uPtr< ::app::Uno::Collections::List__Fuse_Effects_Effect*>(__this->items)->Item(index));
}

void ObservableList__Fuse_Effects_Effect__ReplaceAt(ObservableList__Fuse_Effects_Effect* __this, int index, ::app::Fuse::Effects::Effect* item)
{
    if (__this->items == NULL)
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }

    ::app::Fuse::Effects::Effect* old = ::uPtr< ::app::Uno::Collections::List__Fuse_Effects_Effect*>(__this->items)->Item(index);
    ::uPtr< ::app::Uno::Collections::List__Fuse_Effects_Effect*>(__this->items)->Item(index, item);
    ::uPtr< ::uDelegate*>(__this->removed)->InvokeVoid< ::app::Fuse::Effects::Effect*>(old);
    ::uPtr< ::uDelegate*>(__this->added)->InvokeVoid< ::app::Fuse::Effects::Effect*>(item);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ObservableList__Fuse_Entities_Component__uType* ObservableList__Fuse_Entities_Component__typeof()
{
    static ::uStaticStrong<ObservableList__Fuse_Entities_Component__uType*> type;
    if (type != NULL) return type;

    type = (ObservableList__Fuse_Entities_Component__uType*)::uAllocClassType(sizeof(ObservableList__Fuse_Entities_Component__uType), "Uno.Collections.ObservableList<Fuse.Entities.Component>", false, 3, 3, 0);

    type->__interface_0.__fp_get_Item = (::app::Fuse::Entities::Component*(*)(void*, int))ObservableList__Fuse_Entities_Component__get_Item;
    type->__interface_1.__fp_Add = (void(*)(void*, ::app::Fuse::Entities::Component*))ObservableList__Fuse_Entities_Component__Add;
    type->__interface_1.__fp_get_Count = (int(*)(void*))ObservableList__Fuse_Entities_Component__get_Count;
    type->__interface_2.__fp_GetEnumerator = (::uObject*(*)(void*))ObservableList__Fuse_Entities_Component__GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IList__Fuse_Entities_Component__typeof(), offsetof(ObservableList__Fuse_Entities_Component__uType, __interface_0),
        ::app::Uno::Collections::ICollection__Fuse_Entities_Component__typeof(), offsetof(ObservableList__Fuse_Entities_Component__uType, __interface_1),
        ::app::Uno::Collections::IEnumerable__Fuse_Entities_Component__typeof(), offsetof(ObservableList__Fuse_Entities_Component__uType, __interface_2));

    type->SetStrongRefs(
        "added", offsetof(ObservableList__Fuse_Entities_Component, added),
        "items", offsetof(ObservableList__Fuse_Entities_Component, items),
        "removed", offsetof(ObservableList__Fuse_Entities_Component, removed));

    type->SetFields(3,
        ::uNewField("added", NULL, offsetof(ObservableList__Fuse_Entities_Component, added), ::app::Uno::Action__Fuse_Entities_Component__typeof()),
        ::uNewField("items", NULL, offsetof(ObservableList__Fuse_Entities_Component, items), ::app::Uno::Collections::List__Fuse_Entities_Component__typeof()),
        ::uNewField("removed", NULL, offsetof(ObservableList__Fuse_Entities_Component, removed), ::app::Uno::Action__Fuse_Entities_Component__typeof()));

    type->SetFunctions(11,
        ::uNewFunctionVoid("Add", ObservableList__Fuse_Entities_Component__Add, 0, false, ::app::Fuse::Entities::Component__typeof()),
        ::uNewFunctionVoid("Clear", ObservableList__Fuse_Entities_Component__Clear, 0, false),
        ::uNewFunction("Contains", ObservableList__Fuse_Entities_Component__Contains, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Entities::Component__typeof()),
        ::uNewFunction("get_Count", ObservableList__Fuse_Entities_Component__get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Item", ObservableList__Fuse_Entities_Component__get_Item, 0, false, ::app::Fuse::Entities::Component__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", ObservableList__Fuse_Entities_Component__GetEnumerator, 0, false, ::app::Uno::Collections::IEnumerator__Fuse_Entities_Component__typeof()),
        ::uNewFunctionVoid("Insert", ObservableList__Fuse_Entities_Component__Insert, 0, false, ::app::Uno::Int__typeof(), ::app::Fuse::Entities::Component__typeof()),
        ::uNewFunction(".ctor", ObservableList__Fuse_Entities_Component__New_1, 0, true, ObservableList__Fuse_Entities_Component__typeof(), ::app::Uno::Action__Fuse_Entities_Component__typeof(), ::app::Uno::Action__Fuse_Entities_Component__typeof()),
        ::uNewFunction("Remove", ObservableList__Fuse_Entities_Component__Remove, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Entities::Component__typeof()),
        ::uNewFunctionVoid("RemoveAt", ObservableList__Fuse_Entities_Component__RemoveAt, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("ReplaceAt", ObservableList__Fuse_Entities_Component__ReplaceAt, 0, false, ::app::Uno::Int__typeof(), ::app::Fuse::Entities::Component__typeof()));

    ::uRegisterType(type);
    return type;
}

void ObservableList__Fuse_Entities_Component___ObjInit(ObservableList__Fuse_Entities_Component* __this, ::uDelegate* added, ::uDelegate* removed)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)added, NULL))
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("added")));
    }

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)removed, NULL))
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("removed")));
    }

    __this->added = added;
    __this->removed = removed;
}

void ObservableList__Fuse_Entities_Component__Add(ObservableList__Fuse_Entities_Component* __this, ::app::Fuse::Entities::Component* item)
{
    if (__this->items == NULL)
    {
        __this->items = ::app::Uno::Collections::List__Fuse_Entities_Component__New_1(NULL);
    }

    ::uPtr< ::app::Uno::Collections::List__Fuse_Entities_Component*>(__this->items)->Add(item);
    ::uPtr< ::uDelegate*>(__this->added)->InvokeVoid< ::app::Fuse::Entities::Component*>(item);
}

void ObservableList__Fuse_Entities_Component__Clear(ObservableList__Fuse_Entities_Component* __this)
{
    if (__this->items != NULL)
    {
        ::app::Uno::Collections::List__Fuse_Entities_Component* removedItems = __this->items;
        __this->items = NULL;

        for (::app::Uno::Collections::List1_Enumerator__Fuse_Entities_Component enum_123 = ::uPtr< ::app::Uno::Collections::List__Fuse_Entities_Component*>(removedItems)->GetEnumerator(); enum_123.MoveNext(); )
        {
            ::app::Fuse::Entities::Component* i = enum_123.Current();
            ::uPtr< ::uDelegate*>(__this->removed)->InvokeVoid< ::app::Fuse::Entities::Component*>(i);
        }
    }
}

bool ObservableList__Fuse_Entities_Component__Contains(ObservableList__Fuse_Entities_Component* __this, ::app::Fuse::Entities::Component* item)
{
    if (__this->items == NULL)
    {
        return false;
    }

    return ::uPtr< ::app::Uno::Collections::List__Fuse_Entities_Component*>(__this->items)->Contains(item);
}

int ObservableList__Fuse_Entities_Component__get_Count(ObservableList__Fuse_Entities_Component* __this)
{
    return (__this->items != NULL) ? ::uPtr< ::app::Uno::Collections::List__Fuse_Entities_Component*>(__this->items)->Count() : 0;
}

::app::Fuse::Entities::Component* ObservableList__Fuse_Entities_Component__get_Item(ObservableList__Fuse_Entities_Component* __this, int index)
{
    if (__this->items == NULL)
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }

    return ::uPtr< ::app::Uno::Collections::List__Fuse_Entities_Component*>(__this->items)->Item(index);
}

::uObject* ObservableList__Fuse_Entities_Component__GetEnumerator(ObservableList__Fuse_Entities_Component* __this)
{
    if (__this->items == NULL)
    {
        __this->items = ::app::Uno::Collections::List__Fuse_Entities_Component__New_1(NULL);
    }

    return ::uBox(::app::Uno::Collections::List1_Enumerator__Fuse_Entities_Component__typeof(), ::uPtr< ::app::Uno::Collections::List__Fuse_Entities_Component*>(__this->items)->GetEnumerator());
}

void ObservableList__Fuse_Entities_Component__Insert(ObservableList__Fuse_Entities_Component* __this, int index, ::app::Fuse::Entities::Component* item)
{
    if (__this->items == NULL)
    {
        __this->items = ::app::Uno::Collections::List__Fuse_Entities_Component__New_1(NULL);
    }

    ::uPtr< ::app::Uno::Collections::List__Fuse_Entities_Component*>(__this->items)->Insert(index, item);
    ::uPtr< ::uDelegate*>(__this->added)->InvokeVoid< ::app::Fuse::Entities::Component*>(item);
}

ObservableList__Fuse_Entities_Component* ObservableList__Fuse_Entities_Component__New_1(::uStatic* __this, ::uDelegate* added, ::uDelegate* removed)
{
    ObservableList__Fuse_Entities_Component* inst = (ObservableList__Fuse_Entities_Component*)::uAllocObject(sizeof(ObservableList__Fuse_Entities_Component), ObservableList__Fuse_Entities_Component__typeof());
    inst->_ObjInit(added, removed);
    return inst;
}

bool ObservableList__Fuse_Entities_Component__Remove(ObservableList__Fuse_Entities_Component* __this, ::app::Fuse::Entities::Component* item)
{
    if (__this->items == NULL)
    {
        return false;
    }

    bool res = ::uPtr< ::app::Uno::Collections::List__Fuse_Entities_Component*>(__this->items)->Remove(item);

    if (res)
    {
        ::uPtr< ::uDelegate*>(__this->removed)->InvokeVoid< ::app::Fuse::Entities::Component*>(item);
    }

    return res;
}

void ObservableList__Fuse_Entities_Component__RemoveAt(ObservableList__Fuse_Entities_Component* __this, int index)
{
    if (__this->items == NULL)
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }

    __this->Remove(::uPtr< ::app::Uno::Collections::List__Fuse_Entities_Component*>(__this->items)->Item(index));
}

void ObservableList__Fuse_Entities_Component__ReplaceAt(ObservableList__Fuse_Entities_Component* __this, int index, ::app::Fuse::Entities::Component* item)
{
    if (__this->items == NULL)
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }

    ::app::Fuse::Entities::Component* old = ::uPtr< ::app::Uno::Collections::List__Fuse_Entities_Component*>(__this->items)->Item(index);
    ::uPtr< ::app::Uno::Collections::List__Fuse_Entities_Component*>(__this->items)->Item(index, item);
    ::uPtr< ::uDelegate*>(__this->removed)->InvokeVoid< ::app::Fuse::Entities::Component*>(old);
    ::uPtr< ::uDelegate*>(__this->added)->InvokeVoid< ::app::Fuse::Entities::Component*>(item);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ObservableList__Fuse_Entities_Entity__uType* ObservableList__Fuse_Entities_Entity__typeof()
{
    static ::uStaticStrong<ObservableList__Fuse_Entities_Entity__uType*> type;
    if (type != NULL) return type;

    type = (ObservableList__Fuse_Entities_Entity__uType*)::uAllocClassType(sizeof(ObservableList__Fuse_Entities_Entity__uType), "Uno.Collections.ObservableList<Fuse.Entities.Entity>", false, 3, 3, 0);

    type->__interface_0.__fp_RemoveAt = (void(*)(void*, int))ObservableList__Fuse_Entities_Entity__RemoveAt;
    type->__interface_0.__fp_get_Item = (::app::Fuse::Entities::Entity*(*)(void*, int))ObservableList__Fuse_Entities_Entity__get_Item;
    type->__interface_1.__fp_Add = (void(*)(void*, ::app::Fuse::Entities::Entity*))ObservableList__Fuse_Entities_Entity__Add;
    type->__interface_1.__fp_get_Count = (int(*)(void*))ObservableList__Fuse_Entities_Entity__get_Count;
    type->__interface_2.__fp_GetEnumerator = (::uObject*(*)(void*))ObservableList__Fuse_Entities_Entity__GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IList__Fuse_Entities_Entity__typeof(), offsetof(ObservableList__Fuse_Entities_Entity__uType, __interface_0),
        ::app::Uno::Collections::ICollection__Fuse_Entities_Entity__typeof(), offsetof(ObservableList__Fuse_Entities_Entity__uType, __interface_1),
        ::app::Uno::Collections::IEnumerable__Fuse_Entities_Entity__typeof(), offsetof(ObservableList__Fuse_Entities_Entity__uType, __interface_2));

    type->SetStrongRefs(
        "added", offsetof(ObservableList__Fuse_Entities_Entity, added),
        "items", offsetof(ObservableList__Fuse_Entities_Entity, items),
        "removed", offsetof(ObservableList__Fuse_Entities_Entity, removed));

    type->SetFields(3,
        ::uNewField("added", NULL, offsetof(ObservableList__Fuse_Entities_Entity, added), ::app::Uno::Action__Fuse_Entities_Entity__typeof()),
        ::uNewField("items", NULL, offsetof(ObservableList__Fuse_Entities_Entity, items), ::app::Uno::Collections::List__Fuse_Entities_Entity__typeof()),
        ::uNewField("removed", NULL, offsetof(ObservableList__Fuse_Entities_Entity, removed), ::app::Uno::Action__Fuse_Entities_Entity__typeof()));

    type->SetFunctions(11,
        ::uNewFunctionVoid("Add", ObservableList__Fuse_Entities_Entity__Add, 0, false, ::app::Fuse::Entities::Entity__typeof()),
        ::uNewFunctionVoid("Clear", ObservableList__Fuse_Entities_Entity__Clear, 0, false),
        ::uNewFunction("Contains", ObservableList__Fuse_Entities_Entity__Contains, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Entities::Entity__typeof()),
        ::uNewFunction("get_Count", ObservableList__Fuse_Entities_Entity__get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Item", ObservableList__Fuse_Entities_Entity__get_Item, 0, false, ::app::Fuse::Entities::Entity__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", ObservableList__Fuse_Entities_Entity__GetEnumerator, 0, false, ::app::Uno::Collections::IEnumerator__Fuse_Entities_Entity__typeof()),
        ::uNewFunctionVoid("Insert", ObservableList__Fuse_Entities_Entity__Insert, 0, false, ::app::Uno::Int__typeof(), ::app::Fuse::Entities::Entity__typeof()),
        ::uNewFunction(".ctor", ObservableList__Fuse_Entities_Entity__New_1, 0, true, ObservableList__Fuse_Entities_Entity__typeof(), ::app::Uno::Action__Fuse_Entities_Entity__typeof(), ::app::Uno::Action__Fuse_Entities_Entity__typeof()),
        ::uNewFunction("Remove", ObservableList__Fuse_Entities_Entity__Remove, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Entities::Entity__typeof()),
        ::uNewFunctionVoid("RemoveAt", ObservableList__Fuse_Entities_Entity__RemoveAt, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("ReplaceAt", ObservableList__Fuse_Entities_Entity__ReplaceAt, 0, false, ::app::Uno::Int__typeof(), ::app::Fuse::Entities::Entity__typeof()));

    ::uRegisterType(type);
    return type;
}

void ObservableList__Fuse_Entities_Entity___ObjInit(ObservableList__Fuse_Entities_Entity* __this, ::uDelegate* added, ::uDelegate* removed)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)added, NULL))
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("added")));
    }

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)removed, NULL))
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("removed")));
    }

    __this->added = added;
    __this->removed = removed;
}

void ObservableList__Fuse_Entities_Entity__Add(ObservableList__Fuse_Entities_Entity* __this, ::app::Fuse::Entities::Entity* item)
{
    if (__this->items == NULL)
    {
        __this->items = ::app::Uno::Collections::List__Fuse_Entities_Entity__New_1(NULL);
    }

    ::uPtr< ::app::Uno::Collections::List__Fuse_Entities_Entity*>(__this->items)->Add(item);
    ::uPtr< ::uDelegate*>(__this->added)->InvokeVoid< ::app::Fuse::Entities::Entity*>(item);
}

void ObservableList__Fuse_Entities_Entity__Clear(ObservableList__Fuse_Entities_Entity* __this)
{
    if (__this->items != NULL)
    {
        ::app::Uno::Collections::List__Fuse_Entities_Entity* removedItems = __this->items;
        __this->items = NULL;

        for (::app::Uno::Collections::List1_Enumerator__Fuse_Entities_Entity enum_123 = ::uPtr< ::app::Uno::Collections::List__Fuse_Entities_Entity*>(removedItems)->GetEnumerator(); enum_123.MoveNext(); )
        {
            ::app::Fuse::Entities::Entity* i = enum_123.Current();
            ::uPtr< ::uDelegate*>(__this->removed)->InvokeVoid< ::app::Fuse::Entities::Entity*>(i);
        }
    }
}

bool ObservableList__Fuse_Entities_Entity__Contains(ObservableList__Fuse_Entities_Entity* __this, ::app::Fuse::Entities::Entity* item)
{
    if (__this->items == NULL)
    {
        return false;
    }

    return ::uPtr< ::app::Uno::Collections::List__Fuse_Entities_Entity*>(__this->items)->Contains(item);
}

int ObservableList__Fuse_Entities_Entity__get_Count(ObservableList__Fuse_Entities_Entity* __this)
{
    return (__this->items != NULL) ? ::uPtr< ::app::Uno::Collections::List__Fuse_Entities_Entity*>(__this->items)->Count() : 0;
}

::app::Fuse::Entities::Entity* ObservableList__Fuse_Entities_Entity__get_Item(ObservableList__Fuse_Entities_Entity* __this, int index)
{
    if (__this->items == NULL)
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }

    return ::uPtr< ::app::Uno::Collections::List__Fuse_Entities_Entity*>(__this->items)->Item(index);
}

::uObject* ObservableList__Fuse_Entities_Entity__GetEnumerator(ObservableList__Fuse_Entities_Entity* __this)
{
    if (__this->items == NULL)
    {
        __this->items = ::app::Uno::Collections::List__Fuse_Entities_Entity__New_1(NULL);
    }

    return ::uBox(::app::Uno::Collections::List1_Enumerator__Fuse_Entities_Entity__typeof(), ::uPtr< ::app::Uno::Collections::List__Fuse_Entities_Entity*>(__this->items)->GetEnumerator());
}

void ObservableList__Fuse_Entities_Entity__Insert(ObservableList__Fuse_Entities_Entity* __this, int index, ::app::Fuse::Entities::Entity* item)
{
    if (__this->items == NULL)
    {
        __this->items = ::app::Uno::Collections::List__Fuse_Entities_Entity__New_1(NULL);
    }

    ::uPtr< ::app::Uno::Collections::List__Fuse_Entities_Entity*>(__this->items)->Insert(index, item);
    ::uPtr< ::uDelegate*>(__this->added)->InvokeVoid< ::app::Fuse::Entities::Entity*>(item);
}

ObservableList__Fuse_Entities_Entity* ObservableList__Fuse_Entities_Entity__New_1(::uStatic* __this, ::uDelegate* added, ::uDelegate* removed)
{
    ObservableList__Fuse_Entities_Entity* inst = (ObservableList__Fuse_Entities_Entity*)::uAllocObject(sizeof(ObservableList__Fuse_Entities_Entity), ObservableList__Fuse_Entities_Entity__typeof());
    inst->_ObjInit(added, removed);
    return inst;
}

bool ObservableList__Fuse_Entities_Entity__Remove(ObservableList__Fuse_Entities_Entity* __this, ::app::Fuse::Entities::Entity* item)
{
    if (__this->items == NULL)
    {
        return false;
    }

    bool res = ::uPtr< ::app::Uno::Collections::List__Fuse_Entities_Entity*>(__this->items)->Remove(item);

    if (res)
    {
        ::uPtr< ::uDelegate*>(__this->removed)->InvokeVoid< ::app::Fuse::Entities::Entity*>(item);
    }

    return res;
}

void ObservableList__Fuse_Entities_Entity__RemoveAt(ObservableList__Fuse_Entities_Entity* __this, int index)
{
    if (__this->items == NULL)
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }

    __this->Remove(::uPtr< ::app::Uno::Collections::List__Fuse_Entities_Entity*>(__this->items)->Item(index));
}

void ObservableList__Fuse_Entities_Entity__ReplaceAt(ObservableList__Fuse_Entities_Entity* __this, int index, ::app::Fuse::Entities::Entity* item)
{
    if (__this->items == NULL)
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }

    ::app::Fuse::Entities::Entity* old = ::uPtr< ::app::Uno::Collections::List__Fuse_Entities_Entity*>(__this->items)->Item(index);
    ::uPtr< ::app::Uno::Collections::List__Fuse_Entities_Entity*>(__this->items)->Item(index, item);
    ::uPtr< ::uDelegate*>(__this->removed)->InvokeVoid< ::app::Fuse::Entities::Entity*>(old);
    ::uPtr< ::uDelegate*>(__this->added)->InvokeVoid< ::app::Fuse::Entities::Entity*>(item);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ObservableList__Fuse_Layouts_Column__uType* ObservableList__Fuse_Layouts_Column__typeof()
{
    static ::uStaticStrong<ObservableList__Fuse_Layouts_Column__uType*> type;
    if (type != NULL) return type;

    type = (ObservableList__Fuse_Layouts_Column__uType*)::uAllocClassType(sizeof(ObservableList__Fuse_Layouts_Column__uType), "Uno.Collections.ObservableList<Fuse.Layouts.Column>", false, 3, 3, 0);

    type->__interface_0.__fp_RemoveAt = (void(*)(void*, int))ObservableList__Fuse_Layouts_Column__RemoveAt;
    type->__interface_0.__fp_get_Item = (::app::Fuse::Layouts::Column*(*)(void*, int))ObservableList__Fuse_Layouts_Column__get_Item;
    type->__interface_1.__fp_Clear = (void(*)(void*))ObservableList__Fuse_Layouts_Column__Clear;
    type->__interface_1.__fp_Add = (void(*)(void*, ::app::Fuse::Layouts::Column*))ObservableList__Fuse_Layouts_Column__Add;
    type->__interface_1.__fp_get_Count = (int(*)(void*))ObservableList__Fuse_Layouts_Column__get_Count;
    type->__interface_2.__fp_GetEnumerator = (::uObject*(*)(void*))ObservableList__Fuse_Layouts_Column__GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IList__Fuse_Layouts_Column__typeof(), offsetof(ObservableList__Fuse_Layouts_Column__uType, __interface_0),
        ::app::Uno::Collections::ICollection__Fuse_Layouts_Column__typeof(), offsetof(ObservableList__Fuse_Layouts_Column__uType, __interface_1),
        ::app::Uno::Collections::IEnumerable__Fuse_Layouts_Column__typeof(), offsetof(ObservableList__Fuse_Layouts_Column__uType, __interface_2));

    type->SetStrongRefs(
        "added", offsetof(ObservableList__Fuse_Layouts_Column, added),
        "items", offsetof(ObservableList__Fuse_Layouts_Column, items),
        "removed", offsetof(ObservableList__Fuse_Layouts_Column, removed));

    type->SetFields(3,
        ::uNewField("added", NULL, offsetof(ObservableList__Fuse_Layouts_Column, added), ::app::Uno::Action__Fuse_Layouts_Column__typeof()),
        ::uNewField("items", NULL, offsetof(ObservableList__Fuse_Layouts_Column, items), ::app::Uno::Collections::List__Fuse_Layouts_Column__typeof()),
        ::uNewField("removed", NULL, offsetof(ObservableList__Fuse_Layouts_Column, removed), ::app::Uno::Action__Fuse_Layouts_Column__typeof()));

    type->SetFunctions(11,
        ::uNewFunctionVoid("Add", ObservableList__Fuse_Layouts_Column__Add, 0, false, ::app::Fuse::Layouts::Column__typeof()),
        ::uNewFunctionVoid("Clear", ObservableList__Fuse_Layouts_Column__Clear, 0, false),
        ::uNewFunction("Contains", ObservableList__Fuse_Layouts_Column__Contains, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Layouts::Column__typeof()),
        ::uNewFunction("get_Count", ObservableList__Fuse_Layouts_Column__get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Item", ObservableList__Fuse_Layouts_Column__get_Item, 0, false, ::app::Fuse::Layouts::Column__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", ObservableList__Fuse_Layouts_Column__GetEnumerator, 0, false, ::app::Uno::Collections::IEnumerator__Fuse_Layouts_Column__typeof()),
        ::uNewFunctionVoid("Insert", ObservableList__Fuse_Layouts_Column__Insert, 0, false, ::app::Uno::Int__typeof(), ::app::Fuse::Layouts::Column__typeof()),
        ::uNewFunction(".ctor", ObservableList__Fuse_Layouts_Column__New_1, 0, true, ObservableList__Fuse_Layouts_Column__typeof(), ::app::Uno::Action__Fuse_Layouts_Column__typeof(), ::app::Uno::Action__Fuse_Layouts_Column__typeof()),
        ::uNewFunction("Remove", ObservableList__Fuse_Layouts_Column__Remove, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Layouts::Column__typeof()),
        ::uNewFunctionVoid("RemoveAt", ObservableList__Fuse_Layouts_Column__RemoveAt, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("ReplaceAt", ObservableList__Fuse_Layouts_Column__ReplaceAt, 0, false, ::app::Uno::Int__typeof(), ::app::Fuse::Layouts::Column__typeof()));

    ::uRegisterType(type);
    return type;
}

void ObservableList__Fuse_Layouts_Column___ObjInit(ObservableList__Fuse_Layouts_Column* __this, ::uDelegate* added, ::uDelegate* removed)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)added, NULL))
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("added")));
    }

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)removed, NULL))
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("removed")));
    }

    __this->added = added;
    __this->removed = removed;
}

void ObservableList__Fuse_Layouts_Column__Add(ObservableList__Fuse_Layouts_Column* __this, ::app::Fuse::Layouts::Column* item)
{
    if (__this->items == NULL)
    {
        __this->items = ::app::Uno::Collections::List__Fuse_Layouts_Column__New_1(NULL);
    }

    ::uPtr< ::app::Uno::Collections::List__Fuse_Layouts_Column*>(__this->items)->Add(item);
    ::uPtr< ::uDelegate*>(__this->added)->InvokeVoid< ::app::Fuse::Layouts::Column*>(item);
}

void ObservableList__Fuse_Layouts_Column__Clear(ObservableList__Fuse_Layouts_Column* __this)
{
    if (__this->items != NULL)
    {
        ::app::Uno::Collections::List__Fuse_Layouts_Column* removedItems = __this->items;
        __this->items = NULL;

        for (::app::Uno::Collections::List1_Enumerator__Fuse_Layouts_Column enum_123 = ::uPtr< ::app::Uno::Collections::List__Fuse_Layouts_Column*>(removedItems)->GetEnumerator(); enum_123.MoveNext(); )
        {
            ::app::Fuse::Layouts::Column* i = enum_123.Current();
            ::uPtr< ::uDelegate*>(__this->removed)->InvokeVoid< ::app::Fuse::Layouts::Column*>(i);
        }
    }
}

bool ObservableList__Fuse_Layouts_Column__Contains(ObservableList__Fuse_Layouts_Column* __this, ::app::Fuse::Layouts::Column* item)
{
    if (__this->items == NULL)
    {
        return false;
    }

    return ::uPtr< ::app::Uno::Collections::List__Fuse_Layouts_Column*>(__this->items)->Contains(item);
}

int ObservableList__Fuse_Layouts_Column__get_Count(ObservableList__Fuse_Layouts_Column* __this)
{
    return (__this->items != NULL) ? ::uPtr< ::app::Uno::Collections::List__Fuse_Layouts_Column*>(__this->items)->Count() : 0;
}

::app::Fuse::Layouts::Column* ObservableList__Fuse_Layouts_Column__get_Item(ObservableList__Fuse_Layouts_Column* __this, int index)
{
    if (__this->items == NULL)
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }

    return ::uPtr< ::app::Uno::Collections::List__Fuse_Layouts_Column*>(__this->items)->Item(index);
}

::uObject* ObservableList__Fuse_Layouts_Column__GetEnumerator(ObservableList__Fuse_Layouts_Column* __this)
{
    if (__this->items == NULL)
    {
        __this->items = ::app::Uno::Collections::List__Fuse_Layouts_Column__New_1(NULL);
    }

    return ::uBox(::app::Uno::Collections::List1_Enumerator__Fuse_Layouts_Column__typeof(), ::uPtr< ::app::Uno::Collections::List__Fuse_Layouts_Column*>(__this->items)->GetEnumerator());
}

void ObservableList__Fuse_Layouts_Column__Insert(ObservableList__Fuse_Layouts_Column* __this, int index, ::app::Fuse::Layouts::Column* item)
{
    if (__this->items == NULL)
    {
        __this->items = ::app::Uno::Collections::List__Fuse_Layouts_Column__New_1(NULL);
    }

    ::uPtr< ::app::Uno::Collections::List__Fuse_Layouts_Column*>(__this->items)->Insert(index, item);
    ::uPtr< ::uDelegate*>(__this->added)->InvokeVoid< ::app::Fuse::Layouts::Column*>(item);
}

ObservableList__Fuse_Layouts_Column* ObservableList__Fuse_Layouts_Column__New_1(::uStatic* __this, ::uDelegate* added, ::uDelegate* removed)
{
    ObservableList__Fuse_Layouts_Column* inst = (ObservableList__Fuse_Layouts_Column*)::uAllocObject(sizeof(ObservableList__Fuse_Layouts_Column), ObservableList__Fuse_Layouts_Column__typeof());
    inst->_ObjInit(added, removed);
    return inst;
}

bool ObservableList__Fuse_Layouts_Column__Remove(ObservableList__Fuse_Layouts_Column* __this, ::app::Fuse::Layouts::Column* item)
{
    if (__this->items == NULL)
    {
        return false;
    }

    bool res = ::uPtr< ::app::Uno::Collections::List__Fuse_Layouts_Column*>(__this->items)->Remove(item);

    if (res)
    {
        ::uPtr< ::uDelegate*>(__this->removed)->InvokeVoid< ::app::Fuse::Layouts::Column*>(item);
    }

    return res;
}

void ObservableList__Fuse_Layouts_Column__RemoveAt(ObservableList__Fuse_Layouts_Column* __this, int index)
{
    if (__this->items == NULL)
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }

    __this->Remove(::uPtr< ::app::Uno::Collections::List__Fuse_Layouts_Column*>(__this->items)->Item(index));
}

void ObservableList__Fuse_Layouts_Column__ReplaceAt(ObservableList__Fuse_Layouts_Column* __this, int index, ::app::Fuse::Layouts::Column* item)
{
    if (__this->items == NULL)
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }

    ::app::Fuse::Layouts::Column* old = ::uPtr< ::app::Uno::Collections::List__Fuse_Layouts_Column*>(__this->items)->Item(index);
    ::uPtr< ::app::Uno::Collections::List__Fuse_Layouts_Column*>(__this->items)->Item(index, item);
    ::uPtr< ::uDelegate*>(__this->removed)->InvokeVoid< ::app::Fuse::Layouts::Column*>(old);
    ::uPtr< ::uDelegate*>(__this->added)->InvokeVoid< ::app::Fuse::Layouts::Column*>(item);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ObservableList__Fuse_Layouts_Row__uType* ObservableList__Fuse_Layouts_Row__typeof()
{
    static ::uStaticStrong<ObservableList__Fuse_Layouts_Row__uType*> type;
    if (type != NULL) return type;

    type = (ObservableList__Fuse_Layouts_Row__uType*)::uAllocClassType(sizeof(ObservableList__Fuse_Layouts_Row__uType), "Uno.Collections.ObservableList<Fuse.Layouts.Row>", false, 3, 3, 0);

    type->__interface_0.__fp_RemoveAt = (void(*)(void*, int))ObservableList__Fuse_Layouts_Row__RemoveAt;
    type->__interface_0.__fp_get_Item = (::app::Fuse::Layouts::Row*(*)(void*, int))ObservableList__Fuse_Layouts_Row__get_Item;
    type->__interface_1.__fp_Clear = (void(*)(void*))ObservableList__Fuse_Layouts_Row__Clear;
    type->__interface_1.__fp_Add = (void(*)(void*, ::app::Fuse::Layouts::Row*))ObservableList__Fuse_Layouts_Row__Add;
    type->__interface_1.__fp_get_Count = (int(*)(void*))ObservableList__Fuse_Layouts_Row__get_Count;
    type->__interface_2.__fp_GetEnumerator = (::uObject*(*)(void*))ObservableList__Fuse_Layouts_Row__GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IList__Fuse_Layouts_Row__typeof(), offsetof(ObservableList__Fuse_Layouts_Row__uType, __interface_0),
        ::app::Uno::Collections::ICollection__Fuse_Layouts_Row__typeof(), offsetof(ObservableList__Fuse_Layouts_Row__uType, __interface_1),
        ::app::Uno::Collections::IEnumerable__Fuse_Layouts_Row__typeof(), offsetof(ObservableList__Fuse_Layouts_Row__uType, __interface_2));

    type->SetStrongRefs(
        "added", offsetof(ObservableList__Fuse_Layouts_Row, added),
        "items", offsetof(ObservableList__Fuse_Layouts_Row, items),
        "removed", offsetof(ObservableList__Fuse_Layouts_Row, removed));

    type->SetFields(3,
        ::uNewField("added", NULL, offsetof(ObservableList__Fuse_Layouts_Row, added), ::app::Uno::Action__Fuse_Layouts_Row__typeof()),
        ::uNewField("items", NULL, offsetof(ObservableList__Fuse_Layouts_Row, items), ::app::Uno::Collections::List__Fuse_Layouts_Row__typeof()),
        ::uNewField("removed", NULL, offsetof(ObservableList__Fuse_Layouts_Row, removed), ::app::Uno::Action__Fuse_Layouts_Row__typeof()));

    type->SetFunctions(11,
        ::uNewFunctionVoid("Add", ObservableList__Fuse_Layouts_Row__Add, 0, false, ::app::Fuse::Layouts::Row__typeof()),
        ::uNewFunctionVoid("Clear", ObservableList__Fuse_Layouts_Row__Clear, 0, false),
        ::uNewFunction("Contains", ObservableList__Fuse_Layouts_Row__Contains, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Layouts::Row__typeof()),
        ::uNewFunction("get_Count", ObservableList__Fuse_Layouts_Row__get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Item", ObservableList__Fuse_Layouts_Row__get_Item, 0, false, ::app::Fuse::Layouts::Row__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", ObservableList__Fuse_Layouts_Row__GetEnumerator, 0, false, ::app::Uno::Collections::IEnumerator__Fuse_Layouts_Row__typeof()),
        ::uNewFunctionVoid("Insert", ObservableList__Fuse_Layouts_Row__Insert, 0, false, ::app::Uno::Int__typeof(), ::app::Fuse::Layouts::Row__typeof()),
        ::uNewFunction(".ctor", ObservableList__Fuse_Layouts_Row__New_1, 0, true, ObservableList__Fuse_Layouts_Row__typeof(), ::app::Uno::Action__Fuse_Layouts_Row__typeof(), ::app::Uno::Action__Fuse_Layouts_Row__typeof()),
        ::uNewFunction("Remove", ObservableList__Fuse_Layouts_Row__Remove, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Layouts::Row__typeof()),
        ::uNewFunctionVoid("RemoveAt", ObservableList__Fuse_Layouts_Row__RemoveAt, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("ReplaceAt", ObservableList__Fuse_Layouts_Row__ReplaceAt, 0, false, ::app::Uno::Int__typeof(), ::app::Fuse::Layouts::Row__typeof()));

    ::uRegisterType(type);
    return type;
}

void ObservableList__Fuse_Layouts_Row___ObjInit(ObservableList__Fuse_Layouts_Row* __this, ::uDelegate* added, ::uDelegate* removed)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)added, NULL))
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("added")));
    }

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)removed, NULL))
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("removed")));
    }

    __this->added = added;
    __this->removed = removed;
}

void ObservableList__Fuse_Layouts_Row__Add(ObservableList__Fuse_Layouts_Row* __this, ::app::Fuse::Layouts::Row* item)
{
    if (__this->items == NULL)
    {
        __this->items = ::app::Uno::Collections::List__Fuse_Layouts_Row__New_1(NULL);
    }

    ::uPtr< ::app::Uno::Collections::List__Fuse_Layouts_Row*>(__this->items)->Add(item);
    ::uPtr< ::uDelegate*>(__this->added)->InvokeVoid< ::app::Fuse::Layouts::Row*>(item);
}

void ObservableList__Fuse_Layouts_Row__Clear(ObservableList__Fuse_Layouts_Row* __this)
{
    if (__this->items != NULL)
    {
        ::app::Uno::Collections::List__Fuse_Layouts_Row* removedItems = __this->items;
        __this->items = NULL;

        for (::app::Uno::Collections::List1_Enumerator__Fuse_Layouts_Row enum_123 = ::uPtr< ::app::Uno::Collections::List__Fuse_Layouts_Row*>(removedItems)->GetEnumerator(); enum_123.MoveNext(); )
        {
            ::app::Fuse::Layouts::Row* i = enum_123.Current();
            ::uPtr< ::uDelegate*>(__this->removed)->InvokeVoid< ::app::Fuse::Layouts::Row*>(i);
        }
    }
}

bool ObservableList__Fuse_Layouts_Row__Contains(ObservableList__Fuse_Layouts_Row* __this, ::app::Fuse::Layouts::Row* item)
{
    if (__this->items == NULL)
    {
        return false;
    }

    return ::uPtr< ::app::Uno::Collections::List__Fuse_Layouts_Row*>(__this->items)->Contains(item);
}

int ObservableList__Fuse_Layouts_Row__get_Count(ObservableList__Fuse_Layouts_Row* __this)
{
    return (__this->items != NULL) ? ::uPtr< ::app::Uno::Collections::List__Fuse_Layouts_Row*>(__this->items)->Count() : 0;
}

::app::Fuse::Layouts::Row* ObservableList__Fuse_Layouts_Row__get_Item(ObservableList__Fuse_Layouts_Row* __this, int index)
{
    if (__this->items == NULL)
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }

    return ::uPtr< ::app::Uno::Collections::List__Fuse_Layouts_Row*>(__this->items)->Item(index);
}

::uObject* ObservableList__Fuse_Layouts_Row__GetEnumerator(ObservableList__Fuse_Layouts_Row* __this)
{
    if (__this->items == NULL)
    {
        __this->items = ::app::Uno::Collections::List__Fuse_Layouts_Row__New_1(NULL);
    }

    return ::uBox(::app::Uno::Collections::List1_Enumerator__Fuse_Layouts_Row__typeof(), ::uPtr< ::app::Uno::Collections::List__Fuse_Layouts_Row*>(__this->items)->GetEnumerator());
}

void ObservableList__Fuse_Layouts_Row__Insert(ObservableList__Fuse_Layouts_Row* __this, int index, ::app::Fuse::Layouts::Row* item)
{
    if (__this->items == NULL)
    {
        __this->items = ::app::Uno::Collections::List__Fuse_Layouts_Row__New_1(NULL);
    }

    ::uPtr< ::app::Uno::Collections::List__Fuse_Layouts_Row*>(__this->items)->Insert(index, item);
    ::uPtr< ::uDelegate*>(__this->added)->InvokeVoid< ::app::Fuse::Layouts::Row*>(item);
}

ObservableList__Fuse_Layouts_Row* ObservableList__Fuse_Layouts_Row__New_1(::uStatic* __this, ::uDelegate* added, ::uDelegate* removed)
{
    ObservableList__Fuse_Layouts_Row* inst = (ObservableList__Fuse_Layouts_Row*)::uAllocObject(sizeof(ObservableList__Fuse_Layouts_Row), ObservableList__Fuse_Layouts_Row__typeof());
    inst->_ObjInit(added, removed);
    return inst;
}

bool ObservableList__Fuse_Layouts_Row__Remove(ObservableList__Fuse_Layouts_Row* __this, ::app::Fuse::Layouts::Row* item)
{
    if (__this->items == NULL)
    {
        return false;
    }

    bool res = ::uPtr< ::app::Uno::Collections::List__Fuse_Layouts_Row*>(__this->items)->Remove(item);

    if (res)
    {
        ::uPtr< ::uDelegate*>(__this->removed)->InvokeVoid< ::app::Fuse::Layouts::Row*>(item);
    }

    return res;
}

void ObservableList__Fuse_Layouts_Row__RemoveAt(ObservableList__Fuse_Layouts_Row* __this, int index)
{
    if (__this->items == NULL)
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }

    __this->Remove(::uPtr< ::app::Uno::Collections::List__Fuse_Layouts_Row*>(__this->items)->Item(index));
}

void ObservableList__Fuse_Layouts_Row__ReplaceAt(ObservableList__Fuse_Layouts_Row* __this, int index, ::app::Fuse::Layouts::Row* item)
{
    if (__this->items == NULL)
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }

    ::app::Fuse::Layouts::Row* old = ::uPtr< ::app::Uno::Collections::List__Fuse_Layouts_Row*>(__this->items)->Item(index);
    ::uPtr< ::app::Uno::Collections::List__Fuse_Layouts_Row*>(__this->items)->Item(index, item);
    ::uPtr< ::uDelegate*>(__this->removed)->InvokeVoid< ::app::Fuse::Layouts::Row*>(old);
    ::uPtr< ::uDelegate*>(__this->added)->InvokeVoid< ::app::Fuse::Layouts::Row*>(item);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ObservableList__Fuse_Node__uType* ObservableList__Fuse_Node__typeof()
{
    static ::uStaticStrong<ObservableList__Fuse_Node__uType*> type;
    if (type != NULL) return type;

    type = (ObservableList__Fuse_Node__uType*)::uAllocClassType(sizeof(ObservableList__Fuse_Node__uType), "Uno.Collections.ObservableList<Fuse.Node>", false, 3, 3, 0);

    type->__interface_0.__fp_Insert = (void(*)(void*, int, ::app::Fuse::Node*))ObservableList__Fuse_Node__Insert;
    type->__interface_0.__fp_RemoveAt = (void(*)(void*, int))ObservableList__Fuse_Node__RemoveAt;
    type->__interface_0.__fp_get_Item = (::app::Fuse::Node*(*)(void*, int))ObservableList__Fuse_Node__get_Item;
    type->__interface_1.__fp_Clear = (void(*)(void*))ObservableList__Fuse_Node__Clear;
    type->__interface_1.__fp_Add = (void(*)(void*, ::app::Fuse::Node*))ObservableList__Fuse_Node__Add;
    type->__interface_1.__fp_Remove = (bool(*)(void*, ::app::Fuse::Node*))ObservableList__Fuse_Node__Remove;
    type->__interface_1.__fp_get_Count = (int(*)(void*))ObservableList__Fuse_Node__get_Count;
    type->__interface_2.__fp_GetEnumerator = (::uObject*(*)(void*))ObservableList__Fuse_Node__GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IList__Fuse_Node__typeof(), offsetof(ObservableList__Fuse_Node__uType, __interface_0),
        ::app::Uno::Collections::ICollection__Fuse_Node__typeof(), offsetof(ObservableList__Fuse_Node__uType, __interface_1),
        ::app::Uno::Collections::IEnumerable__Fuse_Node__typeof(), offsetof(ObservableList__Fuse_Node__uType, __interface_2));

    type->SetStrongRefs(
        "added", offsetof(ObservableList__Fuse_Node, added),
        "items", offsetof(ObservableList__Fuse_Node, items),
        "removed", offsetof(ObservableList__Fuse_Node, removed));

    type->SetFields(3,
        ::uNewField("added", NULL, offsetof(ObservableList__Fuse_Node, added), ::app::Uno::Action__Fuse_Node__typeof()),
        ::uNewField("items", NULL, offsetof(ObservableList__Fuse_Node, items), ::app::Uno::Collections::List__Fuse_Node__typeof()),
        ::uNewField("removed", NULL, offsetof(ObservableList__Fuse_Node, removed), ::app::Uno::Action__Fuse_Node__typeof()));

    type->SetFunctions(11,
        ::uNewFunctionVoid("Add", ObservableList__Fuse_Node__Add, 0, false, ::app::Fuse::Node__typeof()),
        ::uNewFunctionVoid("Clear", ObservableList__Fuse_Node__Clear, 0, false),
        ::uNewFunction("Contains", ObservableList__Fuse_Node__Contains, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Node__typeof()),
        ::uNewFunction("get_Count", ObservableList__Fuse_Node__get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Item", ObservableList__Fuse_Node__get_Item, 0, false, ::app::Fuse::Node__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", ObservableList__Fuse_Node__GetEnumerator, 0, false, ::app::Uno::Collections::IEnumerator__Fuse_Node__typeof()),
        ::uNewFunctionVoid("Insert", ObservableList__Fuse_Node__Insert, 0, false, ::app::Uno::Int__typeof(), ::app::Fuse::Node__typeof()),
        ::uNewFunction(".ctor", ObservableList__Fuse_Node__New_1, 0, true, ObservableList__Fuse_Node__typeof(), ::app::Uno::Action__Fuse_Node__typeof(), ::app::Uno::Action__Fuse_Node__typeof()),
        ::uNewFunction("Remove", ObservableList__Fuse_Node__Remove, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Node__typeof()),
        ::uNewFunctionVoid("RemoveAt", ObservableList__Fuse_Node__RemoveAt, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("ReplaceAt", ObservableList__Fuse_Node__ReplaceAt, 0, false, ::app::Uno::Int__typeof(), ::app::Fuse::Node__typeof()));

    ::uRegisterType(type);
    return type;
}

void ObservableList__Fuse_Node___ObjInit(ObservableList__Fuse_Node* __this, ::uDelegate* added, ::uDelegate* removed)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)added, NULL))
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("added")));
    }

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)removed, NULL))
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("removed")));
    }

    __this->added = added;
    __this->removed = removed;
}

void ObservableList__Fuse_Node__Add(ObservableList__Fuse_Node* __this, ::app::Fuse::Node* item)
{
    if (__this->items == NULL)
    {
        __this->items = ::app::Uno::Collections::List__Fuse_Node__New_1(NULL);
    }

    ::uPtr< ::app::Uno::Collections::List__Fuse_Node*>(__this->items)->Add(item);
    ::uPtr< ::uDelegate*>(__this->added)->InvokeVoid< ::app::Fuse::Node*>(item);
}

void ObservableList__Fuse_Node__Clear(ObservableList__Fuse_Node* __this)
{
    if (__this->items != NULL)
    {
        ::app::Uno::Collections::List__Fuse_Node* removedItems = __this->items;
        __this->items = NULL;

        for (::app::Uno::Collections::List1_Enumerator__Fuse_Node enum_123 = ::uPtr< ::app::Uno::Collections::List__Fuse_Node*>(removedItems)->GetEnumerator(); enum_123.MoveNext(); )
        {
            ::app::Fuse::Node* i = enum_123.Current();
            ::uPtr< ::uDelegate*>(__this->removed)->InvokeVoid< ::app::Fuse::Node*>(i);
        }
    }
}

bool ObservableList__Fuse_Node__Contains(ObservableList__Fuse_Node* __this, ::app::Fuse::Node* item)
{
    if (__this->items == NULL)
    {
        return false;
    }

    return ::uPtr< ::app::Uno::Collections::List__Fuse_Node*>(__this->items)->Contains(item);
}

int ObservableList__Fuse_Node__get_Count(ObservableList__Fuse_Node* __this)
{
    return (__this->items != NULL) ? ::uPtr< ::app::Uno::Collections::List__Fuse_Node*>(__this->items)->Count() : 0;
}

::app::Fuse::Node* ObservableList__Fuse_Node__get_Item(ObservableList__Fuse_Node* __this, int index)
{
    if (__this->items == NULL)
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }

    return ::uPtr< ::app::Uno::Collections::List__Fuse_Node*>(__this->items)->Item(index);
}

::uObject* ObservableList__Fuse_Node__GetEnumerator(ObservableList__Fuse_Node* __this)
{
    if (__this->items == NULL)
    {
        __this->items = ::app::Uno::Collections::List__Fuse_Node__New_1(NULL);
    }

    return ::uBox(::app::Uno::Collections::List1_Enumerator__Fuse_Node__typeof(), ::uPtr< ::app::Uno::Collections::List__Fuse_Node*>(__this->items)->GetEnumerator());
}

void ObservableList__Fuse_Node__Insert(ObservableList__Fuse_Node* __this, int index, ::app::Fuse::Node* item)
{
    if (__this->items == NULL)
    {
        __this->items = ::app::Uno::Collections::List__Fuse_Node__New_1(NULL);
    }

    ::uPtr< ::app::Uno::Collections::List__Fuse_Node*>(__this->items)->Insert(index, item);
    ::uPtr< ::uDelegate*>(__this->added)->InvokeVoid< ::app::Fuse::Node*>(item);
}

ObservableList__Fuse_Node* ObservableList__Fuse_Node__New_1(::uStatic* __this, ::uDelegate* added, ::uDelegate* removed)
{
    ObservableList__Fuse_Node* inst = (ObservableList__Fuse_Node*)::uAllocObject(sizeof(ObservableList__Fuse_Node), ObservableList__Fuse_Node__typeof());
    inst->_ObjInit(added, removed);
    return inst;
}

bool ObservableList__Fuse_Node__Remove(ObservableList__Fuse_Node* __this, ::app::Fuse::Node* item)
{
    if (__this->items == NULL)
    {
        return false;
    }

    bool res = ::uPtr< ::app::Uno::Collections::List__Fuse_Node*>(__this->items)->Remove(item);

    if (res)
    {
        ::uPtr< ::uDelegate*>(__this->removed)->InvokeVoid< ::app::Fuse::Node*>(item);
    }

    return res;
}

void ObservableList__Fuse_Node__RemoveAt(ObservableList__Fuse_Node* __this, int index)
{
    if (__this->items == NULL)
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }

    __this->Remove(::uPtr< ::app::Uno::Collections::List__Fuse_Node*>(__this->items)->Item(index));
}

void ObservableList__Fuse_Node__ReplaceAt(ObservableList__Fuse_Node* __this, int index, ::app::Fuse::Node* item)
{
    if (__this->items == NULL)
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }

    ::app::Fuse::Node* old = ::uPtr< ::app::Uno::Collections::List__Fuse_Node*>(__this->items)->Item(index);
    ::uPtr< ::app::Uno::Collections::List__Fuse_Node*>(__this->items)->Item(index, item);
    ::uPtr< ::uDelegate*>(__this->removed)->InvokeVoid< ::app::Fuse::Node*>(old);
    ::uPtr< ::uDelegate*>(__this->added)->InvokeVoid< ::app::Fuse::Node*>(item);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ObservableList__Fuse_Reactive_Case__uType* ObservableList__Fuse_Reactive_Case__typeof()
{
    static ::uStaticStrong<ObservableList__Fuse_Reactive_Case__uType*> type;
    if (type != NULL) return type;

    type = (ObservableList__Fuse_Reactive_Case__uType*)::uAllocClassType(sizeof(ObservableList__Fuse_Reactive_Case__uType), "Uno.Collections.ObservableList<Fuse.Reactive.Case>", false, 2, 3, 0);

    type->__interface_1.__fp_GetEnumerator = (::uObject*(*)(void*))ObservableList__Fuse_Reactive_Case__GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IList__Fuse_Reactive_Case__typeof(), offsetof(ObservableList__Fuse_Reactive_Case__uType, __interface_0),
        ::app::Uno::Collections::IEnumerable__Fuse_Reactive_Case__typeof(), offsetof(ObservableList__Fuse_Reactive_Case__uType, __interface_1));

    type->SetStrongRefs(
        "added", offsetof(ObservableList__Fuse_Reactive_Case, added),
        "items", offsetof(ObservableList__Fuse_Reactive_Case, items),
        "removed", offsetof(ObservableList__Fuse_Reactive_Case, removed));

    type->SetFields(3,
        ::uNewField("added", NULL, offsetof(ObservableList__Fuse_Reactive_Case, added), ::app::Uno::Action__Fuse_Reactive_Case__typeof()),
        ::uNewField("items", NULL, offsetof(ObservableList__Fuse_Reactive_Case, items), ::app::Uno::Collections::List__Fuse_Reactive_Case__typeof()),
        ::uNewField("removed", NULL, offsetof(ObservableList__Fuse_Reactive_Case, removed), ::app::Uno::Action__Fuse_Reactive_Case__typeof()));

    type->SetFunctions(11,
        ::uNewFunctionVoid("Add", ObservableList__Fuse_Reactive_Case__Add, 0, false, ::app::Fuse::Reactive::Case__typeof()),
        ::uNewFunctionVoid("Clear", ObservableList__Fuse_Reactive_Case__Clear, 0, false),
        ::uNewFunction("Contains", ObservableList__Fuse_Reactive_Case__Contains, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Reactive::Case__typeof()),
        ::uNewFunction("get_Count", ObservableList__Fuse_Reactive_Case__get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Item", ObservableList__Fuse_Reactive_Case__get_Item, 0, false, ::app::Fuse::Reactive::Case__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", ObservableList__Fuse_Reactive_Case__GetEnumerator, 0, false, ::app::Uno::Collections::IEnumerator__Fuse_Reactive_Case__typeof()),
        ::uNewFunctionVoid("Insert", ObservableList__Fuse_Reactive_Case__Insert, 0, false, ::app::Uno::Int__typeof(), ::app::Fuse::Reactive::Case__typeof()),
        ::uNewFunction(".ctor", ObservableList__Fuse_Reactive_Case__New_1, 0, true, ObservableList__Fuse_Reactive_Case__typeof(), ::app::Uno::Action__Fuse_Reactive_Case__typeof(), ::app::Uno::Action__Fuse_Reactive_Case__typeof()),
        ::uNewFunction("Remove", ObservableList__Fuse_Reactive_Case__Remove, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Reactive::Case__typeof()),
        ::uNewFunctionVoid("RemoveAt", ObservableList__Fuse_Reactive_Case__RemoveAt, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("ReplaceAt", ObservableList__Fuse_Reactive_Case__ReplaceAt, 0, false, ::app::Uno::Int__typeof(), ::app::Fuse::Reactive::Case__typeof()));

    ::uRegisterType(type);
    return type;
}

void ObservableList__Fuse_Reactive_Case___ObjInit(ObservableList__Fuse_Reactive_Case* __this, ::uDelegate* added, ::uDelegate* removed)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)added, NULL))
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("added")));
    }

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)removed, NULL))
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("removed")));
    }

    __this->added = added;
    __this->removed = removed;
}

void ObservableList__Fuse_Reactive_Case__Add(ObservableList__Fuse_Reactive_Case* __this, ::app::Fuse::Reactive::Case* item)
{
    if (__this->items == NULL)
    {
        __this->items = ::app::Uno::Collections::List__Fuse_Reactive_Case__New_1(NULL);
    }

    ::uPtr< ::app::Uno::Collections::List__Fuse_Reactive_Case*>(__this->items)->Add(item);
    ::uPtr< ::uDelegate*>(__this->added)->InvokeVoid< ::app::Fuse::Reactive::Case*>(item);
}

void ObservableList__Fuse_Reactive_Case__Clear(ObservableList__Fuse_Reactive_Case* __this)
{
    if (__this->items != NULL)
    {
        ::app::Uno::Collections::List__Fuse_Reactive_Case* removedItems = __this->items;
        __this->items = NULL;

        for (::app::Uno::Collections::List1_Enumerator__Fuse_Reactive_Case enum_123 = ::uPtr< ::app::Uno::Collections::List__Fuse_Reactive_Case*>(removedItems)->GetEnumerator(); enum_123.MoveNext(); )
        {
            ::app::Fuse::Reactive::Case* i = enum_123.Current();
            ::uPtr< ::uDelegate*>(__this->removed)->InvokeVoid< ::app::Fuse::Reactive::Case*>(i);
        }
    }
}

bool ObservableList__Fuse_Reactive_Case__Contains(ObservableList__Fuse_Reactive_Case* __this, ::app::Fuse::Reactive::Case* item)
{
    if (__this->items == NULL)
    {
        return false;
    }

    return ::uPtr< ::app::Uno::Collections::List__Fuse_Reactive_Case*>(__this->items)->Contains(item);
}

int ObservableList__Fuse_Reactive_Case__get_Count(ObservableList__Fuse_Reactive_Case* __this)
{
    return (__this->items != NULL) ? ::uPtr< ::app::Uno::Collections::List__Fuse_Reactive_Case*>(__this->items)->Count() : 0;
}

::app::Fuse::Reactive::Case* ObservableList__Fuse_Reactive_Case__get_Item(ObservableList__Fuse_Reactive_Case* __this, int index)
{
    if (__this->items == NULL)
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }

    return ::uPtr< ::app::Uno::Collections::List__Fuse_Reactive_Case*>(__this->items)->Item(index);
}

::uObject* ObservableList__Fuse_Reactive_Case__GetEnumerator(ObservableList__Fuse_Reactive_Case* __this)
{
    if (__this->items == NULL)
    {
        __this->items = ::app::Uno::Collections::List__Fuse_Reactive_Case__New_1(NULL);
    }

    return ::uBox(::app::Uno::Collections::List1_Enumerator__Fuse_Reactive_Case__typeof(), ::uPtr< ::app::Uno::Collections::List__Fuse_Reactive_Case*>(__this->items)->GetEnumerator());
}

void ObservableList__Fuse_Reactive_Case__Insert(ObservableList__Fuse_Reactive_Case* __this, int index, ::app::Fuse::Reactive::Case* item)
{
    if (__this->items == NULL)
    {
        __this->items = ::app::Uno::Collections::List__Fuse_Reactive_Case__New_1(NULL);
    }

    ::uPtr< ::app::Uno::Collections::List__Fuse_Reactive_Case*>(__this->items)->Insert(index, item);
    ::uPtr< ::uDelegate*>(__this->added)->InvokeVoid< ::app::Fuse::Reactive::Case*>(item);
}

ObservableList__Fuse_Reactive_Case* ObservableList__Fuse_Reactive_Case__New_1(::uStatic* __this, ::uDelegate* added, ::uDelegate* removed)
{
    ObservableList__Fuse_Reactive_Case* inst = (ObservableList__Fuse_Reactive_Case*)::uAllocObject(sizeof(ObservableList__Fuse_Reactive_Case), ObservableList__Fuse_Reactive_Case__typeof());
    inst->_ObjInit(added, removed);
    return inst;
}

bool ObservableList__Fuse_Reactive_Case__Remove(ObservableList__Fuse_Reactive_Case* __this, ::app::Fuse::Reactive::Case* item)
{
    if (__this->items == NULL)
    {
        return false;
    }

    bool res = ::uPtr< ::app::Uno::Collections::List__Fuse_Reactive_Case*>(__this->items)->Remove(item);

    if (res)
    {
        ::uPtr< ::uDelegate*>(__this->removed)->InvokeVoid< ::app::Fuse::Reactive::Case*>(item);
    }

    return res;
}

void ObservableList__Fuse_Reactive_Case__RemoveAt(ObservableList__Fuse_Reactive_Case* __this, int index)
{
    if (__this->items == NULL)
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }

    __this->Remove(::uPtr< ::app::Uno::Collections::List__Fuse_Reactive_Case*>(__this->items)->Item(index));
}

void ObservableList__Fuse_Reactive_Case__ReplaceAt(ObservableList__Fuse_Reactive_Case* __this, int index, ::app::Fuse::Reactive::Case* item)
{
    if (__this->items == NULL)
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }

    ::app::Fuse::Reactive::Case* old = ::uPtr< ::app::Uno::Collections::List__Fuse_Reactive_Case*>(__this->items)->Item(index);
    ::uPtr< ::app::Uno::Collections::List__Fuse_Reactive_Case*>(__this->items)->Item(index, item);
    ::uPtr< ::uDelegate*>(__this->removed)->InvokeVoid< ::app::Fuse::Reactive::Case*>(old);
    ::uPtr< ::uDelegate*>(__this->added)->InvokeVoid< ::app::Fuse::Reactive::Case*>(item);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ObservableList__Fuse_Resources_ImageSource__uType* ObservableList__Fuse_Resources_ImageSource__typeof()
{
    static ::uStaticStrong<ObservableList__Fuse_Resources_ImageSource__uType*> type;
    if (type != NULL) return type;

    type = (ObservableList__Fuse_Resources_ImageSource__uType*)::uAllocClassType(sizeof(ObservableList__Fuse_Resources_ImageSource__uType), "Uno.Collections.ObservableList<Fuse.Resources.ImageSource>", false, 3, 3, 0);

    type->__interface_1.__fp_Add = (void(*)(void*, ::app::Fuse::Resources::ImageSource*))ObservableList__Fuse_Resources_ImageSource__Add;
    type->__interface_2.__fp_GetEnumerator = (::uObject*(*)(void*))ObservableList__Fuse_Resources_ImageSource__GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IList__Fuse_Resources_ImageSource__typeof(), offsetof(ObservableList__Fuse_Resources_ImageSource__uType, __interface_0),
        ::app::Uno::Collections::ICollection__Fuse_Resources_ImageSource__typeof(), offsetof(ObservableList__Fuse_Resources_ImageSource__uType, __interface_1),
        ::app::Uno::Collections::IEnumerable__Fuse_Resources_ImageSource__typeof(), offsetof(ObservableList__Fuse_Resources_ImageSource__uType, __interface_2));

    type->SetStrongRefs(
        "added", offsetof(ObservableList__Fuse_Resources_ImageSource, added),
        "items", offsetof(ObservableList__Fuse_Resources_ImageSource, items),
        "removed", offsetof(ObservableList__Fuse_Resources_ImageSource, removed));

    type->SetFields(3,
        ::uNewField("added", NULL, offsetof(ObservableList__Fuse_Resources_ImageSource, added), ::app::Uno::Action__Fuse_Resources_ImageSource__typeof()),
        ::uNewField("items", NULL, offsetof(ObservableList__Fuse_Resources_ImageSource, items), ::app::Uno::Collections::List__Fuse_Resources_ImageSource__typeof()),
        ::uNewField("removed", NULL, offsetof(ObservableList__Fuse_Resources_ImageSource, removed), ::app::Uno::Action__Fuse_Resources_ImageSource__typeof()));

    type->SetFunctions(11,
        ::uNewFunctionVoid("Add", ObservableList__Fuse_Resources_ImageSource__Add, 0, false, ::app::Fuse::Resources::ImageSource__typeof()),
        ::uNewFunctionVoid("Clear", ObservableList__Fuse_Resources_ImageSource__Clear, 0, false),
        ::uNewFunction("Contains", ObservableList__Fuse_Resources_ImageSource__Contains, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Resources::ImageSource__typeof()),
        ::uNewFunction("get_Count", ObservableList__Fuse_Resources_ImageSource__get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Item", ObservableList__Fuse_Resources_ImageSource__get_Item, 0, false, ::app::Fuse::Resources::ImageSource__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", ObservableList__Fuse_Resources_ImageSource__GetEnumerator, 0, false, ::app::Uno::Collections::IEnumerator__Fuse_Resources_ImageSource__typeof()),
        ::uNewFunctionVoid("Insert", ObservableList__Fuse_Resources_ImageSource__Insert, 0, false, ::app::Uno::Int__typeof(), ::app::Fuse::Resources::ImageSource__typeof()),
        ::uNewFunction(".ctor", ObservableList__Fuse_Resources_ImageSource__New_1, 0, true, ObservableList__Fuse_Resources_ImageSource__typeof(), ::app::Uno::Action__Fuse_Resources_ImageSource__typeof(), ::app::Uno::Action__Fuse_Resources_ImageSource__typeof()),
        ::uNewFunction("Remove", ObservableList__Fuse_Resources_ImageSource__Remove, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Resources::ImageSource__typeof()),
        ::uNewFunctionVoid("RemoveAt", ObservableList__Fuse_Resources_ImageSource__RemoveAt, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("ReplaceAt", ObservableList__Fuse_Resources_ImageSource__ReplaceAt, 0, false, ::app::Uno::Int__typeof(), ::app::Fuse::Resources::ImageSource__typeof()));

    ::uRegisterType(type);
    return type;
}

void ObservableList__Fuse_Resources_ImageSource___ObjInit(ObservableList__Fuse_Resources_ImageSource* __this, ::uDelegate* added, ::uDelegate* removed)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)added, NULL))
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("added")));
    }

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)removed, NULL))
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("removed")));
    }

    __this->added = added;
    __this->removed = removed;
}

void ObservableList__Fuse_Resources_ImageSource__Add(ObservableList__Fuse_Resources_ImageSource* __this, ::app::Fuse::Resources::ImageSource* item)
{
    if (__this->items == NULL)
    {
        __this->items = ::app::Uno::Collections::List__Fuse_Resources_ImageSource__New_1(NULL);
    }

    ::uPtr< ::app::Uno::Collections::List__Fuse_Resources_ImageSource*>(__this->items)->Add(item);
    ::uPtr< ::uDelegate*>(__this->added)->InvokeVoid< ::app::Fuse::Resources::ImageSource*>(item);
}

void ObservableList__Fuse_Resources_ImageSource__Clear(ObservableList__Fuse_Resources_ImageSource* __this)
{
    if (__this->items != NULL)
    {
        ::app::Uno::Collections::List__Fuse_Resources_ImageSource* removedItems = __this->items;
        __this->items = NULL;

        for (::app::Uno::Collections::List1_Enumerator__Fuse_Resources_ImageSource enum_123 = ::uPtr< ::app::Uno::Collections::List__Fuse_Resources_ImageSource*>(removedItems)->GetEnumerator(); enum_123.MoveNext(); )
        {
            ::app::Fuse::Resources::ImageSource* i = enum_123.Current();
            ::uPtr< ::uDelegate*>(__this->removed)->InvokeVoid< ::app::Fuse::Resources::ImageSource*>(i);
        }
    }
}

bool ObservableList__Fuse_Resources_ImageSource__Contains(ObservableList__Fuse_Resources_ImageSource* __this, ::app::Fuse::Resources::ImageSource* item)
{
    if (__this->items == NULL)
    {
        return false;
    }

    return ::uPtr< ::app::Uno::Collections::List__Fuse_Resources_ImageSource*>(__this->items)->Contains(item);
}

int ObservableList__Fuse_Resources_ImageSource__get_Count(ObservableList__Fuse_Resources_ImageSource* __this)
{
    return (__this->items != NULL) ? ::uPtr< ::app::Uno::Collections::List__Fuse_Resources_ImageSource*>(__this->items)->Count() : 0;
}

::app::Fuse::Resources::ImageSource* ObservableList__Fuse_Resources_ImageSource__get_Item(ObservableList__Fuse_Resources_ImageSource* __this, int index)
{
    if (__this->items == NULL)
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }

    return ::uPtr< ::app::Uno::Collections::List__Fuse_Resources_ImageSource*>(__this->items)->Item(index);
}

::uObject* ObservableList__Fuse_Resources_ImageSource__GetEnumerator(ObservableList__Fuse_Resources_ImageSource* __this)
{
    if (__this->items == NULL)
    {
        __this->items = ::app::Uno::Collections::List__Fuse_Resources_ImageSource__New_1(NULL);
    }

    return ::uBox(::app::Uno::Collections::List1_Enumerator__Fuse_Resources_ImageSource__typeof(), ::uPtr< ::app::Uno::Collections::List__Fuse_Resources_ImageSource*>(__this->items)->GetEnumerator());
}

void ObservableList__Fuse_Resources_ImageSource__Insert(ObservableList__Fuse_Resources_ImageSource* __this, int index, ::app::Fuse::Resources::ImageSource* item)
{
    if (__this->items == NULL)
    {
        __this->items = ::app::Uno::Collections::List__Fuse_Resources_ImageSource__New_1(NULL);
    }

    ::uPtr< ::app::Uno::Collections::List__Fuse_Resources_ImageSource*>(__this->items)->Insert(index, item);
    ::uPtr< ::uDelegate*>(__this->added)->InvokeVoid< ::app::Fuse::Resources::ImageSource*>(item);
}

ObservableList__Fuse_Resources_ImageSource* ObservableList__Fuse_Resources_ImageSource__New_1(::uStatic* __this, ::uDelegate* added, ::uDelegate* removed)
{
    ObservableList__Fuse_Resources_ImageSource* inst = (ObservableList__Fuse_Resources_ImageSource*)::uAllocObject(sizeof(ObservableList__Fuse_Resources_ImageSource), ObservableList__Fuse_Resources_ImageSource__typeof());
    inst->_ObjInit(added, removed);
    return inst;
}

bool ObservableList__Fuse_Resources_ImageSource__Remove(ObservableList__Fuse_Resources_ImageSource* __this, ::app::Fuse::Resources::ImageSource* item)
{
    if (__this->items == NULL)
    {
        return false;
    }

    bool res = ::uPtr< ::app::Uno::Collections::List__Fuse_Resources_ImageSource*>(__this->items)->Remove(item);

    if (res)
    {
        ::uPtr< ::uDelegate*>(__this->removed)->InvokeVoid< ::app::Fuse::Resources::ImageSource*>(item);
    }

    return res;
}

void ObservableList__Fuse_Resources_ImageSource__RemoveAt(ObservableList__Fuse_Resources_ImageSource* __this, int index)
{
    if (__this->items == NULL)
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }

    __this->Remove(::uPtr< ::app::Uno::Collections::List__Fuse_Resources_ImageSource*>(__this->items)->Item(index));
}

void ObservableList__Fuse_Resources_ImageSource__ReplaceAt(ObservableList__Fuse_Resources_ImageSource* __this, int index, ::app::Fuse::Resources::ImageSource* item)
{
    if (__this->items == NULL)
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }

    ::app::Fuse::Resources::ImageSource* old = ::uPtr< ::app::Uno::Collections::List__Fuse_Resources_ImageSource*>(__this->items)->Item(index);
    ::uPtr< ::app::Uno::Collections::List__Fuse_Resources_ImageSource*>(__this->items)->Item(index, item);
    ::uPtr< ::uDelegate*>(__this->removed)->InvokeVoid< ::app::Fuse::Resources::ImageSource*>(old);
    ::uPtr< ::uDelegate*>(__this->added)->InvokeVoid< ::app::Fuse::Resources::ImageSource*>(item);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ObservableList__Fuse_Style__uType* ObservableList__Fuse_Style__typeof()
{
    static ::uStaticStrong<ObservableList__Fuse_Style__uType*> type;
    if (type != NULL) return type;

    type = (ObservableList__Fuse_Style__uType*)::uAllocClassType(sizeof(ObservableList__Fuse_Style__uType), "Uno.Collections.ObservableList<Fuse.Style>", false, 3, 3, 0);

    type->__interface_0.__fp_RemoveAt = (void(*)(void*, int))ObservableList__Fuse_Style__RemoveAt;
    type->__interface_0.__fp_get_Item = (::app::Fuse::Style*(*)(void*, int))ObservableList__Fuse_Style__get_Item;
    type->__interface_1.__fp_Add = (void(*)(void*, ::app::Fuse::Style*))ObservableList__Fuse_Style__Add;
    type->__interface_1.__fp_Remove = (bool(*)(void*, ::app::Fuse::Style*))ObservableList__Fuse_Style__Remove;
    type->__interface_1.__fp_get_Count = (int(*)(void*))ObservableList__Fuse_Style__get_Count;
    type->__interface_2.__fp_GetEnumerator = (::uObject*(*)(void*))ObservableList__Fuse_Style__GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IList__Fuse_Style__typeof(), offsetof(ObservableList__Fuse_Style__uType, __interface_0),
        ::app::Uno::Collections::ICollection__Fuse_Style__typeof(), offsetof(ObservableList__Fuse_Style__uType, __interface_1),
        ::app::Uno::Collections::IEnumerable__Fuse_Style__typeof(), offsetof(ObservableList__Fuse_Style__uType, __interface_2));

    type->SetStrongRefs(
        "added", offsetof(ObservableList__Fuse_Style, added),
        "items", offsetof(ObservableList__Fuse_Style, items),
        "removed", offsetof(ObservableList__Fuse_Style, removed));

    type->SetFields(3,
        ::uNewField("added", NULL, offsetof(ObservableList__Fuse_Style, added), ::app::Uno::Action__Fuse_Style__typeof()),
        ::uNewField("items", NULL, offsetof(ObservableList__Fuse_Style, items), ::app::Uno::Collections::List__Fuse_Style__typeof()),
        ::uNewField("removed", NULL, offsetof(ObservableList__Fuse_Style, removed), ::app::Uno::Action__Fuse_Style__typeof()));

    type->SetFunctions(11,
        ::uNewFunctionVoid("Add", ObservableList__Fuse_Style__Add, 0, false, ::app::Fuse::Style__typeof()),
        ::uNewFunctionVoid("Clear", ObservableList__Fuse_Style__Clear, 0, false),
        ::uNewFunction("Contains", ObservableList__Fuse_Style__Contains, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Style__typeof()),
        ::uNewFunction("get_Count", ObservableList__Fuse_Style__get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Item", ObservableList__Fuse_Style__get_Item, 0, false, ::app::Fuse::Style__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", ObservableList__Fuse_Style__GetEnumerator, 0, false, ::app::Uno::Collections::IEnumerator__Fuse_Style__typeof()),
        ::uNewFunctionVoid("Insert", ObservableList__Fuse_Style__Insert, 0, false, ::app::Uno::Int__typeof(), ::app::Fuse::Style__typeof()),
        ::uNewFunction(".ctor", ObservableList__Fuse_Style__New_1, 0, true, ObservableList__Fuse_Style__typeof(), ::app::Uno::Action__Fuse_Style__typeof(), ::app::Uno::Action__Fuse_Style__typeof()),
        ::uNewFunction("Remove", ObservableList__Fuse_Style__Remove, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Style__typeof()),
        ::uNewFunctionVoid("RemoveAt", ObservableList__Fuse_Style__RemoveAt, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("ReplaceAt", ObservableList__Fuse_Style__ReplaceAt, 0, false, ::app::Uno::Int__typeof(), ::app::Fuse::Style__typeof()));

    ::uRegisterType(type);
    return type;
}

void ObservableList__Fuse_Style___ObjInit(ObservableList__Fuse_Style* __this, ::uDelegate* added, ::uDelegate* removed)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)added, NULL))
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("added")));
    }

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)removed, NULL))
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("removed")));
    }

    __this->added = added;
    __this->removed = removed;
}

void ObservableList__Fuse_Style__Add(ObservableList__Fuse_Style* __this, ::app::Fuse::Style* item)
{
    if (__this->items == NULL)
    {
        __this->items = ::app::Uno::Collections::List__Fuse_Style__New_1(NULL);
    }

    ::uPtr< ::app::Uno::Collections::List__Fuse_Style*>(__this->items)->Add(item);
    ::uPtr< ::uDelegate*>(__this->added)->InvokeVoid< ::app::Fuse::Style*>(item);
}

void ObservableList__Fuse_Style__Clear(ObservableList__Fuse_Style* __this)
{
    if (__this->items != NULL)
    {
        ::app::Uno::Collections::List__Fuse_Style* removedItems = __this->items;
        __this->items = NULL;

        for (::app::Uno::Collections::List1_Enumerator__Fuse_Style enum_123 = ::uPtr< ::app::Uno::Collections::List__Fuse_Style*>(removedItems)->GetEnumerator(); enum_123.MoveNext(); )
        {
            ::app::Fuse::Style* i = enum_123.Current();
            ::uPtr< ::uDelegate*>(__this->removed)->InvokeVoid< ::app::Fuse::Style*>(i);
        }
    }
}

bool ObservableList__Fuse_Style__Contains(ObservableList__Fuse_Style* __this, ::app::Fuse::Style* item)
{
    if (__this->items == NULL)
    {
        return false;
    }

    return ::uPtr< ::app::Uno::Collections::List__Fuse_Style*>(__this->items)->Contains(item);
}

int ObservableList__Fuse_Style__get_Count(ObservableList__Fuse_Style* __this)
{
    return (__this->items != NULL) ? ::uPtr< ::app::Uno::Collections::List__Fuse_Style*>(__this->items)->Count() : 0;
}

::app::Fuse::Style* ObservableList__Fuse_Style__get_Item(ObservableList__Fuse_Style* __this, int index)
{
    if (__this->items == NULL)
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }

    return ::uPtr< ::app::Uno::Collections::List__Fuse_Style*>(__this->items)->Item(index);
}

::uObject* ObservableList__Fuse_Style__GetEnumerator(ObservableList__Fuse_Style* __this)
{
    if (__this->items == NULL)
    {
        __this->items = ::app::Uno::Collections::List__Fuse_Style__New_1(NULL);
    }

    return ::uBox(::app::Uno::Collections::List1_Enumerator__Fuse_Style__typeof(), ::uPtr< ::app::Uno::Collections::List__Fuse_Style*>(__this->items)->GetEnumerator());
}

void ObservableList__Fuse_Style__Insert(ObservableList__Fuse_Style* __this, int index, ::app::Fuse::Style* item)
{
    if (__this->items == NULL)
    {
        __this->items = ::app::Uno::Collections::List__Fuse_Style__New_1(NULL);
    }

    ::uPtr< ::app::Uno::Collections::List__Fuse_Style*>(__this->items)->Insert(index, item);
    ::uPtr< ::uDelegate*>(__this->added)->InvokeVoid< ::app::Fuse::Style*>(item);
}

ObservableList__Fuse_Style* ObservableList__Fuse_Style__New_1(::uStatic* __this, ::uDelegate* added, ::uDelegate* removed)
{
    ObservableList__Fuse_Style* inst = (ObservableList__Fuse_Style*)::uAllocObject(sizeof(ObservableList__Fuse_Style), ObservableList__Fuse_Style__typeof());
    inst->_ObjInit(added, removed);
    return inst;
}

bool ObservableList__Fuse_Style__Remove(ObservableList__Fuse_Style* __this, ::app::Fuse::Style* item)
{
    if (__this->items == NULL)
    {
        return false;
    }

    bool res = ::uPtr< ::app::Uno::Collections::List__Fuse_Style*>(__this->items)->Remove(item);

    if (res)
    {
        ::uPtr< ::uDelegate*>(__this->removed)->InvokeVoid< ::app::Fuse::Style*>(item);
    }

    return res;
}

void ObservableList__Fuse_Style__RemoveAt(ObservableList__Fuse_Style* __this, int index)
{
    if (__this->items == NULL)
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }

    __this->Remove(::uPtr< ::app::Uno::Collections::List__Fuse_Style*>(__this->items)->Item(index));
}

void ObservableList__Fuse_Style__ReplaceAt(ObservableList__Fuse_Style* __this, int index, ::app::Fuse::Style* item)
{
    if (__this->items == NULL)
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }

    ::app::Fuse::Style* old = ::uPtr< ::app::Uno::Collections::List__Fuse_Style*>(__this->items)->Item(index);
    ::uPtr< ::app::Uno::Collections::List__Fuse_Style*>(__this->items)->Item(index, item);
    ::uPtr< ::uDelegate*>(__this->removed)->InvokeVoid< ::app::Fuse::Style*>(old);
    ::uPtr< ::uDelegate*>(__this->added)->InvokeVoid< ::app::Fuse::Style*>(item);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ObservableList__Fuse_Transform__uType* ObservableList__Fuse_Transform__typeof()
{
    static ::uStaticStrong<ObservableList__Fuse_Transform__uType*> type;
    if (type != NULL) return type;

    type = (ObservableList__Fuse_Transform__uType*)::uAllocClassType(sizeof(ObservableList__Fuse_Transform__uType), "Uno.Collections.ObservableList<Fuse.Transform>", false, 3, 3, 0);

    type->__interface_0.__fp_get_Item = (::app::Fuse::Transform*(*)(void*, int))ObservableList__Fuse_Transform__get_Item;
    type->__interface_1.__fp_Add = (void(*)(void*, ::app::Fuse::Transform*))ObservableList__Fuse_Transform__Add;
    type->__interface_1.__fp_Remove = (bool(*)(void*, ::app::Fuse::Transform*))ObservableList__Fuse_Transform__Remove;
    type->__interface_1.__fp_get_Count = (int(*)(void*))ObservableList__Fuse_Transform__get_Count;
    type->__interface_2.__fp_GetEnumerator = (::uObject*(*)(void*))ObservableList__Fuse_Transform__GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IList__Fuse_Transform__typeof(), offsetof(ObservableList__Fuse_Transform__uType, __interface_0),
        ::app::Uno::Collections::ICollection__Fuse_Transform__typeof(), offsetof(ObservableList__Fuse_Transform__uType, __interface_1),
        ::app::Uno::Collections::IEnumerable__Fuse_Transform__typeof(), offsetof(ObservableList__Fuse_Transform__uType, __interface_2));

    type->SetStrongRefs(
        "added", offsetof(ObservableList__Fuse_Transform, added),
        "items", offsetof(ObservableList__Fuse_Transform, items),
        "removed", offsetof(ObservableList__Fuse_Transform, removed));

    type->SetFields(3,
        ::uNewField("added", NULL, offsetof(ObservableList__Fuse_Transform, added), ::app::Uno::Action__Fuse_Transform__typeof()),
        ::uNewField("items", NULL, offsetof(ObservableList__Fuse_Transform, items), ::app::Uno::Collections::List__Fuse_Transform__typeof()),
        ::uNewField("removed", NULL, offsetof(ObservableList__Fuse_Transform, removed), ::app::Uno::Action__Fuse_Transform__typeof()));

    type->SetFunctions(11,
        ::uNewFunctionVoid("Add", ObservableList__Fuse_Transform__Add, 0, false, ::app::Fuse::Transform__typeof()),
        ::uNewFunctionVoid("Clear", ObservableList__Fuse_Transform__Clear, 0, false),
        ::uNewFunction("Contains", ObservableList__Fuse_Transform__Contains, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Transform__typeof()),
        ::uNewFunction("get_Count", ObservableList__Fuse_Transform__get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Item", ObservableList__Fuse_Transform__get_Item, 0, false, ::app::Fuse::Transform__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", ObservableList__Fuse_Transform__GetEnumerator, 0, false, ::app::Uno::Collections::IEnumerator__Fuse_Transform__typeof()),
        ::uNewFunctionVoid("Insert", ObservableList__Fuse_Transform__Insert, 0, false, ::app::Uno::Int__typeof(), ::app::Fuse::Transform__typeof()),
        ::uNewFunction(".ctor", ObservableList__Fuse_Transform__New_1, 0, true, ObservableList__Fuse_Transform__typeof(), ::app::Uno::Action__Fuse_Transform__typeof(), ::app::Uno::Action__Fuse_Transform__typeof()),
        ::uNewFunction("Remove", ObservableList__Fuse_Transform__Remove, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Transform__typeof()),
        ::uNewFunctionVoid("RemoveAt", ObservableList__Fuse_Transform__RemoveAt, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("ReplaceAt", ObservableList__Fuse_Transform__ReplaceAt, 0, false, ::app::Uno::Int__typeof(), ::app::Fuse::Transform__typeof()));

    ::uRegisterType(type);
    return type;
}

void ObservableList__Fuse_Transform___ObjInit(ObservableList__Fuse_Transform* __this, ::uDelegate* added, ::uDelegate* removed)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)added, NULL))
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("added")));
    }

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)removed, NULL))
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("removed")));
    }

    __this->added = added;
    __this->removed = removed;
}

void ObservableList__Fuse_Transform__Add(ObservableList__Fuse_Transform* __this, ::app::Fuse::Transform* item)
{
    if (__this->items == NULL)
    {
        __this->items = ::app::Uno::Collections::List__Fuse_Transform__New_1(NULL);
    }

    ::uPtr< ::app::Uno::Collections::List__Fuse_Transform*>(__this->items)->Add(item);
    ::uPtr< ::uDelegate*>(__this->added)->InvokeVoid< ::app::Fuse::Transform*>(item);
}

void ObservableList__Fuse_Transform__Clear(ObservableList__Fuse_Transform* __this)
{
    if (__this->items != NULL)
    {
        ::app::Uno::Collections::List__Fuse_Transform* removedItems = __this->items;
        __this->items = NULL;

        for (::app::Uno::Collections::List1_Enumerator__Fuse_Transform enum_123 = ::uPtr< ::app::Uno::Collections::List__Fuse_Transform*>(removedItems)->GetEnumerator(); enum_123.MoveNext(); )
        {
            ::app::Fuse::Transform* i = enum_123.Current();
            ::uPtr< ::uDelegate*>(__this->removed)->InvokeVoid< ::app::Fuse::Transform*>(i);
        }
    }
}

bool ObservableList__Fuse_Transform__Contains(ObservableList__Fuse_Transform* __this, ::app::Fuse::Transform* item)
{
    if (__this->items == NULL)
    {
        return false;
    }

    return ::uPtr< ::app::Uno::Collections::List__Fuse_Transform*>(__this->items)->Contains(item);
}

int ObservableList__Fuse_Transform__get_Count(ObservableList__Fuse_Transform* __this)
{
    return (__this->items != NULL) ? ::uPtr< ::app::Uno::Collections::List__Fuse_Transform*>(__this->items)->Count() : 0;
}

::app::Fuse::Transform* ObservableList__Fuse_Transform__get_Item(ObservableList__Fuse_Transform* __this, int index)
{
    if (__this->items == NULL)
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }

    return ::uPtr< ::app::Uno::Collections::List__Fuse_Transform*>(__this->items)->Item(index);
}

::uObject* ObservableList__Fuse_Transform__GetEnumerator(ObservableList__Fuse_Transform* __this)
{
    if (__this->items == NULL)
    {
        __this->items = ::app::Uno::Collections::List__Fuse_Transform__New_1(NULL);
    }

    return ::uBox(::app::Uno::Collections::List1_Enumerator__Fuse_Transform__typeof(), ::uPtr< ::app::Uno::Collections::List__Fuse_Transform*>(__this->items)->GetEnumerator());
}

void ObservableList__Fuse_Transform__Insert(ObservableList__Fuse_Transform* __this, int index, ::app::Fuse::Transform* item)
{
    if (__this->items == NULL)
    {
        __this->items = ::app::Uno::Collections::List__Fuse_Transform__New_1(NULL);
    }

    ::uPtr< ::app::Uno::Collections::List__Fuse_Transform*>(__this->items)->Insert(index, item);
    ::uPtr< ::uDelegate*>(__this->added)->InvokeVoid< ::app::Fuse::Transform*>(item);
}

ObservableList__Fuse_Transform* ObservableList__Fuse_Transform__New_1(::uStatic* __this, ::uDelegate* added, ::uDelegate* removed)
{
    ObservableList__Fuse_Transform* inst = (ObservableList__Fuse_Transform*)::uAllocObject(sizeof(ObservableList__Fuse_Transform), ObservableList__Fuse_Transform__typeof());
    inst->_ObjInit(added, removed);
    return inst;
}

bool ObservableList__Fuse_Transform__Remove(ObservableList__Fuse_Transform* __this, ::app::Fuse::Transform* item)
{
    if (__this->items == NULL)
    {
        return false;
    }

    bool res = ::uPtr< ::app::Uno::Collections::List__Fuse_Transform*>(__this->items)->Remove(item);

    if (res)
    {
        ::uPtr< ::uDelegate*>(__this->removed)->InvokeVoid< ::app::Fuse::Transform*>(item);
    }

    return res;
}

void ObservableList__Fuse_Transform__RemoveAt(ObservableList__Fuse_Transform* __this, int index)
{
    if (__this->items == NULL)
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }

    __this->Remove(::uPtr< ::app::Uno::Collections::List__Fuse_Transform*>(__this->items)->Item(index));
}

void ObservableList__Fuse_Transform__ReplaceAt(ObservableList__Fuse_Transform* __this, int index, ::app::Fuse::Transform* item)
{
    if (__this->items == NULL)
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }

    ::app::Fuse::Transform* old = ::uPtr< ::app::Uno::Collections::List__Fuse_Transform*>(__this->items)->Item(index);
    ::uPtr< ::app::Uno::Collections::List__Fuse_Transform*>(__this->items)->Item(index, item);
    ::uPtr< ::uDelegate*>(__this->removed)->InvokeVoid< ::app::Fuse::Transform*>(old);
    ::uPtr< ::uDelegate*>(__this->added)->InvokeVoid< ::app::Fuse::Transform*>(item);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ObservableList__Uno_UX_FileSource__uType* ObservableList__Uno_UX_FileSource__typeof()
{
    static ::uStaticStrong<ObservableList__Uno_UX_FileSource__uType*> type;
    if (type != NULL) return type;

    type = (ObservableList__Uno_UX_FileSource__uType*)::uAllocClassType(sizeof(ObservableList__Uno_UX_FileSource__uType), "Uno.Collections.ObservableList<Uno.UX.FileSource>", false, 3, 3, 0);

    type->__interface_1.__fp_Add = (void(*)(void*, ::app::Uno::UX::FileSource*))ObservableList__Uno_UX_FileSource__Add;
    type->__interface_2.__fp_GetEnumerator = (::uObject*(*)(void*))ObservableList__Uno_UX_FileSource__GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IList__Uno_UX_FileSource__typeof(), offsetof(ObservableList__Uno_UX_FileSource__uType, __interface_0),
        ::app::Uno::Collections::ICollection__Uno_UX_FileSource__typeof(), offsetof(ObservableList__Uno_UX_FileSource__uType, __interface_1),
        ::app::Uno::Collections::IEnumerable__Uno_UX_FileSource__typeof(), offsetof(ObservableList__Uno_UX_FileSource__uType, __interface_2));

    type->SetStrongRefs(
        "added", offsetof(ObservableList__Uno_UX_FileSource, added),
        "items", offsetof(ObservableList__Uno_UX_FileSource, items),
        "removed", offsetof(ObservableList__Uno_UX_FileSource, removed));

    type->SetFields(3,
        ::uNewField("added", NULL, offsetof(ObservableList__Uno_UX_FileSource, added), ::app::Uno::Action__Uno_UX_FileSource__typeof()),
        ::uNewField("items", NULL, offsetof(ObservableList__Uno_UX_FileSource, items), ::app::Uno::Collections::List__Uno_UX_FileSource__typeof()),
        ::uNewField("removed", NULL, offsetof(ObservableList__Uno_UX_FileSource, removed), ::app::Uno::Action__Uno_UX_FileSource__typeof()));

    type->SetFunctions(11,
        ::uNewFunctionVoid("Add", ObservableList__Uno_UX_FileSource__Add, 0, false, ::app::Uno::UX::FileSource__typeof()),
        ::uNewFunctionVoid("Clear", ObservableList__Uno_UX_FileSource__Clear, 0, false),
        ::uNewFunction("Contains", ObservableList__Uno_UX_FileSource__Contains, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::UX::FileSource__typeof()),
        ::uNewFunction("get_Count", ObservableList__Uno_UX_FileSource__get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Item", ObservableList__Uno_UX_FileSource__get_Item, 0, false, ::app::Uno::UX::FileSource__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", ObservableList__Uno_UX_FileSource__GetEnumerator, 0, false, ::app::Uno::Collections::IEnumerator__Uno_UX_FileSource__typeof()),
        ::uNewFunctionVoid("Insert", ObservableList__Uno_UX_FileSource__Insert, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::UX::FileSource__typeof()),
        ::uNewFunction(".ctor", ObservableList__Uno_UX_FileSource__New_1, 0, true, ObservableList__Uno_UX_FileSource__typeof(), ::app::Uno::Action__Uno_UX_FileSource__typeof(), ::app::Uno::Action__Uno_UX_FileSource__typeof()),
        ::uNewFunction("Remove", ObservableList__Uno_UX_FileSource__Remove, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::UX::FileSource__typeof()),
        ::uNewFunctionVoid("RemoveAt", ObservableList__Uno_UX_FileSource__RemoveAt, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("ReplaceAt", ObservableList__Uno_UX_FileSource__ReplaceAt, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::UX::FileSource__typeof()));

    ::uRegisterType(type);
    return type;
}

void ObservableList__Uno_UX_FileSource___ObjInit(ObservableList__Uno_UX_FileSource* __this, ::uDelegate* added, ::uDelegate* removed)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)added, NULL))
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("added")));
    }

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)removed, NULL))
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("removed")));
    }

    __this->added = added;
    __this->removed = removed;
}

void ObservableList__Uno_UX_FileSource__Add(ObservableList__Uno_UX_FileSource* __this, ::app::Uno::UX::FileSource* item)
{
    if (__this->items == NULL)
    {
        __this->items = ::app::Uno::Collections::List__Uno_UX_FileSource__New_1(NULL);
    }

    ::uPtr< ::app::Uno::Collections::List__Uno_UX_FileSource*>(__this->items)->Add(item);
    ::uPtr< ::uDelegate*>(__this->added)->InvokeVoid< ::app::Uno::UX::FileSource*>(item);
}

void ObservableList__Uno_UX_FileSource__Clear(ObservableList__Uno_UX_FileSource* __this)
{
    if (__this->items != NULL)
    {
        ::app::Uno::Collections::List__Uno_UX_FileSource* removedItems = __this->items;
        __this->items = NULL;

        for (::app::Uno::Collections::List1_Enumerator__Uno_UX_FileSource enum_123 = ::uPtr< ::app::Uno::Collections::List__Uno_UX_FileSource*>(removedItems)->GetEnumerator(); enum_123.MoveNext(); )
        {
            ::app::Uno::UX::FileSource* i = enum_123.Current();
            ::uPtr< ::uDelegate*>(__this->removed)->InvokeVoid< ::app::Uno::UX::FileSource*>(i);
        }
    }
}

bool ObservableList__Uno_UX_FileSource__Contains(ObservableList__Uno_UX_FileSource* __this, ::app::Uno::UX::FileSource* item)
{
    if (__this->items == NULL)
    {
        return false;
    }

    return ::uPtr< ::app::Uno::Collections::List__Uno_UX_FileSource*>(__this->items)->Contains(item);
}

int ObservableList__Uno_UX_FileSource__get_Count(ObservableList__Uno_UX_FileSource* __this)
{
    return (__this->items != NULL) ? ::uPtr< ::app::Uno::Collections::List__Uno_UX_FileSource*>(__this->items)->Count() : 0;
}

::app::Uno::UX::FileSource* ObservableList__Uno_UX_FileSource__get_Item(ObservableList__Uno_UX_FileSource* __this, int index)
{
    if (__this->items == NULL)
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }

    return ::uPtr< ::app::Uno::Collections::List__Uno_UX_FileSource*>(__this->items)->Item(index);
}

::uObject* ObservableList__Uno_UX_FileSource__GetEnumerator(ObservableList__Uno_UX_FileSource* __this)
{
    if (__this->items == NULL)
    {
        __this->items = ::app::Uno::Collections::List__Uno_UX_FileSource__New_1(NULL);
    }

    return ::uBox(::app::Uno::Collections::List1_Enumerator__Uno_UX_FileSource__typeof(), ::uPtr< ::app::Uno::Collections::List__Uno_UX_FileSource*>(__this->items)->GetEnumerator());
}

void ObservableList__Uno_UX_FileSource__Insert(ObservableList__Uno_UX_FileSource* __this, int index, ::app::Uno::UX::FileSource* item)
{
    if (__this->items == NULL)
    {
        __this->items = ::app::Uno::Collections::List__Uno_UX_FileSource__New_1(NULL);
    }

    ::uPtr< ::app::Uno::Collections::List__Uno_UX_FileSource*>(__this->items)->Insert(index, item);
    ::uPtr< ::uDelegate*>(__this->added)->InvokeVoid< ::app::Uno::UX::FileSource*>(item);
}

ObservableList__Uno_UX_FileSource* ObservableList__Uno_UX_FileSource__New_1(::uStatic* __this, ::uDelegate* added, ::uDelegate* removed)
{
    ObservableList__Uno_UX_FileSource* inst = (ObservableList__Uno_UX_FileSource*)::uAllocObject(sizeof(ObservableList__Uno_UX_FileSource), ObservableList__Uno_UX_FileSource__typeof());
    inst->_ObjInit(added, removed);
    return inst;
}

bool ObservableList__Uno_UX_FileSource__Remove(ObservableList__Uno_UX_FileSource* __this, ::app::Uno::UX::FileSource* item)
{
    if (__this->items == NULL)
    {
        return false;
    }

    bool res = ::uPtr< ::app::Uno::Collections::List__Uno_UX_FileSource*>(__this->items)->Remove(item);

    if (res)
    {
        ::uPtr< ::uDelegate*>(__this->removed)->InvokeVoid< ::app::Uno::UX::FileSource*>(item);
    }

    return res;
}

void ObservableList__Uno_UX_FileSource__RemoveAt(ObservableList__Uno_UX_FileSource* __this, int index)
{
    if (__this->items == NULL)
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }

    __this->Remove(::uPtr< ::app::Uno::Collections::List__Uno_UX_FileSource*>(__this->items)->Item(index));
}

void ObservableList__Uno_UX_FileSource__ReplaceAt(ObservableList__Uno_UX_FileSource* __this, int index, ::app::Uno::UX::FileSource* item)
{
    if (__this->items == NULL)
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }

    ::app::Uno::UX::FileSource* old = ::uPtr< ::app::Uno::Collections::List__Uno_UX_FileSource*>(__this->items)->Item(index);
    ::uPtr< ::app::Uno::Collections::List__Uno_UX_FileSource*>(__this->items)->Item(index, item);
    ::uPtr< ::uDelegate*>(__this->removed)->InvokeVoid< ::app::Uno::UX::FileSource*>(old);
    ::uPtr< ::uDelegate*>(__this->added)->InvokeVoid< ::app::Uno::UX::FileSource*>(item);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ObservableList__Uno_UX_IFactory__uType* ObservableList__Uno_UX_IFactory__typeof()
{
    static ::uStaticStrong<ObservableList__Uno_UX_IFactory__uType*> type;
    if (type != NULL) return type;

    type = (ObservableList__Uno_UX_IFactory__uType*)::uAllocClassType(sizeof(ObservableList__Uno_UX_IFactory__uType), "Uno.Collections.ObservableList<Uno.UX.IFactory>", false, 2, 3, 0);

    type->__interface_1.__fp_GetEnumerator = (::uObject*(*)(void*))ObservableList__Uno_UX_IFactory__GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IList__Uno_UX_IFactory__typeof(), offsetof(ObservableList__Uno_UX_IFactory__uType, __interface_0),
        ::app::Uno::Collections::IEnumerable__Uno_UX_IFactory__typeof(), offsetof(ObservableList__Uno_UX_IFactory__uType, __interface_1));

    type->SetStrongRefs(
        "added", offsetof(ObservableList__Uno_UX_IFactory, added),
        "items", offsetof(ObservableList__Uno_UX_IFactory, items),
        "removed", offsetof(ObservableList__Uno_UX_IFactory, removed));

    type->SetFields(3,
        ::uNewField("added", NULL, offsetof(ObservableList__Uno_UX_IFactory, added), ::app::Uno::Action__Uno_UX_IFactory__typeof()),
        ::uNewField("items", NULL, offsetof(ObservableList__Uno_UX_IFactory, items), ::app::Uno::Collections::List__Uno_UX_IFactory__typeof()),
        ::uNewField("removed", NULL, offsetof(ObservableList__Uno_UX_IFactory, removed), ::app::Uno::Action__Uno_UX_IFactory__typeof()));

    type->SetFunctions(11,
        ::uNewFunctionVoid("Add", ObservableList__Uno_UX_IFactory__Add, 0, false, ::app::Uno::UX::IFactory__typeof()),
        ::uNewFunctionVoid("Clear", ObservableList__Uno_UX_IFactory__Clear, 0, false),
        ::uNewFunction("Contains", ObservableList__Uno_UX_IFactory__Contains, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::UX::IFactory__typeof()),
        ::uNewFunction("get_Count", ObservableList__Uno_UX_IFactory__get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Item", ObservableList__Uno_UX_IFactory__get_Item, 0, false, ::app::Uno::UX::IFactory__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", ObservableList__Uno_UX_IFactory__GetEnumerator, 0, false, ::app::Uno::Collections::IEnumerator__Uno_UX_IFactory__typeof()),
        ::uNewFunctionVoid("Insert", ObservableList__Uno_UX_IFactory__Insert, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::UX::IFactory__typeof()),
        ::uNewFunction(".ctor", ObservableList__Uno_UX_IFactory__New_1, 0, true, ObservableList__Uno_UX_IFactory__typeof(), ::app::Uno::Action__Uno_UX_IFactory__typeof(), ::app::Uno::Action__Uno_UX_IFactory__typeof()),
        ::uNewFunction("Remove", ObservableList__Uno_UX_IFactory__Remove, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::UX::IFactory__typeof()),
        ::uNewFunctionVoid("RemoveAt", ObservableList__Uno_UX_IFactory__RemoveAt, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("ReplaceAt", ObservableList__Uno_UX_IFactory__ReplaceAt, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::UX::IFactory__typeof()));

    ::uRegisterType(type);
    return type;
}

void ObservableList__Uno_UX_IFactory___ObjInit(ObservableList__Uno_UX_IFactory* __this, ::uDelegate* added, ::uDelegate* removed)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)added, NULL))
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("added")));
    }

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)removed, NULL))
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("removed")));
    }

    __this->added = added;
    __this->removed = removed;
}

void ObservableList__Uno_UX_IFactory__Add(ObservableList__Uno_UX_IFactory* __this, ::uObject* item)
{
    if (__this->items == NULL)
    {
        __this->items = ::app::Uno::Collections::List__Uno_UX_IFactory__New_1(NULL);
    }

    ::uPtr< ::app::Uno::Collections::List__Uno_UX_IFactory*>(__this->items)->Add(item);
    ::uPtr< ::uDelegate*>(__this->added)->InvokeVoid< ::uObject*>(item);
}

void ObservableList__Uno_UX_IFactory__Clear(ObservableList__Uno_UX_IFactory* __this)
{
    if (__this->items != NULL)
    {
        ::app::Uno::Collections::List__Uno_UX_IFactory* removedItems = __this->items;
        __this->items = NULL;

        for (::app::Uno::Collections::List1_Enumerator__Uno_UX_IFactory enum_123 = ::uPtr< ::app::Uno::Collections::List__Uno_UX_IFactory*>(removedItems)->GetEnumerator(); enum_123.MoveNext(); )
        {
            ::uObject* i = enum_123.Current();
            ::uPtr< ::uDelegate*>(__this->removed)->InvokeVoid< ::uObject*>(i);
        }
    }
}

bool ObservableList__Uno_UX_IFactory__Contains(ObservableList__Uno_UX_IFactory* __this, ::uObject* item)
{
    if (__this->items == NULL)
    {
        return false;
    }

    return ::uPtr< ::app::Uno::Collections::List__Uno_UX_IFactory*>(__this->items)->Contains(item);
}

int ObservableList__Uno_UX_IFactory__get_Count(ObservableList__Uno_UX_IFactory* __this)
{
    return (__this->items != NULL) ? ::uPtr< ::app::Uno::Collections::List__Uno_UX_IFactory*>(__this->items)->Count() : 0;
}

::uObject* ObservableList__Uno_UX_IFactory__get_Item(ObservableList__Uno_UX_IFactory* __this, int index)
{
    if (__this->items == NULL)
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }

    return ::uPtr< ::app::Uno::Collections::List__Uno_UX_IFactory*>(__this->items)->Item(index);
}

::uObject* ObservableList__Uno_UX_IFactory__GetEnumerator(ObservableList__Uno_UX_IFactory* __this)
{
    if (__this->items == NULL)
    {
        __this->items = ::app::Uno::Collections::List__Uno_UX_IFactory__New_1(NULL);
    }

    return ::uBox(::app::Uno::Collections::List1_Enumerator__Uno_UX_IFactory__typeof(), ::uPtr< ::app::Uno::Collections::List__Uno_UX_IFactory*>(__this->items)->GetEnumerator());
}

void ObservableList__Uno_UX_IFactory__Insert(ObservableList__Uno_UX_IFactory* __this, int index, ::uObject* item)
{
    if (__this->items == NULL)
    {
        __this->items = ::app::Uno::Collections::List__Uno_UX_IFactory__New_1(NULL);
    }

    ::uPtr< ::app::Uno::Collections::List__Uno_UX_IFactory*>(__this->items)->Insert(index, item);
    ::uPtr< ::uDelegate*>(__this->added)->InvokeVoid< ::uObject*>(item);
}

ObservableList__Uno_UX_IFactory* ObservableList__Uno_UX_IFactory__New_1(::uStatic* __this, ::uDelegate* added, ::uDelegate* removed)
{
    ObservableList__Uno_UX_IFactory* inst = (ObservableList__Uno_UX_IFactory*)::uAllocObject(sizeof(ObservableList__Uno_UX_IFactory), ObservableList__Uno_UX_IFactory__typeof());
    inst->_ObjInit(added, removed);
    return inst;
}

bool ObservableList__Uno_UX_IFactory__Remove(ObservableList__Uno_UX_IFactory* __this, ::uObject* item)
{
    if (__this->items == NULL)
    {
        return false;
    }

    bool res = ::uPtr< ::app::Uno::Collections::List__Uno_UX_IFactory*>(__this->items)->Remove(item);

    if (res)
    {
        ::uPtr< ::uDelegate*>(__this->removed)->InvokeVoid< ::uObject*>(item);
    }

    return res;
}

void ObservableList__Uno_UX_IFactory__RemoveAt(ObservableList__Uno_UX_IFactory* __this, int index)
{
    if (__this->items == NULL)
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }

    __this->Remove(::uPtr< ::app::Uno::Collections::List__Uno_UX_IFactory*>(__this->items)->Item(index));
}

void ObservableList__Uno_UX_IFactory__ReplaceAt(ObservableList__Uno_UX_IFactory* __this, int index, ::uObject* item)
{
    if (__this->items == NULL)
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }

    ::uObject* old = ::uPtr< ::app::Uno::Collections::List__Uno_UX_IFactory*>(__this->items)->Item(index);
    ::uPtr< ::app::Uno::Collections::List__Uno_UX_IFactory*>(__this->items)->Item(index, item);
    ::uPtr< ::uDelegate*>(__this->removed)->InvokeVoid< ::uObject*>(old);
    ::uPtr< ::uDelegate*>(__this->added)->InvokeVoid< ::uObject*>(item);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ObservableList__Uno_UX_ITemplate__uType* ObservableList__Uno_UX_ITemplate__typeof()
{
    static ::uStaticStrong<ObservableList__Uno_UX_ITemplate__uType*> type;
    if (type != NULL) return type;

    type = (ObservableList__Uno_UX_ITemplate__uType*)::uAllocClassType(sizeof(ObservableList__Uno_UX_ITemplate__uType), "Uno.Collections.ObservableList<Uno.UX.ITemplate>", false, 3, 3, 0);

    type->__interface_0.__fp_get_Item = (::uObject*(*)(void*, int))ObservableList__Uno_UX_ITemplate__get_Item;
    type->__interface_1.__fp_Add = (void(*)(void*, ::uObject*))ObservableList__Uno_UX_ITemplate__Add;
    type->__interface_1.__fp_get_Count = (int(*)(void*))ObservableList__Uno_UX_ITemplate__get_Count;
    type->__interface_2.__fp_GetEnumerator = (::uObject*(*)(void*))ObservableList__Uno_UX_ITemplate__GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IList__Uno_UX_ITemplate__typeof(), offsetof(ObservableList__Uno_UX_ITemplate__uType, __interface_0),
        ::app::Uno::Collections::ICollection__Uno_UX_ITemplate__typeof(), offsetof(ObservableList__Uno_UX_ITemplate__uType, __interface_1),
        ::app::Uno::Collections::IEnumerable__Uno_UX_ITemplate__typeof(), offsetof(ObservableList__Uno_UX_ITemplate__uType, __interface_2));

    type->SetStrongRefs(
        "added", offsetof(ObservableList__Uno_UX_ITemplate, added),
        "items", offsetof(ObservableList__Uno_UX_ITemplate, items),
        "removed", offsetof(ObservableList__Uno_UX_ITemplate, removed));

    type->SetFields(3,
        ::uNewField("added", NULL, offsetof(ObservableList__Uno_UX_ITemplate, added), ::app::Uno::Action__Uno_UX_ITemplate__typeof()),
        ::uNewField("items", NULL, offsetof(ObservableList__Uno_UX_ITemplate, items), ::app::Uno::Collections::List__Uno_UX_ITemplate__typeof()),
        ::uNewField("removed", NULL, offsetof(ObservableList__Uno_UX_ITemplate, removed), ::app::Uno::Action__Uno_UX_ITemplate__typeof()));

    type->SetFunctions(11,
        ::uNewFunctionVoid("Add", ObservableList__Uno_UX_ITemplate__Add, 0, false, ::app::Uno::UX::ITemplate__typeof()),
        ::uNewFunctionVoid("Clear", ObservableList__Uno_UX_ITemplate__Clear, 0, false),
        ::uNewFunction("Contains", ObservableList__Uno_UX_ITemplate__Contains, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::UX::ITemplate__typeof()),
        ::uNewFunction("get_Count", ObservableList__Uno_UX_ITemplate__get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Item", ObservableList__Uno_UX_ITemplate__get_Item, 0, false, ::app::Uno::UX::ITemplate__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", ObservableList__Uno_UX_ITemplate__GetEnumerator, 0, false, ::app::Uno::Collections::IEnumerator__Uno_UX_ITemplate__typeof()),
        ::uNewFunctionVoid("Insert", ObservableList__Uno_UX_ITemplate__Insert, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::UX::ITemplate__typeof()),
        ::uNewFunction(".ctor", ObservableList__Uno_UX_ITemplate__New_1, 0, true, ObservableList__Uno_UX_ITemplate__typeof(), ::app::Uno::Action__Uno_UX_ITemplate__typeof(), ::app::Uno::Action__Uno_UX_ITemplate__typeof()),
        ::uNewFunction("Remove", ObservableList__Uno_UX_ITemplate__Remove, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::UX::ITemplate__typeof()),
        ::uNewFunctionVoid("RemoveAt", ObservableList__Uno_UX_ITemplate__RemoveAt, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("ReplaceAt", ObservableList__Uno_UX_ITemplate__ReplaceAt, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::UX::ITemplate__typeof()));

    ::uRegisterType(type);
    return type;
}

void ObservableList__Uno_UX_ITemplate___ObjInit(ObservableList__Uno_UX_ITemplate* __this, ::uDelegate* added, ::uDelegate* removed)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)added, NULL))
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("added")));
    }

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)removed, NULL))
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("removed")));
    }

    __this->added = added;
    __this->removed = removed;
}

void ObservableList__Uno_UX_ITemplate__Add(ObservableList__Uno_UX_ITemplate* __this, ::uObject* item)
{
    if (__this->items == NULL)
    {
        __this->items = ::app::Uno::Collections::List__Uno_UX_ITemplate__New_1(NULL);
    }

    ::uPtr< ::app::Uno::Collections::List__Uno_UX_ITemplate*>(__this->items)->Add(item);
    ::uPtr< ::uDelegate*>(__this->added)->InvokeVoid< ::uObject*>(item);
}

void ObservableList__Uno_UX_ITemplate__Clear(ObservableList__Uno_UX_ITemplate* __this)
{
    if (__this->items != NULL)
    {
        ::app::Uno::Collections::List__Uno_UX_ITemplate* removedItems = __this->items;
        __this->items = NULL;

        for (::app::Uno::Collections::List1_Enumerator__Uno_UX_ITemplate enum_123 = ::uPtr< ::app::Uno::Collections::List__Uno_UX_ITemplate*>(removedItems)->GetEnumerator(); enum_123.MoveNext(); )
        {
            ::uObject* i = enum_123.Current();
            ::uPtr< ::uDelegate*>(__this->removed)->InvokeVoid< ::uObject*>(i);
        }
    }
}

bool ObservableList__Uno_UX_ITemplate__Contains(ObservableList__Uno_UX_ITemplate* __this, ::uObject* item)
{
    if (__this->items == NULL)
    {
        return false;
    }

    return ::uPtr< ::app::Uno::Collections::List__Uno_UX_ITemplate*>(__this->items)->Contains(item);
}

int ObservableList__Uno_UX_ITemplate__get_Count(ObservableList__Uno_UX_ITemplate* __this)
{
    return (__this->items != NULL) ? ::uPtr< ::app::Uno::Collections::List__Uno_UX_ITemplate*>(__this->items)->Count() : 0;
}

::uObject* ObservableList__Uno_UX_ITemplate__get_Item(ObservableList__Uno_UX_ITemplate* __this, int index)
{
    if (__this->items == NULL)
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }

    return ::uPtr< ::app::Uno::Collections::List__Uno_UX_ITemplate*>(__this->items)->Item(index);
}

::uObject* ObservableList__Uno_UX_ITemplate__GetEnumerator(ObservableList__Uno_UX_ITemplate* __this)
{
    if (__this->items == NULL)
    {
        __this->items = ::app::Uno::Collections::List__Uno_UX_ITemplate__New_1(NULL);
    }

    return ::uBox(::app::Uno::Collections::List1_Enumerator__Uno_UX_ITemplate__typeof(), ::uPtr< ::app::Uno::Collections::List__Uno_UX_ITemplate*>(__this->items)->GetEnumerator());
}

void ObservableList__Uno_UX_ITemplate__Insert(ObservableList__Uno_UX_ITemplate* __this, int index, ::uObject* item)
{
    if (__this->items == NULL)
    {
        __this->items = ::app::Uno::Collections::List__Uno_UX_ITemplate__New_1(NULL);
    }

    ::uPtr< ::app::Uno::Collections::List__Uno_UX_ITemplate*>(__this->items)->Insert(index, item);
    ::uPtr< ::uDelegate*>(__this->added)->InvokeVoid< ::uObject*>(item);
}

ObservableList__Uno_UX_ITemplate* ObservableList__Uno_UX_ITemplate__New_1(::uStatic* __this, ::uDelegate* added, ::uDelegate* removed)
{
    ObservableList__Uno_UX_ITemplate* inst = (ObservableList__Uno_UX_ITemplate*)::uAllocObject(sizeof(ObservableList__Uno_UX_ITemplate), ObservableList__Uno_UX_ITemplate__typeof());
    inst->_ObjInit(added, removed);
    return inst;
}

bool ObservableList__Uno_UX_ITemplate__Remove(ObservableList__Uno_UX_ITemplate* __this, ::uObject* item)
{
    if (__this->items == NULL)
    {
        return false;
    }

    bool res = ::uPtr< ::app::Uno::Collections::List__Uno_UX_ITemplate*>(__this->items)->Remove(item);

    if (res)
    {
        ::uPtr< ::uDelegate*>(__this->removed)->InvokeVoid< ::uObject*>(item);
    }

    return res;
}

void ObservableList__Uno_UX_ITemplate__RemoveAt(ObservableList__Uno_UX_ITemplate* __this, int index)
{
    if (__this->items == NULL)
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }

    __this->Remove(::uPtr< ::app::Uno::Collections::List__Uno_UX_ITemplate*>(__this->items)->Item(index));
}

void ObservableList__Uno_UX_ITemplate__ReplaceAt(ObservableList__Uno_UX_ITemplate* __this, int index, ::uObject* item)
{
    if (__this->items == NULL)
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }

    ::uObject* old = ::uPtr< ::app::Uno::Collections::List__Uno_UX_ITemplate*>(__this->items)->Item(index);
    ::uPtr< ::app::Uno::Collections::List__Uno_UX_ITemplate*>(__this->items)->Item(index, item);
    ::uPtr< ::uDelegate*>(__this->removed)->InvokeVoid< ::uObject*>(old);
    ::uPtr< ::uDelegate*>(__this->added)->InvokeVoid< ::uObject*>(item);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ObservableList__Uno_UX_Resource__uType* ObservableList__Uno_UX_Resource__typeof()
{
    static ::uStaticStrong<ObservableList__Uno_UX_Resource__uType*> type;
    if (type != NULL) return type;

    type = (ObservableList__Uno_UX_Resource__uType*)::uAllocClassType(sizeof(ObservableList__Uno_UX_Resource__uType), "Uno.Collections.ObservableList<Uno.UX.Resource>", false, 3, 3, 0);

    type->__interface_0.__fp_RemoveAt = (void(*)(void*, int))ObservableList__Uno_UX_Resource__RemoveAt;
    type->__interface_0.__fp_get_Item = (::app::Uno::UX::Resource*(*)(void*, int))ObservableList__Uno_UX_Resource__get_Item;
    type->__interface_1.__fp_Clear = (void(*)(void*))ObservableList__Uno_UX_Resource__Clear;
    type->__interface_1.__fp_Add = (void(*)(void*, ::app::Uno::UX::Resource*))ObservableList__Uno_UX_Resource__Add;
    type->__interface_1.__fp_get_Count = (int(*)(void*))ObservableList__Uno_UX_Resource__get_Count;
    type->__interface_2.__fp_GetEnumerator = (::uObject*(*)(void*))ObservableList__Uno_UX_Resource__GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IList__Uno_UX_Resource__typeof(), offsetof(ObservableList__Uno_UX_Resource__uType, __interface_0),
        ::app::Uno::Collections::ICollection__Uno_UX_Resource__typeof(), offsetof(ObservableList__Uno_UX_Resource__uType, __interface_1),
        ::app::Uno::Collections::IEnumerable__Uno_UX_Resource__typeof(), offsetof(ObservableList__Uno_UX_Resource__uType, __interface_2));

    type->SetStrongRefs(
        "added", offsetof(ObservableList__Uno_UX_Resource, added),
        "items", offsetof(ObservableList__Uno_UX_Resource, items),
        "removed", offsetof(ObservableList__Uno_UX_Resource, removed));

    type->SetFields(3,
        ::uNewField("added", NULL, offsetof(ObservableList__Uno_UX_Resource, added), ::app::Uno::Action__Uno_UX_Resource__typeof()),
        ::uNewField("items", NULL, offsetof(ObservableList__Uno_UX_Resource, items), ::app::Uno::Collections::List__Uno_UX_Resource__typeof()),
        ::uNewField("removed", NULL, offsetof(ObservableList__Uno_UX_Resource, removed), ::app::Uno::Action__Uno_UX_Resource__typeof()));

    type->SetFunctions(11,
        ::uNewFunctionVoid("Add", ObservableList__Uno_UX_Resource__Add, 0, false, ::app::Uno::UX::Resource__typeof()),
        ::uNewFunctionVoid("Clear", ObservableList__Uno_UX_Resource__Clear, 0, false),
        ::uNewFunction("Contains", ObservableList__Uno_UX_Resource__Contains, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::UX::Resource__typeof()),
        ::uNewFunction("get_Count", ObservableList__Uno_UX_Resource__get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Item", ObservableList__Uno_UX_Resource__get_Item, 0, false, ::app::Uno::UX::Resource__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", ObservableList__Uno_UX_Resource__GetEnumerator, 0, false, ::app::Uno::Collections::IEnumerator__Uno_UX_Resource__typeof()),
        ::uNewFunctionVoid("Insert", ObservableList__Uno_UX_Resource__Insert, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::UX::Resource__typeof()),
        ::uNewFunction(".ctor", ObservableList__Uno_UX_Resource__New_1, 0, true, ObservableList__Uno_UX_Resource__typeof(), ::app::Uno::Action__Uno_UX_Resource__typeof(), ::app::Uno::Action__Uno_UX_Resource__typeof()),
        ::uNewFunction("Remove", ObservableList__Uno_UX_Resource__Remove, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::UX::Resource__typeof()),
        ::uNewFunctionVoid("RemoveAt", ObservableList__Uno_UX_Resource__RemoveAt, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("ReplaceAt", ObservableList__Uno_UX_Resource__ReplaceAt, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::UX::Resource__typeof()));

    ::uRegisterType(type);
    return type;
}

void ObservableList__Uno_UX_Resource___ObjInit(ObservableList__Uno_UX_Resource* __this, ::uDelegate* added, ::uDelegate* removed)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)added, NULL))
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("added")));
    }

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)removed, NULL))
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("removed")));
    }

    __this->added = added;
    __this->removed = removed;
}

void ObservableList__Uno_UX_Resource__Add(ObservableList__Uno_UX_Resource* __this, ::app::Uno::UX::Resource* item)
{
    if (__this->items == NULL)
    {
        __this->items = ::app::Uno::Collections::List__Uno_UX_Resource__New_1(NULL);
    }

    ::uPtr< ::app::Uno::Collections::List__Uno_UX_Resource*>(__this->items)->Add(item);
    ::uPtr< ::uDelegate*>(__this->added)->InvokeVoid< ::app::Uno::UX::Resource*>(item);
}

void ObservableList__Uno_UX_Resource__Clear(ObservableList__Uno_UX_Resource* __this)
{
    if (__this->items != NULL)
    {
        ::app::Uno::Collections::List__Uno_UX_Resource* removedItems = __this->items;
        __this->items = NULL;

        for (::app::Uno::Collections::List1_Enumerator__Uno_UX_Resource enum_123 = ::uPtr< ::app::Uno::Collections::List__Uno_UX_Resource*>(removedItems)->GetEnumerator(); enum_123.MoveNext(); )
        {
            ::app::Uno::UX::Resource* i = enum_123.Current();
            ::uPtr< ::uDelegate*>(__this->removed)->InvokeVoid< ::app::Uno::UX::Resource*>(i);
        }
    }
}

bool ObservableList__Uno_UX_Resource__Contains(ObservableList__Uno_UX_Resource* __this, ::app::Uno::UX::Resource* item)
{
    if (__this->items == NULL)
    {
        return false;
    }

    return ::uPtr< ::app::Uno::Collections::List__Uno_UX_Resource*>(__this->items)->Contains(item);
}

int ObservableList__Uno_UX_Resource__get_Count(ObservableList__Uno_UX_Resource* __this)
{
    return (__this->items != NULL) ? ::uPtr< ::app::Uno::Collections::List__Uno_UX_Resource*>(__this->items)->Count() : 0;
}

::app::Uno::UX::Resource* ObservableList__Uno_UX_Resource__get_Item(ObservableList__Uno_UX_Resource* __this, int index)
{
    if (__this->items == NULL)
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }

    return ::uPtr< ::app::Uno::Collections::List__Uno_UX_Resource*>(__this->items)->Item(index);
}

::uObject* ObservableList__Uno_UX_Resource__GetEnumerator(ObservableList__Uno_UX_Resource* __this)
{
    if (__this->items == NULL)
    {
        __this->items = ::app::Uno::Collections::List__Uno_UX_Resource__New_1(NULL);
    }

    return ::uBox(::app::Uno::Collections::List1_Enumerator__Uno_UX_Resource__typeof(), ::uPtr< ::app::Uno::Collections::List__Uno_UX_Resource*>(__this->items)->GetEnumerator());
}

void ObservableList__Uno_UX_Resource__Insert(ObservableList__Uno_UX_Resource* __this, int index, ::app::Uno::UX::Resource* item)
{
    if (__this->items == NULL)
    {
        __this->items = ::app::Uno::Collections::List__Uno_UX_Resource__New_1(NULL);
    }

    ::uPtr< ::app::Uno::Collections::List__Uno_UX_Resource*>(__this->items)->Insert(index, item);
    ::uPtr< ::uDelegate*>(__this->added)->InvokeVoid< ::app::Uno::UX::Resource*>(item);
}

ObservableList__Uno_UX_Resource* ObservableList__Uno_UX_Resource__New_1(::uStatic* __this, ::uDelegate* added, ::uDelegate* removed)
{
    ObservableList__Uno_UX_Resource* inst = (ObservableList__Uno_UX_Resource*)::uAllocObject(sizeof(ObservableList__Uno_UX_Resource), ObservableList__Uno_UX_Resource__typeof());
    inst->_ObjInit(added, removed);
    return inst;
}

bool ObservableList__Uno_UX_Resource__Remove(ObservableList__Uno_UX_Resource* __this, ::app::Uno::UX::Resource* item)
{
    if (__this->items == NULL)
    {
        return false;
    }

    bool res = ::uPtr< ::app::Uno::Collections::List__Uno_UX_Resource*>(__this->items)->Remove(item);

    if (res)
    {
        ::uPtr< ::uDelegate*>(__this->removed)->InvokeVoid< ::app::Uno::UX::Resource*>(item);
    }

    return res;
}

void ObservableList__Uno_UX_Resource__RemoveAt(ObservableList__Uno_UX_Resource* __this, int index)
{
    if (__this->items == NULL)
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }

    __this->Remove(::uPtr< ::app::Uno::Collections::List__Uno_UX_Resource*>(__this->items)->Item(index));
}

void ObservableList__Uno_UX_Resource__ReplaceAt(ObservableList__Uno_UX_Resource* __this, int index, ::app::Uno::UX::Resource* item)
{
    if (__this->items == NULL)
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }

    ::app::Uno::UX::Resource* old = ::uPtr< ::app::Uno::Collections::List__Uno_UX_Resource*>(__this->items)->Item(index);
    ::uPtr< ::app::Uno::Collections::List__Uno_UX_Resource*>(__this->items)->Item(index, item);
    ::uPtr< ::uDelegate*>(__this->removed)->InvokeVoid< ::app::Uno::UX::Resource*>(old);
    ::uPtr< ::uDelegate*>(__this->added)->InvokeVoid< ::app::Uno::UX::Resource*>(item);
}

}}}
