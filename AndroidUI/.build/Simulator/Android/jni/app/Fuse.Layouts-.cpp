#include <app/Fuse.Controls.Panel.h>
#include <app/Fuse.InvalidateLayoutReason.h>
#include <app/Fuse.LayoutDependent.h>
#include <app/Fuse.Layouts.Column.h>
#include <app/Fuse.Layouts.ColumnLayout.h>
#include <app/Fuse.Layouts.DefaultLayout.h>
#include <app/Fuse.Layouts.DefinitionBase.h>
#include <app/Fuse.Layouts.DefinitionBase_ParseDataItem.h>
#include <app/Fuse.Layouts.Dock.h>
#include <app/Fuse.Layouts.DockLayout.h>
#include <app/Fuse.Layouts.FlowDirection.h>
#include <app/Fuse.Layouts.GridLayout.h>
#include <app/Fuse.Layouts.Layer.h>
#include <app/Fuse.Layouts.Layout.h>
#include <app/Fuse.Layouts.LayoutRole.h>
#include <app/Fuse.Layouts.Layouts.h>
#include <app/Fuse.Layouts.Metric.h>
#include <app/Fuse.Layouts.Orientation.h>
#include <app/Fuse.Layouts.Row.h>
#include <app/Fuse.Layouts.StackLayout.h>
#include <app/Fuse.Layouts.WrapLayout.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.Properties.h>
#include <app/Fuse.PropertyHandle.h>
#include <app/Fuse.SizeFlags.h>
#include <app/Uno.Action.h>
#include <app/Uno.Action__Fuse_Layouts_Column.h>
#include <app/Uno.Action__Fuse_Layouts_Row.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Char.h>
#include <app/Uno.Collections.ICollection__Fuse_Layouts_Column.h>
#include <app/Uno.Collections.ICollection__Fuse_Layouts_Row.h>
#include <app/Uno.Collections.ICollection__Fuse_Node.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Layouts_DefinitionBase_ParseDataItem.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Node.h>
#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Layouts_DefinitionBase_ParseDataItem.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Node.h>
#include <app/Uno.Collections.IList__Fuse_Layouts_Column.h>
#include <app/Uno.Collections.IList__Fuse_Layouts_DefinitionBase_ParseDataItem.h>
#include <app/Uno.Collections.IList__Fuse_Layouts_Row.h>
#include <app/Uno.Collections.IList__Fuse_Node.h>
#include <app/Uno.Collections.IListExtensions.h>
#include <app/Uno.Collections.List__Fuse_Layouts_DefinitionBase_ParseDataItem.h>
#include <app/Uno.Collections.List__int.h>
#include <app/Uno.Collections.List1_Enumerator__int.h>
#include <app/Uno.Collections.ObservableList__Fuse_Layouts_Column.h>
#include <app/Uno.Collections.ObservableList__Fuse_Layouts_Row.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.Diagnostics.Debug.h>
#include <app/Uno.Diagnostics.DebugMessageType.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Int.h>
#include <app/Uno.Math.h>
#include <app/Uno.Object.h>
#include <app/Uno.String.h>

namespace app {
namespace Fuse {
namespace Layouts {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Layouts\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Column__uType* Column__typeof()
{
    static ::uStaticStrong<Column__uType*> type;
    if (type != NULL) return type;

    type = (Column__uType*)::uAllocClassType(sizeof(Column__uType), "Fuse.Layouts.Column", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Layouts::DefinitionBase__typeof());

    type->SetFields(3,
        ::uNewField("_actualWidth", NULL, offsetof(Column, _actualWidth), ::app::Uno::Float__typeof()),
        ::uNewField("_width", NULL, offsetof(Column, _width), ::app::Uno::Float__typeof()),
        ::uNewField("_widthMetric", NULL, offsetof(Column, _widthMetric), ::app::Fuse::Layouts::Metric__typeof()));

    type->SetFunctions(13,
        ::uNewFunction("CloneDef", Column__CloneDef, 0, false, Column__typeof()),
        ::uNewFunction("get_ActualWidth", Column__get_ActualWidth, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Width", Column__get_Width, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_WidthMetric", Column__get_WidthMetric, 0, false, ::app::Fuse::Layouts::Metric__typeof()),
        ::uNewFunction(".ctor", Column__New_1, 0, true, Column__typeof()),
        ::uNewFunction(".ctor", Column__New_2, 0, true, Column__typeof(), ::app::Uno::Float__typeof(), ::app::Fuse::Layouts::Metric__typeof()),
        ::uNewFunction("Parse", Column__Parse, 0, true, Column__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("Parse", Column__Parse_1, 0, true, ::app::Uno::String__typeof(), ::app::Uno::Collections::IList__Fuse_Layouts_Column__typeof()),
        ::uNewFunction("Serialize", Column__Serialize, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("Serialize", Column__Serialize_1, 0, true, ::app::Uno::String__typeof(), ::app::Uno::Collections::IList__Fuse_Layouts_Column__typeof()),
        ::uNewFunctionVoid("set_ActualWidth", Column__set_ActualWidth, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Width", Column__set_Width, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_WidthMetric", Column__set_WidthMetric, 0, false, ::app::Fuse::Layouts::Metric__typeof()));

    ::uRegisterType(type);
    return type;
}

void Column___ObjInit_1(Column* __this)
{
    __this->_widthMetric = 1;
    __this->_width = 1.0f;
    ::app::Fuse::Layouts::DefinitionBase___ObjInit(__this);
}

void Column___ObjInit_2(Column* __this, float width, int metric)
{
    __this->_widthMetric = 1;
    __this->_width = 1.0f;
    ::app::Fuse::Layouts::DefinitionBase___ObjInit(__this);
    __this->Width(width);
    __this->WidthMetric(metric);
}

Column* Column__CloneDef(Column* __this)
{
    Column* collection_124;
    collection_124 = Column__New_1(NULL);
    ::uPtr< Column*>(collection_124)->WidthMetric(__this->WidthMetric());
    collection_124->Width(__this->Width());
    return collection_124;
}

float Column__get_ActualWidth(Column* __this)
{
    if (__this->WidthMetric() == 0)
    {
        return __this->_width;
    }
    else
    {
        return __this->_actualWidth;
    }
}

float Column__get_Width(Column* __this)
{
    return __this->_width;
}

int Column__get_WidthMetric(Column* __this)
{
    return __this->_widthMetric;
}

Column* Column__New_1(::uStatic* __this)
{
    Column* inst = (Column*)::uAllocObject(sizeof(Column), Column__typeof());
    inst->_ObjInit_1();
    return inst;
}

Column* Column__New_2(::uStatic* __this, float width, int metric)
{
    Column* inst = (Column*)::uAllocObject(sizeof(Column), Column__typeof());
    inst->_ObjInit_2(width, metric);
    return inst;
}

Column* Column__Parse(::uStatic* __this, ::uString* data)
{
    ::app::Fuse::Layouts::DefinitionBase_ParseDataItem pi = ::app::Fuse::Layouts::DefinitionBase__ParseDataSingle(NULL, data);
    return Column__New_2(NULL, pi.Value, pi.Metric);
}

void Column__Parse_1(::uStatic* __this, ::uString* data, ::uObject* output)
{
    for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Fuse_Layouts_DefinitionBase_ParseDataItem::GetEnumerator(::uPtr< ::uObject*>(::app::Fuse::Layouts::DefinitionBase__ParseData(NULL, data))); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Fuse::Layouts::DefinitionBase_ParseDataItem item = ::app::Uno::Collections::IEnumerator__Fuse_Layouts_DefinitionBase_ParseDataItem::Current(::uPtr< ::uObject*>(enum_123));
        ::app::Uno::Collections::ICollection__Fuse_Layouts_Column::Add(::uPtr< ::uObject*>(output), Column__New_2(NULL, item.Value, item.Metric));
    }
}

::uString* Column__Serialize(Column* __this)
{
    switch (__this->WidthMetric())
    {
        case 2:
        {
            return ::uGetConstString("auto");
        }
        case 1:
        {
            return ::app::Uno::String__op_Addition(NULL, ::uBox(::app::Uno::Float__typeof(), __this->Width()), ::uGetConstString("*"));
        }
        default:
        {
            return ::app::Uno::Float::ToString(__this->Width());
        }
    }
}

::uString* Column__Serialize_1(::uStatic* __this, ::uObject* columns)
{
    ::uString* s = ::uGetConstString("");

    for (int i = 0; i < ::app::Uno::Collections::ICollection__Fuse_Layouts_Column::Count(::uPtr< ::uObject*>(columns)); i++)
    {
        if (i > 0)
        {
            s = ::app::Uno::String__op_Addition_2(NULL, s, ::uGetConstString(", "));
        }

        s = ::app::Uno::String__op_Addition_2(NULL, s, ::uPtr< Column*>(::app::Uno::Collections::IList__Fuse_Layouts_Column::Item(::uPtr< ::uObject*>(columns), i))->Serialize());
    }

    return s;
}

void Column__set_ActualWidth(Column* __this, float value)
{
    __this->_actualWidth = value;
}

void Column__set_Width(Column* __this, float value)
{
    if (__this->_width != value)
    {
        __this->_width = ::app::Uno::Math__Max_1(NULL, 0.0f, value);
        __this->OnChanged();
    }
}

void Column__set_WidthMetric(Column* __this, int value)
{
    if (__this->_widthMetric != value)
    {
        __this->_widthMetric = value;
        __this->OnChanged();
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Layouts\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ColumnLayout__uType* ColumnLayout__typeof()
{
    static ::uStaticStrong<ColumnLayout__uType*> type;
    if (type != NULL) return type;

    type = (ColumnLayout__uType*)::uAllocClassType(sizeof(ColumnLayout__uType), "Fuse.Layouts.ColumnLayout", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Layouts::Layout__typeof());
    type->__fp_ArrangePaddingBox = (void(*)(::app::Fuse::Layouts::Layout*, ::uObject*, ::app::Uno::Float4, ::app::Uno::Float2))ColumnLayout__ArrangePaddingBox;
    type->__fp_GetContentSize = (::app::Uno::Float2(*)(::app::Fuse::Layouts::Layout*, ::uObject*, ::app::Uno::Float2, int))ColumnLayout__GetContentSize;

    type->SetFields(2,
        ::uNewField("_columnCount", NULL, offsetof(ColumnLayout, _columnCount), ::app::Uno::Int__typeof()),
        ::uNewField("_orientation", NULL, offsetof(ColumnLayout, _orientation), ::app::Fuse::Layouts::Orientation__typeof()));

    type->SetFunctions(8,
        ::uNewFunction("Arrange", ColumnLayout__Arrange, 0, false, ::app::Uno::Float2__typeof(), ::app::Uno::Collections::IList__Fuse_Node__typeof(), ::app::Uno::Float2__typeof(), ::app::Fuse::SizeFlags__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Bool__typeof(), ::app::Uno::Float4__typeof(), ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_ColumnCount", ColumnLayout__get_ColumnCount, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Orientation", ColumnLayout__get_Orientation, 0, false, ::app::Fuse::Layouts::Orientation__typeof()),
        ::uNewFunction("LeastAt", ColumnLayout__LeastAt, 0, false, ::app::Uno::Int__typeof(), ::uGetArrayType(::app::Uno::Float__typeof())),
        ::uNewFunction("Max", ColumnLayout__Max, 0, false, ::app::Uno::Float__typeof(), ::uGetArrayType(::app::Uno::Float__typeof())),
        ::uNewFunction(".ctor", ColumnLayout__New_1, 0, true, ColumnLayout__typeof()),
        ::uNewFunctionVoid("set_ColumnCount", ColumnLayout__set_ColumnCount, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("set_Orientation", ColumnLayout__set_Orientation, 0, false, ::app::Fuse::Layouts::Orientation__typeof()));

    ::uRegisterType(type);
    return type;
}

void ColumnLayout___ObjInit_1(ColumnLayout* __this)
{
    __this->_orientation = 1;
    __this->_columnCount = 2;
    ::app::Fuse::Layouts::Layout___ObjInit(__this);
}

::app::Uno::Float2 ColumnLayout__Arrange(ColumnLayout* __this, ::uObject* nodes, ::app::Uno::Float2 fillSize, int fillSet, ::app::Uno::Float2 offset, bool doArrange, ::app::Uno::Float4 padding, ::app::Uno::Float2 availableSize)
{
    bool vert = __this->Orientation() == 1;
    ::uArray* at = ::uNewArray(::app::Uno::Float__typeof(), __this->ColumnCount());
    float colSize = (vert ? fillSize.X : fillSize.Y) / (float)__this->ColumnCount();

    if ((vert && !((fillSet & 1) == 1)) || (!vert && !((fillSet & 2) == 2)))
    {
        ::app::Uno::Float2 mx = ::app::Uno::Float2__New_1(NULL, 0.0f);

        for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Fuse_Node::GetEnumerator(::uPtr< ::uObject*>(nodes)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
        {
            ::app::Fuse::Node* node = ::app::Uno::Collections::IEnumerator__Fuse_Node::Current(::uPtr< ::uObject*>(enum_123));

            if (!__this->AffectsLayout(node))
            {
                continue;
            }

            mx = ::app::Uno::Math__Max_3(NULL, mx, ::uPtr< ::app::Fuse::Node*>(node)->GetMarginSize(::app::Uno::Float2__New_1(NULL, 0.0f), 0));
        }

        fillSize = ::app::Uno::Float2__op_Multiply_1(NULL, mx, (float)__this->ColumnCount());
        fillSet = 3;
    }

    for (::uObject* enum_124 = ::app::Uno::Collections::IEnumerable__Fuse_Node::GetEnumerator(::uPtr< ::uObject*>(nodes)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_124)); )
    {
        ::app::Fuse::Node* node = ::app::Uno::Collections::IEnumerator__Fuse_Node::Current(::uPtr< ::uObject*>(enum_124));
        ::app::Uno::Float2 avs = ::app::Uno::Float2__New_2(NULL, vert ? colSize : 0.0f, vert ? 0.0f : colSize);
        int col = __this->LeastAt(at);
        ::app::Uno::Float2 nsz = ::app::Uno::Float2();

        if (doArrange)
        {
            if (__this->ArrangeMarginBoxSpecial(node, padding, availableSize))
            {
                continue;
            }

            ::app::Uno::Float2 pos = vert ? ::app::Uno::Float2__New_2(NULL, offset.X + ((float)col * colSize), offset.Y + ::uPtr< ::uArray*>(at)->Item< float>(col)) : ::app::Uno::Float2__New_2(NULL, offset.X + ::uPtr< ::uArray*>(at)->Item< float>(col), offset.Y + ((float)col * colSize));
            nsz = ::uPtr< ::app::Fuse::Node*>(node)->ArrangeMarginBox(pos, avs, vert ? 1 : 2);
        }
        else if (__this->AffectsLayout(node))
        {
            nsz = ::uPtr< ::app::Fuse::Node*>(node)->GetMarginSize(avs, vert ? 1 : 2);
        }
        else
        {
            continue;
        }

        ::uPtr< ::uArray*>(at)->Item< float>(col) = ::uPtr< ::uArray*>(at)->Item< float>(col) + (vert ? nsz.Y : nsz.X);
    }

    return vert ? ::app::Uno::Float2__New_2(NULL, fillSize.X, __this->Max(at)) : ::app::Uno::Float2__New_2(NULL, __this->Max(at), fillSize.Y);
}

void ColumnLayout__ArrangePaddingBox(ColumnLayout* __this, ::uObject* nodes, ::app::Uno::Float4 padding, ::app::Uno::Float2 availableSize)
{
    __this->Arrange(nodes, ::app::Uno::Float2__op_Subtraction_2(NULL, ::app::Uno::Float2__op_Subtraction_2(NULL, availableSize, ::app::Uno::Float2__New_2(NULL, padding.X, padding.Y)), ::app::Uno::Float2__New_2(NULL, padding.Z, padding.W)), 3, ::app::Uno::Float2__New_2(NULL, padding.X, padding.Y), true, padding, availableSize);
}

int ColumnLayout__get_ColumnCount(ColumnLayout* __this)
{
    return __this->_columnCount;
}

int ColumnLayout__get_Orientation(ColumnLayout* __this)
{
    return __this->_orientation;
}

::app::Uno::Float2 ColumnLayout__GetContentSize(ColumnLayout* __this, ::uObject* nodes, ::app::Uno::Float2 fillSize, int fillSet)
{
    return __this->Arrange(nodes, fillSize, fillSet, ::app::Uno::Float2__New_1(NULL, 0.0f), false, ::app::Uno::Float4__New_1(NULL, 0.0f), ::app::Uno::Float2__New_1(NULL, 0.0f));
}

int ColumnLayout__LeastAt(ColumnLayout* __this, ::uArray* c)
{
    float sz = ::uPtr< ::uArray*>(c)->Item< float>(0);
    int i = 0;

    for (int j = 1; j < c->Length(); j++)
    {
        if (::uPtr< ::uArray*>(c)->Item< float>(j) < sz)
        {
            sz = ::uPtr< ::uArray*>(c)->Item< float>(j);
            i = j;
        }
    }

    return i;
}

float ColumnLayout__Max(ColumnLayout* __this, ::uArray* c)
{
    float mx = ::uPtr< ::uArray*>(c)->Item< float>(0);

    for (int j = 1; j < c->Length(); j++)
    {
        mx = ::app::Uno::Math__Max_1(NULL, mx, c->Item< float>(j));
    }

    return mx;
}

ColumnLayout* ColumnLayout__New_1(::uStatic* __this)
{
    ColumnLayout* inst = (ColumnLayout*)::uAllocObject(sizeof(ColumnLayout), ColumnLayout__typeof());
    inst->_ObjInit_1();
    return inst;
}

void ColumnLayout__set_ColumnCount(ColumnLayout* __this, int value)
{
    if (__this->_columnCount != value)
    {
        __this->_columnCount = value;
        __this->InvalidateLayout();
    }
}

void ColumnLayout__set_Orientation(ColumnLayout* __this, int value)
{
    if (__this->_orientation != value)
    {
        __this->_orientation = value;
        __this->InvalidateLayout();
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Layouts\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DefaultLayout__uType* DefaultLayout__typeof()
{
    static ::uStaticStrong<DefaultLayout__uType*> type;
    if (type != NULL) return type;

    type = (DefaultLayout__uType*)::uAllocClassType(sizeof(DefaultLayout__uType), "Fuse.Layouts.DefaultLayout", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Layouts::Layout__typeof());
    type->__fp_ArrangePaddingBox = (void(*)(::app::Fuse::Layouts::Layout*, ::uObject*, ::app::Uno::Float4, ::app::Uno::Float2))DefaultLayout__ArrangePaddingBox;
    type->__fp_GetContentSize = (::app::Uno::Float2(*)(::app::Fuse::Layouts::Layout*, ::uObject*, ::app::Uno::Float2, int))DefaultLayout__GetContentSize;
    type->__fp_IsMarginBoxDependent = (int(*)(::app::Fuse::Layouts::Layout*, ::app::Fuse::Node*))DefaultLayout__IsMarginBoxDependent;

    type->SetFunctions(2,
        ::uNewFunction("GetElementsSize", DefaultLayout__GetElementsSize, 0, false, ::app::Uno::Float2__typeof(), ::app::Uno::Collections::IList__Fuse_Node__typeof(), ::app::Uno::Float2__typeof(), ::app::Fuse::SizeFlags__typeof()),
        ::uNewFunction(".ctor", DefaultLayout__New_1, 0, true, DefaultLayout__typeof()));

    ::uRegisterType(type);
    return type;
}

void DefaultLayout___ObjInit_1(DefaultLayout* __this)
{
    ::app::Fuse::Layouts::Layout___ObjInit(__this);
}

void DefaultLayout__ArrangePaddingBox(DefaultLayout* __this, ::uObject* elements, ::app::Uno::Float4 padding, ::app::Uno::Float2 availableSize)
{
    ::app::Uno::Float2 avSize = ::app::Uno::Float2__op_Subtraction_2(NULL, ::app::Uno::Float2__op_Subtraction_2(NULL, availableSize, ::app::Uno::Float2__New_2(NULL, padding.X, padding.Y)), ::app::Uno::Float2__New_2(NULL, padding.Z, padding.W));

    for (int i = 0; i < ::app::Uno::Collections::ICollection__Fuse_Node::Count(::uPtr< ::uObject*>(elements)); i++)
    {
        if (!__this->ArrangeMarginBoxSpecial(::app::Uno::Collections::IList__Fuse_Node::Item(::uPtr< ::uObject*>(elements), i), padding, availableSize))
        {
            ::uPtr< ::app::Fuse::Node*>(::app::Uno::Collections::IList__Fuse_Node::Item(::uPtr< ::uObject*>(elements), i))->ArrangeMarginBox(::app::Uno::Float2__New_2(NULL, padding.X, padding.Y), avSize, 3);
        }
    }
}

::app::Uno::Float2 DefaultLayout__GetContentSize(DefaultLayout* __this, ::uObject* elements, ::app::Uno::Float2 fillSize, int fillSet)
{
    ::app::Uno::Float2 size = __this->GetElementsSize(elements, fillSize, fillSet);
    bool recalc = false;

    if (!((fillSet & 1) == 1))
    {
        fillSize.X = size.X;
        fillSet = fillSet | 1;
        recalc = true;
    }

    if (!((fillSet & 2) == 2))
    {
        fillSize.Y = size.Y;
        fillSet = fillSet | 2;
        recalc = true;
    }

    if (recalc)
    {
        size = __this->GetElementsSize(elements, fillSize, fillSet);
    }

    return size;
}

::app::Uno::Float2 DefaultLayout__GetElementsSize(DefaultLayout* __this, ::uObject* elements, ::app::Uno::Float2 fillSize, int fillSet)
{
    ::app::Uno::Float2 ds = ::app::Uno::Float2__New_1(NULL, 0.0f);

    for (int i = 0; i < ::app::Uno::Collections::ICollection__Fuse_Node::Count(::uPtr< ::uObject*>(elements)); i++)
    {
        if (!__this->AffectsLayout(::app::Uno::Collections::IList__Fuse_Node::Item(::uPtr< ::uObject*>(elements), i)))
        {
            continue;
        }

        ds = ::app::Uno::Math__Max_3(NULL, ds, ::uPtr< ::app::Fuse::Node*>(::app::Uno::Collections::IList__Fuse_Node::Item(::uPtr< ::uObject*>(elements), i))->GetMarginSize(fillSize, fillSet));
    }

    return ds;
}

int DefaultLayout__IsMarginBoxDependent(DefaultLayout* __this, ::app::Fuse::Node* child)
{
    return 1;
}

DefaultLayout* DefaultLayout__New_1(::uStatic* __this)
{
    DefaultLayout* inst = (DefaultLayout*)::uAllocObject(sizeof(DefaultLayout), DefaultLayout__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Layouts\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DefinitionBase__uType* DefinitionBase__typeof()
{
    static ::uStaticStrong<DefinitionBase__uType*> type;
    if (type != NULL) return type;

    type = (DefinitionBase__uType*)::uAllocClassType(sizeof(DefinitionBase__uType), "Fuse.Layouts.DefinitionBase", false, 0, 1, 0);

    type->SetStrongRefs(
        "Changed", offsetof(DefinitionBase, Changed));

    type->SetFields(1,
        ::uNewField("_actualOffset", NULL, offsetof(DefinitionBase, _actualOffset), ::app::Uno::Float__typeof()));

    type->SetFunctions(9,
        ::uNewFunctionVoid("add_Changed", DefinitionBase__add_Changed, 0, false, ::app::Uno::Action__typeof()),
        ::uNewFunction("get_ActualOffset", DefinitionBase__get_ActualOffset, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Implicit", DefinitionBase__get_Implicit, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("OnChanged", DefinitionBase__OnChanged, 0, false),
        ::uNewFunction("ParseData", DefinitionBase__ParseData, 0, true, ::app::Uno::Collections::IList__Fuse_Layouts_DefinitionBase_ParseDataItem__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("ParseDataSingle", DefinitionBase__ParseDataSingle, 0, true, ::app::Fuse::Layouts::DefinitionBase_ParseDataItem__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("remove_Changed", DefinitionBase__remove_Changed, 0, false, ::app::Uno::Action__typeof()),
        ::uNewFunctionVoid("set_ActualOffset", DefinitionBase__set_ActualOffset, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Implicit", DefinitionBase__set_Implicit, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void DefinitionBase___ObjInit(DefinitionBase* __this)
{
}

void DefinitionBase__add_Changed(DefinitionBase* __this, ::uDelegate* value)
{
    __this->Changed = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->Changed, (::uDelegate*)value), ::app::Uno::Action__typeof());
}

float DefinitionBase__get_ActualOffset(DefinitionBase* __this)
{
    return __this->_actualOffset;
}

bool DefinitionBase__get_Implicit(DefinitionBase* __this)
{
    return __this->_Implicit;
}

void DefinitionBase__OnChanged(DefinitionBase* __this)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Changed, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->Changed)->InvokeVoid();
    }
}

::uObject* DefinitionBase__ParseData(::uStatic* __this, ::uString* data)
{
    ::uArray* array_127;
    ::app::Uno::Collections::List__Fuse_Layouts_DefinitionBase_ParseDataItem* output = ::app::Uno::Collections::List__Fuse_Layouts_DefinitionBase_ParseDataItem__New_1(NULL);
    ::uArray* s = ::app::Uno::String::Split(::uPtr< ::uString*>(data), (array_127 = ::uNewArray(::app::Uno::Char__typeof(), 1), ::uPtr< ::uArray*>(array_127)->Item< ::uChar>(0) = ',', array_127));

    for (int i = 0; i < ::uPtr< ::uArray*>(s)->Length(); i++)
    {
        ::uPtr< ::app::Uno::Collections::List__Fuse_Layouts_DefinitionBase_ParseDataItem*>(output)->Add(DefinitionBase__ParseDataSingle(NULL, ::uPtr< ::uArray*>(s)->Item< ::uString*>(i)));
    }

    return (::uObject*)output;
}

::app::Fuse::Layouts::DefinitionBase_ParseDataItem DefinitionBase__ParseDataSingle(::uStatic* __this, ::uString* data)
{
    ::app::Fuse::Layouts::DefinitionBase_ParseDataItem collection_123 = ::app::Fuse::Layouts::DefinitionBase_ParseDataItem();
    ::app::Fuse::Layouts::DefinitionBase_ParseDataItem collection_124 = ::app::Fuse::Layouts::DefinitionBase_ParseDataItem();
    ::app::Fuse::Layouts::DefinitionBase_ParseDataItem collection_125 = ::app::Fuse::Layouts::DefinitionBase_ParseDataItem();
    ::app::Fuse::Layouts::DefinitionBase_ParseDataItem collection_126 = ::app::Fuse::Layouts::DefinitionBase_ParseDataItem();

    try
    {
        ::uString* t = ::app::Uno::String::Trim(::uPtr< ::uString*>(data));

        if ((::uPtr< ::uString*>(t)->Length() > 0) && (::uPtr< ::uString*>(t)->Item(::uPtr< ::uString*>(t)->Length() - 1) == '*'))
        {
            ::uString* k = ::app::Uno::String::Trim(::uPtr< ::uString*>(::app::Uno::String::Substring_1(::uPtr< ::uString*>(t), 0, ::uPtr< ::uString*>(t)->Length() - 1)));
            collection_123 = ::uDefault< ::app::Fuse::Layouts::DefinitionBase_ParseDataItem>();
            collection_123.Value = ::app::Uno::Float__Parse(NULL, k);
            collection_123.Metric = 1;
            return collection_123;
        }
        else if (::app::Uno::String__op_Equality(NULL, ::app::Uno::String::ToLower(::uPtr< ::uString*>(t)), ::uGetConstString("auto")))
        {
            collection_124 = ::uDefault< ::app::Fuse::Layouts::DefinitionBase_ParseDataItem>();
            collection_124.Value = 1.0f;
            collection_124.Metric = 2;
            return collection_124;
        }
        else
        {
            collection_125 = ::uDefault< ::app::Fuse::Layouts::DefinitionBase_ParseDataItem>();
            collection_125.Value = ::app::Uno::Float__Parse(NULL, t);
            collection_125.Metric = 0;
            return collection_125;
        }
    }
    catch (const ::uThrowable& __t)
    {
        if (::uIs(__t.Exception, ::app::Uno::Exception__typeof()))
        {
            ::app::Uno::Exception* e = (::app::Uno::Exception*)__t.Exception;
            ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::app::Uno::String__op_Addition_2(NULL, ::uGetConstString("Unable to parse data: "), data), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Controls\\0.11.3\\Layouts\\$.uno"), 445);
            collection_126 = ::uDefault< ::app::Fuse::Layouts::DefinitionBase_ParseDataItem>();
            collection_126.Value = 0.0f;
            collection_126.Metric = 0;
            return collection_126;
        }
        else
        {
            throw __t;
        }
    }
}

void DefinitionBase__remove_Changed(DefinitionBase* __this, ::uDelegate* value)
{
    __this->Changed = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->Changed, (::uDelegate*)value), ::app::Uno::Action__typeof());
}

void DefinitionBase__set_ActualOffset(DefinitionBase* __this, float value)
{
    __this->_actualOffset = value;
}

void DefinitionBase__set_Implicit(DefinitionBase* __this, bool value)
{
    __this->_Implicit = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Layouts\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DefinitionBase_ParseDataItem__uType* DefinitionBase_ParseDataItem__typeof()
{
    static ::uStaticStrong<DefinitionBase_ParseDataItem__uType*> type;
    if (type != NULL) return type;

    type = (DefinitionBase_ParseDataItem__uType*)::uAllocStructType(sizeof(DefinitionBase_ParseDataItem__uType), "Fuse.Layouts.DefinitionBase.ParseDataItem", sizeof(DefinitionBase_ParseDataItem), 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Layouts\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* Dock__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.Layouts.Dock", ::app::Uno::Int__typeof(), 5);

    type->SetLiterals(
        "Left", 0LL,
        "Right", 1LL,
        "Top", 2LL,
        "Bottom", 3LL,
        "Fill", 4LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Layouts\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Fuse::PropertyHandle*> DockLayout___dockProperty;

DockLayout__uType* DockLayout__typeof()
{
    static ::uStaticStrong<DockLayout__uType*> type;
    if (type != NULL) return type;

    type = (DockLayout__uType*)::uAllocClassType(sizeof(DockLayout__uType), "Fuse.Layouts.DockLayout", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Layouts::Layout__typeof());
    type->__fp_ArrangePaddingBox = (void(*)(::app::Fuse::Layouts::Layout*, ::uObject*, ::app::Uno::Float4, ::app::Uno::Float2))DockLayout__ArrangePaddingBox;
    type->__fp_GetContentSize = (::app::Uno::Float2(*)(::app::Fuse::Layouts::Layout*, ::uObject*, ::app::Uno::Float2, int))DockLayout__GetContentSize;

    type->SetFields(1,
        ::uNewField("_dockProperty", &DockLayout___dockProperty, 0, ::app::Fuse::PropertyHandle__typeof()));

    type->SetFunctions(5,
        ::uNewFunction("GetDock", DockLayout__GetDock, 0, true, ::app::Fuse::Layouts::Dock__typeof(), ::app::Fuse::Node__typeof()),
        ::uNewFunction("MeasureSubtree", DockLayout__MeasureSubtree, 0, false, ::app::Uno::Float2__typeof(), ::app::Uno::Collections::IList__Fuse_Node__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Float2__typeof(), ::app::Fuse::SizeFlags__typeof()),
        ::uNewFunction(".ctor", DockLayout__New_1, 0, true, DockLayout__typeof()),
        ::uNewFunctionVoid("ResetDock", DockLayout__ResetDock, 0, true, ::app::Fuse::Node__typeof()),
        ::uNewFunctionVoid("SetDock", DockLayout__SetDock, 0, true, ::app::Fuse::Node__typeof(), ::app::Fuse::Layouts::Dock__typeof()));

    ::uRegisterType(type);
    return type;
}

void DockLayout___ObjInit_1(DockLayout* __this)
{
    ::app::Fuse::Layouts::Layout___ObjInit(__this);
}

void DockLayout___TypeInit_1(::uStatic* __this)
{
    DockLayout___dockProperty = ::app::Fuse::Properties__CreateHandle(NULL);
}

void DockLayout__ArrangePaddingBox(DockLayout* __this, ::uObject* elements, ::app::Uno::Float4 padding, ::app::Uno::Float2 finalSize)
{
    ::app::Uno::Float2 availablePosition = ::app::Uno::Float2__New_2(NULL, padding.X, padding.Y);
    ::app::Uno::Float2 availableSize = ::app::Uno::Float2__op_Subtraction_2(NULL, ::app::Uno::Float2__op_Subtraction_2(NULL, finalSize, ::app::Uno::Float2__New_2(NULL, padding.X, padding.Y)), ::app::Uno::Float2__New_2(NULL, padding.Z, padding.W));

    for (int i = 0; i < ::app::Uno::Collections::ICollection__Fuse_Node::Count(::uPtr< ::uObject*>(elements)); i++)
    {
        ::app::Fuse::Node* c = ::app::Uno::Collections::IList__Fuse_Node::Item(::uPtr< ::uObject*>(elements), i);

        if (__this->ArrangeMarginBoxSpecial(c, padding, finalSize))
        {
            continue;
        }

        int d = DockLayout__GetDock(NULL, c);
        int sf = ((d == 0) || (d == 1)) ? 2 : 1;
        ::app::Uno::Float2 desiredSize = ::uPtr< ::app::Fuse::Node*>(c)->GetMarginSize(availableSize, sf);

        switch (d)
        {
            case 0:
            {
                desiredSize.Y = availableSize.Y;
                ::uPtr< ::app::Fuse::Node*>(c)->ArrangeMarginBox(availablePosition, desiredSize, 3);
                availablePosition.X = availablePosition.X + desiredSize.X;
                availableSize.X = availableSize.X - desiredSize.X;
                break;
            }
            case 1:
            {
                desiredSize.Y = availableSize.Y;
                ::uPtr< ::app::Fuse::Node*>(c)->ArrangeMarginBox(::app::Uno::Float2__New_2(NULL, (availablePosition.X + availableSize.X) - desiredSize.X, availablePosition.Y), desiredSize, 3);
                availableSize.X = availableSize.X - desiredSize.X;
                break;
            }
            case 2:
            {
                desiredSize.X = availableSize.X;
                ::uPtr< ::app::Fuse::Node*>(c)->ArrangeMarginBox(availablePosition, desiredSize, 3);
                availablePosition.Y = availablePosition.Y + desiredSize.Y;
                availableSize.Y = availableSize.Y - desiredSize.Y;
                break;
            }
            case 3:
            {
                desiredSize.X = availableSize.X;
                ::uPtr< ::app::Fuse::Node*>(c)->ArrangeMarginBox(::app::Uno::Float2__New_2(NULL, availablePosition.X, (availablePosition.Y + availableSize.Y) - desiredSize.Y), desiredSize, 3);
                availableSize.Y = availableSize.Y - desiredSize.Y;
                break;
            }
            case 4:
            {
                break;
            }
        }

        availableSize = ::app::Uno::Math__Max_3(NULL, availableSize, ::app::Uno::Float2__New_1(NULL, 0.0f));
    }

    for (int i = 0; i < ::app::Uno::Collections::ICollection__Fuse_Node::Count(::uPtr< ::uObject*>(elements)); ++i)
    {
        ::app::Fuse::Node* c = ::app::Uno::Collections::IList__Fuse_Node::Item(::uPtr< ::uObject*>(elements), i);

        if (!__this->AffectsLayout(c))
        {
            continue;
        }

        if (DockLayout__GetDock(NULL, c) != 4)
        {
            continue;
        }

        ::uPtr< ::app::Fuse::Node*>(c)->ArrangeMarginBox(availablePosition, availableSize, 3);
    }
}

::app::Uno::Float2 DockLayout__GetContentSize(DockLayout* __this, ::uObject* elements, ::app::Uno::Float2 fillSize, int fillSet)
{
    return __this->MeasureSubtree(elements, 0, fillSize, fillSet);
}

int DockLayout__GetDock(::uStatic* __this, ::app::Fuse::Node* elm)
{
    ::uObject* val;

    if (::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(elm)->Properties())->TryGet(DockLayout___dockProperty, &val))
    {
        return ::uUnbox< int>(::app::Fuse::Layouts::Dock__typeof(), val);
    }

    return 4;
}

::app::Uno::Float2 DockLayout__MeasureSubtree(DockLayout* __this, ::uObject* elements, int childIndex, ::app::Uno::Float2 fillSize, int fillSet)
{
    ::app::Fuse::Node* c;

    if (childIndex >= ::app::Uno::Collections::ICollection__Fuse_Node::Count(::uPtr< ::uObject*>(elements)))
    {
        ::app::Uno::Float2 mx = ::app::Uno::Float2__New_1(NULL, 0.0f);

        for (int i = 0; i < ::app::Uno::Collections::ICollection__Fuse_Node::Count(::uPtr< ::uObject*>(elements)); ++i)
        {
            c = ::app::Uno::Collections::IList__Fuse_Node::Item(::uPtr< ::uObject*>(elements), i);

            if (!__this->AffectsLayout(c))
            {
                continue;
            }

            if (DockLayout__GetDock(NULL, c) == 4)
            {
                ::app::Uno::Float2 sz = ::uPtr< ::app::Fuse::Node*>(c)->GetMarginSize(fillSize, fillSet);
                mx = ::app::Uno::Math__Max_3(NULL, sz, mx);
            }
        }

        return mx;
    }

    c = ::app::Uno::Collections::IList__Fuse_Node::Item(::uPtr< ::uObject*>(elements), childIndex);

    switch (DockLayout__GetDock(NULL, c))
    {
        case 0:
        case 1:
        {
            {
                ::app::Uno::Float2 cds = ::uPtr< ::app::Fuse::Node*>(c)->GetMarginSize(fillSize, fillSet & -2);
                fillSize.X = fillSize.X - cds.X;
                ::app::Uno::Float2 subtree = __this->MeasureSubtree(elements, childIndex + 1, fillSize, fillSet);
                return ::app::Uno::Float2__New_2(NULL, cds.X + subtree.X, ::app::Uno::Math__Max_1(NULL, cds.Y, subtree.Y));
            }
        }
        case 2:
        case 3:
        {
            {
                ::app::Uno::Float2 cds = ::uPtr< ::app::Fuse::Node*>(c)->GetMarginSize(fillSize, fillSet & -3);
                fillSize.Y = fillSize.Y - cds.Y;
                ::app::Uno::Float2 subtree = __this->MeasureSubtree(elements, childIndex + 1, fillSize, fillSet);
                return ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__Max_1(NULL, cds.X, subtree.X), cds.Y + subtree.Y);
            }
        }
        case 4:
        {
            return __this->MeasureSubtree(elements, childIndex + 1, fillSize, fillSet);
        }
    }

    return ::app::Uno::Float2__New_1(NULL, 0.0f);
}

DockLayout* DockLayout__New_1(::uStatic* __this)
{
    DockLayout* inst = (DockLayout*)::uAllocObject(sizeof(DockLayout), DockLayout__typeof());
    inst->_ObjInit_1();
    return inst;
}

void DockLayout__ResetDock(::uStatic* __this, ::app::Fuse::Node* elm)
{
    ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(elm)->Properties())->Clear(DockLayout___dockProperty);
    elm->InvalidateLayout(2);
}

void DockLayout__SetDock(::uStatic* __this, ::app::Fuse::Node* elm, int dock)
{
    ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(elm)->Properties())->Set(DockLayout___dockProperty, ::uBox< int>(::app::Fuse::Layouts::Dock__typeof(), dock));
    elm->InvalidateLayout(2);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Layouts\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* FlowDirection__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.Layouts.FlowDirection", ::app::Uno::Int__typeof(), 2);

    type->SetLiterals(
        "LeftToRight", 0LL,
        "RightToLeft", 1LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Layouts\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Fuse::PropertyHandle*> GridLayout___actualColumnProperty;
::uStaticStrong< ::app::Fuse::PropertyHandle*> GridLayout___actualRowProperty;
::uStaticStrong< ::app::Fuse::PropertyHandle*> GridLayout___columnProperty;
::uStaticStrong< ::app::Fuse::PropertyHandle*> GridLayout___columnSpanProperty;
::uStaticStrong< ::app::Fuse::PropertyHandle*> GridLayout___rowProperty;
::uStaticStrong< ::app::Fuse::PropertyHandle*> GridLayout___rowSpanProperty;
::uStaticStrong< ::app::Fuse::Layouts::Column*> GridLayout___staticDefaultColumn;
::uStaticStrong< ::app::Fuse::Layouts::Row*> GridLayout___staticDefaultRow;

GridLayout__uType* GridLayout__typeof()
{
    static ::uStaticStrong<GridLayout__uType*> type;
    if (type != NULL) return type;

    type = (GridLayout__uType*)::uAllocClassType(sizeof(GridLayout__uType), "Fuse.Layouts.GridLayout", false, 0, 4, 0);

    type->SetBaseType(::app::Fuse::Layouts::Layout__typeof());
    type->__fp_ArrangePaddingBox = (void(*)(::app::Fuse::Layouts::Layout*, ::uObject*, ::app::Uno::Float4, ::app::Uno::Float2))GridLayout__ArrangePaddingBox;
    type->__fp_GetContentSize = (::app::Uno::Float2(*)(::app::Fuse::Layouts::Layout*, ::uObject*, ::app::Uno::Float2, int))GridLayout__GetContentSize;
    type->__fp_IsMarginBoxDependent = (int(*)(::app::Fuse::Layouts::Layout*, ::app::Fuse::Node*))GridLayout__IsMarginBoxDependent;

    type->SetStrongRefs(
        "_columns", offsetof(GridLayout, _columns),
        "_defaultColumn", offsetof(GridLayout, _defaultColumn),
        "_defaultRow", offsetof(GridLayout, _defaultRow),
        "_rows", offsetof(GridLayout, _rows));

    type->SetFields(13,
        ::uNewField("_actualColumnProperty", &GridLayout___actualColumnProperty, 0, ::app::Fuse::PropertyHandle__typeof()),
        ::uNewField("_actualRowProperty", &GridLayout___actualRowProperty, 0, ::app::Fuse::PropertyHandle__typeof()),
        ::uNewField("_cellSpacing", NULL, offsetof(GridLayout, _cellSpacing), ::app::Uno::Float__typeof()),
        ::uNewField("_columnProperty", &GridLayout___columnProperty, 0, ::app::Fuse::PropertyHandle__typeof()),
        ::uNewField("_columns", NULL, offsetof(GridLayout, _columns), ::app::Uno::Collections::ObservableList__Fuse_Layouts_Column__typeof()),
        ::uNewField("_columnSpanProperty", &GridLayout___columnSpanProperty, 0, ::app::Fuse::PropertyHandle__typeof()),
        ::uNewField("_defaultColumn", NULL, offsetof(GridLayout, _defaultColumn), ::app::Fuse::Layouts::Column__typeof()),
        ::uNewField("_defaultRow", NULL, offsetof(GridLayout, _defaultRow), ::app::Fuse::Layouts::Row__typeof()),
        ::uNewField("_rowProperty", &GridLayout___rowProperty, 0, ::app::Fuse::PropertyHandle__typeof()),
        ::uNewField("_rows", NULL, offsetof(GridLayout, _rows), ::app::Uno::Collections::ObservableList__Fuse_Layouts_Row__typeof()),
        ::uNewField("_rowSpanProperty", &GridLayout___rowSpanProperty, 0, ::app::Fuse::PropertyHandle__typeof()),
        ::uNewField("_staticDefaultColumn", &GridLayout___staticDefaultColumn, 0, ::app::Fuse::Layouts::Column__typeof()),
        ::uNewField("_staticDefaultRow", &GridLayout___staticDefaultRow, 0, ::app::Fuse::Layouts::Row__typeof()));

    type->SetFunctions(47,
        ::uNewFunctionVoid("Changed", GridLayout__Changed, 0, false),
        ::uNewFunctionVoid("ColumnAdded", GridLayout__ColumnAdded, 0, false, ::app::Fuse::Layouts::Column__typeof()),
        ::uNewFunctionVoid("ColumnRemoved", GridLayout__ColumnRemoved, 0, false, ::app::Fuse::Layouts::Column__typeof()),
        ::uNewFunction("GenDefaultColumn", GridLayout__GenDefaultColumn, 0, false, ::app::Fuse::Layouts::Column__typeof()),
        ::uNewFunction("GenDefaultRow", GridLayout__GenDefaultRow, 0, false, ::app::Fuse::Layouts::Row__typeof()),
        ::uNewFunction("get_CellSpacing", GridLayout__get_CellSpacing, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_ColumnCount", GridLayout__get_ColumnCount, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_ColumnData", GridLayout__get_ColumnData, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("get_ColumnList", GridLayout__get_ColumnList, 0, false, ::app::Uno::Collections::IList__Fuse_Layouts_Column__typeof()),
        ::uNewFunction("get_Columns", GridLayout__get_Columns, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("get_DefaultColumn", GridLayout__get_DefaultColumn, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("get_DefaultRow", GridLayout__get_DefaultRow, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("get_EffectiveCellSpacing", GridLayout__get_EffectiveCellSpacing, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_RowCount", GridLayout__get_RowCount, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_RowData", GridLayout__get_RowData, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("get_RowList", GridLayout__get_RowList, 0, false, ::app::Uno::Collections::IList__Fuse_Layouts_Row__typeof()),
        ::uNewFunction("get_Rows", GridLayout__get_Rows, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("GetActualColumn", GridLayout__GetActualColumn, 0, false, ::app::Uno::Int__typeof(), ::app::Fuse::Node__typeof()),
        ::uNewFunctionVoid("GetActualPositions", GridLayout__GetActualPositions, 0, false, ::app::Uno::Collections::IList__Fuse_Node__typeof()),
        ::uNewFunction("GetActualRow", GridLayout__GetActualRow, 0, false, ::app::Uno::Int__typeof(), ::app::Fuse::Node__typeof()),
        ::uNewFunction("GetColumn", GridLayout__GetColumn, 0, true, ::app::Uno::Int__typeof(), ::app::Fuse::Node__typeof()),
        ::uNewFunction("GetColumns", GridLayout__GetColumns, 0, false, ::app::Fuse::Layouts::Column__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("GetColumnSpan", GridLayout__GetColumnSpan, 0, true, ::app::Uno::Int__typeof(), ::app::Fuse::Node__typeof()),
        ::uNewFunction("GetRow", GridLayout__GetRow, 0, true, ::app::Uno::Int__typeof(), ::app::Fuse::Node__typeof()),
        ::uNewFunction("GetRows", GridLayout__GetRows, 0, false, ::app::Fuse::Layouts::Row__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("GetRowSpan", GridLayout__GetRowSpan, 0, true, ::app::Uno::Int__typeof(), ::app::Fuse::Node__typeof()),
        ::uNewFunction("Measure", GridLayout__Measure, 0, false, ::app::Uno::Float2__typeof(), ::app::Uno::Collections::IList__Fuse_Node__typeof(), ::app::Uno::Float2__typeof(), ::app::Fuse::SizeFlags__typeof()),
        ::uNewFunction(".ctor", GridLayout__New_1, 0, true, GridLayout__typeof()),
        ::uNewFunctionVoid("ResetColumn", GridLayout__ResetColumn, 0, true, ::app::Fuse::Node__typeof()),
        ::uNewFunctionVoid("ResetColumnSpan", GridLayout__ResetColumnSpan, 0, true, ::app::Fuse::Node__typeof()),
        ::uNewFunctionVoid("ResetRow", GridLayout__ResetRow, 0, true, ::app::Fuse::Node__typeof()),
        ::uNewFunctionVoid("ResetRowSpan", GridLayout__ResetRowSpan, 0, true, ::app::Fuse::Node__typeof()),
        ::uNewFunctionVoid("RowAdded", GridLayout__RowAdded, 0, false, ::app::Fuse::Layouts::Row__typeof()),
        ::uNewFunctionVoid("RowRemoved", GridLayout__RowRemoved, 0, false, ::app::Fuse::Layouts::Row__typeof()),
        ::uNewFunctionVoid("set_CellSpacing", GridLayout__set_CellSpacing, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_ColumnCount", GridLayout__set_ColumnCount, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("set_ColumnData", GridLayout__set_ColumnData, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_Columns", GridLayout__set_Columns, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_DefaultColumn", GridLayout__set_DefaultColumn, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_DefaultRow", GridLayout__set_DefaultRow, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_RowCount", GridLayout__set_RowCount, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("set_RowData", GridLayout__set_RowData, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_Rows", GridLayout__set_Rows, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("SetColumn", GridLayout__SetColumn, 0, true, ::app::Fuse::Node__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("SetColumnSpan", GridLayout__SetColumnSpan, 0, true, ::app::Fuse::Node__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("SetRow", GridLayout__SetRow, 0, true, ::app::Fuse::Node__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("SetRowSpan", GridLayout__SetRowSpan, 0, true, ::app::Fuse::Node__typeof(), ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

void GridLayout___ObjInit_1(GridLayout* __this)
{
    __this->_defaultRow = GridLayout___staticDefaultRow;
    __this->_defaultColumn = GridLayout___staticDefaultColumn;
    __this->_cellSpacing = 0.0f;
    ::app::Fuse::Layouts::Layout___ObjInit(__this);
    __this->_rows = ::app::Uno::Collections::ObservableList__Fuse_Layouts_Row__New_1(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Layouts_Row__typeof(), (const void*)GridLayout__RowAdded, __this), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Layouts_Row__typeof(), (const void*)GridLayout__RowRemoved, __this));
    __this->_columns = ::app::Uno::Collections::ObservableList__Fuse_Layouts_Column__New_1(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Layouts_Column__typeof(), (const void*)GridLayout__ColumnAdded, __this), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Layouts_Column__typeof(), (const void*)GridLayout__ColumnRemoved, __this));
}

void GridLayout___TypeInit_1(::uStatic* __this)
{
    ::app::Fuse::Layouts::Row* collection_124;
    ::app::Fuse::Layouts::Column* collection_123;
    GridLayout___staticDefaultRow = (collection_124 = ::app::Fuse::Layouts::Row__New_1(NULL), ::uPtr< ::app::Fuse::Layouts::Row*>(collection_124)->HeightMetric(1), 1, ::uPtr< ::app::Fuse::Layouts::Row*>(collection_124)->Height(1.0f), 1.0f, collection_124);
    GridLayout___staticDefaultColumn = (collection_123 = ::app::Fuse::Layouts::Column__New_1(NULL), ::uPtr< ::app::Fuse::Layouts::Column*>(collection_123)->WidthMetric(1), 1, ::uPtr< ::app::Fuse::Layouts::Column*>(collection_123)->Width(1.0f), 1.0f, collection_123);
    GridLayout___rowProperty = ::app::Fuse::Properties__CreateHandle(NULL);
    GridLayout___actualRowProperty = ::app::Fuse::Properties__CreateHandle(NULL);
    GridLayout___rowSpanProperty = ::app::Fuse::Properties__CreateHandle(NULL);
    GridLayout___columnProperty = ::app::Fuse::Properties__CreateHandle(NULL);
    GridLayout___actualColumnProperty = ::app::Fuse::Properties__CreateHandle(NULL);
    GridLayout___columnSpanProperty = ::app::Fuse::Properties__CreateHandle(NULL);
}

void GridLayout__ArrangePaddingBox(GridLayout* __this, ::uObject* elements, ::app::Uno::Float4 padding, ::app::Uno::Float2 availableSize)
{
    ::app::Uno::Float2 remainSize = ::app::Uno::Float2__op_Subtraction_2(NULL, ::app::Uno::Float2__op_Subtraction_2(NULL, availableSize, ::app::Uno::Float2__New_2(NULL, padding.X, padding.Y)), ::app::Uno::Float2__New_2(NULL, padding.Z, padding.W));
    __this->Measure(elements, remainSize, 3);
    ::app::Uno::Float2 paddingOffset = ::app::Uno::Float2__New_2(NULL, padding.X, padding.Y);
    float effectiveCellSpacing = __this->EffectiveCellSpacing();

    for (int n = 0; n < ::app::Uno::Collections::ICollection__Fuse_Node::Count(::uPtr< ::uObject*>(elements)); n++)
    {
        ::app::Fuse::Node* child = ::app::Uno::Collections::IList__Fuse_Node::Item(::uPtr< ::uObject*>(elements), n);

        if (__this->ArrangeMarginBoxSpecial(child, padding, availableSize))
        {
            continue;
        }

        int column = __this->GetActualColumn(child);
        int row = __this->GetActualRow(child);
        int rowSpan = GridLayout__GetRowSpan(NULL, child);
        int columnSpan = GridLayout__GetColumnSpan(NULL, child);
        float x = 0.0f;
        float y = 0.0f;
        float w = remainSize.X;
        float h = remainSize.Y;

        if ((column >= 0) && (column < ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Layouts_Column*>(__this->_columns)->Count()))
        {
            ::app::Fuse::Layouts::Column* c = ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Layouts_Column*>(__this->_columns)->Item(column);
            x = ::uPtr< ::app::Fuse::Layouts::Column*>(c)->ActualOffset();
            w = c->ActualWidth();

            for (int s = column + 1; s < ::app::Uno::Math__Min_8(NULL, ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Layouts_Column*>(__this->_columns)->Count(), column + columnSpan); ++s)
            {
                w = w + (::uPtr< ::app::Fuse::Layouts::Column*>(::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Layouts_Column*>(__this->_columns)->Item(s))->ActualWidth() + effectiveCellSpacing);
            }
        }

        if ((row >= 0) && (row < ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Layouts_Row*>(__this->_rows)->Count()))
        {
            ::app::Fuse::Layouts::Row* r = ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Layouts_Row*>(__this->_rows)->Item(row);
            y = ::uPtr< ::app::Fuse::Layouts::Row*>(r)->ActualOffset();
            h = r->ActualHeight();

            for (int s = row + 1; s < ::app::Uno::Math__Min_8(NULL, ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Layouts_Row*>(__this->_rows)->Count(), row + rowSpan); ++s)
            {
                h = h + (::uPtr< ::app::Fuse::Layouts::Row*>(::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Layouts_Row*>(__this->_rows)->Item(s))->ActualHeight() + effectiveCellSpacing);
            }
        }

        ::uPtr< ::app::Fuse::Node*>(child)->ArrangeMarginBox(::app::Uno::Float2__op_Addition_2(NULL, paddingOffset, ::app::Uno::Float2__New_2(NULL, x, y)), ::app::Uno::Float2__New_2(NULL, w, h), 3);
    }
}

void GridLayout__Changed(GridLayout* __this)
{
    __this->InvalidateLayout();
}

void GridLayout__ColumnAdded(GridLayout* __this, ::app::Fuse::Layouts::Column* c)
{
    if (::uPtr< ::app::Fuse::Layouts::Column*>(c)->Implicit())
    {
        return;
    }

    ::uPtr< ::app::Fuse::Layouts::Column*>(c)->add_Changed(::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)GridLayout__Changed, __this));
    __this->Changed();
}

void GridLayout__ColumnRemoved(GridLayout* __this, ::app::Fuse::Layouts::Column* c)
{
    if (::uPtr< ::app::Fuse::Layouts::Column*>(c)->Implicit())
    {
        return;
    }

    ::uPtr< ::app::Fuse::Layouts::Column*>(c)->remove_Changed(::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)GridLayout__Changed, __this));
    __this->Changed();
}

::app::Fuse::Layouts::Column* GridLayout__GenDefaultColumn(GridLayout* __this)
{
    ::app::Fuse::Layouts::Column* c = ::uPtr< ::app::Fuse::Layouts::Column*>(__this->_defaultColumn)->CloneDef();
    ::uPtr< ::app::Fuse::Layouts::Column*>(c)->Implicit(true);
    return c;
}

::app::Fuse::Layouts::Row* GridLayout__GenDefaultRow(GridLayout* __this)
{
    ::app::Fuse::Layouts::Row* c = ::uPtr< ::app::Fuse::Layouts::Row*>(__this->_defaultRow)->CloneDef();
    ::uPtr< ::app::Fuse::Layouts::Row*>(c)->Implicit(true);
    return c;
}

float GridLayout__get_CellSpacing(GridLayout* __this)
{
    return __this->_cellSpacing;
}

int GridLayout__get_ColumnCount(GridLayout* __this)
{
    return ::app::Uno::Collections::ICollection__Fuse_Layouts_Column::Count(::uPtr< ::uObject*>(__this->ColumnList()));
}

::uString* GridLayout__get_ColumnData(GridLayout* __this)
{
    ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("GridLayout: The ColumnData property is deprecated and will be removed in a future release, use Columns instead"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Controls\\0.11.3\\Layouts\\$.uno"), 742);
    return __this->Columns();
}

::uObject* GridLayout__get_ColumnList(GridLayout* __this)
{
    return (::uObject*)__this->_columns;
}

::uString* GridLayout__get_Columns(GridLayout* __this)
{
    return ::app::Fuse::Layouts::Column__Serialize_1(NULL, __this->ColumnList());
}

::uString* GridLayout__get_DefaultColumn(GridLayout* __this)
{
    return ::uPtr< ::app::Fuse::Layouts::Column*>(__this->_defaultColumn)->Serialize();
}

::uString* GridLayout__get_DefaultRow(GridLayout* __this)
{
    return ::uPtr< ::app::Fuse::Layouts::Row*>(__this->_defaultRow)->Serialize();
}

float GridLayout__get_EffectiveCellSpacing(GridLayout* __this)
{
    return __this->SnapUp(__this->CellSpacing());
}

int GridLayout__get_RowCount(GridLayout* __this)
{
    return ::app::Uno::Collections::ICollection__Fuse_Layouts_Row::Count(::uPtr< ::uObject*>(__this->RowList()));
}

::uString* GridLayout__get_RowData(GridLayout* __this)
{
    ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("GridLayout: The RowData property is deprecated and will be removed in a future release, use Rows instead"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Controls\\0.11.3\\Layouts\\$.uno"), 674);
    return __this->Rows();
}

::uObject* GridLayout__get_RowList(GridLayout* __this)
{
    return (::uObject*)__this->_rows;
}

::uString* GridLayout__get_Rows(GridLayout* __this)
{
    return ::app::Fuse::Layouts::Row__Serialize_1(NULL, __this->RowList());
}

int GridLayout__GetActualColumn(GridLayout* __this, ::app::Fuse::Node* elm)
{
    ::uObject* v;

    if (::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(elm)->Properties())->TryGet(GridLayout___actualColumnProperty, &v))
    {
        return ::uUnbox< int>(::app::Uno::Int__typeof(), v);
    }

    return 0;
}

void GridLayout__GetActualPositions(GridLayout* __this, ::uObject* elements)
{
    int columnCount = ::app::Uno::Math__Max_8(NULL, 1, ::app::Uno::Collections::ICollection__Fuse_Layouts_Column::Count(::uPtr< ::uObject*>(__this->ColumnList())));

    for (int n = 0; n < ::app::Uno::Collections::ICollection__Fuse_Node::Count(::uPtr< ::uObject*>(elements)); n++)
    {
        if (!__this->AffectsLayout(::app::Uno::Collections::IList__Fuse_Node::Item(::uPtr< ::uObject*>(elements), n)))
        {
            continue;
        }

        columnCount = ::app::Uno::Math__Max_8(NULL, columnCount, GridLayout__GetColumn(NULL, ::app::Uno::Collections::IList__Fuse_Node::Item(::uPtr< ::uObject*>(elements), n)) + GridLayout__GetColumnSpan(NULL, ::app::Uno::Collections::IList__Fuse_Node::Item(::uPtr< ::uObject*>(elements), n)));
    }

    ::app::Uno::Collections::List__int* rowAvail = ::app::Uno::Collections::List__int__New_2(NULL, columnCount);

    for (int c = 0; c < columnCount; c++)
    {
        ::uPtr< ::app::Uno::Collections::List__int*>(rowAvail)->Add(0);
    }

    int rowAt = 0;
    int colAt = 0;

    for (int n = 0; n < ::app::Uno::Collections::ICollection__Fuse_Node::Count(::uPtr< ::uObject*>(elements)); n++)
    {
        ::app::Fuse::Node* elm = ::app::Uno::Collections::IList__Fuse_Node::Item(::uPtr< ::uObject*>(elements), n);

        if (!__this->AffectsLayout(elm))
        {
            continue;
        }

        ::uObject* v;
        bool haveCol = false;
        bool haveSpec = false;

        if (::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(elm)->Properties())->TryGet(GridLayout___columnProperty, &v))
        {
            colAt = ::uUnbox< int>(::app::Uno::Int__typeof(), v);
            haveCol = true;
            haveSpec = true;
        }

        if (::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(elm)->Properties())->TryGet(GridLayout___rowProperty, &v))
        {
            rowAt = ::uUnbox< int>(::app::Uno::Int__typeof(), v);

            if (!haveCol)
            {
                colAt = 0;
            }

            haveSpec = true;
        }

        if (!haveSpec)
        {
            while (rowAt < ::uPtr< ::app::Uno::Collections::List__int*>(rowAvail)->Item(colAt))
            {
                colAt++;

                if (colAt >= columnCount)
                {
                    rowAt++;
                    colAt = 0;
                }
            }
        }

        ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(elm)->Properties())->Set(GridLayout___actualRowProperty, ::uBox< int>(::app::Uno::Int__typeof(), rowAt));
        ::uPtr< ::app::Fuse::Properties*>(elm->Properties())->Set(GridLayout___actualColumnProperty, ::uBox< int>(::app::Uno::Int__typeof(), colAt));
        int xs = GridLayout__GetColumnSpan(NULL, elm);
        int ys = GridLayout__GetRowSpan(NULL, elm);

        for (int c = colAt; c < ::app::Uno::Math__Min_8(NULL, columnCount, colAt + xs); c++)
        {
            ::uPtr< ::app::Uno::Collections::List__int*>(rowAvail)->Item(c, rowAt + ys);
        }
    }

    int rowCount = ::app::Uno::Collections::ICollection__Fuse_Layouts_Row::Count(::uPtr< ::uObject*>(__this->RowList()));

    for (::app::Uno::Collections::List1_Enumerator__int enum_125 = rowAvail->GetEnumerator(); enum_125.MoveNext(); )
    {
        int r = enum_125.Current();
        rowCount = ::app::Uno::Math__Max_8(NULL, rowCount, r);
    }

    while (::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Layouts_Row*>(__this->_rows)->Count() < rowCount)
    {
        ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Layouts_Row*>(__this->_rows)->Add(__this->GenDefaultRow());
    }

    while (::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Layouts_Column*>(__this->_columns)->Count() < columnCount)
    {
        ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Layouts_Column*>(__this->_columns)->Add(__this->GenDefaultColumn());
    }
}

int GridLayout__GetActualRow(GridLayout* __this, ::app::Fuse::Node* elm)
{
    ::uObject* v;

    if (::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(elm)->Properties())->TryGet(GridLayout___actualRowProperty, &v))
    {
        return ::uUnbox< int>(::app::Uno::Int__typeof(), v);
    }

    return 0;
}

int GridLayout__GetColumn(::uStatic* __this, ::app::Fuse::Node* elm)
{
    ::uObject* v;

    if (::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(elm)->Properties())->TryGet(GridLayout___columnProperty, &v))
    {
        return ::uUnbox< int>(::app::Uno::Int__typeof(), v);
    }
    else
    {
        return 0;
    }
}

::app::Fuse::Layouts::Column* GridLayout__GetColumns(GridLayout* __this, int column)
{
    if ((column >= 0) && (column < ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Layouts_Column*>(__this->_columns)->Count()))
    {
        return ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Layouts_Column*>(__this->_columns)->Item(column);
    }

    return NULL;
}

int GridLayout__GetColumnSpan(::uStatic* __this, ::app::Fuse::Node* elm)
{
    ::uObject* v;

    if (::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(elm)->Properties())->TryGet(GridLayout___columnSpanProperty, &v))
    {
        return ::uUnbox< int>(::app::Uno::Int__typeof(), v);
    }

    return 1;
}

::app::Uno::Float2 GridLayout__GetContentSize(GridLayout* __this, ::uObject* elements, ::app::Uno::Float2 fillSize, int fillSet)
{
    return __this->Measure(elements, fillSize, fillSet);
}

int GridLayout__GetRow(::uStatic* __this, ::app::Fuse::Node* elm)
{
    ::uObject* v;

    if (::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(elm)->Properties())->TryGet(GridLayout___rowProperty, &v))
    {
        return ::uUnbox< int>(::app::Uno::Int__typeof(), v);
    }
    else
    {
        return 0;
    }
}

::app::Fuse::Layouts::Row* GridLayout__GetRows(GridLayout* __this, int row)
{
    if ((row >= 0) && (row < ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Layouts_Row*>(__this->_rows)->Count()))
    {
        return ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Layouts_Row*>(__this->_rows)->Item(row);
    }

    return NULL;
}

int GridLayout__GetRowSpan(::uStatic* __this, ::app::Fuse::Node* elm)
{
    ::uObject* v;

    if (::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(elm)->Properties())->TryGet(GridLayout___rowSpanProperty, &v))
    {
        return ::uUnbox< int>(::app::Uno::Int__typeof(), v);
    }
    else
    {
        return 1;
    }
}

int GridLayout__IsMarginBoxDependent(GridLayout* __this, ::app::Fuse::Node* child)
{
    ::app::Fuse::Layouts::Column* c = __this->GetColumns(__this->GetActualColumn(child));
    ::app::Fuse::Layouts::Row* r = __this->GetRows(__this->GetActualRow(child));
    return ((::uPtr< ::app::Fuse::Layouts::Column*>(c)->WidthMetric() != 2) && (::uPtr< ::app::Fuse::Layouts::Row*>(r)->HeightMetric() != 2)) ? 0 : 2;
}

::app::Uno::Float2 GridLayout__Measure(GridLayout* __this, ::uObject* elements, ::app::Uno::Float2 fillSize, int fillSet)
{
    float effectiveCellSpacing = __this->EffectiveCellSpacing();
    __this->GetActualPositions(elements);
    bool fillHorizontal = (fillSet & 1) == 1;
    bool fillVertical = (fillSet & 2) == 2;
    float availableWidth = fillSize.X - (effectiveCellSpacing * (float)::app::Uno::Math__Max_8(NULL, 0, ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Layouts_Column*>(__this->_columns)->Count() - 1));
    float availableHeight = fillSize.Y - (effectiveCellSpacing * (float)::app::Uno::Math__Max_8(NULL, 0, ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Layouts_Row*>(__this->_rows)->Count() - 1));

    for (int i = 0; i < ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Layouts_Column*>(__this->_columns)->Count(); i++)
    {
        ::app::Fuse::Layouts::Column* c = ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Layouts_Column*>(__this->_columns)->Item(i);

        if (::uPtr< ::app::Fuse::Layouts::Column*>(c)->WidthMetric() == 0)
        {
            ::uPtr< ::app::Fuse::Layouts::Column*>(c)->ActualWidth(::uPtr< ::app::Fuse::Layouts::Column*>(c)->Width());
            availableWidth = availableWidth - c->Width();
        }
        else
        {
            ::uPtr< ::app::Fuse::Layouts::Column*>(c)->ActualWidth(0.0f);
        }
    }

    for (int i = 0; i < ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Layouts_Row*>(__this->_rows)->Count(); i++)
    {
        ::app::Fuse::Layouts::Row* r = ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Layouts_Row*>(__this->_rows)->Item(i);

        if (::uPtr< ::app::Fuse::Layouts::Row*>(r)->HeightMetric() == 0)
        {
            ::uPtr< ::app::Fuse::Layouts::Row*>(r)->ActualHeight(::uPtr< ::app::Fuse::Layouts::Row*>(r)->Height());
            availableHeight = availableHeight - r->Height();
        }
        else
        {
            ::uPtr< ::app::Fuse::Layouts::Row*>(r)->ActualHeight(0.0f);
        }
    }

    availableWidth = ::app::Uno::Math__Max_1(NULL, availableWidth, 0.0f);
    availableHeight = ::app::Uno::Math__Max_1(NULL, availableHeight, 0.0f);

    for (int n = 0; n < ::app::Uno::Collections::ICollection__Fuse_Node::Count(::uPtr< ::uObject*>(elements)); n++)
    {
        ::app::Fuse::Node* child = ::app::Uno::Collections::IList__Fuse_Node::Item(::uPtr< ::uObject*>(elements), n);

        if (!__this->AffectsLayout(child))
        {
            continue;
        }

        int x = __this->GetActualColumn(child);
        int y = __this->GetActualRow(child);
        ::app::Fuse::Layouts::Column* c = __this->GetColumns(x);

        if ((c != NULL) && (::uPtr< ::app::Fuse::Layouts::Column*>(c)->WidthMetric() != 2))
        {
            c = NULL;
        }

        ::app::Fuse::Layouts::Row* r = __this->GetRows(y);

        if ((r != NULL) && (::uPtr< ::app::Fuse::Layouts::Row*>(r)->HeightMetric() != 2))
        {
            r = NULL;
        }

        if ((c == NULL) && (r == NULL))
        {
            continue;
        }

        ::app::Uno::Float2 cds = ::uPtr< ::app::Fuse::Node*>(child)->GetMarginSize(::app::Uno::Float2__New_1(NULL, 0.0f), 0);

        if (c != NULL)
        {
            float w = ::app::Uno::Math__Max_1(NULL, ::uPtr< ::app::Fuse::Layouts::Column*>(c)->ActualWidth(), cds.X);
            availableWidth = availableWidth - (w - c->ActualWidth());
            c->ActualWidth(w);
        }

        if (r != NULL)
        {
            float h = ::app::Uno::Math__Max_1(NULL, ::uPtr< ::app::Fuse::Layouts::Row*>(r)->ActualHeight(), cds.Y);
            availableHeight = availableHeight - (h - r->ActualHeight());
            r->ActualHeight(h);
        }
    }

    availableWidth = ::app::Uno::Math__Max_1(NULL, availableWidth, 0.0f);
    availableHeight = ::app::Uno::Math__Max_1(NULL, availableHeight, 0.0f);
    float widthProportion = 0.0f;
    float heightProportion = 0.0f;

    for (int i = 0; i < ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Layouts_Column*>(__this->_columns)->Count(); i++)
    {
        ::app::Fuse::Layouts::Column* c = ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Layouts_Column*>(__this->_columns)->Item(i);

        if (::uPtr< ::app::Fuse::Layouts::Column*>(c)->WidthMetric() == 1)
        {
            widthProportion = widthProportion + ::uPtr< ::app::Fuse::Layouts::Column*>(c)->Width();
        }
    }

    for (int i = 0; i < ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Layouts_Row*>(__this->_rows)->Count(); i++)
    {
        ::app::Fuse::Layouts::Row* r = ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Layouts_Row*>(__this->_rows)->Item(i);

        if (::uPtr< ::app::Fuse::Layouts::Row*>(r)->HeightMetric() == 1)
        {
            heightProportion = heightProportion + ::uPtr< ::app::Fuse::Layouts::Row*>(r)->Height();
        }
    }

    bool snap = __this->SnapToPixels();

    if (fillHorizontal)
    {
        float extraWidth = 0.0f;
        float colWidth = availableWidth / widthProportion;

        for (int i = 0; i < ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Layouts_Column*>(__this->_columns)->Count(); i++)
        {
            ::app::Fuse::Layouts::Column* c = ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Layouts_Column*>(__this->_columns)->Item(i);

            if (::uPtr< ::app::Fuse::Layouts::Column*>(c)->WidthMetric() != 1)
            {
                continue;
            }

            float w = __this->Snap((::uPtr< ::app::Fuse::Layouts::Column*>(c)->Width() * colWidth) + extraWidth);
            extraWidth = extraWidth + ((c->Width() * colWidth) - w);
            c->ActualWidth(w);
        }
    }

    if (fillVertical)
    {
        float extraHeight = 0.0f;
        float rowHeight = availableHeight / heightProportion;

        for (int i = 0; i < ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Layouts_Row*>(__this->_rows)->Count(); i++)
        {
            ::app::Fuse::Layouts::Row* r = ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Layouts_Row*>(__this->_rows)->Item(i);

            if (::uPtr< ::app::Fuse::Layouts::Row*>(r)->HeightMetric() != 1)
            {
                continue;
            }

            float h = __this->Snap((::uPtr< ::app::Fuse::Layouts::Row*>(r)->Height() * rowHeight) + extraHeight);
            extraHeight = extraHeight + ((r->Height() * rowHeight) - h);
            r->ActualHeight(h);
        }
    }

    if (!fillHorizontal || !fillVertical)
    {
        for (int n = 0; n < ::app::Uno::Collections::ICollection__Fuse_Node::Count(::uPtr< ::uObject*>(elements)); n++)
        {
            ::app::Fuse::Node* child = ::app::Uno::Collections::IList__Fuse_Node::Item(::uPtr< ::uObject*>(elements), n);

            if (!__this->AffectsLayout(child))
            {
                continue;
            }

            float width = availableWidth;
            float height = availableHeight;
            int x = __this->GetActualColumn(child);
            int y = __this->GetActualRow(child);
            ::app::Fuse::Layouts::Column* c = __this->GetColumns(x);
            ::app::Fuse::Layouts::Row* r = __this->GetRows(y);

            if (::uPtr< ::app::Fuse::Layouts::Column*>(c)->WidthMetric() != 1)
            {
                c = NULL;
            }

            if (::uPtr< ::app::Fuse::Layouts::Row*>(r)->HeightMetric() != 1)
            {
                r = NULL;
            }

            if ((c == NULL) && (r == NULL))
            {
                continue;
            }

            if (c != NULL)
            {
                width = ::uPtr< ::app::Fuse::Layouts::Column*>(c)->ActualWidth();
            }

            if (r != NULL)
            {
                height = ::uPtr< ::app::Fuse::Layouts::Row*>(r)->ActualHeight();
            }

            int sf = 0;

            if (fillHorizontal)
            {
                sf = sf | 1;
            }

            if (fillVertical)
            {
                sf = sf | 2;
            }

            ::app::Uno::Float2 cds = ::uPtr< ::app::Fuse::Node*>(child)->GetMarginSize(::app::Uno::Float2__New_2(NULL, width, height), sf);

            if (c != NULL)
            {
                if (!fillHorizontal)
                {
                    ::uPtr< ::app::Fuse::Layouts::Column*>(c)->ActualWidth(::app::Uno::Math__Max_1(NULL, ::uPtr< ::app::Fuse::Layouts::Column*>(c)->ActualWidth(), cds.X));
                }
            }

            if (r != NULL)
            {
                if (!fillVertical)
                {
                    ::uPtr< ::app::Fuse::Layouts::Row*>(r)->ActualHeight(::app::Uno::Math__Max_1(NULL, ::uPtr< ::app::Fuse::Layouts::Row*>(r)->ActualHeight(), cds.Y));
                }
            }
        }
    }

    float totalWidth = 0.0f;
    float totalHeight = 0.0f;

    for (int i = 0; i < ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Layouts_Column*>(__this->_columns)->Count(); i++)
    {
        if (i > 0)
        {
            totalWidth = totalWidth + effectiveCellSpacing;
        }

        ::app::Fuse::Layouts::Column* c = ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Layouts_Column*>(__this->_columns)->Item(i);
        ::uPtr< ::app::Fuse::Layouts::Column*>(c)->ActualOffset(totalWidth);
        totalWidth = totalWidth + c->ActualWidth();
    }

    for (int i = 0; i < ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Layouts_Row*>(__this->_rows)->Count(); i++)
    {
        if (i > 0)
        {
            totalHeight = totalHeight + effectiveCellSpacing;
        }

        ::app::Fuse::Layouts::Row* r = ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Layouts_Row*>(__this->_rows)->Item(i);
        ::uPtr< ::app::Fuse::Layouts::Row*>(r)->ActualOffset(totalHeight);
        totalHeight = totalHeight + r->ActualHeight();
    }

    return ::app::Uno::Float2__New_2(NULL, totalWidth, totalHeight);
}

GridLayout* GridLayout__New_1(::uStatic* __this)
{
    GridLayout* inst = (GridLayout*)::uAllocObject(sizeof(GridLayout), GridLayout__typeof());
    inst->_ObjInit_1();
    return inst;
}

void GridLayout__ResetColumn(::uStatic* __this, ::app::Fuse::Node* elm)
{
    ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(elm)->Properties())->Clear(GridLayout___columnProperty);
    ::app::Fuse::Layouts::Layout__InvalidateAncestorLayout(NULL, elm);
}

void GridLayout__ResetColumnSpan(::uStatic* __this, ::app::Fuse::Node* elm)
{
    ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(elm)->Properties())->Clear(GridLayout___columnSpanProperty);
    ::app::Fuse::Layouts::Layout__InvalidateAncestorLayout(NULL, elm);
}

void GridLayout__ResetRow(::uStatic* __this, ::app::Fuse::Node* elm)
{
    ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(elm)->Properties())->Clear(GridLayout___rowProperty);
    ::app::Fuse::Layouts::Layout__InvalidateAncestorLayout(NULL, elm);
}

void GridLayout__ResetRowSpan(::uStatic* __this, ::app::Fuse::Node* elm)
{
    ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(elm)->Properties())->Clear(GridLayout___rowSpanProperty);
    ::app::Fuse::Layouts::Layout__InvalidateAncestorLayout(NULL, elm);
}

void GridLayout__RowAdded(GridLayout* __this, ::app::Fuse::Layouts::Row* r)
{
    if (::uPtr< ::app::Fuse::Layouts::Row*>(r)->Implicit())
    {
        return;
    }

    ::uPtr< ::app::Fuse::Layouts::Row*>(r)->add_Changed(::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)GridLayout__Changed, __this));
    __this->Changed();
}

void GridLayout__RowRemoved(GridLayout* __this, ::app::Fuse::Layouts::Row* r)
{
    if (::uPtr< ::app::Fuse::Layouts::Row*>(r)->Implicit())
    {
        return;
    }

    ::uPtr< ::app::Fuse::Layouts::Row*>(r)->remove_Changed(::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)GridLayout__Changed, __this));
    __this->Changed();
}

void GridLayout__set_CellSpacing(GridLayout* __this, float value)
{
    if (__this->_cellSpacing != value)
    {
        __this->_cellSpacing = value;
        __this->Changed();
    }
}

void GridLayout__set_ColumnCount(GridLayout* __this, int value)
{
    while (::app::Uno::Collections::ICollection__Fuse_Layouts_Column::Count(::uPtr< ::uObject*>(__this->ColumnList())) < value)
    {
        ::app::Uno::Collections::ICollection__Fuse_Layouts_Column::Add(::uPtr< ::uObject*>(__this->ColumnList()), __this->GenDefaultColumn());
    }

    while (::app::Uno::Collections::ICollection__Fuse_Layouts_Column::Count(::uPtr< ::uObject*>(__this->ColumnList())) > value)
    {
        ::app::Uno::Collections::IListExtensions__RemoveLast__Fuse_Layouts_Column(NULL, __this->ColumnList());
    }

    __this->Changed();
}

void GridLayout__set_ColumnData(GridLayout* __this, ::uString* value)
{
    ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("GridLayout: The ColumnData property is deprecated and will be removed in a future release, use Columns instead"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Controls\\0.11.3\\Layouts\\$.uno"), 747);
    __this->Columns(value);
}

void GridLayout__set_Columns(GridLayout* __this, ::uString* value)
{
    ::app::Uno::Collections::ICollection__Fuse_Layouts_Column::Clear(::uPtr< ::uObject*>(__this->ColumnList()));
    ::app::Fuse::Layouts::Column__Parse_1(NULL, value, __this->ColumnList());
}

void GridLayout__set_DefaultColumn(GridLayout* __this, ::uString* value)
{
    __this->_defaultColumn = ::app::Fuse::Layouts::Column__Parse(NULL, value);

    for (int i = 0; i < ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Layouts_Column*>(__this->_columns)->Count(); ++i)
    {
        if (::uPtr< ::app::Fuse::Layouts::Column*>(::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Layouts_Column*>(__this->_columns)->Item(i))->Implicit())
        {
            ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Layouts_Column*>(__this->_columns)->ReplaceAt(i, __this->GenDefaultColumn());
        }
    }

    __this->Changed();
}

void GridLayout__set_DefaultRow(GridLayout* __this, ::uString* value)
{
    __this->_defaultRow = ::app::Fuse::Layouts::Row__Parse(NULL, value);

    for (int i = 0; i < ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Layouts_Row*>(__this->_rows)->Count(); ++i)
    {
        if (::uPtr< ::app::Fuse::Layouts::Row*>(::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Layouts_Row*>(__this->_rows)->Item(i))->Implicit())
        {
            ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Layouts_Row*>(__this->_rows)->ReplaceAt(i, __this->GenDefaultRow());
        }
    }

    __this->Changed();
}

void GridLayout__set_RowCount(GridLayout* __this, int value)
{
    while (::app::Uno::Collections::ICollection__Fuse_Layouts_Row::Count(::uPtr< ::uObject*>(__this->RowList())) < value)
    {
        ::app::Uno::Collections::ICollection__Fuse_Layouts_Row::Add(::uPtr< ::uObject*>(__this->RowList()), __this->GenDefaultRow());
    }

    while (::app::Uno::Collections::ICollection__Fuse_Layouts_Row::Count(::uPtr< ::uObject*>(__this->RowList())) > value)
    {
        ::app::Uno::Collections::IListExtensions__RemoveLast__Fuse_Layouts_Row(NULL, __this->RowList());
    }

    __this->Changed();
}

void GridLayout__set_RowData(GridLayout* __this, ::uString* value)
{
    ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("GridLayout: The RowData property is deprecated and will be removed in a future release, use Rows instead"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Controls\\0.11.3\\Layouts\\$.uno"), 679);
    __this->Rows(value);
}

void GridLayout__set_Rows(GridLayout* __this, ::uString* value)
{
    ::app::Uno::Collections::ICollection__Fuse_Layouts_Row::Clear(::uPtr< ::uObject*>(__this->RowList()));
    ::app::Fuse::Layouts::Row__Parse_1(NULL, value, __this->RowList());
}

void GridLayout__SetColumn(::uStatic* __this, ::app::Fuse::Node* elm, int col)
{
    ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(elm)->Properties())->Set(GridLayout___columnProperty, ::uBox< int>(::app::Uno::Int__typeof(), col));
    ::app::Fuse::Layouts::Layout__InvalidateAncestorLayout(NULL, elm);
}

void GridLayout__SetColumnSpan(::uStatic* __this, ::app::Fuse::Node* elm, int span)
{
    ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(elm)->Properties())->Set(GridLayout___columnSpanProperty, ::uBox< int>(::app::Uno::Int__typeof(), span));
    ::app::Fuse::Layouts::Layout__InvalidateAncestorLayout(NULL, elm);
}

void GridLayout__SetRow(::uStatic* __this, ::app::Fuse::Node* elm, int row)
{
    ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(elm)->Properties())->Set(GridLayout___rowProperty, ::uBox< int>(::app::Uno::Int__typeof(), row));
    ::app::Fuse::Layouts::Layout__InvalidateAncestorLayout(NULL, elm);
}

void GridLayout__SetRowSpan(::uStatic* __this, ::app::Fuse::Node* elm, int span)
{
    ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(elm)->Properties())->Set(GridLayout___rowSpanProperty, ::uBox< int>(::app::Uno::Int__typeof(), span));
    ::app::Fuse::Layouts::Layout__InvalidateAncestorLayout(NULL, elm);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Layouts\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* Layer__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.Layouts.Layer", ::app::Uno::Int__typeof(), 3);

    type->SetLiterals(
        "Background", 0LL,
        "Layout", 1LL,
        "Overlay", 2LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Layouts\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Fuse::PropertyHandle*> Layout___fillPaddingProperty;
::uStaticStrong< ::app::Fuse::PropertyHandle*> Layout___layerProperty;
::uStaticStrong< ::app::Fuse::PropertyHandle*> Layout___layoutRoleProperty;

Layout__uType* Layout__typeof()
{
    static ::uStaticStrong<Layout__uType*> type;
    if (type != NULL) return type;

    type = (Layout__uType*)::uAllocClassType(sizeof(Layout__uType), "Fuse.Layouts.Layout", false, 0, 1, 0);

    type->__fp_IsMarginBoxDependent = Layout__IsMarginBoxDependent;

    type->SetStrongRefs(
        "Subscriber", offsetof(Layout, Subscriber));

    type->SetFields(4,
        ::uNewField("_fillPaddingProperty", &Layout___fillPaddingProperty, 0, ::app::Fuse::PropertyHandle__typeof()),
        ::uNewField("_layerProperty", &Layout___layerProperty, 0, ::app::Fuse::PropertyHandle__typeof()),
        ::uNewField("_layoutRoleProperty", &Layout___layoutRoleProperty, 0, ::app::Fuse::PropertyHandle__typeof()),
        ::uNewField("Subscriber", NULL, offsetof(Layout, Subscriber), ::app::Fuse::Node__typeof()));

    type->SetFunctions(27,
        ::uNewFunctionVoid("AddSubscriber", Layout__AddSubscriber, 0, false, ::app::Fuse::Node__typeof()),
        ::uNewFunction("AffectsLayout", Layout__AffectsLayout, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Node__typeof()),
        ::uNewFunction("ArrangeMarginBoxSpecial", Layout__ArrangeMarginBoxSpecial, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Node__typeof(), ::app::Uno::Float4__typeof(), ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("ArrangePaddingBox", type->__fp_ArrangePaddingBox, offsetof(Layout__uType, __fp_ArrangePaddingBox), false, ::app::Uno::Collections::IList__Fuse_Node__typeof(), ::app::Uno::Float4__typeof(), ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("AssignZOrder", Layout__AssignZOrder, 0, true, ::app::Uno::Collections::IList__Fuse_Node__typeof()),
        ::uNewFunction("get_SnapToPixels", Layout__get_SnapToPixels, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("GetContentSize", type->__fp_GetContentSize, offsetof(Layout__uType, __fp_GetContentSize), false, ::app::Uno::Float2__typeof(), ::app::Uno::Collections::IList__Fuse_Node__typeof(), ::app::Uno::Float2__typeof(), ::app::Fuse::SizeFlags__typeof()),
        ::uNewFunction("GetFillPadding", Layout__GetFillPadding, 0, true, ::app::Uno::Bool__typeof(), ::app::Fuse::Node__typeof()),
        ::uNewFunction("GetLayer", Layout__GetLayer, 0, true, ::app::Fuse::Layouts::Layer__typeof(), ::app::Fuse::Node__typeof()),
        ::uNewFunction("GetLayoutRole", Layout__GetLayoutRole, 0, true, ::app::Fuse::Layouts::LayoutRole__typeof(), ::app::Fuse::Node__typeof()),
        ::uNewFunction("GetPanel", Layout__GetPanel, 0, true, ::app::Fuse::Controls::Panel__typeof(), ::app::Fuse::Node__typeof()),
        ::uNewFunctionVoid("InvalidateAncestorLayout", Layout__InvalidateAncestorLayout, 0, true, ::app::Fuse::Node__typeof()),
        ::uNewFunctionVoid("InvalidateLayout", Layout__InvalidateLayout, 0, false),
        ::uNewFunction("IsMarginBoxDependent", type->__fp_IsMarginBoxDependent, offsetof(Layout__uType, __fp_IsMarginBoxDependent), false, ::app::Fuse::LayoutDependent__typeof(), ::app::Fuse::Node__typeof()),
        ::uNewFunctionVoid("PanelInvalidateLayout", Layout__PanelInvalidateLayout, 0, true, ::app::Fuse::Node__typeof()),
        ::uNewFunctionVoid("RemoveSubscriber", Layout__RemoveSubscriber, 0, false, ::app::Fuse::Node__typeof()),
        ::uNewFunctionVoid("ResetFillPadding", Layout__ResetFillPadding, 0, true, ::app::Fuse::Node__typeof()),
        ::uNewFunctionVoid("ResetLayer", Layout__ResetLayer, 0, true, ::app::Fuse::Node__typeof()),
        ::uNewFunctionVoid("ResetLayoutRole", Layout__ResetLayoutRole, 0, true, ::app::Fuse::Node__typeof()),
        ::uNewFunctionVoid("SetFillPadding", Layout__SetFillPadding, 0, true, ::app::Fuse::Node__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("SetLayer", Layout__SetLayer, 0, true, ::app::Fuse::Node__typeof(), ::app::Fuse::Layouts::Layer__typeof()),
        ::uNewFunctionVoid("SetLayoutRole", Layout__SetLayoutRole, 0, true, ::app::Fuse::Node__typeof(), ::app::Fuse::Layouts::LayoutRole__typeof()),
        ::uNewFunction("ShouldArrange", Layout__ShouldArrange, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Node__typeof()),
        ::uNewFunction("Snap", Layout__Snap, 0, false, ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction("Snap", Layout__Snap_1, 0, false, ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof()),
        ::uNewFunction("SnapUp", Layout__SnapUp, 0, false, ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction("SnapUp", Layout__SnapUp_1, 0, false, ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof()));

    ::uRegisterType(type);
    return type;
}

void Layout___ObjInit(Layout* __this)
{
}

void Layout___TypeInit(::uStatic* __this)
{
    Layout___layoutRoleProperty = ::app::Fuse::Properties__CreateHandle(NULL);
    Layout___layerProperty = ::app::Fuse::Properties__CreateHandle(NULL);
    Layout___fillPaddingProperty = ::app::Fuse::Properties__CreateHandle(NULL);
}

void Layout__AddSubscriber(Layout* __this, ::app::Fuse::Node* element)
{
    if (__this->Subscriber != NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Only a single subscriber is supported for Layout")));
    }

    __this->Subscriber = element;
}

bool Layout__AffectsLayout(Layout* __this, ::app::Fuse::Node* n)
{
    return (n != NULL) && (Layout__GetLayoutRole(NULL, n) == 0);
}

bool Layout__ArrangeMarginBoxSpecial(Layout* __this, ::app::Fuse::Node* e, ::app::Uno::Float4 padding, ::app::Uno::Float2 size)
{
    if (e == NULL)
    {
        return false;
    }

    int lr = Layout__GetLayoutRole(NULL, e);

    if (lr == 2)
    {
        return true;
    }

    if (lr == 1)
    {
        bool b = Layout__GetFillPadding(NULL, e);
        ::app::Uno::Float2 p = b ? ::app::Uno::Float2__New_1(NULL, 0.0f) : ::app::Uno::Float2__New_2(NULL, padding.X, padding.Y);
        ::app::Uno::Float2 s = b ? size : ::app::Uno::Float2__op_Subtraction_2(NULL, ::app::Uno::Float2__op_Subtraction_2(NULL, size, ::app::Uno::Float2__New_2(NULL, padding.X, padding.Y)), ::app::Uno::Float2__New_2(NULL, padding.Z, padding.W));
        ::uPtr< ::app::Fuse::Node*>(e)->ArrangeMarginBox(p, s, 3);
        return true;
    }

    return false;
}

void Layout__AssignZOrder(::uStatic* __this, ::uObject* nodes)
{
    ::uArray* array_124;
    array_124 = ::uNewArray(::app::Uno::Int__typeof(), 3);
    ::uPtr< ::uArray*>(array_124)->Item< int>(0) = 0;
    ::uPtr< ::uArray*>(array_124)->Item< int>(1) = 0;
    ::uPtr< ::uArray*>(array_124)->Item< int>(2) = 0;
    ::uArray* current = array_124;

    for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Fuse_Node::GetEnumerator(::uPtr< ::uObject*>(nodes)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Fuse::Node* node = ::app::Uno::Collections::IEnumerator__Fuse_Node::Current(::uPtr< ::uObject*>(enum_123));
        int c = Layout__GetLayer(NULL, node);
        ::uPtr< ::app::Fuse::Node*>(node)->ZLayer = c;

        if (!node->ZOffsetFixed)
        {
            node->ZOffset = ::uPtr< ::uArray*>(current)->Item< int>(c)--;
        }
    }
}

bool Layout__get_SnapToPixels(Layout* __this)
{
    return (__this->Subscriber != NULL) && ::uPtr< ::app::Fuse::Node*>(__this->Subscriber)->SnapToPixels();
}

bool Layout__GetFillPadding(::uStatic* __this, ::app::Fuse::Node* n)
{
    ::uObject* v;

    if (::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(Layout___fillPaddingProperty, &v))
    {
        return ::uUnbox< bool>(::app::Uno::Bool__typeof(), v);
    }

    int l = Layout__GetLayer(NULL, n);
    return l == 0;
}

int Layout__GetLayer(::uStatic* __this, ::app::Fuse::Node* n)
{
    ::uObject* v;

    if (::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(Layout___layerProperty, &v))
    {
        return ::uUnbox< int>(::app::Fuse::Layouts::Layer__typeof(), v);
    }

    return 1;
}

int Layout__GetLayoutRole(::uStatic* __this, ::app::Fuse::Node* n)
{
    ::uObject* v;

    if (::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(Layout___layoutRoleProperty, &v))
    {
        return ::uUnbox< int>(::app::Fuse::Layouts::LayoutRole__typeof(), v);
    }

    if (Layout__GetLayer(NULL, n) != 1)
    {
        return 1;
    }

    return 0;
}

::app::Fuse::Controls::Panel* Layout__GetPanel(::uStatic* __this, ::app::Fuse::Node* elm)
{
    while (elm != NULL)
    {
        if (::uIs(elm, ::app::Fuse::Controls::Panel__typeof()))
        {
            return ::uAs< ::app::Fuse::Controls::Panel*>(elm, ::app::Fuse::Controls::Panel__typeof());
        }

        elm = ::uPtr< ::app::Fuse::Node*>(elm)->Parent();
    }

    return NULL;
}

void Layout__InvalidateAncestorLayout(::uStatic* __this, ::app::Fuse::Node* child)
{
    if (::uPtr< ::app::Fuse::Node*>(child)->Parent() != NULL)
    {
        ::uPtr< ::app::Fuse::Node*>(::uPtr< ::app::Fuse::Node*>(child)->Parent())->InvalidateLayout(2);
    }
}

void Layout__InvalidateLayout(Layout* __this)
{
    if (__this->Subscriber != NULL)
    {
        ::uPtr< ::app::Fuse::Node*>(__this->Subscriber)->InvalidateLayout(2);
    }
}

int Layout__IsMarginBoxDependent(Layout* __this, ::app::Fuse::Node* child)
{
    return 2;
}

void Layout__PanelInvalidateLayout(::uStatic* __this, ::app::Fuse::Node* elm)
{
    ::app::Fuse::Controls::Panel* p = Layout__GetPanel(NULL, elm);

    if (p != NULL)
    {
        ::uPtr< ::app::Fuse::Controls::Panel*>(p)->InvalidateLayout(2);
    }
}

void Layout__RemoveSubscriber(Layout* __this, ::app::Fuse::Node* element)
{
    __this->Subscriber = NULL;
}

void Layout__ResetFillPadding(::uStatic* __this, ::app::Fuse::Node* n)
{
    ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(Layout___fillPaddingProperty);
    Layout__PanelInvalidateLayout(NULL, n);
}

void Layout__ResetLayer(::uStatic* __this, ::app::Fuse::Node* n)
{
    ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(Layout___layerProperty);
    Layout__PanelInvalidateLayout(NULL, n);
}

void Layout__ResetLayoutRole(::uStatic* __this, ::app::Fuse::Node* n)
{
    ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(Layout___layoutRoleProperty);
    Layout__PanelInvalidateLayout(NULL, n);
}

void Layout__SetFillPadding(::uStatic* __this, ::app::Fuse::Node* n, bool f)
{
    ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(Layout___fillPaddingProperty, ::uBox(::app::Uno::Bool__typeof(), f));
    Layout__PanelInvalidateLayout(NULL, n);
}

void Layout__SetLayer(::uStatic* __this, ::app::Fuse::Node* n, int l)
{
    ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(Layout___layerProperty, ::uBox< int>(::app::Fuse::Layouts::Layer__typeof(), l));
    Layout__PanelInvalidateLayout(NULL, n);
}

void Layout__SetLayoutRole(::uStatic* __this, ::app::Fuse::Node* n, int r)
{
    ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(Layout___layoutRoleProperty, ::uBox< int>(::app::Fuse::Layouts::LayoutRole__typeof(), r));
    Layout__PanelInvalidateLayout(NULL, n);
}

bool Layout__ShouldArrange(Layout* __this, ::app::Fuse::Node* n)
{
    return (n != NULL) && (Layout__GetLayoutRole(NULL, n) != 2);
}

float Layout__Snap(Layout* __this, float p)
{
    return __this->Snap_1(::app::Uno::Float2__New_1(NULL, p)).X;
}

::app::Uno::Float2 Layout__Snap_1(Layout* __this, ::app::Uno::Float2 p)
{
    if (__this->SnapToPixels())
    {
        return ::uPtr< ::app::Fuse::Node*>(__this->Subscriber)->InternSnap(p);
    }

    return p;
}

float Layout__SnapUp(Layout* __this, float p)
{
    return __this->SnapUp_1(::app::Uno::Float2__New_1(NULL, p)).X;
}

::app::Uno::Float2 Layout__SnapUp_1(Layout* __this, ::app::Uno::Float2 p)
{
    if (__this->SnapToPixels())
    {
        return ::uPtr< ::app::Fuse::Node*>(__this->Subscriber)->InternSnapUp(p);
    }

    return p;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Layouts\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* LayoutRole__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.Layouts.LayoutRole", ::app::Uno::Int__typeof(), 3);

    type->SetLiterals(
        "Standard", 0LL,
        "Inert", 1LL,
        "Independent", 2LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Layouts\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Fuse::Layouts::Layout*> Layouts__Default;

Layouts__uType* Layouts__typeof()
{
    static ::uStaticStrong<Layouts__uType*> type;
    if (type != NULL) return type;

    type = (Layouts__uType*)::uAllocClassType(sizeof(Layouts__uType), "Fuse.Layouts.Layouts");

    type->SetFields(1,
        ::uNewField("Default", &Layouts__Default, 0, ::app::Fuse::Layouts::Layout__typeof()));

    ::uRegisterType(type);
    return type;
}

void Layouts___TypeInit(::uStatic* __this)
{
    Layouts__Default = (::app::Fuse::Layouts::Layout*)::app::Fuse::Layouts::DefaultLayout__New_1(NULL);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Layouts\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* Metric__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.Layouts.Metric", ::app::Uno::Int__typeof(), 3);

    type->SetLiterals(
        "Absolute", 0LL,
        "Proportion", 1LL,
        "Auto", 2LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Layouts\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* Orientation__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.Layouts.Orientation", ::app::Uno::Int__typeof(), 2);

    type->SetLiterals(
        "Horizontal", 0LL,
        "Vertical", 1LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Layouts\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Row__uType* Row__typeof()
{
    static ::uStaticStrong<Row__uType*> type;
    if (type != NULL) return type;

    type = (Row__uType*)::uAllocClassType(sizeof(Row__uType), "Fuse.Layouts.Row", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Layouts::DefinitionBase__typeof());

    type->SetFields(3,
        ::uNewField("_actualHeight", NULL, offsetof(Row, _actualHeight), ::app::Uno::Float__typeof()),
        ::uNewField("_height", NULL, offsetof(Row, _height), ::app::Uno::Float__typeof()),
        ::uNewField("_heightMetric", NULL, offsetof(Row, _heightMetric), ::app::Fuse::Layouts::Metric__typeof()));

    type->SetFunctions(13,
        ::uNewFunction("CloneDef", Row__CloneDef, 0, false, Row__typeof()),
        ::uNewFunction("get_ActualHeight", Row__get_ActualHeight, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Height", Row__get_Height, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_HeightMetric", Row__get_HeightMetric, 0, false, ::app::Fuse::Layouts::Metric__typeof()),
        ::uNewFunction(".ctor", Row__New_1, 0, true, Row__typeof()),
        ::uNewFunction(".ctor", Row__New_2, 0, true, Row__typeof(), ::app::Uno::Float__typeof(), ::app::Fuse::Layouts::Metric__typeof()),
        ::uNewFunction("Parse", Row__Parse, 0, true, Row__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("Parse", Row__Parse_1, 0, true, ::app::Uno::String__typeof(), ::app::Uno::Collections::IList__Fuse_Layouts_Row__typeof()),
        ::uNewFunction("Serialize", Row__Serialize, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("Serialize", Row__Serialize_1, 0, true, ::app::Uno::String__typeof(), ::app::Uno::Collections::IList__Fuse_Layouts_Row__typeof()),
        ::uNewFunctionVoid("set_ActualHeight", Row__set_ActualHeight, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Height", Row__set_Height, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_HeightMetric", Row__set_HeightMetric, 0, false, ::app::Fuse::Layouts::Metric__typeof()));

    ::uRegisterType(type);
    return type;
}

void Row___ObjInit_1(Row* __this)
{
    __this->_heightMetric = 1;
    __this->_height = 1.0f;
    ::app::Fuse::Layouts::DefinitionBase___ObjInit(__this);
}

void Row___ObjInit_2(Row* __this, float height, int metric)
{
    __this->_heightMetric = 1;
    __this->_height = 1.0f;
    ::app::Fuse::Layouts::DefinitionBase___ObjInit(__this);
    __this->Height(height);
    __this->HeightMetric(metric);
}

Row* Row__CloneDef(Row* __this)
{
    Row* collection_124;
    collection_124 = Row__New_1(NULL);
    ::uPtr< Row*>(collection_124)->HeightMetric(__this->HeightMetric());
    collection_124->Height(__this->Height());
    return collection_124;
}

float Row__get_ActualHeight(Row* __this)
{
    if (__this->HeightMetric() == 0)
    {
        return __this->_height;
    }
    else
    {
        return __this->_actualHeight;
    }
}

float Row__get_Height(Row* __this)
{
    return __this->_height;
}

int Row__get_HeightMetric(Row* __this)
{
    return __this->_heightMetric;
}

Row* Row__New_1(::uStatic* __this)
{
    Row* inst = (Row*)::uAllocObject(sizeof(Row), Row__typeof());
    inst->_ObjInit_1();
    return inst;
}

Row* Row__New_2(::uStatic* __this, float height, int metric)
{
    Row* inst = (Row*)::uAllocObject(sizeof(Row), Row__typeof());
    inst->_ObjInit_2(height, metric);
    return inst;
}

Row* Row__Parse(::uStatic* __this, ::uString* data)
{
    ::app::Fuse::Layouts::DefinitionBase_ParseDataItem pi = ::app::Fuse::Layouts::DefinitionBase__ParseDataSingle(NULL, data);
    return Row__New_2(NULL, pi.Value, pi.Metric);
}

void Row__Parse_1(::uStatic* __this, ::uString* data, ::uObject* output)
{
    for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Fuse_Layouts_DefinitionBase_ParseDataItem::GetEnumerator(::uPtr< ::uObject*>(::app::Fuse::Layouts::DefinitionBase__ParseData(NULL, data))); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Fuse::Layouts::DefinitionBase_ParseDataItem item = ::app::Uno::Collections::IEnumerator__Fuse_Layouts_DefinitionBase_ParseDataItem::Current(::uPtr< ::uObject*>(enum_123));
        ::app::Uno::Collections::ICollection__Fuse_Layouts_Row::Add(::uPtr< ::uObject*>(output), Row__New_2(NULL, item.Value, item.Metric));
    }
}

::uString* Row__Serialize(Row* __this)
{
    switch (__this->HeightMetric())
    {
        case 2:
        {
            return ::uGetConstString("auto");
        }
        case 1:
        {
            return ::app::Uno::String__op_Addition(NULL, ::uBox(::app::Uno::Float__typeof(), __this->Height()), ::uGetConstString("*"));
        }
        default:
        {
            return ::app::Uno::Float::ToString(__this->Height());
        }
    }
}

::uString* Row__Serialize_1(::uStatic* __this, ::uObject* rows)
{
    ::uString* s = ::uGetConstString("");

    for (int i = 0; i < ::app::Uno::Collections::ICollection__Fuse_Layouts_Row::Count(::uPtr< ::uObject*>(rows)); i++)
    {
        if (i > 0)
        {
            s = ::app::Uno::String__op_Addition_2(NULL, s, ::uGetConstString(", "));
        }

        s = ::app::Uno::String__op_Addition_2(NULL, s, ::uPtr< Row*>(::app::Uno::Collections::IList__Fuse_Layouts_Row::Item(::uPtr< ::uObject*>(rows), i))->Serialize());
    }

    return s;
}

void Row__set_ActualHeight(Row* __this, float value)
{
    __this->_actualHeight = value;
}

void Row__set_Height(Row* __this, float value)
{
    if (__this->_height != value)
    {
        __this->_height = ::app::Uno::Math__Max_1(NULL, 0.0f, value);
        __this->OnChanged();
    }
}

void Row__set_HeightMetric(Row* __this, int value)
{
    if (__this->_heightMetric != value)
    {
        __this->_heightMetric = value;
        __this->OnChanged();
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Layouts\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StackLayout__uType* StackLayout__typeof()
{
    static ::uStaticStrong<StackLayout__uType*> type;
    if (type != NULL) return type;

    type = (StackLayout__uType*)::uAllocClassType(sizeof(StackLayout__uType), "Fuse.Layouts.StackLayout", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Layouts::Layout__typeof());
    type->__fp_ArrangePaddingBox = (void(*)(::app::Fuse::Layouts::Layout*, ::uObject*, ::app::Uno::Float4, ::app::Uno::Float2))StackLayout__ArrangePaddingBox;
    type->__fp_GetContentSize = (::app::Uno::Float2(*)(::app::Fuse::Layouts::Layout*, ::uObject*, ::app::Uno::Float2, int))StackLayout__GetContentSize;

    type->SetFields(2,
        ::uNewField("_itemSpacing", NULL, offsetof(StackLayout, _itemSpacing), ::app::Uno::Float__typeof()),
        ::uNewField("_orientation", NULL, offsetof(StackLayout, _orientation), ::app::Fuse::Layouts::Orientation__typeof()));

    type->SetFunctions(8,
        ::uNewFunction("get_EffectiveItemSpacing", StackLayout__get_EffectiveItemSpacing, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_ItemSpacing", StackLayout__get_ItemSpacing, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Orientation", StackLayout__get_Orientation, 0, false, ::app::Fuse::Layouts::Orientation__typeof()),
        ::uNewFunction("GetElementsSize", StackLayout__GetElementsSize, 0, false, ::app::Uno::Float2__typeof(), ::app::Uno::Collections::IList__Fuse_Node__typeof(), ::app::Uno::Float2__typeof(), ::app::Fuse::SizeFlags__typeof()),
        ::uNewFunction(".ctor", StackLayout__New_1, 0, true, StackLayout__typeof()),
        ::uNewFunctionVoid("ResetOrientation", StackLayout__ResetOrientation, 0, false),
        ::uNewFunctionVoid("set_ItemSpacing", StackLayout__set_ItemSpacing, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Orientation", StackLayout__set_Orientation, 0, false, ::app::Fuse::Layouts::Orientation__typeof()));

    ::uRegisterType(type);
    return type;
}

void StackLayout___ObjInit_1(StackLayout* __this)
{
    __this->_orientation = 1;
    __this->_itemSpacing = 0.0f;
    ::app::Fuse::Layouts::Layout___ObjInit(__this);
}

void StackLayout__ArrangePaddingBox(StackLayout* __this, ::uObject* elements, ::app::Uno::Float4 padding, ::app::Uno::Float2 availableSize)
{
    float d = 0.0f;
    int orientation = __this->Orientation();
    ::app::Uno::Float2 paddingOffset = ::app::Uno::Float2__New_2(NULL, padding.X, padding.Y);
    ::app::Uno::Float2 pad = ::app::Uno::Float2__op_Addition_2(NULL, ::app::Uno::Float2__New_2(NULL, padding.X, padding.Y), ::app::Uno::Float2__New_2(NULL, padding.Z, padding.W));
    ::app::Uno::Float2 avs = ::app::Uno::Float2__op_Subtraction_2(NULL, availableSize, pad);
    int sf = (orientation == 1) ? 1 : 2;
    float effectiveSpacing = __this->EffectiveItemSpacing();

    for (int i = 0; i < ::app::Uno::Collections::ICollection__Fuse_Node::Count(::uPtr< ::uObject*>(elements)); i++)
    {
        ::app::Fuse::Node* c = ::app::Uno::Collections::IList__Fuse_Node::Item(::uPtr< ::uObject*>(elements), i);

        if (__this->ArrangeMarginBoxSpecial(c, padding, availableSize))
        {
            continue;
        }

        if (orientation == 0)
        {
            ::app::Uno::Float2 cds = ::uPtr< ::app::Fuse::Node*>(c)->ArrangeMarginBox(::app::Uno::Float2__op_Addition_2(NULL, ::app::Uno::Float2__New_2(NULL, d, 0.0f), paddingOffset), avs, sf);
            d = d + (cds.X + effectiveSpacing);
        }
        else
        {
            ::app::Uno::Float2 cds = ::uPtr< ::app::Fuse::Node*>(c)->ArrangeMarginBox(::app::Uno::Float2__op_Addition_2(NULL, ::app::Uno::Float2__New_2(NULL, 0.0f, d), paddingOffset), avs, sf);
            d = d + (cds.Y + effectiveSpacing);
        }
    }
}

float StackLayout__get_EffectiveItemSpacing(StackLayout* __this)
{
    return __this->SnapUp(__this->ItemSpacing());
}

float StackLayout__get_ItemSpacing(StackLayout* __this)
{
    return __this->_itemSpacing;
}

int StackLayout__get_Orientation(StackLayout* __this)
{
    return __this->_orientation;
}

::app::Uno::Float2 StackLayout__GetContentSize(StackLayout* __this, ::uObject* elements, ::app::Uno::Float2 fillSize, int fillSet)
{
    int orientation = __this->Orientation();

    if (orientation == 1)
    {
        fillSet = fillSet & -3;
    }
    else
    {
        fillSet = fillSet & -2;
    }

    ::app::Uno::Float2 size = __this->GetElementsSize(elements, fillSize, fillSet);
    bool recalc = false;

    if (orientation == 1)
    {
        if (!((fillSet & 1) == 1))
        {
            fillSize.X = size.X;
            fillSet = fillSet | 1;
            recalc = true;
        }
    }
    else
    {
        if (!((fillSet & 2) == 2))
        {
            fillSize.Y = size.Y;
            fillSet = fillSet | 2;
            recalc = true;
        }
    }

    if (recalc)
    {
        size = __this->GetElementsSize(elements, fillSize, fillSet);
    }

    return size;
}

::app::Uno::Float2 StackLayout__GetElementsSize(StackLayout* __this, ::uObject* elements, ::app::Uno::Float2 fillSize, int fillSet)
{
    int orientation = __this->Orientation();
    ::app::Uno::Float2 desiredSize = ::app::Uno::Float2__New_1(NULL, 0.0f);
    float effectiveSpacing = __this->EffectiveItemSpacing();
    bool firstItem = true;

    for (int i = 0; i < ::app::Uno::Collections::ICollection__Fuse_Node::Count(::uPtr< ::uObject*>(elements)); i++)
    {
        ::app::Fuse::Node* c = ::app::Uno::Collections::IList__Fuse_Node::Item(::uPtr< ::uObject*>(elements), i);

        if (!__this->AffectsLayout(c))
        {
            continue;
        }

        float spacing = effectiveSpacing;

        if (firstItem)
        {
            spacing = 0.0f;
            firstItem = false;
        }

        ::app::Uno::Float2 cds = ::uPtr< ::app::Fuse::Node*>(c)->GetMarginSize(fillSize, fillSet);

        if (orientation == 0)
        {
            desiredSize.X = desiredSize.X + (cds.X + spacing);
            desiredSize.Y = ::app::Uno::Math__Max_1(NULL, desiredSize.Y, cds.Y);
        }
        else
        {
            desiredSize.X = ::app::Uno::Math__Max_1(NULL, desiredSize.X, cds.X);
            desiredSize.Y = desiredSize.Y + (cds.Y + spacing);
        }
    }

    return desiredSize;
}

StackLayout* StackLayout__New_1(::uStatic* __this)
{
    StackLayout* inst = (StackLayout*)::uAllocObject(sizeof(StackLayout), StackLayout__typeof());
    inst->_ObjInit_1();
    return inst;
}

void StackLayout__ResetOrientation(StackLayout* __this)
{
    __this->_orientation = 1;
    __this->InvalidateLayout();
}

void StackLayout__set_ItemSpacing(StackLayout* __this, float value)
{
    if (__this->_itemSpacing != value)
    {
        __this->_itemSpacing = value;
        __this->InvalidateLayout();
    }
}

void StackLayout__set_Orientation(StackLayout* __this, int value)
{
    if (__this->_orientation != value)
    {
        __this->_orientation = value;
        __this->InvalidateLayout();
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Layouts\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

WrapLayout__uType* WrapLayout__typeof()
{
    static ::uStaticStrong<WrapLayout__uType*> type;
    if (type != NULL) return type;

    type = (WrapLayout__uType*)::uAllocClassType(sizeof(WrapLayout__uType), "Fuse.Layouts.WrapLayout", false, 0, 1, 0);

    type->SetBaseType(::app::Fuse::Layouts::Layout__typeof());
    type->__fp_ArrangePaddingBox = (void(*)(::app::Fuse::Layouts::Layout*, ::uObject*, ::app::Uno::Float4, ::app::Uno::Float2))WrapLayout__ArrangePaddingBox;
    type->__fp_GetContentSize = (::app::Uno::Float2(*)(::app::Fuse::Layouts::Layout*, ::uObject*, ::app::Uno::Float2, int))WrapLayout__GetContentSize;

    type->SetStrongRefs(
        "_ID", offsetof(WrapLayout, _ID));

    type->SetFields(8,
        ::uNewField("_flowDirection", NULL, offsetof(WrapLayout, _flowDirection), ::app::Fuse::Layouts::FlowDirection__typeof()),
        ::uNewField("_hasFlowDirection", NULL, offsetof(WrapLayout, _hasFlowDirection), ::app::Uno::Bool__typeof()),
        ::uNewField("_hasItemHeight", NULL, offsetof(WrapLayout, _hasItemHeight), ::app::Uno::Bool__typeof()),
        ::uNewField("_hasItemWidth", NULL, offsetof(WrapLayout, _hasItemWidth), ::app::Uno::Bool__typeof()),
        ::uNewField("_hasOrientation", NULL, offsetof(WrapLayout, _hasOrientation), ::app::Uno::Bool__typeof()),
        ::uNewField("_itemHeight", NULL, offsetof(WrapLayout, _itemHeight), ::app::Uno::Float__typeof()),
        ::uNewField("_itemWidth", NULL, offsetof(WrapLayout, _itemWidth), ::app::Uno::Float__typeof()),
        ::uNewField("_orientation", NULL, offsetof(WrapLayout, _orientation), ::app::Fuse::Layouts::Orientation__typeof()));

    type->SetFunctions(11,
        ::uNewFunction("get_FlowDirection", WrapLayout__get_FlowDirection, 0, false, ::app::Fuse::Layouts::FlowDirection__typeof()),
        ::uNewFunction("get_ID", WrapLayout__get_ID, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("get_ItemHeight", WrapLayout__get_ItemHeight, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_ItemWidth", WrapLayout__get_ItemWidth, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Orientation", WrapLayout__get_Orientation, 0, false, ::app::Fuse::Layouts::Orientation__typeof()),
        ::uNewFunction(".ctor", WrapLayout__New_1, 0, true, WrapLayout__typeof()),
        ::uNewFunctionVoid("set_FlowDirection", WrapLayout__set_FlowDirection, 0, false, ::app::Fuse::Layouts::FlowDirection__typeof()),
        ::uNewFunctionVoid("set_ID", WrapLayout__set_ID, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_ItemHeight", WrapLayout__set_ItemHeight, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_ItemWidth", WrapLayout__set_ItemWidth, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Orientation", WrapLayout__set_Orientation, 0, false, ::app::Fuse::Layouts::Orientation__typeof()));

    ::uRegisterType(type);
    return type;
}

void WrapLayout___ObjInit_1(WrapLayout* __this)
{
    ::app::Fuse::Layouts::Layout___ObjInit(__this);
}

void WrapLayout__ArrangePaddingBox(WrapLayout* __this, ::uObject* elements, ::app::Uno::Float4 padding, ::app::Uno::Float2 availableSize)
{
    ::app::Uno::Float4 ind_123 = ::app::Uno::Float4();
    float x = 0.0f;
    float y = 0.0f;
    float largestY = 0.0f;
    float largestX = 0.0f;
    float minX = 0.0f;
    bool firstChild = true;
    int lastWrap = 0;
    bool lastWasWrap = false;
    ::uArray* placements = ::uNewArray(::app::Uno::Float4__typeof(), ::app::Uno::Collections::ICollection__Fuse_Node::Count(::uPtr< ::uObject*>(elements)));
    ::uArray* largest = ::uNewArray(::app::Uno::Float__typeof(), ::app::Uno::Collections::ICollection__Fuse_Node::Count(elements));

    for (int i = 0; i < ::app::Uno::Collections::ICollection__Fuse_Node::Count(elements); i++)
    {
        if (!__this->AffectsLayout(::app::Uno::Collections::IList__Fuse_Node::Item(::uPtr< ::uObject*>(elements), i)))
        {
            continue;
        }

        lastWasWrap = false;
        ::app::Fuse::Node* e = ::app::Uno::Collections::IList__Fuse_Node::Item(::uPtr< ::uObject*>(elements), i);
        ::app::Uno::Float2 eSize = ::uPtr< ::app::Fuse::Node*>(e)->GetMarginSize(availableSize, 0);
        float eX = __this->_hasItemWidth ? __this->ItemWidth() : eSize.X;
        float eY = __this->_hasItemHeight ? __this->ItemHeight() : eSize.Y;

        if (__this->Orientation() == 0)
        {
            if (((x + eX) > availableSize.X) && !firstChild)
            {
                y = y + largestY;

                for (int j = lastWrap; j < i; j++)
                {
                    ::uPtr< ::uArray*>(placements)->Item< ::app::Uno::Float4>(j).W = largestY;
                }

                lastWrap = i;
                largestY = 0.0f;
                x = 0.0f;
                lastWasWrap = true;
            }

            largestY = ::app::Uno::Math__Max_1(NULL, eY, largestY);

            if (__this->FlowDirection() == 0)
            {
                ::uPtr< ::uArray*>(placements)->Item< ::app::Uno::Float4>(i) = ::app::Uno::Float4__New_2(NULL, x, y, eX, eY);
            }
            else
            {
                placements->Item< ::app::Uno::Float4>(i) = ::app::Uno::Float4__New_2(NULL, (availableSize.X - x) - eX, y, eX, eY);
            }

            x = x + eX;
        }
        else
        {
            if (((y + eY) > availableSize.Y) && !firstChild)
            {
                x = x + largestX;

                for (int j = lastWrap; j < i; j++)
                {
                    ::uPtr< ::uArray*>(placements)->Item< ::app::Uno::Float4>(j).Z = largestX;

                    if (__this->FlowDirection() == 1)
                    {
                        ::uPtr< ::uArray*>(placements)->Item< ::app::Uno::Float4>(j).X = ::uPtr< ::uArray*>(placements)->Item< ::app::Uno::Float4>(j).X - largestX;
                        minX = ::app::Uno::Math__Min_1(NULL, minX, placements->Item< ::app::Uno::Float4>(j).X);
                    }
                }

                lastWrap = i;
                largestX = 0.0f;
                y = 0.0f;
                lastWasWrap = true;
            }

            largestX = ::app::Uno::Math__Max_1(NULL, eX, largestX);

            if (__this->FlowDirection() == 0)
            {
                ::uPtr< ::uArray*>(placements)->Item< ::app::Uno::Float4>(i) = ::app::Uno::Float4__New_2(NULL, x, y, eX, eY);
            }
            else
            {
                placements->Item< ::app::Uno::Float4>(i) = ::app::Uno::Float4__New_2(NULL, availableSize.X - x, y, eX, eY);
            }

            y = y + eY;
        }

        firstChild = false;
    }

    if (((lastWrap == 0) || (lastWrap == (::app::Uno::Collections::ICollection__Fuse_Node::Count(elements) - 1))) || !lastWasWrap)
    {
        for (int i = lastWrap; i < ::app::Uno::Collections::ICollection__Fuse_Node::Count(elements); i++)
        {
            if (__this->Orientation() == 0)
            {
                ::uPtr< ::uArray*>(placements)->Item< ::app::Uno::Float4>(i).W = largestY;
            }
            else
            {
                placements->Item< ::app::Uno::Float4>(i).Z = largestX;
            }

            if (__this->FlowDirection() == 1)
            {
                ::uPtr< ::uArray*>(placements)->Item< ::app::Uno::Float4>(i).X = ::uPtr< ::uArray*>(placements)->Item< ::app::Uno::Float4>(i).X - largestX;
                minX = ::app::Uno::Math__Min_1(NULL, minX, placements->Item< ::app::Uno::Float4>(i).X);
            }
        }
    }

    for (int i = 0; i < ::app::Uno::Collections::ICollection__Fuse_Node::Count(elements); i++)
    {
        ::app::Fuse::Node* element = ::app::Uno::Collections::IList__Fuse_Node::Item(::uPtr< ::uObject*>(elements), i);

        if (__this->ArrangeMarginBoxSpecial(element, padding, availableSize))
        {
            continue;
        }

        ::uPtr< ::app::Fuse::Node*>(element)->ArrangeMarginBox(::app::Uno::Float2__op_Subtraction_2(NULL, ::app::Uno::Float2__op_Subtraction_2(NULL, (ind_123 = ::uPtr< ::uArray*>(placements)->Item< ::app::Uno::Float4>(i), ::app::Uno::Float2__New_2(NULL, ind_123.X, ind_123.Y)), ::app::Uno::Float2__New_2(NULL, ::uPtr< ::uArray*>(largest)->Item< float>(i), 0.0f)), ::app::Uno::Float2__New_2(NULL, minX, 0.0f)), ::app::Uno::Float2__New_2(NULL, ::uPtr< ::uArray*>(placements)->Item< ::app::Uno::Float4>(i).Z, ::uPtr< ::uArray*>(placements)->Item< ::app::Uno::Float4>(i).W), 3);
    }
}

int WrapLayout__get_FlowDirection(WrapLayout* __this)
{
    return __this->_flowDirection;
}

::uString* WrapLayout__get_ID(WrapLayout* __this)
{
    return __this->_ID;
}

float WrapLayout__get_ItemHeight(WrapLayout* __this)
{
    return __this->_itemHeight;
}

float WrapLayout__get_ItemWidth(WrapLayout* __this)
{
    return __this->_itemWidth;
}

int WrapLayout__get_Orientation(WrapLayout* __this)
{
    return __this->_orientation;
}

::app::Uno::Float2 WrapLayout__GetContentSize(WrapLayout* __this, ::uObject* elements, ::app::Uno::Float2 fillSize, int fillSet)
{
    float max = 0.0f;
    ::uArray* total = ::uNewArray(::app::Uno::Float__typeof(), 2);
    float current = 0.0f;
    int x = (__this->Orientation() == 0) ? 0 : 1;
    int y = (__this->Orientation() == 0) ? 1 : 0;
    bool hasSizeFlag = (((__this->Orientation() == 0) && ((fillSet & 1) == 1)) || ((__this->Orientation() == 1) && ((fillSet & 2) == 2))) ? true : false;
    float availableSize = (__this->Orientation() == 0) ? fillSize.X : fillSize.Y;
    bool isEmpty = true;

    for (int i = 0; i < ::app::Uno::Collections::ICollection__Fuse_Node::Count(::uPtr< ::uObject*>(elements)); )
    {
        if (!__this->AffectsLayout(::app::Uno::Collections::IList__Fuse_Node::Item(::uPtr< ::uObject*>(elements), i)))
        {
            continue;
        }

        ::app::Uno::Float2 eSize = ::uPtr< ::app::Fuse::Node*>(::app::Uno::Collections::IList__Fuse_Node::Item(::uPtr< ::uObject*>(elements), i))->GetMarginSize(fillSize, 0);
        eSize = ::app::Uno::Float2__New_2(NULL, __this->_hasItemWidth ? __this->ItemWidth() : eSize.X, __this->_hasItemHeight ? __this->ItemHeight() : eSize.Y);
        float eX = (__this->Orientation() == 0) ? eSize.X : eSize.Y;
        float eY = (__this->Orientation() == 0) ? eSize.Y : eSize.X;

        if ((isEmpty && (eX > availableSize)) && hasSizeFlag)
        {
            ::uPtr< ::uArray*>(total)->Item< float>(x) = availableSize;
            total->Item< float>(y) = total->Item< float>(y) + ::app::Uno::Math__Max_1(NULL, max, eY);
            max = 0.0f;
            i++;
            continue;
        }

        if (((current + eX) > availableSize) && hasSizeFlag)
        {
            ::uPtr< ::uArray*>(total)->Item< float>(x) = ::app::Uno::Math__Max_1(NULL, current, ::uPtr< ::uArray*>(total)->Item< float>(x));
            total->Item< float>(y) = total->Item< float>(y) + max;
            max = 0.0f;
            current = 0.0f;
            isEmpty = true;
            continue;
        }

        max = ::app::Uno::Math__Max_1(NULL, eY, max);
        ::uPtr< ::uArray*>(total)->Item< float>(x) = ::app::Uno::Math__Max_1(NULL, current, ::uPtr< ::uArray*>(total)->Item< float>(x));
        current = current + eX;
        isEmpty = false;
        i++;
    }

    total->Item< float>(x) = ::app::Uno::Math__Max_1(NULL, current, total->Item< float>(x));
    total->Item< float>(y) = ::app::Uno::Math__Max_1(NULL, max, total->Item< float>(y) + max);
    return ::app::Uno::Float2__New_2(NULL, total->Item< float>(0), total->Item< float>(1));
}

WrapLayout* WrapLayout__New_1(::uStatic* __this)
{
    WrapLayout* inst = (WrapLayout*)::uAllocObject(sizeof(WrapLayout), WrapLayout__typeof());
    inst->_ObjInit_1();
    return inst;
}

void WrapLayout__set_FlowDirection(WrapLayout* __this, int value)
{
    __this->_flowDirection = value;
    __this->_hasFlowDirection = true;
}

void WrapLayout__set_ID(WrapLayout* __this, ::uString* value)
{
    __this->_ID = value;
}

void WrapLayout__set_ItemHeight(WrapLayout* __this, float value)
{
    __this->_itemHeight = value;
    __this->_hasItemHeight = true;
}

void WrapLayout__set_ItemWidth(WrapLayout* __this, float value)
{
    __this->_itemWidth = value;
    __this->_hasItemWidth = true;
}

void WrapLayout__set_Orientation(WrapLayout* __this, int value)
{
    __this->_orientation = value;
    __this->_hasOrientation = true;
}

}}}
