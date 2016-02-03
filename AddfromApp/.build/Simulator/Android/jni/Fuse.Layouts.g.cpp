// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.Panel.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.AlignmentHelpers.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.SimpleAlignment.h>
#include <Fuse.InvalidateLayoutReason.h>
#include <Fuse.Layer.h>
#include <Fuse.LayoutDependent.h>
#include <Fuse.LayoutRole.h>
#include <Fuse.Layouts.Column.h>
#include <Fuse.Layouts.ColumnLayout.h>
#include <Fuse.Layouts.DefaultLayout.h>
#include <Fuse.Layouts.DefinitionBase.h>
#include <Fuse.Layouts.DefinitionBase.ParseDataItem.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Layouts.DockLayout.h>
#include <Fuse.Layouts.FlowDirection.h>
#include <Fuse.Layouts.GridLayout.h>
#include <Fuse.Layouts.Layout.h>
#include <Fuse.Layouts.Layouts.h>
#include <Fuse.Layouts.Metric.h>
#include <Fuse.Layouts.Orientation.h>
#include <Fuse.Layouts.Row.h>
#include <Fuse.Layouts.StackLayout.h>
#include <Fuse.Layouts.WrapLayout.h>
#include <Fuse.Node.h>
#include <Fuse.Properties.h>
#include <Fuse.PropertyHandle.h>
#include <Fuse.SizeFlags.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Bool.h>
#include <Uno.Char.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.IListExtensions.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Collections.ObservableList-1.h>
#include <Uno.Delegate.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Diagnostics.DebugMessageType.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.Math.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Vector.h>
static uString* STRINGS[10];
static uType* TYPES[42];

namespace g{
namespace Fuse{
namespace Layouts{

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\Layouts\$.uno(464)
// -------------------------------------------------------------------

// public sealed class Column :464
// {
uType* Column_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(Column);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Layouts.Column", options);
    type->SetBase(::g::Fuse::Layouts::DefinitionBase_typeof());
    type->fp_ctor_ = (void*)Column__New1_fn;
    ::STRINGS[0] = uString::Const("auto");
    ::STRINGS[1] = uString::Const("*");
    ::STRINGS[2] = uString::Const("");
    ::STRINGS[3] = uString::Const(", ");
    ::TYPES[0] = ::g::Fuse::Layouts::DefinitionBase__ParseDataItem_typeof();
    ::TYPES[1] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Layouts::DefinitionBase__ParseDataItem_typeof());
    ::TYPES[2] = uObject_typeof();
    ::TYPES[3] = ::g::Uno::Float_typeof();
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(Column_typeof());
    ::TYPES[5] = ::g::Uno::Collections::IList_typeof()->MakeType(Column_typeof());
    ::TYPES[6] = ::g::Uno::Int_typeof();
    type->SetFields(3,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Layouts::Column, _actualWidth), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Layouts::Column, _width), 0,
        ::g::Fuse::Layouts::Metric_typeof(), offsetof(::g::Fuse::Layouts::Column, _widthMetric), 0);
    type->Reflection.SetFunctions(7,
        new uFunction("get_ActualWidth", NULL, (void*)Column__get_ActualWidth_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)Column__New1_fn, 0, true, Column_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)Column__New2_fn, 0, true, Column_typeof(), 2, ::g::Uno::Float_typeof(), ::g::Fuse::Layouts::Metric_typeof()),
        new uFunction("get_Width", NULL, (void*)Column__get_Width_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Width", NULL, (void*)Column__set_Width_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_WidthMetric", NULL, (void*)Column__get_WidthMetric_fn, 0, false, ::g::Fuse::Layouts::Metric_typeof(), 0),
        new uFunction("set_WidthMetric", NULL, (void*)Column__set_WidthMetric_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Layouts::Metric_typeof()));
    return type;
}

// public Column() :466
void Column__ctor_1_fn(Column* __this)
{
    __this->ctor_1();
}

// public Column(float width, Fuse.Layouts.Metric metric) :470
void Column__ctor_2_fn(Column* __this, float* width, int* metric)
{
    __this->ctor_2(*width, *metric);
}

// public float get_ActualWidth() :508
void Column__get_ActualWidth_fn(Column* __this, float* __retval)
{
    *__retval = __this->ActualWidth();
}

// internal void set_ActualWidth(float value) :513
void Column__set_ActualWidth_fn(Column* __this, float* value)
{
    __this->ActualWidth(*value);
}

// internal Fuse.Layouts.Column CloneDef() :552
void Column__CloneDef_fn(Column* __this, Column** __retval)
{
    *__retval = __this->CloneDef();
}

// public Column New() :466
void Column__New1_fn(Column** __retval)
{
    *__retval = Column::New1();
}

// public Column New(float width, Fuse.Layouts.Metric metric) :470
void Column__New2_fn(float* width, int* metric, Column** __retval)
{
    *__retval = Column::New2(*width, *metric);
}

// internal static Fuse.Layouts.Column Parse(string data) :525
void Column__Parse_fn(uString* data, Column** __retval)
{
    *__retval = Column::Parse(data);
}

// internal static void Parse(string data, Uno.Collections.IList<Fuse.Layouts.Column> output) :519
void Column__Parse1_fn(uString* data, uObject* output)
{
    Column::Parse1(data, output);
}

// internal string Serialize() :531
void Column__Serialize_fn(Column* __this, uString** __retval)
{
    *__retval = __this->Serialize();
}

// internal static string Serialize(Uno.Collections.IList<Fuse.Layouts.Column> columns) :541
void Column__Serialize1_fn(uObject* columns, uString** __retval)
{
    *__retval = Column::Serialize1(columns);
}

// public float get_Width() :493
void Column__get_Width_fn(Column* __this, float* __retval)
{
    *__retval = __this->Width();
}

// public void set_Width(float value) :494
void Column__set_Width_fn(Column* __this, float* value)
{
    __this->Width(*value);
}

// public Fuse.Layouts.Metric get_WidthMetric() :479
void Column__get_WidthMetric_fn(Column* __this, int* __retval)
{
    *__retval = __this->WidthMetric();
}

// public void set_WidthMetric(Fuse.Layouts.Metric value) :480
void Column__set_WidthMetric_fn(Column* __this, int* value)
{
    __this->WidthMetric(*value);
}

// public Column() [instance] :466
void Column::ctor_1()
{
    _widthMetric = 1;
    _width = 1.0f;
    ctor_();
}

// public Column(float width, Fuse.Layouts.Metric metric) [instance] :470
void Column::ctor_2(float width, int metric)
{
    _widthMetric = 1;
    _width = 1.0f;
    ctor_();
    Width(width);
    WidthMetric(metric);
}

// public float get_ActualWidth() [instance] :508
float Column::ActualWidth()
{
    if (WidthMetric() == 0)
        return _width;
    else
        return _actualWidth;
}

// internal void set_ActualWidth(float value) [instance] :513
void Column::ActualWidth(float value)
{
    _actualWidth = value;
}

// internal Fuse.Layouts.Column CloneDef() [instance] :552
Column* Column::CloneDef()
{
    Column* collection2;
    collection2 = Column::New1();
    int ind3 = WidthMetric();
    uPtr(collection2)->WidthMetric(ind3);
    ;
    float ind4 = Width();
    uPtr(collection2)->Width(ind4);
    ;
    return collection2;
}

// internal string Serialize() [instance] :531
uString* Column::Serialize()
{
    switch (WidthMetric())
    {
        case 2:
            return ::STRINGS[0/*"auto"*/];
        case 1:
            return ::g::Uno::String::op_Addition(uBox(::TYPES[3/*float*/], Width()), ::STRINGS[1/*"*"*/]);
        default:
            return ::g::Uno::Float::ToString(Width(), ::TYPES[3/*float*/]);
    }
}

// public float get_Width() [instance] :493
float Column::Width()
{
    return _width;
}

// public void set_Width(float value) [instance] :494
void Column::Width(float value)
{
    if (_width != value)
    {
        _width = ::g::Uno::Math::Max1(0.0f, value);
        OnChanged();
    }
}

// public Fuse.Layouts.Metric get_WidthMetric() [instance] :479
int Column::WidthMetric()
{
    return _widthMetric;
}

// public void set_WidthMetric(Fuse.Layouts.Metric value) [instance] :480
void Column::WidthMetric(int value)
{
    if (_widthMetric != value)
    {
        _widthMetric = value;
        OnChanged();
    }
}

// public Column New() [static] :466
Column* Column::New1()
{
    Column* obj5 = (Column*)uNew(Column_typeof());
    obj5->ctor_1();
    return obj5;
}

// public Column New(float width, Fuse.Layouts.Metric metric) [static] :470
Column* Column::New2(float width, int metric)
{
    Column* obj6 = (Column*)uNew(Column_typeof());
    obj6->ctor_2(width, metric);
    return obj6;
}

// internal static Fuse.Layouts.Column Parse(string data) [static] :525
Column* Column::Parse(uString* data)
{
    ::g::Fuse::Layouts::DefinitionBase__ParseDataItem pi = ::g::Fuse::Layouts::DefinitionBase::ParseDataSingle(data);
    return Column::New2(pi.Value, pi.Metric);
}

// internal static void Parse(string data, Uno.Collections.IList<Fuse.Layouts.Column> output) [static] :519
void Column::Parse1(uString* data, uObject* output)
{
    ::g::Fuse::Layouts::DefinitionBase__ParseDataItem ret7;

    for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(::g::Fuse::Layouts::DefinitionBase::ParseData(data)), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::TYPES[0/*Fuse.Layouts.DefinitionBase.ParseDataItem*/]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::g::Uno::Collections::IEnumerator_typeof())); )
    {
        ::g::Fuse::Layouts::DefinitionBase__ParseDataItem item = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[1/*Uno.Collections.IEnumerator<Fuse.Layouts.DefinitionBase.ParseDataItem>*/]), &ret7), ret7);
        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(output), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Layouts.Column>*/]), Column::New2(item.Value, item.Metric));
    }
}

// internal static string Serialize(Uno.Collections.IList<Fuse.Layouts.Column> columns) [static] :541
uString* Column::Serialize1(uObject* columns)
{
    Column* ret8;
    uString* s = ::STRINGS[2/*""*/];

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(columns), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Layouts.Column>*/])); i++)
    {
        if (i > 0)
            s = ::g::Uno::String::op_Addition2(s, ::STRINGS[3/*", "*/]);

        s = ::g::Uno::String::op_Addition2(s, uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(columns), ::TYPES[5/*Uno.Collections.IList<Fuse.Layouts.Column>*/]), uCRef<int>(i), &ret8), ret8))->Serialize());
    }

    return s;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\Layouts\$.uno(8)
// -----------------------------------------------------------------

// public sealed class ColumnLayout :8
// {
::g::Fuse::Layouts::Layout_type* ColumnLayout_typeof()
{
    static uSStrong< ::g::Fuse::Layouts::Layout_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(ColumnLayout);
    options.TypeSize = sizeof(::g::Fuse::Layouts::Layout_type);
    type = (::g::Fuse::Layouts::Layout_type*)uClassType::New("Fuse.Layouts.ColumnLayout", options);
    type->SetBase(::g::Fuse::Layouts::Layout_typeof());
    type->fp_ctor_ = (void*)ColumnLayout__New1_fn;
    type->fp_ArrangePaddingBox = (void(*)(::g::Fuse::Layouts::Layout*, uObject*, ::g::Uno::Float4*, ::g::Uno::Float2*, int*))ColumnLayout__ArrangePaddingBox_fn;
    type->fp_GetContentSize = (void(*)(::g::Fuse::Layouts::Layout*, uObject*, ::g::Uno::Float2*, int*, ::g::Uno::Float2*))ColumnLayout__GetContentSize_fn;
    ::TYPES[6] = ::g::Uno::Int_typeof();
    ::TYPES[7] = ::g::Uno::Float_typeof()->Array();
    ::TYPES[8] = ::g::Uno::Float2_typeof();
    ::TYPES[3] = ::g::Uno::Float_typeof();
    ::TYPES[9] = ::g::Uno::Bool_typeof();
    ::TYPES[10] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[11] = ::g::Uno::Float4_typeof();
    type->SetFields(1,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Layouts::ColumnLayout, _columnCount), 0,
        ::g::Fuse::Layouts::Orientation_typeof(), offsetof(::g::Fuse::Layouts::ColumnLayout, _orientation), 0);
    type->Reflection.SetFunctions(5,
        new uFunction("get_ColumnCount", NULL, (void*)ColumnLayout__get_ColumnCount_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_ColumnCount", NULL, (void*)ColumnLayout__set_ColumnCount_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction(".ctor", NULL, (void*)ColumnLayout__New1_fn, 0, true, ColumnLayout_typeof(), 0),
        new uFunction("get_Orientation", NULL, (void*)ColumnLayout__get_Orientation_fn, 0, false, ::g::Fuse::Layouts::Orientation_typeof(), 0),
        new uFunction("set_Orientation", NULL, (void*)ColumnLayout__set_Orientation_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Layouts::Orientation_typeof()));
    return type;
}

// public generated ColumnLayout() :8
void ColumnLayout__ctor_1_fn(ColumnLayout* __this)
{
    __this->ctor_1();
}

// private float2 Arrange(Uno.Collections.IList<Fuse.Node> nodes, float2 fillSize, Fuse.SizeFlags fillSet, float2 offset, [bool doArrange], [float4 padding], [float2 availableSize]) :75
void ColumnLayout__Arrange_fn(ColumnLayout* __this, uObject* nodes, ::g::Uno::Float2* fillSize, int* fillSet, ::g::Uno::Float2* offset, bool* doArrange, ::g::Uno::Float4* padding, ::g::Uno::Float2* availableSize, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Arrange(nodes, *fillSize, *fillSet, *offset, *doArrange, *padding, *availableSize);
}

// internal override sealed void ArrangePaddingBox(Uno.Collections.IList<Fuse.Node> nodes, float4 padding, float2 availableSize, Fuse.SizeFlags flags) :68
void ColumnLayout__ArrangePaddingBox_fn(ColumnLayout* __this, uObject* nodes, ::g::Uno::Float4* padding, ::g::Uno::Float2* availableSize, int* flags)
{
    ::g::Uno::Float2 availableSize_ = *availableSize;
    ::g::Uno::Float4 padding_ = *padding;
    int flags_ = *flags;
    __this->Arrange(nodes, ::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__op_Subtraction2(availableSize_, ::g::Uno::Float2__New2(padding_.X, padding_.Y)), ::g::Uno::Float2__New2(padding_.Z, padding_.W)), flags_, ::g::Uno::Float2__New2(padding_.X, padding_.Y), true, padding_, availableSize_);
}

// public int get_ColumnCount() :27
void ColumnLayout__get_ColumnCount_fn(ColumnLayout* __this, int* __retval)
{
    *__retval = __this->ColumnCount();
}

// public void set_ColumnCount(int value) :28
void ColumnLayout__set_ColumnCount_fn(ColumnLayout* __this, int* value)
{
    __this->ColumnCount(*value);
}

// internal override sealed float2 GetContentSize(Uno.Collections.IList<Fuse.Node> nodes, float2 fillSize, Fuse.SizeFlags fillSet) :63
void ColumnLayout__GetContentSize_fn(ColumnLayout* __this, uObject* nodes, ::g::Uno::Float2* fillSize, int* fillSet, ::g::Uno::Float2* __retval)
{
    ::g::Uno::Float2 fillSize_ = *fillSize;
    int fillSet_ = *fillSet;
    return *__retval = __this->Arrange(nodes, fillSize_, fillSet_, ::g::Uno::Float2__New1(0.0f), false, ::g::Uno::Float4__New1(0.0f), ::g::Uno::Float2__New1(0.0f)), void();
}

// private int LeastAt(float[] c) :38
void ColumnLayout__LeastAt_fn(ColumnLayout* __this, uArray* c, int* __retval)
{
    *__retval = __this->LeastAt(c);
}

// private float Max(float[] c) :55
void ColumnLayout__Max_fn(ColumnLayout* __this, uArray* c, float* __retval)
{
    *__retval = __this->Max(c);
}

// public generated ColumnLayout New() :8
void ColumnLayout__New1_fn(ColumnLayout** __retval)
{
    *__retval = ColumnLayout::New1();
}

// public Fuse.Layouts.Orientation get_Orientation() :13
void ColumnLayout__get_Orientation_fn(ColumnLayout* __this, int* __retval)
{
    *__retval = __this->Orientation();
}

// public void set_Orientation(Fuse.Layouts.Orientation value) :14
void ColumnLayout__set_Orientation_fn(ColumnLayout* __this, int* value)
{
    __this->Orientation(*value);
}

// public generated ColumnLayout() [instance] :8
void ColumnLayout::ctor_1()
{
    _orientation = 1;
    _columnCount = 2;
    ctor_();
}

// private float2 Arrange(Uno.Collections.IList<Fuse.Node> nodes, float2 fillSize, Fuse.SizeFlags fillSet, float2 offset, [bool doArrange], [float4 padding], [float2 availableSize]) [instance] :75
::g::Uno::Float2 ColumnLayout::Arrange(uObject* nodes, ::g::Uno::Float2 fillSize, int fillSet, ::g::Uno::Float2 offset, bool doArrange, ::g::Uno::Float4 padding, ::g::Uno::Float2 availableSize)
{
    ::g::Fuse::Node* ret4;
    ::g::Fuse::Node* ret5;
    bool vert = Orientation() == 1;
    uArray* at = uArray::New(::TYPES[7/*float[]*/], ColumnCount());
    float colSize = (vert ? fillSize.X : fillSize.Y) / (float)ColumnCount();

    if ((vert && !((fillSet & 1) == 1)) || (!vert && !((fillSet & 2) == 2)))
    {
        ::g::Uno::Float2 mx = ::g::Uno::Float2__New1(0.0f);

        for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(nodes), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::TYPES[22/*Fuse.Node*/]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::g::Uno::Collections::IEnumerator_typeof())); )
        {
            ::g::Fuse::Node* node = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[10/*Uno.Collections.IEnumerator<Fuse.Node>*/]), &ret4), ret4);

            if (!AffectsLayout(node))
                continue;

            mx = ::g::Uno::Math::Max3(mx, uPtr(node)->GetMarginSize(::g::Uno::Float2__New1(0.0f), 0));
        }

        fillSize = ::g::Uno::Float2__op_Multiply1(mx, (float)ColumnCount());
        fillSet = 3;
    }

    for (uObject* enum2 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(nodes), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::TYPES[22/*Fuse.Node*/]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum2), ::g::Uno::Collections::IEnumerator_typeof())); )
    {
        ::g::Fuse::Node* node1 = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum2), ::TYPES[10/*Uno.Collections.IEnumerator<Fuse.Node>*/]), &ret5), ret5);
        ::g::Uno::Float2 avs = ::g::Uno::Float2__New2(vert ? colSize : 0.0f, vert ? 0.0f : colSize);
        int col = LeastAt(at);
        ::g::Uno::Float2 nsz;

        if (doArrange)
        {
            if (ArrangeMarginBoxSpecial(node1, padding, availableSize, fillSet))
                continue;

            ::g::Uno::Float2 pos = vert ? ::g::Uno::Float2__New2(offset.X + ((float)col * colSize), offset.Y + uPtr(at)->Item<float>(col)) : ::g::Uno::Float2__New2(offset.X + uPtr(at)->Item<float>(col), offset.Y + ((float)col * colSize));
            nsz = uPtr(node1)->ArrangeMarginBox(pos, avs, vert ? 1 : 2);
        }
        else if (AffectsLayout(node1))
            nsz = uPtr(node1)->GetMarginSize(avs, vert ? 1 : 2);
        else
            continue;

        uPtr(at)->Item<float>(col) = uPtr(at)->Item<float>(col) + (vert ? nsz.Y : nsz.X);
    }

    return vert ? ::g::Uno::Float2__New2(fillSize.X, Max(at)) : ::g::Uno::Float2__New2(Max(at), fillSize.Y);
}

// public int get_ColumnCount() [instance] :27
int ColumnLayout::ColumnCount()
{
    return _columnCount;
}

// public void set_ColumnCount(int value) [instance] :28
void ColumnLayout::ColumnCount(int value)
{
    if (_columnCount != value)
    {
        _columnCount = value;
        InvalidateLayout();
    }
}

// private int LeastAt(float[] c) [instance] :38
int ColumnLayout::LeastAt(uArray* c)
{
    float sz = uPtr(c)->Item<float>(0);
    int i = 0;

    for (int j = 1; j < c->Length(); j++)
        if (uPtr(c)->Item<float>(j) < sz)
        {
            sz = uPtr(c)->Item<float>(j);
            i = j;
        }

    return i;
}

// private float Max(float[] c) [instance] :55
float ColumnLayout::Max(uArray* c)
{
    float mx = uPtr(c)->Item<float>(0);

    for (int j = 1; j < c->Length(); j++)
        mx = ::g::Uno::Math::Max1(mx, c->Item<float>(j));

    return mx;
}

// public Fuse.Layouts.Orientation get_Orientation() [instance] :13
int ColumnLayout::Orientation()
{
    return _orientation;
}

// public void set_Orientation(Fuse.Layouts.Orientation value) [instance] :14
void ColumnLayout::Orientation(int value)
{
    if (_orientation != value)
    {
        _orientation = value;
        InvalidateLayout();
    }
}

// public generated ColumnLayout New() [static] :8
ColumnLayout* ColumnLayout::New1()
{
    ColumnLayout* obj3 = (ColumnLayout*)uNew(ColumnLayout_typeof());
    obj3->ctor_1();
    return obj3;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\Layouts\$.uno(147)
// -------------------------------------------------------------------

// public sealed class DefaultLayout :147
// {
::g::Fuse::Layouts::Layout_type* DefaultLayout_typeof()
{
    static uSStrong< ::g::Fuse::Layouts::Layout_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(DefaultLayout);
    options.TypeSize = sizeof(::g::Fuse::Layouts::Layout_type);
    type = (::g::Fuse::Layouts::Layout_type*)uClassType::New("Fuse.Layouts.DefaultLayout", options);
    type->SetBase(::g::Fuse::Layouts::Layout_typeof());
    type->fp_ctor_ = (void*)DefaultLayout__New1_fn;
    type->fp_ArrangePaddingBox = (void(*)(::g::Fuse::Layouts::Layout*, uObject*, ::g::Uno::Float4*, ::g::Uno::Float2*, int*))DefaultLayout__ArrangePaddingBox_fn;
    type->fp_GetContentSize = (void(*)(::g::Fuse::Layouts::Layout*, uObject*, ::g::Uno::Float2*, int*, ::g::Uno::Float2*))DefaultLayout__GetContentSize_fn;
    type->fp_IsMarginBoxDependent = (void(*)(::g::Fuse::Layouts::Layout*, ::g::Fuse::Node*, int*))DefaultLayout__IsMarginBoxDependent_fn;
    ::TYPES[11] = ::g::Uno::Float4_typeof();
    ::TYPES[12] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[9] = ::g::Uno::Bool_typeof();
    ::TYPES[13] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[6] = ::g::Uno::Int_typeof();
    ::TYPES[8] = ::g::Uno::Float2_typeof();
    ::TYPES[14] = ::g::Fuse::SizeFlags_typeof();
    type->SetFields(1);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)DefaultLayout__New1_fn, 0, true, DefaultLayout_typeof(), 0));
    return type;
}

// public generated DefaultLayout() :147
void DefaultLayout__ctor_1_fn(DefaultLayout* __this)
{
    __this->ctor_1();
}

// internal override sealed void ArrangePaddingBox(Uno.Collections.IList<Fuse.Node> elements, float4 padding, float2 availableSize, Fuse.SizeFlags flags) :185
void DefaultLayout__ArrangePaddingBox_fn(DefaultLayout* __this, uObject* elements, ::g::Uno::Float4* padding, ::g::Uno::Float2* availableSize, int* flags)
{
    ::g::Uno::Float2 availableSize_ = *availableSize;
    ::g::Uno::Float4 padding_ = *padding;
    ::g::Fuse::Node* ret2;
    int flags_ = *flags;
    ::g::Fuse::Node* ret3;
    ::g::Uno::Float2 avSize = ::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__op_Subtraction2(availableSize_, ::g::Uno::Float2__New2(padding_.X, padding_.Y)), ::g::Uno::Float2__New2(padding_.Z, padding_.W));

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(elements), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/])); i++)
        if (!__this->ArrangeMarginBoxSpecial((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(elements), ::TYPES[13/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret2), ret2), padding_, availableSize_, flags_))
            uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(elements), ::TYPES[13/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret3), ret3))->ArrangeMarginBox(::g::Uno::Float2__New2(padding_.X, padding_.Y), avSize, flags_);
}

// internal override sealed float2 GetContentSize(Uno.Collections.IList<Fuse.Node> elements, float2 fillSize, Fuse.SizeFlags fillSet) :149
void DefaultLayout__GetContentSize_fn(DefaultLayout* __this, uObject* elements, ::g::Uno::Float2* fillSize, int* fillSet, ::g::Uno::Float2* __retval)
{
    ::g::Uno::Float2 fillSize_ = *fillSize;
    int fillSet_ = *fillSet;
    ::g::Uno::Float2 size = __this->GetElementsSize(elements, fillSize_, fillSet_);
    bool recalc = false;

    if (!((fillSet_ & 1) == 1))
    {
        fillSize_.X = size.X;
        fillSet_ = fillSet_ | 1;
        recalc = true;
    }

    if (!((fillSet_ & 2) == 2))
    {
        fillSize_.Y = size.Y;
        fillSet_ = fillSet_ | 2;
        recalc = true;
    }

    if (recalc)
        size = __this->GetElementsSize(elements, fillSize_, fillSet_);

    return *__retval = size, void();
}

// private float2 GetElementsSize(Uno.Collections.IList<Fuse.Node> elements, float2 fillSize, Fuse.SizeFlags fillSet) :173
void DefaultLayout__GetElementsSize_fn(DefaultLayout* __this, uObject* elements, ::g::Uno::Float2* fillSize, int* fillSet, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetElementsSize(elements, *fillSize, *fillSet);
}

// internal override sealed Fuse.LayoutDependent IsMarginBoxDependent(Fuse.Node child) :196
void DefaultLayout__IsMarginBoxDependent_fn(DefaultLayout* __this, ::g::Fuse::Node* child, int* __retval)
{
    return *__retval = 2, void();
}

// public generated DefaultLayout New() :147
void DefaultLayout__New1_fn(DefaultLayout** __retval)
{
    *__retval = DefaultLayout::New1();
}

// public generated DefaultLayout() [instance] :147
void DefaultLayout::ctor_1()
{
    ctor_();
}

// private float2 GetElementsSize(Uno.Collections.IList<Fuse.Node> elements, float2 fillSize, Fuse.SizeFlags fillSet) [instance] :173
::g::Uno::Float2 DefaultLayout::GetElementsSize(uObject* elements, ::g::Uno::Float2 fillSize, int fillSet)
{
    ::g::Fuse::Node* ret4;
    ::g::Fuse::Node* ret5;
    ::g::Uno::Float2 ds = ::g::Uno::Float2__New1(0.0f);

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(elements), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/])); i++)
    {
        if (!AffectsLayout((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(elements), ::TYPES[13/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret4), ret4)))
            continue;

        ds = ::g::Uno::Math::Max3(ds, uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(elements), ::TYPES[13/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret5), ret5))->GetMarginSize(fillSize, fillSet));
    }

    return ds;
}

// public generated DefaultLayout New() [static] :147
DefaultLayout* DefaultLayout::New1()
{
    DefaultLayout* obj1 = (DefaultLayout*)uNew(DefaultLayout_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\Layouts\$.uno(391)
// -------------------------------------------------------------------

// public abstract class DefinitionBase :391
// {
uType* DefinitionBase_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(DefinitionBase);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Layouts.DefinitionBase", options);
    ::STRINGS[0] = uString::Const("auto");
    ::STRINGS[4] = uString::Const("Unable to parse data: ");
    ::STRINGS[5] = uString::Const("C:\\ProgramData\\Uno\\Packages\\Fuse.Controls\\0.19.3\\Layouts\\$.uno");
    ::TYPES[15] = ::g::Uno::Delegate_typeof();
    ::TYPES[16] = ::g::Uno::Action_typeof();
    ::TYPES[17] = ::g::Uno::Collections::List_typeof()->MakeType(DefinitionBase__ParseDataItem_typeof());
    ::TYPES[18] = ::g::Uno::Char_typeof()->Array();
    ::TYPES[19] = ::g::Uno::String_typeof()->Array();
    ::TYPES[20] = ::g::Uno::Collections::IList_typeof()->MakeType(DefinitionBase__ParseDataItem_typeof());
    ::TYPES[21] = ::g::Uno::String_typeof();
    ::TYPES[0] = DefinitionBase__ParseDataItem_typeof();
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Layouts::DefinitionBase, _actualOffset), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Layouts::DefinitionBase, _Implicit), 0,
        ::g::Uno::Action_typeof(), offsetof(::g::Fuse::Layouts::DefinitionBase, Changed1), 0);
    type->Reflection.SetFunctions(2,
        new uFunction("get_ActualOffset", NULL, (void*)DefinitionBase__get_ActualOffset_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("get_Implicit", NULL, (void*)DefinitionBase__get_Implicit_fn, 0, false, ::g::Uno::Bool_typeof(), 0));
    return type;
}

// protected generated DefinitionBase() :391
void DefinitionBase__ctor__fn(DefinitionBase* __this)
{
    __this->ctor_();
}

// public float get_ActualOffset() :400
void DefinitionBase__get_ActualOffset_fn(DefinitionBase* __this, float* __retval)
{
    *__retval = __this->ActualOffset();
}

// internal void set_ActualOffset(float value) :401
void DefinitionBase__set_ActualOffset_fn(DefinitionBase* __this, float* value)
{
    __this->ActualOffset(*value);
}

// internal generated void add_Changed(Uno.Action value) :393
void DefinitionBase__add_Changed_fn(DefinitionBase* __this, uDelegate* value)
{
    __this->add_Changed(value);
}

// internal generated void remove_Changed(Uno.Action value) :393
void DefinitionBase__remove_Changed_fn(DefinitionBase* __this, uDelegate* value)
{
    __this->remove_Changed(value);
}

// public generated bool get_Implicit() :410
void DefinitionBase__get_Implicit_fn(DefinitionBase* __this, bool* __retval)
{
    *__retval = __this->Implicit();
}

// internal generated void set_Implicit(bool value) :411
void DefinitionBase__set_Implicit_fn(DefinitionBase* __this, bool* value)
{
    __this->Implicit(*value);
}

// protected internal void OnChanged() :394
void DefinitionBase__OnChanged_fn(DefinitionBase* __this)
{
    __this->OnChanged();
}

// protected internal static Uno.Collections.IList<Fuse.Layouts.DefinitionBase.ParseDataItem> ParseData(string data) :419
void DefinitionBase__ParseData_fn(uString* data, uObject** __retval)
{
    *__retval = DefinitionBase::ParseData(data);
}

// protected internal static Fuse.Layouts.DefinitionBase.ParseDataItem ParseDataSingle(string data) :428
void DefinitionBase__ParseDataSingle_fn(uString* data, DefinitionBase__ParseDataItem* __retval)
{
    *__retval = DefinitionBase::ParseDataSingle(data);
}

// protected generated DefinitionBase() [instance] :391
void DefinitionBase::ctor_()
{
}

// public float get_ActualOffset() [instance] :400
float DefinitionBase::ActualOffset()
{
    return _actualOffset;
}

// internal void set_ActualOffset(float value) [instance] :401
void DefinitionBase::ActualOffset(float value)
{
    _actualOffset = value;
}

// internal generated void add_Changed(Uno.Action value) [instance] :393
void DefinitionBase::add_Changed(uDelegate* value)
{
    Changed1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Changed1, value), ::TYPES[16/*Uno.Action*/]);
}

// internal generated void remove_Changed(Uno.Action value) [instance] :393
void DefinitionBase::remove_Changed(uDelegate* value)
{
    Changed1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Changed1, value), ::TYPES[16/*Uno.Action*/]);
}

// public generated bool get_Implicit() [instance] :410
bool DefinitionBase::Implicit()
{
    return _Implicit;
}

// internal generated void set_Implicit(bool value) [instance] :411
void DefinitionBase::Implicit(bool value)
{
    _Implicit = value;
}

// protected internal void OnChanged() [instance] :394
void DefinitionBase::OnChanged()
{
    if (::g::Uno::Delegate::op_Inequality(Changed1, NULL))
        uPtr(Changed1)->InvokeVoid();
}

// protected internal static Uno.Collections.IList<Fuse.Layouts.DefinitionBase.ParseDataItem> ParseData(string data) [static] :419
uObject* DefinitionBase::ParseData(uString* data)
{
    ::g::Uno::Collections::List* output = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[17/*Uno.Collections.List<Fuse.Layouts.DefinitionBase.ParseDataItem>*/]);
    uArray* s = ::g::Uno::String::Split(uPtr(data), uArray::Init<int>(::TYPES[18/*char[]*/], 1, ','));

    for (int i = 0; i < uPtr(s)->Length(); i++)
        ::g::Uno::Collections::List__Add_fn(output, uCRef(DefinitionBase::ParseDataSingle(uPtr(s)->Strong<uString*>(i))));

    return (uObject*)output;
}

// protected internal static Fuse.Layouts.DefinitionBase.ParseDataItem ParseDataSingle(string data) [static] :428
DefinitionBase__ParseDataItem DefinitionBase::ParseDataSingle(uString* data)
{
    DefinitionBase__ParseDataItem collection1;
    DefinitionBase__ParseDataItem collection2;
    DefinitionBase__ParseDataItem collection3;
    DefinitionBase__ParseDataItem collection4;

    try
    {
        uString* t = ::g::Uno::String::Trim(uPtr(data));

        if ((uPtr(t)->Length() > 0) && (uPtr(t)->Item(uPtr(t)->Length() - 1) == '*'))
        {
            uString* k = ::g::Uno::String::Trim(uPtr(::g::Uno::String::Substring1(uPtr(t), 0, uPtr(t)->Length() - 1)));
            collection1 = uDefault<DefinitionBase__ParseDataItem>();
            collection1.Value = ::g::Uno::Float::Parse(k);
            collection1.Metric = 1;
            return collection1;
        }
        else if (::g::Uno::String::op_Equality(::g::Uno::String::ToLower(uPtr(t)), ::STRINGS[0/*"auto"*/]))
        {
            collection2 = uDefault<DefinitionBase__ParseDataItem>();
            collection2.Value = 1.0f;
            collection2.Metric = 2;
            return collection2;
        }
        else
        {
            collection3 = uDefault<DefinitionBase__ParseDataItem>();
            collection3.Value = ::g::Uno::Float::Parse(t);
            collection3.Metric = 0;
            return collection3;
        }
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Uno::Diagnostics::Debug::Log5(::g::Uno::String::op_Addition2(::STRINGS[4/*"Unable to p...*/], data), 1, ::STRINGS[5/*"C:\\Program...*/], 450);
        collection4 = uDefault<DefinitionBase__ParseDataItem>();
        collection4.Value = 0.0f;
        collection4.Metric = 0;
        return collection4;
    }
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\Layouts\$.uno(218)
// -------------------------------------------------------------------

// public enum Dock :218
uEnumType* Dock_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Layouts.Dock", ::g::Uno::Int_typeof(), 5);
    type->SetLiterals(
        "Left", 0LL,
        "Right", 1LL,
        "Top", 2LL,
        "Bottom", 3LL,
        "Fill", 4LL);
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\Layouts\$.uno(223)
// -------------------------------------------------------------------

// public sealed class DockLayout :223
// {
// static DockLayout() :223
static void DockLayout__cctor_1_fn(uType* __type)
{
    DockLayout::_dockProperty_ = ::g::Fuse::Properties::CreateHandle();
}

::g::Fuse::Layouts::Layout_type* DockLayout_typeof()
{
    static uSStrong< ::g::Fuse::Layouts::Layout_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(DockLayout);
    options.TypeSize = sizeof(::g::Fuse::Layouts::Layout_type);
    type = (::g::Fuse::Layouts::Layout_type*)uClassType::New("Fuse.Layouts.DockLayout", options);
    type->SetBase(::g::Fuse::Layouts::Layout_typeof());
    type->fp_ctor_ = (void*)DockLayout__New1_fn;
    type->fp_cctor_ = DockLayout__cctor_1_fn;
    type->fp_ArrangePaddingBox = (void(*)(::g::Fuse::Layouts::Layout*, uObject*, ::g::Uno::Float4*, ::g::Uno::Float2*, int*))DockLayout__ArrangePaddingBox_fn;
    type->fp_GetContentSize = (void(*)(::g::Fuse::Layouts::Layout*, uObject*, ::g::Uno::Float2*, int*, ::g::Uno::Float2*))DockLayout__GetContentSize_fn;
    ::TYPES[11] = ::g::Uno::Float4_typeof();
    ::TYPES[12] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[13] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[14] = ::g::Fuse::SizeFlags_typeof();
    ::TYPES[6] = ::g::Uno::Int_typeof();
    ::TYPES[8] = ::g::Uno::Float2_typeof();
    ::TYPES[9] = ::g::Uno::Bool_typeof();
    ::TYPES[22] = ::g::Fuse::Node_typeof();
    ::TYPES[23] = ::g::Fuse::Layouts::Dock_typeof();
    ::TYPES[2] = uObject_typeof();
    type->SetFields(1,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Layouts::DockLayout::_dockProperty_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(4,
        new uFunction("GetDock", NULL, (void*)DockLayout__GetDock_fn, 0, true, ::g::Fuse::Layouts::Dock_typeof(), 1, ::g::Fuse::Node_typeof()),
        new uFunction(".ctor", NULL, (void*)DockLayout__New1_fn, 0, true, DockLayout_typeof(), 0),
        new uFunction("ResetDock", NULL, (void*)DockLayout__ResetDock_fn, 0, true, uVoid_typeof(), 1, ::g::Fuse::Node_typeof()),
        new uFunction("SetDock", NULL, (void*)DockLayout__SetDock_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Node_typeof(), ::g::Fuse::Layouts::Dock_typeof()));
    return type;
}

// public generated DockLayout() :223
void DockLayout__ctor_1_fn(DockLayout* __this)
{
    __this->ctor_1();
}

// internal override sealed void ArrangePaddingBox(Uno.Collections.IList<Fuse.Node> elements, float4 padding, float2 finalSize, Fuse.SizeFlags flags) :308
void DockLayout__ArrangePaddingBox_fn(DockLayout* __this, uObject* elements, ::g::Uno::Float4* padding, ::g::Uno::Float2* finalSize, int* flags)
{
    ::g::Uno::Float4 padding_ = *padding;
    ::g::Uno::Float2 finalSize_ = *finalSize;
    ::g::Fuse::Node* ret2;
    int flags_ = *flags;
    ::g::Fuse::Node* ret3;
    ::g::Uno::Float2 availablePosition = ::g::Uno::Float2__New2(padding_.X, padding_.Y);
    ::g::Uno::Float2 availableSize = ::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__op_Subtraction2(finalSize_, ::g::Uno::Float2__New2(padding_.X, padding_.Y)), ::g::Uno::Float2__New2(padding_.Z, padding_.W));

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(elements), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/])); i++)
    {
        ::g::Fuse::Node* c = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(elements), ::TYPES[13/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret2), ret2);

        if (__this->ArrangeMarginBoxSpecial(c, padding_, finalSize_, flags_))
            continue;

        int d = DockLayout::GetDock(c);
        int sf = (((d == 0) || (d == 1)) ? 2 : 1) | (flags_ & -4);
        ::g::Uno::Float2 desiredSize = uPtr(c)->GetMarginSize(availableSize, sf);

        switch (d)
        {
            case 0:
            {
                desiredSize.Y = availableSize.Y;
                uPtr(c)->ArrangeMarginBox(availablePosition, desiredSize, 3 | flags_);
                availablePosition.X = (availablePosition.X + desiredSize.X);
                availableSize.X = (availableSize.X - desiredSize.X);
                break;
            }
            case 1:
            {
                desiredSize.Y = availableSize.Y;
                uPtr(c)->ArrangeMarginBox(::g::Uno::Float2__New2((availablePosition.X + availableSize.X) - desiredSize.X, availablePosition.Y), desiredSize, 3 | flags_);
                availableSize.X = (availableSize.X - desiredSize.X);
                break;
            }
            case 2:
            {
                desiredSize.X = availableSize.X;
                uPtr(c)->ArrangeMarginBox(availablePosition, desiredSize, 3 | flags_);
                availablePosition.Y = (availablePosition.Y + desiredSize.Y);
                availableSize.Y = (availableSize.Y - desiredSize.Y);
                break;
            }
            case 3:
            {
                desiredSize.X = availableSize.X;
                uPtr(c)->ArrangeMarginBox(::g::Uno::Float2__New2(availablePosition.X, (availablePosition.Y + availableSize.Y) - desiredSize.Y), desiredSize, 3 | flags_);
                availableSize.Y = (availableSize.Y - desiredSize.Y);
                break;
            }
            case 4:
                break;
        }

        availableSize = ::g::Uno::Math::Max3(availableSize, ::g::Uno::Float2__New1(0.0f));
    }

    for (int i1 = 0; i1 < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(elements), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/])); ++i1)
    {
        ::g::Fuse::Node* c1 = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(elements), ::TYPES[13/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i1), &ret3), ret3);

        if (!__this->AffectsLayout(c1))
            continue;

        if (DockLayout::GetDock(c1) != 4)
            continue;

        uPtr(c1)->ArrangeMarginBox(availablePosition, availableSize, 3 | flags_);
    }
}

// internal override sealed float2 GetContentSize(Uno.Collections.IList<Fuse.Node> elements, float2 fillSize, Fuse.SizeFlags fillSet) :250
void DockLayout__GetContentSize_fn(DockLayout* __this, uObject* elements, ::g::Uno::Float2* fillSize, int* fillSet, ::g::Uno::Float2* __retval)
{
    ::g::Uno::Float2 fillSize_ = *fillSize;
    int fillSet_ = *fillSet;
    return *__retval = __this->MeasureSubtree(elements, 0, fillSize_, fillSet_), void();
}

// public static Fuse.Layouts.Dock GetDock(Fuse.Node elm) :234
void DockLayout__GetDock_fn(::g::Fuse::Node* elm, int* __retval)
{
    *__retval = DockLayout::GetDock(elm);
}

// private float2 MeasureSubtree(Uno.Collections.IList<Fuse.Node> elements, int childIndex, float2 fillSize, Fuse.SizeFlags fillSet) :255
void DockLayout__MeasureSubtree_fn(DockLayout* __this, uObject* elements, int* childIndex, ::g::Uno::Float2* fillSize, int* fillSet, ::g::Uno::Float2* __retval)
{
    *__retval = __this->MeasureSubtree(elements, *childIndex, *fillSize, *fillSet);
}

// public generated DockLayout New() :223
void DockLayout__New1_fn(DockLayout** __retval)
{
    *__retval = DockLayout::New1();
}

// public static void ResetDock(Fuse.Node elm) :244
void DockLayout__ResetDock_fn(::g::Fuse::Node* elm)
{
    DockLayout::ResetDock(elm);
}

// public static void SetDock(Fuse.Node elm, Fuse.Layouts.Dock dock) :228
void DockLayout__SetDock_fn(::g::Fuse::Node* elm, int* dock)
{
    DockLayout::SetDock(elm, *dock);
}

uSStrong< ::g::Fuse::PropertyHandle*> DockLayout::_dockProperty_;

// public generated DockLayout() [instance] :223
void DockLayout::ctor_1()
{
    ctor_();
}

// private float2 MeasureSubtree(Uno.Collections.IList<Fuse.Node> elements, int childIndex, float2 fillSize, Fuse.SizeFlags fillSet) [instance] :255
::g::Uno::Float2 DockLayout::MeasureSubtree(uObject* elements, int childIndex, ::g::Uno::Float2 fillSize, int fillSet)
{
    ::g::Fuse::Node* ret4;
    ::g::Fuse::Node* ret5;
    ::g::Fuse::Node* c;

    if (childIndex >= ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(elements), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/])))
    {
        ::g::Uno::Float2 mx = ::g::Uno::Float2__New1(0.0f);

        for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(elements), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/])); ++i)
        {
            c = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(elements), ::TYPES[13/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret4), ret4);

            if (!AffectsLayout(c))
                continue;

            if (DockLayout::GetDock(c) == 4)
            {
                ::g::Uno::Float2 sz = uPtr(c)->GetMarginSize(fillSize, fillSet);
                mx = ::g::Uno::Math::Max3(sz, mx);
            }
        }

        return mx;
    }

    c = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(elements), ::TYPES[13/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(childIndex), &ret5), ret5);

    switch (DockLayout::GetDock(c))
    {
        case 0:
        case 1:
        {
            ::g::Uno::Float2 cds = uPtr(c)->GetMarginSize(fillSize, fillSet & -2);
            fillSize.X = (fillSize.X - cds.X);
            ::g::Uno::Float2 subtree = MeasureSubtree(elements, childIndex + 1, fillSize, fillSet);
            return ::g::Uno::Float2__New2(cds.X + subtree.X, ::g::Uno::Math::Max1(cds.Y, subtree.Y));
        }
        case 2:
        case 3:
        {
            ::g::Uno::Float2 cds1 = uPtr(c)->GetMarginSize(fillSize, fillSet & -3);
            fillSize.Y = (fillSize.Y - cds1.Y);
            ::g::Uno::Float2 subtree1 = MeasureSubtree(elements, childIndex + 1, fillSize, fillSet);
            return ::g::Uno::Float2__New2(::g::Uno::Math::Max1(cds1.X, subtree1.X), cds1.Y + subtree1.Y);
        }
        case 4:
            return MeasureSubtree(elements, childIndex + 1, fillSize, fillSet);
    }

    return ::g::Uno::Float2__New1(0.0f);
}

// public static Fuse.Layouts.Dock GetDock(Fuse.Node elm) [static] :234
int DockLayout::GetDock(::g::Fuse::Node* elm)
{
    DockLayout_typeof()->Init();
    uObject* val;

    if (uPtr(uPtr(elm)->Properties())->TryGet(DockLayout::_dockProperty(), &val))
        return uUnbox<int>(::TYPES[23/*Fuse.Layouts.Dock*/], val);

    return 4;
}

// public generated DockLayout New() [static] :223
DockLayout* DockLayout::New1()
{
    DockLayout* obj1 = (DockLayout*)uNew(DockLayout_typeof());
    obj1->ctor_1();
    return obj1;
}

// public static void ResetDock(Fuse.Node elm) [static] :244
void DockLayout::ResetDock(::g::Fuse::Node* elm)
{
    DockLayout_typeof()->Init();
    uPtr(uPtr(elm)->Properties())->Clear(DockLayout::_dockProperty());
    elm->InvalidateLayout(2);
}

// public static void SetDock(Fuse.Node elm, Fuse.Layouts.Dock dock) [static] :228
void DockLayout::SetDock(::g::Fuse::Node* elm, int dock)
{
    DockLayout_typeof()->Init();
    uPtr(uPtr(elm)->Properties())->Set(DockLayout::_dockProperty(), uBox<int>(::TYPES[23/*Fuse.Layouts.Dock*/], dock));
    elm->InvalidateLayout(2);
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\Layouts\$.uno(1845)
// --------------------------------------------------------------------

// public enum FlowDirection :1845
uEnumType* FlowDirection_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Layouts.FlowDirection", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "LeftToRight", 0LL,
        "RightToLeft", 1LL);
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\Layouts\$.uno(657)
// -------------------------------------------------------------------

// public sealed class GridLayout :657
// {
// static GridLayout() :657
static void GridLayout__cctor_1_fn(uType* __type)
{
    ::g::Fuse::Layouts::Row* collection2;
    ::g::Fuse::Layouts::Column* collection1;
    GridLayout::_staticDefaultRow_ = (collection2 = ::g::Fuse::Layouts::Row::New1(), uPtr(collection2)->HeightMetric(1), 1, uPtr(collection2)->Height(1.0f), 1.0f, collection2);
    GridLayout::_staticDefaultColumn_ = (collection1 = ::g::Fuse::Layouts::Column::New1(), uPtr(collection1)->WidthMetric(1), 1, uPtr(collection1)->Width(1.0f), 1.0f, collection1);
    GridLayout::_rowProperty_ = ::g::Fuse::Properties::CreateHandle();
    GridLayout::_actualRowProperty_ = ::g::Fuse::Properties::CreateHandle();
    GridLayout::_rowSpanProperty_ = ::g::Fuse::Properties::CreateHandle();
    GridLayout::_columnProperty_ = ::g::Fuse::Properties::CreateHandle();
    GridLayout::_actualColumnProperty_ = ::g::Fuse::Properties::CreateHandle();
    GridLayout::_columnSpanProperty_ = ::g::Fuse::Properties::CreateHandle();
}

::g::Fuse::Layouts::Layout_type* GridLayout_typeof()
{
    static uSStrong< ::g::Fuse::Layouts::Layout_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 15;
    options.ObjectSize = sizeof(GridLayout);
    options.TypeSize = sizeof(::g::Fuse::Layouts::Layout_type);
    type = (::g::Fuse::Layouts::Layout_type*)uClassType::New("Fuse.Layouts.GridLayout", options);
    type->SetBase(::g::Fuse::Layouts::Layout_typeof());
    type->fp_ctor_ = (void*)GridLayout__New1_fn;
    type->fp_cctor_ = GridLayout__cctor_1_fn;
    type->fp_ArrangePaddingBox = (void(*)(::g::Fuse::Layouts::Layout*, uObject*, ::g::Uno::Float4*, ::g::Uno::Float2*, int*))GridLayout__ArrangePaddingBox_fn;
    type->fp_GetContentSize = (void(*)(::g::Fuse::Layouts::Layout*, uObject*, ::g::Uno::Float2*, int*, ::g::Uno::Float2*))GridLayout__GetContentSize_fn;
    type->fp_IsMarginBoxDependent = (void(*)(::g::Fuse::Layouts::Layout*, ::g::Fuse::Node*, int*))GridLayout__IsMarginBoxDependent_fn;
    ::STRINGS[6] = uString::Const("GridLayout: The ColumnData property is deprecated and will be removed in a future release, use Columns instead");
    ::STRINGS[5] = uString::Const("C:\\ProgramData\\Uno\\Packages\\Fuse.Controls\\0.19.3\\Layouts\\$.uno");
    ::STRINGS[7] = uString::Const("GridLayout: The RowData property is deprecated and will be removed in a future release, use Rows instead");
    ::TYPES[24] = ::g::Fuse::Layouts::Row_typeof();
    ::TYPES[25] = ::g::Fuse::Layouts::Column_typeof();
    ::TYPES[26] = ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Fuse::Layouts::Row_typeof());
    ::TYPES[27] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Layouts::Row_typeof());
    ::TYPES[28] = ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Fuse::Layouts::Column_typeof());
    ::TYPES[29] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Layouts::Column_typeof());
    ::TYPES[11] = ::g::Uno::Float4_typeof();
    ::TYPES[8] = ::g::Uno::Float2_typeof();
    ::TYPES[12] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[13] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[30] = ::g::Fuse::Layouts::DefinitionBase_typeof();
    ::TYPES[14] = ::g::Fuse::SizeFlags_typeof();
    ::TYPES[6] = ::g::Uno::Int_typeof();
    ::TYPES[16] = ::g::Uno::Action_typeof();
    ::TYPES[22] = ::g::Fuse::Node_typeof();
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Layouts::Column_typeof());
    ::TYPES[9] = ::g::Uno::Bool_typeof();
    ::TYPES[31] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Int_typeof());
    ::TYPES[2] = uObject_typeof();
    ::TYPES[32] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Layouts::Row_typeof());
    ::TYPES[33] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::Int_typeof());
    ::TYPES[3] = ::g::Uno::Float_typeof();
    ::TYPES[34] = ::g::Uno::Collections::IListExtensions_typeof()->MakeMethod(1, ::g::Fuse::Layouts::Column_typeof());
    ::TYPES[5] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Layouts::Column_typeof());
    ::TYPES[35] = ::g::Fuse::Layouts::Layout_typeof();
    ::TYPES[36] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[37] = ::g::Uno::Collections::IListExtensions_typeof()->MakeMethod(1, ::g::Fuse::Layouts::Row_typeof());
    ::TYPES[38] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Layouts::Row_typeof());
    type->SetFields(1,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Layouts::GridLayout, _cellSpacing), 0,
        ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Fuse::Layouts::Column_typeof()), offsetof(::g::Fuse::Layouts::GridLayout, _columns), 0,
        ::g::Fuse::Elements::Alignment_typeof(), offsetof(::g::Fuse::Layouts::GridLayout, _contentAlignment), 0,
        ::g::Fuse::Layouts::Column_typeof(), offsetof(::g::Fuse::Layouts::GridLayout, _defaultColumn), 0,
        ::g::Fuse::Layouts::Row_typeof(), offsetof(::g::Fuse::Layouts::GridLayout, _defaultRow), 0,
        ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Fuse::Layouts::Row_typeof()), offsetof(::g::Fuse::Layouts::GridLayout, _rows), 0,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Layouts::GridLayout::_actualColumnProperty_, uFieldFlagsStatic,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Layouts::GridLayout::_actualRowProperty_, uFieldFlagsStatic,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Layouts::GridLayout::_columnProperty_, uFieldFlagsStatic,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Layouts::GridLayout::_columnSpanProperty_, uFieldFlagsStatic,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Layouts::GridLayout::_rowProperty_, uFieldFlagsStatic,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Layouts::GridLayout::_rowSpanProperty_, uFieldFlagsStatic,
        ::g::Fuse::Layouts::Column_typeof(), (uintptr_t)&::g::Fuse::Layouts::GridLayout::_staticDefaultColumn_, uFieldFlagsStatic,
        ::g::Fuse::Layouts::Row_typeof(), (uintptr_t)&::g::Fuse::Layouts::GridLayout::_staticDefaultRow_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(35,
        new uFunction("get_CellSpacing", NULL, (void*)GridLayout__get_CellSpacing_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_CellSpacing", NULL, (void*)GridLayout__set_CellSpacing_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_ColumnCount", NULL, (void*)GridLayout__get_ColumnCount_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_ColumnCount", NULL, (void*)GridLayout__set_ColumnCount_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("get_ColumnData", NULL, (void*)GridLayout__get_ColumnData_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_ColumnData", NULL, (void*)GridLayout__set_ColumnData_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_ColumnList", NULL, (void*)GridLayout__get_ColumnList_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Layouts::Column_typeof()), 0),
        new uFunction("get_Columns", NULL, (void*)GridLayout__get_Columns_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Columns", NULL, (void*)GridLayout__set_Columns_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_ContentAlignment", NULL, (void*)GridLayout__get_ContentAlignment_fn, 0, false, ::g::Fuse::Elements::Alignment_typeof(), 0),
        new uFunction("set_ContentAlignment", NULL, (void*)GridLayout__set_ContentAlignment_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Elements::Alignment_typeof()),
        new uFunction("get_DefaultColumn", NULL, (void*)GridLayout__get_DefaultColumn_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_DefaultColumn", NULL, (void*)GridLayout__set_DefaultColumn_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_DefaultRow", NULL, (void*)GridLayout__get_DefaultRow_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_DefaultRow", NULL, (void*)GridLayout__set_DefaultRow_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("GetColumn", NULL, (void*)GridLayout__GetColumn_fn, 0, true, ::g::Uno::Int_typeof(), 1, ::g::Fuse::Node_typeof()),
        new uFunction("GetColumnSpan", NULL, (void*)GridLayout__GetColumnSpan_fn, 0, true, ::g::Uno::Int_typeof(), 1, ::g::Fuse::Node_typeof()),
        new uFunction("GetRow", NULL, (void*)GridLayout__GetRow_fn, 0, true, ::g::Uno::Int_typeof(), 1, ::g::Fuse::Node_typeof()),
        new uFunction("GetRowSpan", NULL, (void*)GridLayout__GetRowSpan_fn, 0, true, ::g::Uno::Int_typeof(), 1, ::g::Fuse::Node_typeof()),
        new uFunction(".ctor", NULL, (void*)GridLayout__New1_fn, 0, true, GridLayout_typeof(), 0),
        new uFunction("ResetColumn", NULL, (void*)GridLayout__ResetColumn_fn, 0, true, uVoid_typeof(), 1, ::g::Fuse::Node_typeof()),
        new uFunction("ResetColumnSpan", NULL, (void*)GridLayout__ResetColumnSpan_fn, 0, true, uVoid_typeof(), 1, ::g::Fuse::Node_typeof()),
        new uFunction("ResetRow", NULL, (void*)GridLayout__ResetRow_fn, 0, true, uVoid_typeof(), 1, ::g::Fuse::Node_typeof()),
        new uFunction("ResetRowSpan", NULL, (void*)GridLayout__ResetRowSpan_fn, 0, true, uVoid_typeof(), 1, ::g::Fuse::Node_typeof()),
        new uFunction("get_RowCount", NULL, (void*)GridLayout__get_RowCount_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_RowCount", NULL, (void*)GridLayout__set_RowCount_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("get_RowData", NULL, (void*)GridLayout__get_RowData_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_RowData", NULL, (void*)GridLayout__set_RowData_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_RowList", NULL, (void*)GridLayout__get_RowList_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Layouts::Row_typeof()), 0),
        new uFunction("get_Rows", NULL, (void*)GridLayout__get_Rows_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Rows", NULL, (void*)GridLayout__set_Rows_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("SetColumn", NULL, (void*)GridLayout__SetColumn_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Node_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("SetColumnSpan", NULL, (void*)GridLayout__SetColumnSpan_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Node_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("SetRow", NULL, (void*)GridLayout__SetRow_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Node_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("SetRowSpan", NULL, (void*)GridLayout__SetRowSpan_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Node_typeof(), ::g::Uno::Int_typeof()));
    return type;
}

// public GridLayout() :1021
void GridLayout__ctor_1_fn(GridLayout* __this)
{
    __this->ctor_1();
}

// internal override sealed void ArrangePaddingBox(Uno.Collections.IList<Fuse.Node> elements, float4 padding, float2 availableSize, Fuse.SizeFlags flags) :1308
void GridLayout__ArrangePaddingBox_fn(GridLayout* __this, uObject* elements, ::g::Uno::Float4* padding, ::g::Uno::Float2* availableSize, int* flags)
{
    ::g::Uno::Float2 availableSize_ = *availableSize;
    ::g::Uno::Float4 padding_ = *padding;
    ::g::Fuse::Node* ret5;
    int flags_ = *flags;
    ::g::Fuse::Layouts::Column* ret6;
    ::g::Fuse::Layouts::Column* ret7;
    ::g::Fuse::Layouts::Row* ret8;
    ::g::Fuse::Layouts::Row* ret9;
    ::g::Uno::Float2 remainSize = ::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__op_Subtraction2(availableSize_, ::g::Uno::Float2__New2(padding_.X, padding_.Y)), ::g::Uno::Float2__New2(padding_.Z, padding_.W));
    ::g::Uno::Float2 measured = __this->Measure(elements, remainSize, 3);
    ::g::Uno::Float2 paddingOffset = ::g::Uno::Float2__New2(padding_.X, padding_.Y);
    ::g::Uno::Float2 off = ::g::Uno::Float2__New1(0.0f);
    int eca = __this->EffectiveContentAlignment();

    switch (::g::Fuse::Elements::AlignmentHelpers::GetHorizontalSimpleAlign(eca))
    {
        case 0:
        {
            off.X = padding_.X;
            break;
        }
        case 1:
        {
            off.X = (((remainSize.X / 2.0f) - (measured.X / 2.0f)) + padding_.X);
            break;
        }
        case 2:
        {
            off.X = ((availableSize_.X - measured.X) - padding_.Z);
            break;
        }
    }

    switch (::g::Fuse::Elements::AlignmentHelpers::GetVerticalSimpleAlign(eca))
    {
        case 0:
        {
            off.Y = padding_.Y;
            break;
        }
        case 1:
        {
            off.Y = (((remainSize.Y / 2.0f) - (measured.Y / 2.0f)) + padding_.Y);
            break;
        }
        case 2:
        {
            off.Y = ((availableSize_.Y - measured.Y) - padding_.W);
            break;
        }
    }

    float effectiveCellSpacing = __this->EffectiveCellSpacing();

    for (int n = 0; n < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(elements), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/])); n++)
    {
        ::g::Fuse::Node* child = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(elements), ::TYPES[13/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(n), &ret5), ret5);

        if (__this->ArrangeMarginBoxSpecial(child, padding_, availableSize_, flags_))
            continue;

        int column = __this->GetActualColumn(child);
        int row = __this->GetActualRow(child);
        int rowSpan = GridLayout::GetRowSpan(child);
        int columnSpan = GridLayout::GetColumnSpan(child);
        float x = 0.0f;
        float y = 0.0f;
        float w = remainSize.X;
        float h = remainSize.Y;

        if ((column >= 0) && (column < uPtr(__this->_columns)->Count()))
        {
            ::g::Fuse::Layouts::Column* c = (::g::Uno::Collections::ObservableList__get_Item_fn(uPtr(__this->_columns), uCRef<int>(column), &ret6), ret6);
            x = uPtr(c)->ActualOffset();
            w = c->ActualWidth();

            for (int s = column + 1; s < ::g::Uno::Math::Min8(uPtr(__this->_columns)->Count(), column + columnSpan); ++s)
                w = w + (uPtr((::g::Uno::Collections::ObservableList__get_Item_fn(uPtr(__this->_columns), uCRef<int>(s), &ret7), ret7))->ActualWidth() + effectiveCellSpacing);
        }

        if ((row >= 0) && (row < uPtr(__this->_rows)->Count()))
        {
            ::g::Fuse::Layouts::Row* r = (::g::Uno::Collections::ObservableList__get_Item_fn(uPtr(__this->_rows), uCRef<int>(row), &ret8), ret8);
            y = uPtr(r)->ActualOffset();
            h = r->ActualHeight();

            for (int s1 = row + 1; s1 < ::g::Uno::Math::Min8(uPtr(__this->_rows)->Count(), row + rowSpan); ++s1)
                h = h + (uPtr((::g::Uno::Collections::ObservableList__get_Item_fn(uPtr(__this->_rows), uCRef<int>(s1), &ret9), ret9))->ActualHeight() + effectiveCellSpacing);
        }

        uPtr(child)->ArrangeMarginBox(::g::Uno::Float2__op_Addition2(off, ::g::Uno::Float2__New2(x, y)), ::g::Uno::Float2__New2(w, h), 3 | flags_);
    }
}

// public float get_CellSpacing() :812
void GridLayout__get_CellSpacing_fn(GridLayout* __this, float* __retval)
{
    *__retval = __this->CellSpacing();
}

// public void set_CellSpacing(float value) :813
void GridLayout__set_CellSpacing_fn(GridLayout* __this, float* value)
{
    __this->CellSpacing(*value);
}

// private void Changed() :1027
void GridLayout__Changed_fn(GridLayout* __this)
{
    __this->Changed();
}

// private void ColumnAdded(Fuse.Layouts.Column c) :1050
void GridLayout__ColumnAdded_fn(GridLayout* __this, ::g::Fuse::Layouts::Column* c)
{
    __this->ColumnAdded(c);
}

// public int get_ColumnCount() :783
void GridLayout__get_ColumnCount_fn(GridLayout* __this, int* __retval)
{
    *__retval = __this->ColumnCount();
}

// public void set_ColumnCount(int value) :787
void GridLayout__set_ColumnCount_fn(GridLayout* __this, int* value)
{
    __this->ColumnCount(*value);
}

// public string get_ColumnData() :745
void GridLayout__get_ColumnData_fn(GridLayout* __this, uString** __retval)
{
    *__retval = __this->ColumnData();
}

// public void set_ColumnData(string value) :750
void GridLayout__set_ColumnData_fn(GridLayout* __this, uString* value)
{
    __this->ColumnData(value);
}

// public Uno.Collections.IList<Fuse.Layouts.Column> get_ColumnList() :728
void GridLayout__get_ColumnList_fn(GridLayout* __this, uObject** __retval)
{
    *__retval = __this->ColumnList();
}

// private void ColumnRemoved(Fuse.Layouts.Column c) :1058
void GridLayout__ColumnRemoved_fn(GridLayout* __this, ::g::Fuse::Layouts::Column* c)
{
    __this->ColumnRemoved(c);
}

// public string get_Columns() :732
void GridLayout__get_Columns_fn(GridLayout* __this, uString** __retval)
{
    *__retval = __this->Columns();
}

// public void set_Columns(string value) :736
void GridLayout__set_Columns_fn(GridLayout* __this, uString* value)
{
    __this->Columns(value);
}

// public Fuse.Elements.Alignment get_ContentAlignment() :826
void GridLayout__get_ContentAlignment_fn(GridLayout* __this, int* __retval)
{
    *__retval = __this->ContentAlignment();
}

// public void set_ContentAlignment(Fuse.Elements.Alignment value) :827
void GridLayout__set_ContentAlignment_fn(GridLayout* __this, int* value)
{
    __this->ContentAlignment(*value);
}

// public string get_DefaultColumn() :761
void GridLayout__get_DefaultColumn_fn(GridLayout* __this, uString** __retval)
{
    *__retval = __this->DefaultColumn();
}

// public void set_DefaultColumn(string value) :762
void GridLayout__set_DefaultColumn_fn(GridLayout* __this, uString* value)
{
    __this->DefaultColumn(value);
}

// public string get_DefaultRow() :693
void GridLayout__get_DefaultRow_fn(GridLayout* __this, uString** __retval)
{
    *__retval = __this->DefaultRow();
}

// public void set_DefaultRow(string value) :694
void GridLayout__set_DefaultRow_fn(GridLayout* __this, uString* value)
{
    __this->DefaultRow(value);
}

// private float get_EffectiveCellSpacing() :1073
void GridLayout__get_EffectiveCellSpacing_fn(GridLayout* __this, float* __retval)
{
    *__retval = __this->EffectiveCellSpacing();
}

// private Fuse.Elements.Alignment get_EffectiveContentAlignment() :1294
void GridLayout__get_EffectiveContentAlignment_fn(GridLayout* __this, int* __retval)
{
    *__retval = __this->EffectiveContentAlignment();
}

// private Fuse.Layouts.Column GenDefaultColumn() :774
void GridLayout__GenDefaultColumn_fn(GridLayout* __this, ::g::Fuse::Layouts::Column** __retval)
{
    *__retval = __this->GenDefaultColumn();
}

// private Fuse.Layouts.Row GenDefaultRow() :706
void GridLayout__GenDefaultRow_fn(GridLayout* __this, ::g::Fuse::Layouts::Row** __retval)
{
    *__retval = __this->GenDefaultRow();
}

// private int GetActualColumn(Fuse.Node elm) :981
void GridLayout__GetActualColumn_fn(GridLayout* __this, ::g::Fuse::Node* elm, int* __retval)
{
    *__retval = __this->GetActualColumn(elm);
}

// private void GetActualPositions(Uno.Collections.IList<Fuse.Node> elements) :903
void GridLayout__GetActualPositions_fn(GridLayout* __this, uObject* elements)
{
    __this->GetActualPositions(elements);
}

// private int GetActualRow(Fuse.Node elm) :857
void GridLayout__GetActualRow_fn(GridLayout* __this, ::g::Fuse::Node* elm, int* __retval)
{
    *__retval = __this->GetActualRow(elm);
}

// public static int GetColumn(Fuse.Node elm) :896
void GridLayout__GetColumn_fn(::g::Fuse::Node* elm, int* __retval)
{
    *__retval = GridLayout::GetColumn(elm);
}

// private Fuse.Layouts.Column GetColumns(int column) :795
void GridLayout__GetColumns_fn(GridLayout* __this, int* column, ::g::Fuse::Layouts::Column** __retval)
{
    *__retval = __this->GetColumns(*column);
}

// public static int GetColumnSpan(Fuse.Node elm) :1001
void GridLayout__GetColumnSpan_fn(::g::Fuse::Node* elm, int* __retval)
{
    *__retval = GridLayout::GetColumnSpan(elm);
}

// internal override sealed float2 GetContentSize(Uno.Collections.IList<Fuse.Node> elements, float2 fillSize, Fuse.SizeFlags fillSet) :1066
void GridLayout__GetContentSize_fn(GridLayout* __this, uObject* elements, ::g::Uno::Float2* fillSize, int* fillSet, ::g::Uno::Float2* __retval)
{
    ::g::Uno::Float2 fillSize_ = *fillSize;
    int fillSet_ = *fillSet;
    return *__retval = __this->Measure(elements, fillSize_, fillSet_), void();
}

// public static int GetRow(Fuse.Node elm) :850
void GridLayout__GetRow_fn(::g::Fuse::Node* elm, int* __retval)
{
    *__retval = GridLayout::GetRow(elm);
}

// private Fuse.Layouts.Row GetRows(int row) :802
void GridLayout__GetRows_fn(GridLayout* __this, int* row, ::g::Fuse::Layouts::Row** __retval)
{
    *__retval = __this->GetRows(*row);
}

// public static int GetRowSpan(Fuse.Node elm) :877
void GridLayout__GetRowSpan_fn(::g::Fuse::Node* elm, int* __retval)
{
    *__retval = GridLayout::GetRowSpan(elm);
}

// internal override sealed Fuse.LayoutDependent IsMarginBoxDependent(Fuse.Node child) :1388
void GridLayout__IsMarginBoxDependent_fn(GridLayout* __this, ::g::Fuse::Node* child, int* __retval)
{
    ::g::Fuse::Layouts::Column* c = __this->GetColumns(__this->GetActualColumn(child));
    ::g::Fuse::Layouts::Row* r = __this->GetRows(__this->GetActualRow(child));
    return *__retval = ((uPtr(c)->WidthMetric() != 2) && (uPtr(r)->HeightMetric() != 2)) ? 0 : 4, void();
}

// private float2 Measure(Uno.Collections.IList<Fuse.Node> elements, float2 fillSize, Fuse.SizeFlags fillSet) :1079
void GridLayout__Measure_fn(GridLayout* __this, uObject* elements, ::g::Uno::Float2* fillSize, int* fillSet, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Measure(elements, *fillSize, *fillSet);
}

// public GridLayout New() :1021
void GridLayout__New1_fn(GridLayout** __retval)
{
    *__retval = GridLayout::New1();
}

// public static void ResetColumn(Fuse.Node elm) :989
void GridLayout__ResetColumn_fn(::g::Fuse::Node* elm)
{
    GridLayout::ResetColumn(elm);
}

// public static void ResetColumnSpan(Fuse.Node elm) :1012
void GridLayout__ResetColumnSpan_fn(::g::Fuse::Node* elm)
{
    GridLayout::ResetColumnSpan(elm);
}

// public static void ResetRow(Fuse.Node elm) :865
void GridLayout__ResetRow_fn(::g::Fuse::Node* elm)
{
    GridLayout::ResetRow(elm);
}

// public static void ResetRowSpan(Fuse.Node elm) :884
void GridLayout__ResetRowSpan_fn(::g::Fuse::Node* elm)
{
    GridLayout::ResetRowSpan(elm);
}

// private void RowAdded(Fuse.Layouts.Row r) :1034
void GridLayout__RowAdded_fn(GridLayout* __this, ::g::Fuse::Layouts::Row* r)
{
    __this->RowAdded(r);
}

// public int get_RowCount() :715
void GridLayout__get_RowCount_fn(GridLayout* __this, int* __retval)
{
    *__retval = __this->RowCount();
}

// public void set_RowCount(int value) :719
void GridLayout__set_RowCount_fn(GridLayout* __this, int* value)
{
    __this->RowCount(*value);
}

// public string get_RowData() :677
void GridLayout__get_RowData_fn(GridLayout* __this, uString** __retval)
{
    *__retval = __this->RowData();
}

// public void set_RowData(string value) :682
void GridLayout__set_RowData_fn(GridLayout* __this, uString* value)
{
    __this->RowData(value);
}

// public Uno.Collections.IList<Fuse.Layouts.Row> get_RowList() :660
void GridLayout__get_RowList_fn(GridLayout* __this, uObject** __retval)
{
    *__retval = __this->RowList();
}

// private void RowRemoved(Fuse.Layouts.Row r) :1042
void GridLayout__RowRemoved_fn(GridLayout* __this, ::g::Fuse::Layouts::Row* r)
{
    __this->RowRemoved(r);
}

// public string get_Rows() :664
void GridLayout__get_Rows_fn(GridLayout* __this, uString** __retval)
{
    *__retval = __this->Rows();
}

// public void set_Rows(string value) :668
void GridLayout__set_Rows_fn(GridLayout* __this, uString* value)
{
    __this->Rows(value);
}

// public static void SetColumn(Fuse.Node elm, int col) :890
void GridLayout__SetColumn_fn(::g::Fuse::Node* elm, int* col)
{
    GridLayout::SetColumn(elm, *col);
}

// public static void SetColumnSpan(Fuse.Node elm, int span) :995
void GridLayout__SetColumnSpan_fn(::g::Fuse::Node* elm, int* span)
{
    GridLayout::SetColumnSpan(elm, *span);
}

// public static void SetRow(Fuse.Node elm, int row) :844
void GridLayout__SetRow_fn(::g::Fuse::Node* elm, int* row)
{
    GridLayout::SetRow(elm, *row);
}

// public static void SetRowSpan(Fuse.Node elm, int span) :871
void GridLayout__SetRowSpan_fn(::g::Fuse::Node* elm, int* span)
{
    GridLayout::SetRowSpan(elm, *span);
}

uSStrong< ::g::Fuse::PropertyHandle*> GridLayout::_actualColumnProperty_;
uSStrong< ::g::Fuse::PropertyHandle*> GridLayout::_actualRowProperty_;
uSStrong< ::g::Fuse::PropertyHandle*> GridLayout::_columnProperty_;
uSStrong< ::g::Fuse::PropertyHandle*> GridLayout::_columnSpanProperty_;
uSStrong< ::g::Fuse::PropertyHandle*> GridLayout::_rowProperty_;
uSStrong< ::g::Fuse::PropertyHandle*> GridLayout::_rowSpanProperty_;
uSStrong< ::g::Fuse::Layouts::Column*> GridLayout::_staticDefaultColumn_;
uSStrong< ::g::Fuse::Layouts::Row*> GridLayout::_staticDefaultRow_;

// public GridLayout() [instance] :1021
void GridLayout::ctor_1()
{
    _defaultRow = GridLayout::_staticDefaultRow();
    _defaultColumn = GridLayout::_staticDefaultColumn();
    _cellSpacing = 0.0f;
    ctor_();
    _rows = ((::g::Uno::Collections::ObservableList*)::g::Uno::Collections::ObservableList::New1(::TYPES[26/*Uno.Collections.ObservableList<Fuse.Layouts.Row>*/], uDelegate::New(::TYPES[27/*Uno.Action<Fuse.Layouts.Row>*/], (void*)GridLayout__RowAdded_fn, this), uDelegate::New(::TYPES[27/*Uno.Action<Fuse.Layouts.Row>*/], (void*)GridLayout__RowRemoved_fn, this)));
    _columns = ((::g::Uno::Collections::ObservableList*)::g::Uno::Collections::ObservableList::New1(::TYPES[28/*Uno.Collections.ObservableList<Fuse.Layouts.Column>*/], uDelegate::New(::TYPES[29/*Uno.Action<Fuse.Layouts.Column>*/], (void*)GridLayout__ColumnAdded_fn, this), uDelegate::New(::TYPES[29/*Uno.Action<Fuse.Layouts.Column>*/], (void*)GridLayout__ColumnRemoved_fn, this)));
}

// public float get_CellSpacing() [instance] :812
float GridLayout::CellSpacing()
{
    return _cellSpacing;
}

// public void set_CellSpacing(float value) [instance] :813
void GridLayout::CellSpacing(float value)
{
    if (_cellSpacing != value)
    {
        _cellSpacing = value;
        Changed();
    }
}

// private void Changed() [instance] :1027
void GridLayout::Changed()
{
    InvalidateLayout();
}

// private void ColumnAdded(Fuse.Layouts.Column c) [instance] :1050
void GridLayout::ColumnAdded(::g::Fuse::Layouts::Column* c)
{
    if (uPtr(c)->Implicit())
        return;

    uPtr(c)->add_Changed(uDelegate::New(::TYPES[16/*Uno.Action*/], (void*)GridLayout__Changed_fn, this));
    Changed();
}

// public int get_ColumnCount() [instance] :783
int GridLayout::ColumnCount()
{
    return ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(ColumnList()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Layouts.Column>*/]));
}

// public void set_ColumnCount(int value) [instance] :787
void GridLayout::ColumnCount(int value)
{
    ::g::Fuse::Layouts::Column* ret28;

    while (::g::Uno::Collections::ICollection::Count(uInterface(uPtr(ColumnList()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Layouts.Column>*/])) < value)
        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(ColumnList()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Layouts.Column>*/]), GenDefaultColumn());

    while (::g::Uno::Collections::ICollection::Count(uInterface(uPtr(ColumnList()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Layouts.Column>*/])) > value)
        ::g::Uno::Collections::IListExtensions__RemoveLast_fn(::TYPES[34/*Uno.Collections.IListExtensions.RemoveLast<Fuse.Layouts.Column>*/], ColumnList(), &ret28);

    Changed();
}

// public string get_ColumnData() [instance] :745
uString* GridLayout::ColumnData()
{
    ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[6/*"GridLayout:...*/], 1, ::STRINGS[5/*"C:\\Program...*/], 747);
    return Columns();
}

// public void set_ColumnData(string value) [instance] :750
void GridLayout::ColumnData(uString* value)
{
    ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[6/*"GridLayout:...*/], 1, ::STRINGS[5/*"C:\\Program...*/], 752);
    Columns(value);
}

// public Uno.Collections.IList<Fuse.Layouts.Column> get_ColumnList() [instance] :728
uObject* GridLayout::ColumnList()
{
    return (uObject*)_columns;
}

// private void ColumnRemoved(Fuse.Layouts.Column c) [instance] :1058
void GridLayout::ColumnRemoved(::g::Fuse::Layouts::Column* c)
{
    if (uPtr(c)->Implicit())
        return;

    uPtr(c)->remove_Changed(uDelegate::New(::TYPES[16/*Uno.Action*/], (void*)GridLayout__Changed_fn, this));
    Changed();
}

// public string get_Columns() [instance] :732
uString* GridLayout::Columns()
{
    return ::g::Fuse::Layouts::Column::Serialize1(ColumnList());
}

// public void set_Columns(string value) [instance] :736
void GridLayout::Columns(uString* value)
{
    ::g::Uno::Collections::ICollection::Clear(uInterface(uPtr(ColumnList()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Layouts.Column>*/]));
    ::g::Fuse::Layouts::Column::Parse1(value, ColumnList());
}

// public Fuse.Elements.Alignment get_ContentAlignment() [instance] :826
int GridLayout::ContentAlignment()
{
    return _contentAlignment;
}

// public void set_ContentAlignment(Fuse.Elements.Alignment value) [instance] :827
void GridLayout::ContentAlignment(int value)
{
    if (_contentAlignment != value)
    {
        _contentAlignment = value;
        Changed();
    }
}

// public string get_DefaultColumn() [instance] :761
uString* GridLayout::DefaultColumn()
{
    return uPtr(_defaultColumn)->Serialize();
}

// public void set_DefaultColumn(string value) [instance] :762
void GridLayout::DefaultColumn(uString* value)
{
    ::g::Fuse::Layouts::Column* ret29;
    _defaultColumn = ::g::Fuse::Layouts::Column::Parse(value);

    for (int i = 0; i < uPtr(_columns)->Count(); ++i)
        if (uPtr((::g::Uno::Collections::ObservableList__get_Item_fn(uPtr(_columns), uCRef<int>(i), &ret29), ret29))->Implicit())
            ::g::Uno::Collections::ObservableList__ReplaceAt_fn(uPtr(_columns), uCRef<int>(i), GenDefaultColumn());

    Changed();
}

// public string get_DefaultRow() [instance] :693
uString* GridLayout::DefaultRow()
{
    return uPtr(_defaultRow)->Serialize();
}

// public void set_DefaultRow(string value) [instance] :694
void GridLayout::DefaultRow(uString* value)
{
    ::g::Fuse::Layouts::Row* ret30;
    _defaultRow = ::g::Fuse::Layouts::Row::Parse(value);

    for (int i = 0; i < uPtr(_rows)->Count(); ++i)
        if (uPtr((::g::Uno::Collections::ObservableList__get_Item_fn(uPtr(_rows), uCRef<int>(i), &ret30), ret30))->Implicit())
            ::g::Uno::Collections::ObservableList__ReplaceAt_fn(uPtr(_rows), uCRef<int>(i), GenDefaultRow());

    Changed();
}

// private float get_EffectiveCellSpacing() [instance] :1073
float GridLayout::EffectiveCellSpacing()
{
    return SnapUp(CellSpacing());
}

// private Fuse.Elements.Alignment get_EffectiveContentAlignment() [instance] :1294
int GridLayout::EffectiveContentAlignment()
{
    int ca = ContentAlignment();

    if (ca == 0)
    {
        if (Container != NULL)
            ca = uPtr(Container)->Alignment();
        else
            ca = 5;
    }

    return ca;
}

// private Fuse.Layouts.Column GenDefaultColumn() [instance] :774
::g::Fuse::Layouts::Column* GridLayout::GenDefaultColumn()
{
    ::g::Fuse::Layouts::Column* c = uPtr(_defaultColumn)->CloneDef();
    uPtr(c)->Implicit(true);
    return c;
}

// private Fuse.Layouts.Row GenDefaultRow() [instance] :706
::g::Fuse::Layouts::Row* GridLayout::GenDefaultRow()
{
    ::g::Fuse::Layouts::Row* c = uPtr(_defaultRow)->CloneDef();
    uPtr(c)->Implicit(true);
    return c;
}

// private int GetActualColumn(Fuse.Node elm) [instance] :981
int GridLayout::GetActualColumn(::g::Fuse::Node* elm)
{
    uObject* v;

    if (uPtr(uPtr(elm)->Properties())->TryGet(GridLayout::_actualColumnProperty(), &v))
        return uUnbox<int>(::TYPES[6/*int*/], v);

    return 0;
}

// private void GetActualPositions(Uno.Collections.IList<Fuse.Node> elements) [instance] :903
void GridLayout::GetActualPositions(uObject* elements)
{
    ::g::Fuse::Node* ret10;
    ::g::Fuse::Node* ret11;
    ::g::Fuse::Node* ret12;
    ::g::Fuse::Node* ret13;
    int ret14;
    ::g::Uno::Collections::List__Enumerator<int> ret15;
    int columnCount = ::g::Uno::Math::Max8(1, ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(ColumnList()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Layouts.Column>*/])));

    for (int n = 0; n < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(elements), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/])); n++)
    {
        if (!AffectsLayout((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(elements), ::TYPES[13/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(n), &ret10), ret10)))
            continue;

        columnCount = ::g::Uno::Math::Max8(columnCount, GridLayout::GetColumn((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(elements), ::TYPES[13/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(n), &ret11), ret11)) + GridLayout::GetColumnSpan((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(elements), ::TYPES[13/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(n), &ret12), ret12)));
    }

    ::g::Uno::Collections::List* rowAvail = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New2(::TYPES[31/*Uno.Collections.List<int>*/], columnCount);

    for (int c = 0; c < columnCount; c++)
        ::g::Uno::Collections::List__Add_fn(rowAvail, uCRef<int>(0));

    int rowAt = 0;
    int colAt = 0;

    for (int n1 = 0; n1 < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(elements), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/])); n1++)
    {
        ::g::Fuse::Node* elm = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(elements), ::TYPES[13/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(n1), &ret13), ret13);

        if (!AffectsLayout(elm))
            continue;

        uObject* v;
        bool haveCol = false;
        bool haveSpec = false;

        if (uPtr(uPtr(elm)->Properties())->TryGet(GridLayout::_columnProperty(), &v))
        {
            colAt = uUnbox<int>(::TYPES[6/*int*/], v);
            haveCol = true;
            haveSpec = true;
        }

        if (uPtr(uPtr(elm)->Properties())->TryGet(GridLayout::_rowProperty(), &v))
        {
            rowAt = uUnbox<int>(::TYPES[6/*int*/], v);

            if (!haveCol)
                colAt = 0;

            haveSpec = true;
        }

        if (!haveSpec)

            while (rowAt < (::g::Uno::Collections::List__get_Item_fn(uPtr(rowAvail), uCRef<int>(colAt), &ret14), ret14))
            {
                colAt++;

                if (colAt >= columnCount)
                {
                    rowAt++;
                    colAt = 0;
                }
            }

        uPtr(uPtr(elm)->Properties())->Set(GridLayout::_actualRowProperty(), uBox<int>(::TYPES[6/*int*/], rowAt));
        uPtr(elm->Properties())->Set(GridLayout::_actualColumnProperty(), uBox<int>(::TYPES[6/*int*/], colAt));
        int xs = GridLayout::GetColumnSpan(elm);
        int ys = GridLayout::GetRowSpan(elm);

        for (int c1 = colAt; c1 < ::g::Uno::Math::Min8(columnCount, colAt + xs); c1++)
            ::g::Uno::Collections::List__set_Item_fn(uPtr(rowAvail), uCRef<int>(c1), uCRef<int>(rowAt + ys));
    }

    int rowCount = ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(RowList()), ::TYPES[32/*Uno.Collections.ICollection<Fuse.Layouts.Row>*/]));

    for (::g::Uno::Collections::List__Enumerator<int> enum3 = (::g::Uno::Collections::List__GetEnumerator_fn(rowAvail, &ret15), ret15); enum3.MoveNext(::TYPES[33/*Uno.Collections.List<int>.Enumerator*/]); )
    {
        int r = enum3.Current(::TYPES[33/*Uno.Collections.List<int>.Enumerator*/]);
        rowCount = ::g::Uno::Math::Max8(rowCount, r);
    }

    while (uPtr(_rows)->Count() < rowCount)
        ::g::Uno::Collections::ObservableList__Add_fn(uPtr(_rows), GenDefaultRow());

    while (uPtr(_columns)->Count() < columnCount)
        ::g::Uno::Collections::ObservableList__Add_fn(uPtr(_columns), GenDefaultColumn());
}

// private int GetActualRow(Fuse.Node elm) [instance] :857
int GridLayout::GetActualRow(::g::Fuse::Node* elm)
{
    uObject* v;

    if (uPtr(uPtr(elm)->Properties())->TryGet(GridLayout::_actualRowProperty(), &v))
        return uUnbox<int>(::TYPES[6/*int*/], v);

    return 0;
}

// private Fuse.Layouts.Column GetColumns(int column) [instance] :795
::g::Fuse::Layouts::Column* GridLayout::GetColumns(int column)
{
    ::g::Fuse::Layouts::Column* ret16;

    if ((column >= 0) && (column < uPtr(_columns)->Count()))
        return (::g::Uno::Collections::ObservableList__get_Item_fn(uPtr(_columns), uCRef<int>(column), &ret16), ret16);

    return NULL;
}

// private Fuse.Layouts.Row GetRows(int row) [instance] :802
::g::Fuse::Layouts::Row* GridLayout::GetRows(int row)
{
    ::g::Fuse::Layouts::Row* ret17;

    if ((row >= 0) && (row < uPtr(_rows)->Count()))
        return (::g::Uno::Collections::ObservableList__get_Item_fn(uPtr(_rows), uCRef<int>(row), &ret17), ret17);

    return NULL;
}

// private float2 Measure(Uno.Collections.IList<Fuse.Node> elements, float2 fillSize, Fuse.SizeFlags fillSet) [instance] :1079
::g::Uno::Float2 GridLayout::Measure(uObject* elements, ::g::Uno::Float2 fillSize, int fillSet)
{
    ::g::Fuse::Layouts::Column* ret18;
    ::g::Fuse::Layouts::Row* ret19;
    ::g::Fuse::Node* ret20;
    ::g::Fuse::Layouts::Column* ret21;
    ::g::Fuse::Layouts::Row* ret22;
    ::g::Fuse::Layouts::Column* ret23;
    ::g::Fuse::Layouts::Row* ret24;
    ::g::Fuse::Node* ret25;
    ::g::Fuse::Layouts::Column* ret26;
    ::g::Fuse::Layouts::Row* ret27;
    float effectiveCellSpacing = EffectiveCellSpacing();
    GetActualPositions(elements);
    bool fillHorizontal = (fillSet & 1) == 1;
    bool fillVertical = (fillSet & 2) == 2;
    float availableWidth = fillSize.X - (effectiveCellSpacing * (float)::g::Uno::Math::Max8(0, uPtr(_columns)->Count() - 1));
    float availableHeight = fillSize.Y - (effectiveCellSpacing * (float)::g::Uno::Math::Max8(0, uPtr(_rows)->Count() - 1));

    for (int i = 0; i < uPtr(_columns)->Count(); i++)
    {
        ::g::Fuse::Layouts::Column* c = (::g::Uno::Collections::ObservableList__get_Item_fn(uPtr(_columns), uCRef<int>(i), &ret18), ret18);

        if (uPtr(c)->WidthMetric() == 0)
        {
            uPtr(c)->ActualWidth(uPtr(c)->Width());
            availableWidth = availableWidth - c->Width();
        }
        else
            uPtr(c)->ActualWidth(0.0f);
    }

    for (int i1 = 0; i1 < uPtr(_rows)->Count(); i1++)
    {
        ::g::Fuse::Layouts::Row* r = (::g::Uno::Collections::ObservableList__get_Item_fn(uPtr(_rows), uCRef<int>(i1), &ret19), ret19);

        if (uPtr(r)->HeightMetric() == 0)
        {
            uPtr(r)->ActualHeight(uPtr(r)->Height());
            availableHeight = availableHeight - r->Height();
        }
        else
            uPtr(r)->ActualHeight(0.0f);
    }

    availableWidth = ::g::Uno::Math::Max1(availableWidth, 0.0f);
    availableHeight = ::g::Uno::Math::Max1(availableHeight, 0.0f);

    for (int n = 0; n < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(elements), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/])); n++)
    {
        ::g::Fuse::Node* child = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(elements), ::TYPES[13/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(n), &ret20), ret20);

        if (!AffectsLayout(child))
            continue;

        int x = GetActualColumn(child);
        int y = GetActualRow(child);
        ::g::Fuse::Layouts::Column* c1 = GetColumns(x);

        if ((c1 != NULL) && (uPtr(c1)->WidthMetric() != 2))
            c1 = NULL;

        ::g::Fuse::Layouts::Row* r1 = GetRows(y);

        if ((r1 != NULL) && (uPtr(r1)->HeightMetric() != 2))
            r1 = NULL;

        if ((c1 == NULL) && (r1 == NULL))
            continue;

        ::g::Uno::Float2 cds = uPtr(child)->GetMarginSize(::g::Uno::Float2__New1(0.0f), 0);

        if (c1 != NULL)
        {
            float w = ::g::Uno::Math::Max1(uPtr(c1)->ActualWidth(), cds.X);
            availableWidth = availableWidth - (w - c1->ActualWidth());
            c1->ActualWidth(w);
        }

        if (r1 != NULL)
        {
            float h = ::g::Uno::Math::Max1(uPtr(r1)->ActualHeight(), cds.Y);
            availableHeight = availableHeight - (h - r1->ActualHeight());
            r1->ActualHeight(h);
        }
    }

    availableWidth = ::g::Uno::Math::Max1(availableWidth, 0.0f);
    availableHeight = ::g::Uno::Math::Max1(availableHeight, 0.0f);
    float widthProportion = 0.0f;
    float heightProportion = 0.0f;

    for (int i2 = 0; i2 < uPtr(_columns)->Count(); i2++)
    {
        ::g::Fuse::Layouts::Column* c2 = (::g::Uno::Collections::ObservableList__get_Item_fn(uPtr(_columns), uCRef<int>(i2), &ret21), ret21);

        if (uPtr(c2)->WidthMetric() == 1)
            widthProportion = widthProportion + uPtr(c2)->Width();
    }

    for (int i3 = 0; i3 < uPtr(_rows)->Count(); i3++)
    {
        ::g::Fuse::Layouts::Row* r2 = (::g::Uno::Collections::ObservableList__get_Item_fn(uPtr(_rows), uCRef<int>(i3), &ret22), ret22);

        if (uPtr(r2)->HeightMetric() == 1)
            heightProportion = heightProportion + uPtr(r2)->Height();
    }

    if (fillHorizontal)
    {
        float extraWidth = 0.0f;
        float colWidth = availableWidth / widthProportion;

        for (int i4 = 0; i4 < uPtr(_columns)->Count(); i4++)
        {
            ::g::Fuse::Layouts::Column* c3 = (::g::Uno::Collections::ObservableList__get_Item_fn(uPtr(_columns), uCRef<int>(i4), &ret23), ret23);

            if (uPtr(c3)->WidthMetric() != 1)
                continue;

            float w1 = Snap((uPtr(c3)->Width() * colWidth) + extraWidth);
            extraWidth = extraWidth + ((c3->Width() * colWidth) - w1);
            c3->ActualWidth(w1);
        }
    }

    if (fillVertical)
    {
        float extraHeight = 0.0f;
        float rowHeight = availableHeight / heightProportion;

        for (int i5 = 0; i5 < uPtr(_rows)->Count(); i5++)
        {
            ::g::Fuse::Layouts::Row* r3 = (::g::Uno::Collections::ObservableList__get_Item_fn(uPtr(_rows), uCRef<int>(i5), &ret24), ret24);

            if (uPtr(r3)->HeightMetric() != 1)
                continue;

            float h1 = Snap((uPtr(r3)->Height() * rowHeight) + extraHeight);
            extraHeight = extraHeight + ((r3->Height() * rowHeight) - h1);
            r3->ActualHeight(h1);
        }
    }

    if (!fillHorizontal || !fillVertical)

        for (int n1 = 0; n1 < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(elements), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/])); n1++)
        {
            ::g::Fuse::Node* child1 = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(elements), ::TYPES[13/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(n1), &ret25), ret25);

            if (!AffectsLayout(child1))
                continue;

            float width = availableWidth;
            float height = availableHeight;
            int x1 = GetActualColumn(child1);
            int y1 = GetActualRow(child1);
            ::g::Fuse::Layouts::Column* c4 = GetColumns(x1);
            ::g::Fuse::Layouts::Row* r4 = GetRows(y1);

            if (uPtr(c4)->WidthMetric() != 1)
                c4 = NULL;

            if (uPtr(r4)->HeightMetric() != 1)
                r4 = NULL;

            if ((c4 == NULL) && (r4 == NULL))
                continue;

            if (c4 != NULL)
                width = uPtr(c4)->ActualWidth();

            if (r4 != NULL)
                height = uPtr(r4)->ActualHeight();

            int sf = 0;

            if (fillHorizontal)
                sf = sf | 1;

            if (fillVertical)
                sf = sf | 2;

            ::g::Uno::Float2 cds1 = uPtr(child1)->GetMarginSize(::g::Uno::Float2__New2(width, height), sf);

            if (c4 != NULL)
            {
                if (!fillHorizontal)
                    uPtr(c4)->ActualWidth(::g::Uno::Math::Max1(uPtr(c4)->ActualWidth(), cds1.X));
            }

            if (r4 != NULL)
            {
                if (!fillVertical)
                    uPtr(r4)->ActualHeight(::g::Uno::Math::Max1(uPtr(r4)->ActualHeight(), cds1.Y));
            }
        }

    float totalWidth = 0.0f;
    float totalHeight = 0.0f;

    for (int i6 = 0; i6 < uPtr(_columns)->Count(); i6++)
    {
        if (i6 > 0)
            totalWidth = totalWidth + effectiveCellSpacing;

        ::g::Fuse::Layouts::Column* c5 = (::g::Uno::Collections::ObservableList__get_Item_fn(uPtr(_columns), uCRef<int>(i6), &ret26), ret26);
        uPtr(c5)->ActualOffset(totalWidth);
        totalWidth = totalWidth + c5->ActualWidth();
    }

    for (int i7 = 0; i7 < uPtr(_rows)->Count(); i7++)
    {
        if (i7 > 0)
            totalHeight = totalHeight + effectiveCellSpacing;

        ::g::Fuse::Layouts::Row* r5 = (::g::Uno::Collections::ObservableList__get_Item_fn(uPtr(_rows), uCRef<int>(i7), &ret27), ret27);
        uPtr(r5)->ActualOffset(totalHeight);
        totalHeight = totalHeight + r5->ActualHeight();
    }

    return ::g::Uno::Float2__New2(totalWidth, totalHeight);
}

// private void RowAdded(Fuse.Layouts.Row r) [instance] :1034
void GridLayout::RowAdded(::g::Fuse::Layouts::Row* r)
{
    if (uPtr(r)->Implicit())
        return;

    uPtr(r)->add_Changed(uDelegate::New(::TYPES[16/*Uno.Action*/], (void*)GridLayout__Changed_fn, this));
    Changed();
}

// public int get_RowCount() [instance] :715
int GridLayout::RowCount()
{
    return ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(RowList()), ::TYPES[32/*Uno.Collections.ICollection<Fuse.Layouts.Row>*/]));
}

// public void set_RowCount(int value) [instance] :719
void GridLayout::RowCount(int value)
{
    ::g::Fuse::Layouts::Row* ret31;

    while (::g::Uno::Collections::ICollection::Count(uInterface(uPtr(RowList()), ::TYPES[32/*Uno.Collections.ICollection<Fuse.Layouts.Row>*/])) < value)
        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(RowList()), ::TYPES[32/*Uno.Collections.ICollection<Fuse.Layouts.Row>*/]), GenDefaultRow());

    while (::g::Uno::Collections::ICollection::Count(uInterface(uPtr(RowList()), ::TYPES[32/*Uno.Collections.ICollection<Fuse.Layouts.Row>*/])) > value)
        ::g::Uno::Collections::IListExtensions__RemoveLast_fn(::TYPES[37/*Uno.Collections.IListExtensions.RemoveLast<Fuse.Layouts.Row>*/], RowList(), &ret31);

    Changed();
}

// public string get_RowData() [instance] :677
uString* GridLayout::RowData()
{
    ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[7/*"GridLayout:...*/], 1, ::STRINGS[5/*"C:\\Program...*/], 679);
    return Rows();
}

// public void set_RowData(string value) [instance] :682
void GridLayout::RowData(uString* value)
{
    ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[7/*"GridLayout:...*/], 1, ::STRINGS[5/*"C:\\Program...*/], 684);
    Rows(value);
}

// public Uno.Collections.IList<Fuse.Layouts.Row> get_RowList() [instance] :660
uObject* GridLayout::RowList()
{
    return (uObject*)_rows;
}

// private void RowRemoved(Fuse.Layouts.Row r) [instance] :1042
void GridLayout::RowRemoved(::g::Fuse::Layouts::Row* r)
{
    if (uPtr(r)->Implicit())
        return;

    uPtr(r)->remove_Changed(uDelegate::New(::TYPES[16/*Uno.Action*/], (void*)GridLayout__Changed_fn, this));
    Changed();
}

// public string get_Rows() [instance] :664
uString* GridLayout::Rows()
{
    return ::g::Fuse::Layouts::Row::Serialize1(RowList());
}

// public void set_Rows(string value) [instance] :668
void GridLayout::Rows(uString* value)
{
    ::g::Uno::Collections::ICollection::Clear(uInterface(uPtr(RowList()), ::TYPES[32/*Uno.Collections.ICollection<Fuse.Layouts.Row>*/]));
    ::g::Fuse::Layouts::Row::Parse1(value, RowList());
}

// public static int GetColumn(Fuse.Node elm) [static] :896
int GridLayout::GetColumn(::g::Fuse::Node* elm)
{
    GridLayout_typeof()->Init();
    uObject* v;

    if (uPtr(uPtr(elm)->Properties())->TryGet(GridLayout::_columnProperty(), &v))
        return uUnbox<int>(::TYPES[6/*int*/], v);
    else
        return 0;
}

// public static int GetColumnSpan(Fuse.Node elm) [static] :1001
int GridLayout::GetColumnSpan(::g::Fuse::Node* elm)
{
    GridLayout_typeof()->Init();
    uObject* v;

    if (uPtr(uPtr(elm)->Properties())->TryGet(GridLayout::_columnSpanProperty(), &v))
        return uUnbox<int>(::TYPES[6/*int*/], v);

    return 1;
}

// public static int GetRow(Fuse.Node elm) [static] :850
int GridLayout::GetRow(::g::Fuse::Node* elm)
{
    GridLayout_typeof()->Init();
    uObject* v;

    if (uPtr(uPtr(elm)->Properties())->TryGet(GridLayout::_rowProperty(), &v))
        return uUnbox<int>(::TYPES[6/*int*/], v);
    else
        return 0;
}

// public static int GetRowSpan(Fuse.Node elm) [static] :877
int GridLayout::GetRowSpan(::g::Fuse::Node* elm)
{
    GridLayout_typeof()->Init();
    uObject* v;

    if (uPtr(uPtr(elm)->Properties())->TryGet(GridLayout::_rowSpanProperty(), &v))
        return uUnbox<int>(::TYPES[6/*int*/], v);
    else
        return 1;
}

// public GridLayout New() [static] :1021
GridLayout* GridLayout::New1()
{
    GridLayout* obj4 = (GridLayout*)uNew(GridLayout_typeof());
    obj4->ctor_1();
    return obj4;
}

// public static void ResetColumn(Fuse.Node elm) [static] :989
void GridLayout::ResetColumn(::g::Fuse::Node* elm)
{
    GridLayout_typeof()->Init();
    uPtr(uPtr(elm)->Properties())->Clear(GridLayout::_columnProperty());
    ::g::Fuse::Layouts::Layout::InvalidateAncestorLayout(elm);
}

// public static void ResetColumnSpan(Fuse.Node elm) [static] :1012
void GridLayout::ResetColumnSpan(::g::Fuse::Node* elm)
{
    GridLayout_typeof()->Init();
    uPtr(uPtr(elm)->Properties())->Clear(GridLayout::_columnSpanProperty());
    ::g::Fuse::Layouts::Layout::InvalidateAncestorLayout(elm);
}

// public static void ResetRow(Fuse.Node elm) [static] :865
void GridLayout::ResetRow(::g::Fuse::Node* elm)
{
    GridLayout_typeof()->Init();
    uPtr(uPtr(elm)->Properties())->Clear(GridLayout::_rowProperty());
    ::g::Fuse::Layouts::Layout::InvalidateAncestorLayout(elm);
}

// public static void ResetRowSpan(Fuse.Node elm) [static] :884
void GridLayout::ResetRowSpan(::g::Fuse::Node* elm)
{
    GridLayout_typeof()->Init();
    uPtr(uPtr(elm)->Properties())->Clear(GridLayout::_rowSpanProperty());
    ::g::Fuse::Layouts::Layout::InvalidateAncestorLayout(elm);
}

// public static void SetColumn(Fuse.Node elm, int col) [static] :890
void GridLayout::SetColumn(::g::Fuse::Node* elm, int col)
{
    GridLayout_typeof()->Init();
    uPtr(uPtr(elm)->Properties())->Set(GridLayout::_columnProperty(), uBox<int>(::TYPES[6/*int*/], col));
    ::g::Fuse::Layouts::Layout::InvalidateAncestorLayout(elm);
}

// public static void SetColumnSpan(Fuse.Node elm, int span) [static] :995
void GridLayout::SetColumnSpan(::g::Fuse::Node* elm, int span)
{
    GridLayout_typeof()->Init();
    uPtr(uPtr(elm)->Properties())->Set(GridLayout::_columnSpanProperty(), uBox<int>(::TYPES[6/*int*/], span));
    ::g::Fuse::Layouts::Layout::InvalidateAncestorLayout(elm);
}

// public static void SetRow(Fuse.Node elm, int row) [static] :844
void GridLayout::SetRow(::g::Fuse::Node* elm, int row)
{
    GridLayout_typeof()->Init();
    uPtr(uPtr(elm)->Properties())->Set(GridLayout::_rowProperty(), uBox<int>(::TYPES[6/*int*/], row));
    ::g::Fuse::Layouts::Layout::InvalidateAncestorLayout(elm);
}

// public static void SetRowSpan(Fuse.Node elm, int span) [static] :871
void GridLayout::SetRowSpan(::g::Fuse::Node* elm, int span)
{
    GridLayout_typeof()->Init();
    uPtr(uPtr(elm)->Properties())->Set(GridLayout::_rowSpanProperty(), uBox<int>(::TYPES[6/*int*/], span));
    ::g::Fuse::Layouts::Layout::InvalidateAncestorLayout(elm);
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\Layouts\$.uno(1412)
// --------------------------------------------------------------------

// public abstract class Layout :1412
// {
// static Layout() :1412
static void Layout__cctor__fn(uType* __type)
{
    Layout::_fillPaddingProperty_ = ::g::Fuse::Properties::CreateHandle();
}

Layout_type* Layout_typeof()
{
    static uSStrong<Layout_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Layout);
    options.TypeSize = sizeof(Layout_type);
    type = (Layout_type*)uClassType::New("Fuse.Layouts.Layout", options);
    type->fp_cctor_ = Layout__cctor__fn;
    type->fp_IsMarginBoxDependent = Layout__IsMarginBoxDependent_fn;
    ::STRINGS[8] = uString::Const("Removing an invalid container from Layout");
    ::STRINGS[9] = uString::Const("Only a single container is supported for Layout");
    ::TYPES[6] = ::g::Uno::Int_typeof();
    ::TYPES[22] = ::g::Fuse::Node_typeof();
    ::TYPES[36] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[11] = ::g::Uno::Float4_typeof();
    ::TYPES[14] = ::g::Fuse::SizeFlags_typeof();
    ::TYPES[39] = ::g::Uno::Int_typeof()->Array();
    ::TYPES[10] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[9] = ::g::Uno::Bool_typeof();
    ::TYPES[40] = ::g::Fuse::Controls::Panel_typeof();
    ::TYPES[2] = uObject_typeof();
    ::TYPES[8] = ::g::Uno::Float2_typeof();
    type->SetFields(0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::Fuse::Layouts::Layout, Container), 0,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Layouts::Layout::_fillPaddingProperty_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(3,
        new uFunction("GetFillPadding", NULL, (void*)Layout__GetFillPadding_fn, 0, true, ::g::Uno::Bool_typeof(), 1, ::g::Fuse::Node_typeof()),
        new uFunction("ResetFillPadding", NULL, (void*)Layout__ResetFillPadding_fn, 0, true, uVoid_typeof(), 1, ::g::Fuse::Node_typeof()),
        new uFunction("SetFillPadding", NULL, (void*)Layout__SetFillPadding_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Node_typeof(), ::g::Uno::Bool_typeof()));
    return type;
}

// internal Layout() :1417
void Layout__ctor__fn(Layout* __this)
{
    __this->ctor_();
}

// protected bool AffectsLayout(Fuse.Node n) :1469
void Layout__AffectsLayout_fn(Layout* __this, ::g::Fuse::Node* n, bool* __retval)
{
    *__retval = __this->AffectsLayout(n);
}

// protected bool ArrangeMarginBoxSpecial(Fuse.Node e, float4 padding, float2 size, Fuse.SizeFlags flags) :1479
void Layout__ArrangeMarginBoxSpecial_fn(Layout* __this, ::g::Fuse::Node* e, ::g::Uno::Float4* padding, ::g::Uno::Float2* size, int* flags, bool* __retval)
{
    *__retval = __this->ArrangeMarginBoxSpecial(e, *padding, *size, *flags);
}

// internal static void AssignZOrder(Uno.Collections.IList<Fuse.Node> nodes) :1588
void Layout__AssignZOrder_fn(uObject* nodes)
{
    Layout::AssignZOrder(nodes);
}

// public static bool GetFillPadding(Fuse.Node n) :1433
void Layout__GetFillPadding_fn(::g::Fuse::Node* n, bool* __retval)
{
    *__retval = Layout::GetFillPadding(n);
}

// private static Fuse.Controls.Panel GetPanel(Fuse.Node elm) :1562
void Layout__GetPanel_fn(::g::Fuse::Node* elm, ::g::Fuse::Controls::Panel** __retval)
{
    *__retval = Layout::GetPanel(elm);
}

// protected static void InvalidateAncestorLayout(Fuse.Node child) :1511
void Layout__InvalidateAncestorLayout_fn(::g::Fuse::Node* child)
{
    Layout::InvalidateAncestorLayout(child);
}

// protected void InvalidateLayout() :1524
void Layout__InvalidateLayout_fn(Layout* __this)
{
    __this->InvalidateLayout();
}

// internal virtual Fuse.LayoutDependent IsMarginBoxDependent(Fuse.Node child) :1518
void Layout__IsMarginBoxDependent_fn(Layout* __this, ::g::Fuse::Node* child, int* __retval)
{
    return *__retval = 4, void();
}

// private static void PanelInvalidateLayout(Fuse.Node elm) :1574
void Layout__PanelInvalidateLayout_fn(::g::Fuse::Node* elm)
{
    Layout::PanelInvalidateLayout(elm);
}

// internal void RemoveContainer(Fuse.Controls.Panel element) :1458
void Layout__RemoveContainer_fn(Layout* __this, ::g::Fuse::Controls::Panel* element)
{
    __this->RemoveContainer(element);
}

// public static void ResetFillPadding(Fuse.Node n) :1443
void Layout__ResetFillPadding_fn(::g::Fuse::Node* n)
{
    Layout::ResetFillPadding(n);
}

// internal void SetContainer(Fuse.Controls.Panel element) :1451
void Layout__SetContainer_fn(Layout* __this, ::g::Fuse::Controls::Panel* element)
{
    __this->SetContainer(element);
}

// public static void SetFillPadding(Fuse.Node n, bool f) :1426
void Layout__SetFillPadding_fn(::g::Fuse::Node* n, bool* f)
{
    Layout::SetFillPadding(n, *f);
}

// protected float Snap(float p) :1557
void Layout__Snap_fn(Layout* __this, float* p, float* __retval)
{
    *__retval = __this->Snap(*p);
}

// protected float2 Snap(float2 p) :1550
void Layout__Snap1_fn(Layout* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Snap1(*p);
}

// protected bool get_SnapToPixels() :1532
void Layout__get_SnapToPixels_fn(Layout* __this, bool* __retval)
{
    *__retval = __this->SnapToPixels();
}

// protected float SnapUp(float p) :1545
void Layout__SnapUp_fn(Layout* __this, float* p, float* __retval)
{
    *__retval = __this->SnapUp(*p);
}

// protected float2 SnapUp(float2 p) :1538
void Layout__SnapUp1_fn(Layout* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval)
{
    *__retval = __this->SnapUp1(*p);
}

uSStrong< ::g::Fuse::PropertyHandle*> Layout::_fillPaddingProperty_;

// internal Layout() [instance] :1417
void Layout::ctor_()
{
}

// protected bool AffectsLayout(Fuse.Node n) [instance] :1469
bool Layout::AffectsLayout(::g::Fuse::Node* n)
{
    return (n != NULL) && (uPtr(n)->LayoutRole() == 0);
}

// protected bool ArrangeMarginBoxSpecial(Fuse.Node e, float4 padding, float2 size, Fuse.SizeFlags flags) [instance] :1479
bool Layout::ArrangeMarginBoxSpecial(::g::Fuse::Node* e, ::g::Uno::Float4 padding, ::g::Uno::Float2 size, int flags)
{
    if (e == NULL)
        return false;

    int lr = uPtr(e)->LayoutRole();

    if (lr == 2)
    {
        ::g::Fuse::Elements::Element* elm = uAs< ::g::Fuse::Elements::Element*>(e, ::TYPES[36/*Fuse.Elements.Element*/]);

        if (e != NULL)
            uPtr(elm)->RequestLayout();

        return true;
    }

    if (lr == 1)
    {
        bool b = Layout::GetFillPadding(e);
        ::g::Uno::Float2 p = b ? ::g::Uno::Float2__New1(0.0f) : ::g::Uno::Float2__New2(padding.X, padding.Y);
        ::g::Uno::Float2 s = b ? size : ::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__op_Subtraction2(size, ::g::Uno::Float2__New2(padding.X, padding.Y)), ::g::Uno::Float2__New2(padding.Z, padding.W));
        uPtr(e)->ArrangeMarginBox(p, s, 3 | flags);
        return true;
    }

    return false;
}

// protected void InvalidateLayout() [instance] :1524
void Layout::InvalidateLayout()
{
    if (Container != NULL)
        uPtr(Container)->InvalidateLayout(2);
}

// internal void RemoveContainer(Fuse.Controls.Panel element) [instance] :1458
void Layout::RemoveContainer(::g::Fuse::Controls::Panel* element)
{
    if (element != Container)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[8/*"Removing an...*/]));

    Container = NULL;
}

// internal void SetContainer(Fuse.Controls.Panel element) [instance] :1451
void Layout::SetContainer(::g::Fuse::Controls::Panel* element)
{
    if (Container != NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[9/*"Only a sing...*/]));

    Container = element;
}

// protected float Snap(float p) [instance] :1557
float Layout::Snap(float p)
{
    return Snap1(::g::Uno::Float2__New1(p)).X;
}

// protected float2 Snap(float2 p) [instance] :1550
::g::Uno::Float2 Layout::Snap1(::g::Uno::Float2 p)
{
    if (SnapToPixels())
        return uPtr(Container)->InternSnap(p);

    return p;
}

// protected bool get_SnapToPixels() [instance] :1532
bool Layout::SnapToPixels()
{
    return (Container != NULL) && uPtr(Container)->SnapToPixels();
}

// protected float SnapUp(float p) [instance] :1545
float Layout::SnapUp(float p)
{
    return SnapUp1(::g::Uno::Float2__New1(p)).X;
}

// protected float2 SnapUp(float2 p) [instance] :1538
::g::Uno::Float2 Layout::SnapUp1(::g::Uno::Float2 p)
{
    if (SnapToPixels())
        return uPtr(Container)->InternSnapUp(p);

    return p;
}

// internal static void AssignZOrder(Uno.Collections.IList<Fuse.Node> nodes) [static] :1588
void Layout::AssignZOrder(uObject* nodes)
{
    Layout_typeof()->Init();
    ::g::Fuse::Node* ret2;
    uArray* current = uArray::Init<int>(::TYPES[39/*int[]*/], 3, 0, 0, 0);

    for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(nodes), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::TYPES[22/*Fuse.Node*/]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::g::Uno::Collections::IEnumerator_typeof())); )
    {
        ::g::Fuse::Node* node = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[10/*Uno.Collections.IEnumerator<Fuse.Node>*/]), &ret2), ret2);
        int c = uPtr(node)->Layer();
        node->ZLayer = c;

        if (!node->ZOffsetFixed)
            node->ZOffset = (uPtr(current)->Item<int>(c)--);
    }
}

// public static bool GetFillPadding(Fuse.Node n) [static] :1433
bool Layout::GetFillPadding(::g::Fuse::Node* n)
{
    Layout_typeof()->Init();
    uObject* v;

    if (uPtr(uPtr(n)->Properties())->TryGet(Layout::_fillPaddingProperty(), &v))
        return uUnbox<bool>(::TYPES[9/*bool*/], v);

    return uPtr(n)->Layer() == 0;
}

// private static Fuse.Controls.Panel GetPanel(Fuse.Node elm) [static] :1562
::g::Fuse::Controls::Panel* Layout::GetPanel(::g::Fuse::Node* elm)
{
    Layout_typeof()->Init();

    while (elm != NULL)
    {
        if (uIs(elm, ::TYPES[40/*Fuse.Controls.Panel*/]))
            return uAs< ::g::Fuse::Controls::Panel*>(elm, ::TYPES[40/*Fuse.Controls.Panel*/]);

        elm = uPtr(elm)->Parent();
    }

    return NULL;
}

// protected static void InvalidateAncestorLayout(Fuse.Node child) [static] :1511
void Layout::InvalidateAncestorLayout(::g::Fuse::Node* child)
{
    Layout_typeof()->Init();

    if (uPtr(child)->Parent() != NULL)
        uPtr(uPtr(child)->Parent())->InvalidateLayout(2);
}

// private static void PanelInvalidateLayout(Fuse.Node elm) [static] :1574
void Layout::PanelInvalidateLayout(::g::Fuse::Node* elm)
{
    Layout_typeof()->Init();
    ::g::Fuse::Controls::Panel* p = Layout::GetPanel(elm);

    if (p != NULL)
        uPtr(p)->InvalidateLayout(2);
}

// public static void ResetFillPadding(Fuse.Node n) [static] :1443
void Layout::ResetFillPadding(::g::Fuse::Node* n)
{
    Layout_typeof()->Init();
    uPtr(uPtr(n)->Properties())->Clear(Layout::_fillPaddingProperty());
    Layout::PanelInvalidateLayout(n);
}

// public static void SetFillPadding(Fuse.Node n, bool f) [static] :1426
void Layout::SetFillPadding(::g::Fuse::Node* n, bool f)
{
    Layout_typeof()->Init();
    uPtr(uPtr(n)->Properties())->Set(Layout::_fillPaddingProperty(), uBox(::TYPES[9/*bool*/], f));
    Layout::PanelInvalidateLayout(n);
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\Layouts\$.uno(1601)
// --------------------------------------------------------------------

// public static class Layouts :1601
// {
// static Layouts() :1601
static void Layouts__cctor__fn(uType* __type)
{
    Layouts::Default_ = ::g::Fuse::Layouts::DefaultLayout::New1();
}

uClassType* Layouts_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Layouts.Layouts", options);
    type->fp_cctor_ = Layouts__cctor__fn;
    ::TYPES[35] = ::g::Fuse::Layouts::Layout_typeof();
    type->SetFields(0,
        ::g::Fuse::Layouts::Layout_typeof(), (uintptr_t)&::g::Fuse::Layouts::Layouts::Default_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("Default", 0));
    return type;
}

uSStrong< ::g::Fuse::Layouts::Layout*> Layouts::Default_;
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\Layouts\$.uno(457)
// -------------------------------------------------------------------

// public enum Metric :457
uEnumType* Metric_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Layouts.Metric", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Absolute", 0LL,
        "Proportion", 1LL,
        "Auto", 2LL);
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\Layouts\$.uno(1621)
// --------------------------------------------------------------------

// public enum Orientation :1621
uEnumType* Orientation_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Layouts.Orientation", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Horizontal", 0LL,
        "Vertical", 1LL);
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\Layouts\$.uno(414)
// -------------------------------------------------------------------

// protected internal struct DefinitionBase.ParseDataItem :414
// {
uStructType* DefinitionBase__ParseDataItem_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ValueSize = sizeof(DefinitionBase__ParseDataItem);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Layouts.DefinitionBase.ParseDataItem", options);
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Layouts::DefinitionBase__ParseDataItem, Value), 0,
        ::g::Fuse::Layouts::Metric_typeof(), offsetof(::g::Fuse::Layouts::DefinitionBase__ParseDataItem, Metric), 0);
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\Layouts\$.uno(561)
// -------------------------------------------------------------------

// public sealed class Row :561
// {
uType* Row_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(Row);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Layouts.Row", options);
    type->SetBase(::g::Fuse::Layouts::DefinitionBase_typeof());
    type->fp_ctor_ = (void*)Row__New1_fn;
    ::STRINGS[0] = uString::Const("auto");
    ::STRINGS[1] = uString::Const("*");
    ::STRINGS[2] = uString::Const("");
    ::STRINGS[3] = uString::Const(", ");
    ::TYPES[0] = ::g::Fuse::Layouts::DefinitionBase__ParseDataItem_typeof();
    ::TYPES[1] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Layouts::DefinitionBase__ParseDataItem_typeof());
    ::TYPES[2] = uObject_typeof();
    ::TYPES[3] = ::g::Uno::Float_typeof();
    ::TYPES[32] = ::g::Uno::Collections::ICollection_typeof()->MakeType(Row_typeof());
    ::TYPES[38] = ::g::Uno::Collections::IList_typeof()->MakeType(Row_typeof());
    ::TYPES[6] = ::g::Uno::Int_typeof();
    type->SetFields(3,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Layouts::Row, _actualHeight), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Layouts::Row, _height), 0,
        ::g::Fuse::Layouts::Metric_typeof(), offsetof(::g::Fuse::Layouts::Row, _heightMetric), 0);
    type->Reflection.SetFunctions(7,
        new uFunction("get_ActualHeight", NULL, (void*)Row__get_ActualHeight_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("get_Height", NULL, (void*)Row__get_Height_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Height", NULL, (void*)Row__set_Height_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_HeightMetric", NULL, (void*)Row__get_HeightMetric_fn, 0, false, ::g::Fuse::Layouts::Metric_typeof(), 0),
        new uFunction("set_HeightMetric", NULL, (void*)Row__set_HeightMetric_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Layouts::Metric_typeof()),
        new uFunction(".ctor", NULL, (void*)Row__New1_fn, 0, true, Row_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)Row__New2_fn, 0, true, Row_typeof(), 2, ::g::Uno::Float_typeof(), ::g::Fuse::Layouts::Metric_typeof()));
    return type;
}

// public Row() :563
void Row__ctor_1_fn(Row* __this)
{
    __this->ctor_1();
}

// public Row(float height, Fuse.Layouts.Metric metric) :567
void Row__ctor_2_fn(Row* __this, float* height, int* metric)
{
    __this->ctor_2(*height, *metric);
}

// public float get_ActualHeight() :605
void Row__get_ActualHeight_fn(Row* __this, float* __retval)
{
    *__retval = __this->ActualHeight();
}

// internal void set_ActualHeight(float value) :610
void Row__set_ActualHeight_fn(Row* __this, float* value)
{
    __this->ActualHeight(*value);
}

// internal Fuse.Layouts.Row CloneDef() :648
void Row__CloneDef_fn(Row* __this, Row** __retval)
{
    *__retval = __this->CloneDef();
}

// public float get_Height() :590
void Row__get_Height_fn(Row* __this, float* __retval)
{
    *__retval = __this->Height();
}

// public void set_Height(float value) :591
void Row__set_Height_fn(Row* __this, float* value)
{
    __this->Height(*value);
}

// public Fuse.Layouts.Metric get_HeightMetric() :576
void Row__get_HeightMetric_fn(Row* __this, int* __retval)
{
    *__retval = __this->HeightMetric();
}

// public void set_HeightMetric(Fuse.Layouts.Metric value) :577
void Row__set_HeightMetric_fn(Row* __this, int* value)
{
    __this->HeightMetric(*value);
}

// public Row New() :563
void Row__New1_fn(Row** __retval)
{
    *__retval = Row::New1();
}

// public Row New(float height, Fuse.Layouts.Metric metric) :567
void Row__New2_fn(float* height, int* metric, Row** __retval)
{
    *__retval = Row::New2(*height, *metric);
}

// internal static Fuse.Layouts.Row Parse(string data) :621
void Row__Parse_fn(uString* data, Row** __retval)
{
    *__retval = Row::Parse(data);
}

// internal static void Parse(string data, Uno.Collections.IList<Fuse.Layouts.Row> output) :616
void Row__Parse1_fn(uString* data, uObject* output)
{
    Row::Parse1(data, output);
}

// internal string Serialize() :627
void Row__Serialize_fn(Row* __this, uString** __retval)
{
    *__retval = __this->Serialize();
}

// internal static string Serialize(Uno.Collections.IList<Fuse.Layouts.Row> rows) :637
void Row__Serialize1_fn(uObject* rows, uString** __retval)
{
    *__retval = Row::Serialize1(rows);
}

// public Row() [instance] :563
void Row::ctor_1()
{
    _heightMetric = 1;
    _height = 1.0f;
    ctor_();
}

// public Row(float height, Fuse.Layouts.Metric metric) [instance] :567
void Row::ctor_2(float height, int metric)
{
    _heightMetric = 1;
    _height = 1.0f;
    ctor_();
    Height(height);
    HeightMetric(metric);
}

// public float get_ActualHeight() [instance] :605
float Row::ActualHeight()
{
    if (HeightMetric() == 0)
        return _height;
    else
        return _actualHeight;
}

// internal void set_ActualHeight(float value) [instance] :610
void Row::ActualHeight(float value)
{
    _actualHeight = value;
}

// internal Fuse.Layouts.Row CloneDef() [instance] :648
Row* Row::CloneDef()
{
    Row* collection2;
    collection2 = Row::New1();
    int ind3 = HeightMetric();
    uPtr(collection2)->HeightMetric(ind3);
    ;
    float ind4 = Height();
    uPtr(collection2)->Height(ind4);
    ;
    return collection2;
}

// public float get_Height() [instance] :590
float Row::Height()
{
    return _height;
}

// public void set_Height(float value) [instance] :591
void Row::Height(float value)
{
    if (_height != value)
    {
        _height = ::g::Uno::Math::Max1(0.0f, value);
        OnChanged();
    }
}

// public Fuse.Layouts.Metric get_HeightMetric() [instance] :576
int Row::HeightMetric()
{
    return _heightMetric;
}

// public void set_HeightMetric(Fuse.Layouts.Metric value) [instance] :577
void Row::HeightMetric(int value)
{
    if (_heightMetric != value)
    {
        _heightMetric = value;
        OnChanged();
    }
}

// internal string Serialize() [instance] :627
uString* Row::Serialize()
{
    switch (HeightMetric())
    {
        case 2:
            return ::STRINGS[0/*"auto"*/];
        case 1:
            return ::g::Uno::String::op_Addition(uBox(::TYPES[3/*float*/], Height()), ::STRINGS[1/*"*"*/]);
        default:
            return ::g::Uno::Float::ToString(Height(), ::TYPES[3/*float*/]);
    }
}

// public Row New() [static] :563
Row* Row::New1()
{
    Row* obj5 = (Row*)uNew(Row_typeof());
    obj5->ctor_1();
    return obj5;
}

// public Row New(float height, Fuse.Layouts.Metric metric) [static] :567
Row* Row::New2(float height, int metric)
{
    Row* obj6 = (Row*)uNew(Row_typeof());
    obj6->ctor_2(height, metric);
    return obj6;
}

// internal static Fuse.Layouts.Row Parse(string data) [static] :621
Row* Row::Parse(uString* data)
{
    ::g::Fuse::Layouts::DefinitionBase__ParseDataItem pi = ::g::Fuse::Layouts::DefinitionBase::ParseDataSingle(data);
    return Row::New2(pi.Value, pi.Metric);
}

// internal static void Parse(string data, Uno.Collections.IList<Fuse.Layouts.Row> output) [static] :616
void Row::Parse1(uString* data, uObject* output)
{
    ::g::Fuse::Layouts::DefinitionBase__ParseDataItem ret7;

    for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(::g::Fuse::Layouts::DefinitionBase::ParseData(data)), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::TYPES[0/*Fuse.Layouts.DefinitionBase.ParseDataItem*/]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::g::Uno::Collections::IEnumerator_typeof())); )
    {
        ::g::Fuse::Layouts::DefinitionBase__ParseDataItem item = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[1/*Uno.Collections.IEnumerator<Fuse.Layouts.DefinitionBase.ParseDataItem>*/]), &ret7), ret7);
        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(output), ::TYPES[32/*Uno.Collections.ICollection<Fuse.Layouts.Row>*/]), Row::New2(item.Value, item.Metric));
    }
}

// internal static string Serialize(Uno.Collections.IList<Fuse.Layouts.Row> rows) [static] :637
uString* Row::Serialize1(uObject* rows)
{
    Row* ret8;
    uString* s = ::STRINGS[2/*""*/];

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(rows), ::TYPES[32/*Uno.Collections.ICollection<Fuse.Layouts.Row>*/])); i++)
    {
        if (i > 0)
            s = ::g::Uno::String::op_Addition2(s, ::STRINGS[3/*", "*/]);

        s = ::g::Uno::String::op_Addition2(s, uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(rows), ::TYPES[38/*Uno.Collections.IList<Fuse.Layouts.Row>*/]), uCRef<int>(i), &ret8), ret8))->Serialize());
    }

    return s;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\Layouts\$.uno(1627)
// --------------------------------------------------------------------

// public sealed class StackLayout :1627
// {
::g::Fuse::Layouts::Layout_type* StackLayout_typeof()
{
    static uSStrong< ::g::Fuse::Layouts::Layout_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(StackLayout);
    options.TypeSize = sizeof(::g::Fuse::Layouts::Layout_type);
    type = (::g::Fuse::Layouts::Layout_type*)uClassType::New("Fuse.Layouts.StackLayout", options);
    type->SetBase(::g::Fuse::Layouts::Layout_typeof());
    type->fp_ctor_ = (void*)StackLayout__New1_fn;
    type->fp_ArrangePaddingBox = (void(*)(::g::Fuse::Layouts::Layout*, uObject*, ::g::Uno::Float4*, ::g::Uno::Float2*, int*))StackLayout__ArrangePaddingBox_fn;
    type->fp_GetContentSize = (void(*)(::g::Fuse::Layouts::Layout*, uObject*, ::g::Uno::Float2*, int*, ::g::Uno::Float2*))StackLayout__GetContentSize_fn;
    ::TYPES[11] = ::g::Uno::Float4_typeof();
    ::TYPES[6] = ::g::Uno::Int_typeof();
    ::TYPES[14] = ::g::Fuse::SizeFlags_typeof();
    ::TYPES[12] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[13] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[22] = ::g::Fuse::Node_typeof();
    ::TYPES[9] = ::g::Uno::Bool_typeof();
    ::TYPES[8] = ::g::Uno::Float2_typeof();
    ::TYPES[35] = ::g::Fuse::Layouts::Layout_typeof();
    ::TYPES[36] = ::g::Fuse::Elements::Element_typeof();
    type->SetFields(1,
        ::g::Fuse::Elements::Alignment_typeof(), offsetof(::g::Fuse::Layouts::StackLayout, _contentAlignment), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Layouts::StackLayout, _itemSpacing), 0,
        ::g::Fuse::Layouts::Orientation_typeof(), offsetof(::g::Fuse::Layouts::StackLayout, _orientation), 0);
    type->Reflection.SetFunctions(8,
        new uFunction("get_ContentAlignment", NULL, (void*)StackLayout__get_ContentAlignment_fn, 0, false, ::g::Fuse::Elements::Alignment_typeof(), 0),
        new uFunction("set_ContentAlignment", NULL, (void*)StackLayout__set_ContentAlignment_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Elements::Alignment_typeof()),
        new uFunction("get_ItemSpacing", NULL, (void*)StackLayout__get_ItemSpacing_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_ItemSpacing", NULL, (void*)StackLayout__set_ItemSpacing_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction(".ctor", NULL, (void*)StackLayout__New1_fn, 0, true, StackLayout_typeof(), 0),
        new uFunction("get_Orientation", NULL, (void*)StackLayout__get_Orientation_fn, 0, false, ::g::Fuse::Layouts::Orientation_typeof(), 0),
        new uFunction("set_Orientation", NULL, (void*)StackLayout__set_Orientation_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Layouts::Orientation_typeof()),
        new uFunction("ResetOrientation", NULL, (void*)StackLayout__ResetOrientation_fn, 0, false, uVoid_typeof(), 0));
    return type;
}

// public generated StackLayout() :1627
void StackLayout__ctor_1_fn(StackLayout* __this)
{
    __this->ctor_1();
}

// internal override sealed void ArrangePaddingBox(Uno.Collections.IList<Fuse.Node> elements, float4 padding, float2 availableSize, Fuse.SizeFlags flags) :1777
void StackLayout__ArrangePaddingBox_fn(StackLayout* __this, uObject* elements, ::g::Uno::Float4* padding, ::g::Uno::Float2* availableSize, int* flags)
{
    ::g::Uno::Float4 padding_ = *padding;
    ::g::Uno::Float2 availableSize_ = *availableSize;
    int flags_ = *flags;
    ::g::Fuse::Node* ret2;
    ::g::Fuse::Node* ret3;
    float d = 0.0f;
    int orientation = __this->Orientation();
    ::g::Uno::Float2 paddingOffset = ::g::Uno::Float2__New2(padding_.X, padding_.Y);
    ::g::Uno::Float2 pad = ::g::Uno::Float2__op_Addition2(::g::Uno::Float2__New2(padding_.X, padding_.Y), ::g::Uno::Float2__New2(padding_.Z, padding_.W));
    ::g::Uno::Float2 avs = ::g::Uno::Float2__op_Subtraction2(availableSize_, pad);
    int sf;
    ::g::Uno::Float2 axis;

    if (orientation == 1)
    {
        sf = 1;
        axis = ::g::Uno::Float2__New2(0.0f, 1.0f);
    }
    else
    {
        sf = 2;
        axis = ::g::Uno::Float2__New2(1.0f, 0.0f);
    }

    sf = sf | (flags_ & -4);
    float effectiveSpacing = __this->EffectiveItemSpacing();

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(elements), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/])); i++)
    {
        ::g::Fuse::Node* c = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(elements), ::TYPES[13/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret2), ret2);

        if (__this->ArrangeMarginBoxSpecial(c, padding_, availableSize_, sf))
            continue;

        ::g::Uno::Float2 cds = uPtr(c)->ArrangeMarginBox(::g::Uno::Float2__op_Addition2(::g::Uno::Float2__op_Multiply1(axis, d), paddingOffset), avs, sf);
        d = d + (::g::Uno::Vector::Dot(cds, axis) + effectiveSpacing);
    }

    int sa = __this->EffectiveContentAlignment();

    if (sa != 0)
    {
        float off;

        if (sa == 2)
            off = ::g::Uno::Vector::Dot(avs, axis) - d;
        else
            off = (::g::Uno::Vector::Dot(avs, axis) / 2.0f) - (d / 2.0f);

        for (int i1 = 0; i1 < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(elements), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/])); i1++)
        {
            ::g::Fuse::Node* e = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(elements), ::TYPES[13/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i1), &ret3), ret3);
            ::g::Uno::Float2 old = uPtr(e)->MarginBoxPosition();

            if (__this->AffectsLayout(e))
                e->AdjustMarginBoxPosition(::g::Uno::Float2__op_Addition2(old, ::g::Uno::Float2__op_Multiply1(axis, off)));
        }
    }
}

// public Fuse.Elements.Alignment get_ContentAlignment() :1669
void StackLayout__get_ContentAlignment_fn(StackLayout* __this, int* __retval)
{
    *__retval = __this->ContentAlignment();
}

// public void set_ContentAlignment(Fuse.Elements.Alignment value) :1670
void StackLayout__set_ContentAlignment_fn(StackLayout* __this, int* value)
{
    __this->ContentAlignment(*value);
}

// private Fuse.Elements.SimpleAlignment get_EffectiveContentAlignment() :1764
void StackLayout__get_EffectiveContentAlignment_fn(StackLayout* __this, int* __retval)
{
    *__retval = __this->EffectiveContentAlignment();
}

// private float get_EffectiveItemSpacing() :1720
void StackLayout__get_EffectiveItemSpacing_fn(StackLayout* __this, float* __retval)
{
    *__retval = __this->EffectiveItemSpacing();
}

// internal override sealed float2 GetContentSize(Uno.Collections.IList<Fuse.Node> elements, float2 fillSize, Fuse.SizeFlags fillSet) :1681
void StackLayout__GetContentSize_fn(StackLayout* __this, uObject* elements, ::g::Uno::Float2* fillSize, int* fillSet, ::g::Uno::Float2* __retval)
{
    int fillSet_ = *fillSet;
    ::g::Uno::Float2 fillSize_ = *fillSize;
    int orientation = __this->Orientation();

    if (orientation == 1)
        fillSet_ = fillSet_ & -3;
    else
        fillSet_ = fillSet_ & -2;

    ::g::Uno::Float2 size = __this->GetElementsSize(elements, fillSize_, fillSet_);
    bool recalc = false;

    if (orientation == 1)
    {
        if (!((fillSet_ & 1) == 1))
        {
            fillSize_.X = size.X;
            fillSet_ = fillSet_ | 1;
            recalc = true;
        }
    }
    else
    {
        if (!((fillSet_ & 2) == 2))
        {
            fillSize_.Y = size.Y;
            fillSet_ = fillSet_ | 2;
            recalc = true;
        }
    }

    if (recalc)
        size = __this->GetElementsSize(elements, fillSize_, fillSet_);

    return *__retval = size, void();
}

// private float2 GetElementsSize(Uno.Collections.IList<Fuse.Node> elements, float2 fillSize, Fuse.SizeFlags fillSet) :1727
void StackLayout__GetElementsSize_fn(StackLayout* __this, uObject* elements, ::g::Uno::Float2* fillSize, int* fillSet, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetElementsSize(elements, *fillSize, *fillSet);
}

// public float get_ItemSpacing() :1655
void StackLayout__get_ItemSpacing_fn(StackLayout* __this, float* __retval)
{
    *__retval = __this->ItemSpacing();
}

// public void set_ItemSpacing(float value) :1656
void StackLayout__set_ItemSpacing_fn(StackLayout* __this, float* value)
{
    __this->ItemSpacing(*value);
}

// public generated StackLayout New() :1627
void StackLayout__New1_fn(StackLayout** __retval)
{
    *__retval = StackLayout::New1();
}

// public Fuse.Layouts.Orientation get_Orientation() :1634
void StackLayout__get_Orientation_fn(StackLayout* __this, int* __retval)
{
    *__retval = __this->Orientation();
}

// public void set_Orientation(Fuse.Layouts.Orientation value) :1635
void StackLayout__set_Orientation_fn(StackLayout* __this, int* value)
{
    __this->Orientation(*value);
}

// public void ResetOrientation() :1645
void StackLayout__ResetOrientation_fn(StackLayout* __this)
{
    __this->ResetOrientation();
}

// public generated StackLayout() [instance] :1627
void StackLayout::ctor_1()
{
    _orientation = 1;
    _itemSpacing = 0.0f;
    ctor_();
}

// public Fuse.Elements.Alignment get_ContentAlignment() [instance] :1669
int StackLayout::ContentAlignment()
{
    return _contentAlignment;
}

// public void set_ContentAlignment(Fuse.Elements.Alignment value) [instance] :1670
void StackLayout::ContentAlignment(int value)
{
    if (_contentAlignment != value)
    {
        _contentAlignment = value;
        InvalidateLayout();
    }
}

// private Fuse.Elements.SimpleAlignment get_EffectiveContentAlignment() [instance] :1764
int StackLayout::EffectiveContentAlignment()
{
    int ca = ContentAlignment();

    if ((ca == 0) && (Container != NULL))
        ca = uPtr(Container)->Alignment();

    if (Orientation() == 1)
        return ::g::Fuse::Elements::AlignmentHelpers::GetVerticalSimpleAlign(ca);
    else
        return ::g::Fuse::Elements::AlignmentHelpers::GetHorizontalSimpleAlign(ca);
}

// private float get_EffectiveItemSpacing() [instance] :1720
float StackLayout::EffectiveItemSpacing()
{
    return SnapUp(ItemSpacing());
}

// private float2 GetElementsSize(Uno.Collections.IList<Fuse.Node> elements, float2 fillSize, Fuse.SizeFlags fillSet) [instance] :1727
::g::Uno::Float2 StackLayout::GetElementsSize(uObject* elements, ::g::Uno::Float2 fillSize, int fillSet)
{
    ::g::Fuse::Node* ret4;
    int orientation = Orientation();
    ::g::Uno::Float2 desiredSize = ::g::Uno::Float2__New1(0.0f);
    float effectiveSpacing = EffectiveItemSpacing();
    bool firstItem = true;

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(elements), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/])); i++)
    {
        ::g::Fuse::Node* c = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(elements), ::TYPES[13/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret4), ret4);

        if (!AffectsLayout(c))
            continue;

        float spacing = effectiveSpacing;

        if (firstItem)
        {
            spacing = 0.0f;
            firstItem = false;
        }

        ::g::Uno::Float2 cds = uPtr(c)->GetMarginSize(fillSize, fillSet);

        if (orientation == 0)
        {
            desiredSize.X = (desiredSize.X + (cds.X + spacing));
            desiredSize.Y = ::g::Uno::Math::Max1(desiredSize.Y, cds.Y);
        }
        else
        {
            desiredSize.X = ::g::Uno::Math::Max1(desiredSize.X, cds.X);
            desiredSize.Y = (desiredSize.Y + (cds.Y + spacing));
        }
    }

    return desiredSize;
}

// public float get_ItemSpacing() [instance] :1655
float StackLayout::ItemSpacing()
{
    return _itemSpacing;
}

// public void set_ItemSpacing(float value) [instance] :1656
void StackLayout::ItemSpacing(float value)
{
    if (_itemSpacing != value)
    {
        _itemSpacing = value;
        InvalidateLayout();
    }
}

// public Fuse.Layouts.Orientation get_Orientation() [instance] :1634
int StackLayout::Orientation()
{
    return _orientation;
}

// public void set_Orientation(Fuse.Layouts.Orientation value) [instance] :1635
void StackLayout::Orientation(int value)
{
    if (_orientation != value)
    {
        _orientation = value;
        InvalidateLayout();
    }
}

// public void ResetOrientation() [instance] :1645
void StackLayout::ResetOrientation()
{
    _orientation = 1;
    InvalidateLayout();
}

// public generated StackLayout New() [static] :1627
StackLayout* StackLayout::New1()
{
    StackLayout* obj1 = (StackLayout*)uNew(StackLayout_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\Layouts\$.uno(1850)
// --------------------------------------------------------------------

// public sealed class WrapLayout :1850
// {
::g::Fuse::Layouts::Layout_type* WrapLayout_typeof()
{
    static uSStrong< ::g::Fuse::Layouts::Layout_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 10;
    options.ObjectSize = sizeof(WrapLayout);
    options.TypeSize = sizeof(::g::Fuse::Layouts::Layout_type);
    type = (::g::Fuse::Layouts::Layout_type*)uClassType::New("Fuse.Layouts.WrapLayout", options);
    type->SetBase(::g::Fuse::Layouts::Layout_typeof());
    type->fp_ctor_ = (void*)WrapLayout__New1_fn;
    type->fp_ArrangePaddingBox = (void(*)(::g::Fuse::Layouts::Layout*, uObject*, ::g::Uno::Float4*, ::g::Uno::Float2*, int*))WrapLayout__ArrangePaddingBox_fn;
    type->fp_GetContentSize = (void(*)(::g::Fuse::Layouts::Layout*, uObject*, ::g::Uno::Float2*, int*, ::g::Uno::Float2*))WrapLayout__GetContentSize_fn;
    ::TYPES[41] = ::g::Uno::Float4_typeof()->Array();
    ::TYPES[12] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[7] = ::g::Uno::Float_typeof()->Array();
    ::TYPES[9] = ::g::Uno::Bool_typeof();
    ::TYPES[13] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[14] = ::g::Fuse::SizeFlags_typeof();
    ::TYPES[6] = ::g::Uno::Int_typeof();
    ::TYPES[8] = ::g::Uno::Float2_typeof();
    ::TYPES[11] = ::g::Uno::Float4_typeof();
    type->SetFields(1,
        ::g::Fuse::Layouts::FlowDirection_typeof(), offsetof(::g::Fuse::Layouts::WrapLayout, _flowDirection), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Layouts::WrapLayout, _hasFlowDirection), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Layouts::WrapLayout, _hasItemHeight), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Layouts::WrapLayout, _hasItemWidth), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Layouts::WrapLayout, _hasOrientation), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Layouts::WrapLayout, _itemHeight), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Layouts::WrapLayout, _itemWidth), 0,
        ::g::Fuse::Layouts::Orientation_typeof(), offsetof(::g::Fuse::Layouts::WrapLayout, _orientation), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Layouts::WrapLayout, _ID), 0);
    type->Reflection.SetFunctions(11,
        new uFunction("get_FlowDirection", NULL, (void*)WrapLayout__get_FlowDirection_fn, 0, false, ::g::Fuse::Layouts::FlowDirection_typeof(), 0),
        new uFunction("set_FlowDirection", NULL, (void*)WrapLayout__set_FlowDirection_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Layouts::FlowDirection_typeof()),
        new uFunction("get_ID", NULL, (void*)WrapLayout__get_ID_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_ID", NULL, (void*)WrapLayout__set_ID_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_ItemHeight", NULL, (void*)WrapLayout__get_ItemHeight_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_ItemHeight", NULL, (void*)WrapLayout__set_ItemHeight_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_ItemWidth", NULL, (void*)WrapLayout__get_ItemWidth_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_ItemWidth", NULL, (void*)WrapLayout__set_ItemWidth_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction(".ctor", NULL, (void*)WrapLayout__New1_fn, 0, true, WrapLayout_typeof(), 0),
        new uFunction("get_Orientation", NULL, (void*)WrapLayout__get_Orientation_fn, 0, false, ::g::Fuse::Layouts::Orientation_typeof(), 0),
        new uFunction("set_Orientation", NULL, (void*)WrapLayout__set_Orientation_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Layouts::Orientation_typeof()));
    return type;
}

// public generated WrapLayout() :1850
void WrapLayout__ctor_1_fn(WrapLayout* __this)
{
    __this->ctor_1();
}

// internal override sealed void ArrangePaddingBox(Uno.Collections.IList<Fuse.Node> elements, float4 padding, float2 availableSize, Fuse.SizeFlags flags) :1964
void WrapLayout__ArrangePaddingBox_fn(WrapLayout* __this, uObject* elements, ::g::Uno::Float4* padding, ::g::Uno::Float2* availableSize, int* flags)
{
    ::g::Uno::Float4 ind1;
    ::g::Fuse::Node* ret3;
    ::g::Fuse::Node* ret4;
    ::g::Uno::Float2 availableSize_ = *availableSize;
    int flags_ = *flags;
    ::g::Fuse::Node* ret5;
    ::g::Uno::Float4 padding_ = *padding;
    float x = 0.0f;
    float y = 0.0f;
    float largestY = 0.0f;
    float largestX = 0.0f;
    float minX = 0.0f;
    bool firstChild = true;
    int lastWrap = 0;
    bool lastWasWrap = false;
    uArray* placements = uArray::New(::TYPES[41/*float4[]*/], ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(elements), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/])));
    uArray* largest = uArray::New(::TYPES[7/*float[]*/], ::g::Uno::Collections::ICollection::Count(uInterface(elements, ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/])));

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(elements, ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/])); i++)
    {
        if (!__this->AffectsLayout((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(elements), ::TYPES[13/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret3), ret3)))
            continue;

        lastWasWrap = false;
        ::g::Fuse::Node* e = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(elements), ::TYPES[13/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret4), ret4);
        ::g::Uno::Float2 eSize = uPtr(e)->GetMarginSize(availableSize_, flags_ & -4);
        float eX = __this->_hasItemWidth ? __this->ItemWidth() : eSize.X;
        float eY = __this->_hasItemHeight ? __this->ItemHeight() : eSize.Y;

        if (__this->Orientation() == 0)
        {
            if (((x + eX) > availableSize_.X) && !firstChild)
            {
                y = y + largestY;

                for (int j = lastWrap; j < i; j++)
                    uPtr(placements)->Item< ::g::Uno::Float4>(j).W = largestY;

                lastWrap = i;
                largestY = 0.0f;
                x = 0.0f;
                lastWasWrap = true;
            }

            largestY = ::g::Uno::Math::Max1(eY, largestY);

            if (__this->FlowDirection() == 0)
                uPtr(placements)->Item< ::g::Uno::Float4>(i) = ::g::Uno::Float4__New2(x, y, eX, eY);
            else
                placements->Item< ::g::Uno::Float4>(i) = ::g::Uno::Float4__New2((availableSize_.X - x) - eX, y, eX, eY);

            x = x + eX;
        }
        else
        {
            if (((y + eY) > availableSize_.Y) && !firstChild)
            {
                x = x + largestX;

                for (int j1 = lastWrap; j1 < i; j1++)
                {
                    uPtr(placements)->Item< ::g::Uno::Float4>(j1).Z = largestX;

                    if (__this->FlowDirection() == 1)
                    {
                        uPtr(placements)->Item< ::g::Uno::Float4>(j1).X = (uPtr(placements)->Item< ::g::Uno::Float4>(j1).X - largestX);
                        minX = ::g::Uno::Math::Min1(minX, placements->Item< ::g::Uno::Float4>(j1).X);
                    }
                }

                lastWrap = i;
                largestX = 0.0f;
                y = 0.0f;
                lastWasWrap = true;
            }

            largestX = ::g::Uno::Math::Max1(eX, largestX);

            if (__this->FlowDirection() == 0)
                uPtr(placements)->Item< ::g::Uno::Float4>(i) = ::g::Uno::Float4__New2(x, y, eX, eY);
            else
                placements->Item< ::g::Uno::Float4>(i) = ::g::Uno::Float4__New2(availableSize_.X - x, y, eX, eY);

            y = y + eY;
        }

        firstChild = false;
    }

    if (((lastWrap == 0) || (lastWrap == (::g::Uno::Collections::ICollection::Count(uInterface(elements, ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/])) - 1))) || !lastWasWrap)

        for (int i1 = lastWrap; i1 < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(elements), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/])); i1++)
        {
            if (__this->Orientation() == 0)
                uPtr(placements)->Item< ::g::Uno::Float4>(i1).W = largestY;
            else
                placements->Item< ::g::Uno::Float4>(i1).Z = largestX;

            if (__this->FlowDirection() == 1)
            {
                uPtr(placements)->Item< ::g::Uno::Float4>(i1).X = (uPtr(placements)->Item< ::g::Uno::Float4>(i1).X - largestX);
                minX = ::g::Uno::Math::Min1(minX, placements->Item< ::g::Uno::Float4>(i1).X);
            }
        }

    for (int i2 = 0; i2 < ::g::Uno::Collections::ICollection::Count(uInterface(elements, ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/])); i2++)
    {
        ::g::Fuse::Node* element = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(elements), ::TYPES[13/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i2), &ret5), ret5);

        if (__this->ArrangeMarginBoxSpecial(element, padding_, availableSize_, flags_))
            continue;

        uPtr(element)->ArrangeMarginBox(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__op_Subtraction2((ind1 = uPtr(placements)->Item< ::g::Uno::Float4>(i2), ::g::Uno::Float2__New2(ind1.X, ind1.Y)), ::g::Uno::Float2__New2(uPtr(largest)->Item<float>(i2), 0.0f)), ::g::Uno::Float2__New2(minX, 0.0f)), ::g::Uno::Float2__New2(uPtr(placements)->Item< ::g::Uno::Float4>(i2).Z, uPtr(placements)->Item< ::g::Uno::Float4>(i2).W), 3 | flags_);
    }
}

// public Fuse.Layouts.FlowDirection get_FlowDirection() :1892
void WrapLayout__get_FlowDirection_fn(WrapLayout* __this, int* __retval)
{
    *__retval = __this->FlowDirection();
}

// public void set_FlowDirection(Fuse.Layouts.FlowDirection value) :1893
void WrapLayout__set_FlowDirection_fn(WrapLayout* __this, int* value)
{
    __this->FlowDirection(*value);
}

// internal override sealed float2 GetContentSize(Uno.Collections.IList<Fuse.Node> elements, float2 fillSize, Fuse.SizeFlags fillSet) :1902
void WrapLayout__GetContentSize_fn(WrapLayout* __this, uObject* elements, ::g::Uno::Float2* fillSize, int* fillSet, ::g::Uno::Float2* __retval)
{
    int fillSet_ = *fillSet;
    ::g::Uno::Float2 fillSize_ = *fillSize;
    ::g::Fuse::Node* ret6;
    ::g::Fuse::Node* ret7;
    float max = 0.0f;
    uArray* total = uArray::New(::TYPES[7/*float[]*/], 2);
    float current = 0.0f;
    int x = (__this->Orientation() == 0) ? 0 : 1;
    int y = (__this->Orientation() == 0) ? 1 : 0;
    bool hasSizeFlag = (((__this->Orientation() == 0) && ((fillSet_ & 1) == 1)) || ((__this->Orientation() == 1) && ((fillSet_ & 2) == 2))) ? true : false;
    float availableSize = (__this->Orientation() == 0) ? fillSize_.X : fillSize_.Y;
    bool isEmpty = true;

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(elements), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/])); )
    {
        if (!__this->AffectsLayout((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(elements), ::TYPES[13/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret6), ret6)))
            continue;

        ::g::Uno::Float2 eSize = uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(elements), ::TYPES[13/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret7), ret7))->GetMarginSize(fillSize_, 0);
        eSize = ::g::Uno::Float2__New2(__this->_hasItemWidth ? __this->ItemWidth() : eSize.X, __this->_hasItemHeight ? __this->ItemHeight() : eSize.Y);
        float eX = (__this->Orientation() == 0) ? eSize.X : eSize.Y;
        float eY = (__this->Orientation() == 0) ? eSize.Y : eSize.X;

        if ((isEmpty && (eX > availableSize)) && hasSizeFlag)
        {
            uPtr(total)->Item<float>(x) = availableSize;
            total->Item<float>(y) = total->Item<float>(y) + ::g::Uno::Math::Max1(max, eY);
            max = 0.0f;
            i++;
            continue;
        }

        if (((current + eX) > availableSize) && hasSizeFlag)
        {
            uPtr(total)->Item<float>(x) = ::g::Uno::Math::Max1(current, uPtr(total)->Item<float>(x));
            total->Item<float>(y) = total->Item<float>(y) + max;
            max = 0.0f;
            current = 0.0f;
            isEmpty = true;
            continue;
        }

        max = ::g::Uno::Math::Max1(eY, max);
        uPtr(total)->Item<float>(x) = ::g::Uno::Math::Max1(current, uPtr(total)->Item<float>(x));
        current = current + eX;
        isEmpty = false;
        i++;
    }

    total->Item<float>(x) = ::g::Uno::Math::Max1(current, total->Item<float>(x));
    total->Item<float>(y) = ::g::Uno::Math::Max1(max, total->Item<float>(y) + max);
    return *__retval = ::g::Uno::Float2__New2(total->Item<float>(0), total->Item<float>(1)), void();
}

// public generated string get_ID() :1900
void WrapLayout__get_ID_fn(WrapLayout* __this, uString** __retval)
{
    *__retval = __this->ID();
}

// public generated void set_ID(string value) :1900
void WrapLayout__set_ID_fn(WrapLayout* __this, uString* value)
{
    __this->ID(value);
}

// public float get_ItemHeight() :1856
void WrapLayout__get_ItemHeight_fn(WrapLayout* __this, float* __retval)
{
    *__retval = __this->ItemHeight();
}

// public void set_ItemHeight(float value) :1857
void WrapLayout__set_ItemHeight_fn(WrapLayout* __this, float* value)
{
    __this->ItemHeight(*value);
}

// public float get_ItemWidth() :1868
void WrapLayout__get_ItemWidth_fn(WrapLayout* __this, float* __retval)
{
    *__retval = __this->ItemWidth();
}

// public void set_ItemWidth(float value) :1869
void WrapLayout__set_ItemWidth_fn(WrapLayout* __this, float* value)
{
    __this->ItemWidth(*value);
}

// public generated WrapLayout New() :1850
void WrapLayout__New1_fn(WrapLayout** __retval)
{
    *__retval = WrapLayout::New1();
}

// public Fuse.Layouts.Orientation get_Orientation() :1880
void WrapLayout__get_Orientation_fn(WrapLayout* __this, int* __retval)
{
    *__retval = __this->Orientation();
}

// public void set_Orientation(Fuse.Layouts.Orientation value) :1881
void WrapLayout__set_Orientation_fn(WrapLayout* __this, int* value)
{
    __this->Orientation(*value);
}

// public generated WrapLayout() [instance] :1850
void WrapLayout::ctor_1()
{
    ctor_();
}

// public Fuse.Layouts.FlowDirection get_FlowDirection() [instance] :1892
int WrapLayout::FlowDirection()
{
    return _flowDirection;
}

// public void set_FlowDirection(Fuse.Layouts.FlowDirection value) [instance] :1893
void WrapLayout::FlowDirection(int value)
{
    _flowDirection = value;
    _hasFlowDirection = true;
}

// public generated string get_ID() [instance] :1900
uString* WrapLayout::ID()
{
    return _ID;
}

// public generated void set_ID(string value) [instance] :1900
void WrapLayout::ID(uString* value)
{
    _ID = value;
}

// public float get_ItemHeight() [instance] :1856
float WrapLayout::ItemHeight()
{
    return _itemHeight;
}

// public void set_ItemHeight(float value) [instance] :1857
void WrapLayout::ItemHeight(float value)
{
    _itemHeight = value;
    _hasItemHeight = true;
}

// public float get_ItemWidth() [instance] :1868
float WrapLayout::ItemWidth()
{
    return _itemWidth;
}

// public void set_ItemWidth(float value) [instance] :1869
void WrapLayout::ItemWidth(float value)
{
    _itemWidth = value;
    _hasItemWidth = true;
}

// public Fuse.Layouts.Orientation get_Orientation() [instance] :1880
int WrapLayout::Orientation()
{
    return _orientation;
}

// public void set_Orientation(Fuse.Layouts.Orientation value) [instance] :1881
void WrapLayout::Orientation(int value)
{
    _orientation = value;
    _hasOrientation = true;
}

// public generated WrapLayout New() [static] :1850
WrapLayout* WrapLayout::New1()
{
    WrapLayout* obj2 = (WrapLayout*)uNew(WrapLayout_typeof());
    obj2->ctor_1();
    return obj2;
}
// }

}}} // ::g::Fuse::Layouts
